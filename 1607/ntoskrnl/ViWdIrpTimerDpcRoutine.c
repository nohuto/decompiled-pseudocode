/*
 * XREFs of ViWdIrpTimerDpcRoutine @ 0x1407170EC
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     ViWdIrpTimedOut @ 0x140717060 (ViWdIrpTimedOut.c)
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

  if ( ViWdIrpListLength )
  {
    v4 = ViWdTickCount + 1 < (unsigned int)ViWdTickCount;
    ++ViWdTickCount;
    v5 = v4;
    KxAcquireSpinLock(&VfWdIrpListLock);
    if ( v5 )
    {
      for ( i = VfWdIrpListHead; (__int64 *)i != &VfWdIrpListHead; i = *(_QWORD *)i )
        *(_BYTE *)(i + 28) = 0;
      qword_14072C1A0 = (__int64)&VfWdIrpListHead;
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
    KxReleaseSpinLock(&VfWdIrpListLock);
  }
  if ( !ViWdCancelling )
    KiSetTimerEx((__int64)&ViWdIrpTimer, -10000000LL, 0, 0, (__int64)&ViWdIrpTimerDpc);
}
