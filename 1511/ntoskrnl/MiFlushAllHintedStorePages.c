/*
 * XREFs of MiFlushAllHintedStorePages @ 0x1401DCA38
 * Callers:
 *     MmStoreFlushAllHintedPages @ 0x14062CDC0 (MmStoreFlushAllHintedPages.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiWakeModifiedPageWriter @ 0x140118C84 (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x140118CD8 (MiCanFlushMakeProgress.c)
 */

__int64 __fastcall MiFlushAllHintedStorePages(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v4; // ebx
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 i; // rax
  __int64 v10; // r8

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( !dword_140300178 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v6 = KeSetActualBasePriorityThread((__int64)CurrentThread, 18LL, a3);
  v7 = MEMORY[0xFFFFF78000000008];
  _InterlockedExchangeAdd(&dword_140300170, 2u);
  v8 = (unsigned int)dword_140300174;
  for ( i = 5LL * (unsigned int)dword_140300174; *(_QWORD *)&MiSystemPartition[2 * i + 560]; i = 5 * v8 )
  {
    if ( !(unsigned int)MiCanFlushMakeProgress((__int64)MiSystemPartition, 1) )
      goto LABEL_9;
    MiWakeModifiedPageWriter((__int64)MiSystemPartition, -1LL);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v7) > 0x2FAF080 )
      goto LABEL_9;
  }
  v4 = 1;
LABEL_9:
  _InterlockedOr(&dword_140300170, 1u);
  _InterlockedExchangeAdd(&dword_140300170, 0xFFFFFFFE);
  KeSetEvent(&stru_140300060, 0, 0);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v6, v10);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v4;
}
