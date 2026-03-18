/*
 * XREFs of MiFlushAllPages @ 0x14014D6A0
 * Callers:
 *     MmFlushAllPages @ 0x14014D698 (MmFlushAllPages.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     CcNotifyWriteBehind @ 0x1401284AC (CcNotifyWriteBehind.c)
 *     MiWakeModifiedPageWriter @ 0x14014D788 (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x14014D7D4 (MiCanFlushMakeProgress.c)
 */

__int64 MiFlushAllPages()
{
  struct _KTHREAD *CurrentThread; // rbx
  int v1; // edi
  __int16 v2; // ax

  CurrentThread = KeGetCurrentThread();
  v1 = 255;
  --CurrentThread->KernelApcDisable;
  _InterlockedIncrement(&dword_140353FB8);
  _InterlockedIncrement(&dword_140353FBC);
  do
  {
    if ( !(unsigned int)MiCanFlushMakeProgress(MiSystemPartition, 0LL) )
      break;
    KeSetEvent(&stru_140353FC0, 0, 0);
    MiWakeModifiedPageWriter(MiSystemPartition, -1LL);
    CcNotifyWriteBehind(2);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    --v1;
    if ( (unsigned __int64)qword_140355300 <= 0x32 )
      break;
  }
  while ( v1 );
  _InterlockedAdd(&dword_140353FB8, 0xFFFFFFFF);
  _InterlockedAdd(&dword_140353FBC, 0xFFFFFFFF);
  v2 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v2;
  if ( !v2
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 1LL;
}
