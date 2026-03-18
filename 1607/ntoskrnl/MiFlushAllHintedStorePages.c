/*
 * XREFs of MiFlushAllHintedStorePages @ 0x1401EE714
 * Callers:
 *     MmStoreFlushAllHintedPages @ 0x140661810 (MmStoreFlushAllHintedPages.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400D2840 (KeSetActualBasePriorityThread.c)
 *     MiWakeModifiedPageWriter @ 0x140113248 (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x14011329C (MiCanFlushMakeProgress.c)
 */

__int64 MiFlushAllHintedStorePages()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v1; // ebx
  unsigned int v3; // ebp
  __int64 v4; // r14
  __int64 v5; // rsi

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  if ( !dword_140323968 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeSetActualBasePriorityThread((__int64)CurrentThread, 0x12u);
  v4 = MEMORY[0xFFFFF78000000008];
  _InterlockedExchangeAdd(&dword_140323960, 2u);
  v5 = 5LL * (unsigned int)dword_140323964;
  while ( *(_QWORD *)&MiSystemPartition[2 * v5 + 592] )
  {
    if ( (unsigned int)MiCanFlushMakeProgress((__int64)MiSystemPartition, 1) )
    {
      MiWakeModifiedPageWriter((__int64)MiSystemPartition, -1LL);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v4) <= 0x2FAF080 )
        continue;
    }
    goto LABEL_8;
  }
  v1 = 1;
LABEL_8:
  _InterlockedOr(&dword_140323960, 1u);
  _InterlockedExchangeAdd(&dword_140323960, 0xFFFFFFFE);
  KeSetEvent(&stru_140323858, 0, 0);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v3);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v1;
}
