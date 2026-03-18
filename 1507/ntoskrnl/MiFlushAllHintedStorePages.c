/*
 * XREFs of MiFlushAllHintedStorePages @ 0x14022179C
 * Callers:
 *     MmStoreFlushAllHintedPages @ 0x1406AA874 (MmStoreFlushAllHintedPages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiWakeModifiedPageWriter @ 0x14014D788 (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x14014D7D4 (MiCanFlushMakeProgress.c)
 */

__int64 MiFlushAllHintedStorePages()
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v2; // ebp
  __int64 v3; // r14
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int16 v6; // cx

  CurrentThread = KeGetCurrentThread();
  if ( !dword_140354118 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v2 = KeSetActualBasePriorityThread((__int64)CurrentThread, 0x12u);
  v3 = MEMORY[0xFFFFF78000000008];
  _InterlockedExchangeAdd(&dword_140354110, 2u);
  v4 = 0;
  v5 = 5LL * (unsigned int)dword_140354114;
  while ( *(_QWORD *)&MiSystemPartition[4 * v5 + 1056] )
  {
    if ( (unsigned int)MiCanFlushMakeProgress((__int64)MiSystemPartition, 1) )
    {
      MiWakeModifiedPageWriter((__int64)MiSystemPartition, -1LL);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v3) <= 0x2FAF080 )
        continue;
    }
    goto LABEL_8;
  }
  v4 = 1;
LABEL_8:
  _InterlockedOr(&dword_140354110, 1u);
  _InterlockedExchangeAdd(&dword_140354110, 0xFFFFFFFE);
  KeSetEvent(&stru_140354018, 0, 0);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v2);
  v6 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v6;
  if ( !v6 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v4;
}
