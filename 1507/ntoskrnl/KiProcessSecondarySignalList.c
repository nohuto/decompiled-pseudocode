/*
 * XREFs of KiProcessSecondarySignalList @ 0x140203A10
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KiProcessDisconnectList @ 0x140207E40 (KiProcessDisconnectList.c)
 */

void __fastcall KiProcessSecondarySignalList(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 **v5; // rcx
  __int64 v6; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 **v8; // [rsp+28h] [rbp-10h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v8 = (__int64 **)&v7;
  v7 = (__int64)&v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KiSecondarySignalListLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiSecondarySignalListLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiSecondarySignalListLock);
  }
  if ( (__int64 *)KiSecondarySignalList != &KiSecondarySignalList )
  {
    v5 = v8;
    if ( *(__int64 **)(v7 + 8) != &v7 || *v8 != &v7 )
      __fastfail(3u);
    if ( *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList
      || *(__int64 **)qword_140332C28 != &KiSecondarySignalList )
    {
      __fastfail(3u);
    }
    *v8 = &KiSecondarySignalList;
    v8 = (__int64 **)qword_140332C28;
    *(_QWORD *)qword_140332C28 = &v7;
    v6 = KiSecondarySignalList;
    qword_140332C28 = (__int64)v5;
    if ( *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList || *v5 != &KiSecondarySignalList )
      __fastfail(3u);
    *v5 = (__int64 *)KiSecondarySignalList;
    *(_QWORD *)(v6 + 8) = v5;
    qword_140332C28 = (__int64)&KiSecondarySignalList;
    KiSecondarySignalList = (__int64)&KiSecondarySignalList;
  }
  KiSecondarySignalDpcRunning = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KiSecondarySignalListLock, retaddr);
  else
    _InterlockedAnd64(&KiSecondarySignalListLock, 0LL);
  __writecr8(CurrentIrql);
  KiProcessDisconnectList(&v7);
}
