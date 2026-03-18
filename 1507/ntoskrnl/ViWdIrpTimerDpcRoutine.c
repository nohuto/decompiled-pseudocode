/*
 * XREFs of ViWdIrpTimerDpcRoutine @ 0x14074B288
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ViWdIrpTimedOut @ 0x14074B1FC (ViWdIrpTimedOut.c)
 */

void __fastcall ViWdIrpTimerDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  bool v4; // cf
  BOOL v5; // ebx
  __int64 i; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( ViWdIrpListLength )
  {
    v4 = ViWdTickCount + 1 < (unsigned int)ViWdTickCount;
    ++ViWdTickCount;
    v5 = v4;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&VfWdIrpListLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&VfWdIrpListLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&VfWdIrpListLock);
    }
    if ( v5 )
    {
      for ( i = VfWdIrpListHead; (__int64 *)i != &VfWdIrpListHead; i = *(_QWORD *)i )
        *(_BYTE *)(i + 28) = 0;
      qword_1407631A0 = (__int64)&VfWdIrpListHead;
      VfWdIrpListHead = (__int64)&VfWdIrpListHead;
      ViWdIrpListLength = 0;
    }
    else if ( ViWdIrpListLength )
    {
      v7 = VfWdIrpListHead;
      if ( *(_DWORD *)(VfWdIrpListHead + 24) < (unsigned int)ViWdTickCount )
      {
        ViWdIrpTimedOut(VfWdIrpListHead);
        v8 = *(_QWORD *)v7;
        v9 = *(_QWORD **)(v7 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || *v9 != v7 )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        *(_BYTE *)(v7 + 28) = 0;
        --ViWdIrpListLength;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&VfWdIrpListLock, retaddr);
    else
      _InterlockedAnd64(&VfWdIrpListLock, 0LL);
  }
  if ( !ViWdCancelling )
    KiSetTimerEx((__int64)&ViWdIrpTimer, -10000000LL, 0, 0, (__int64)&ViWdIrpTimerDpc);
}
