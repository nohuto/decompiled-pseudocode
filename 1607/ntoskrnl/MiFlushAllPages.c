/*
 * XREFs of MiFlushAllPages @ 0x140113188
 * Callers:
 *     MmFlushAllPages @ 0x140113180 (MmFlushAllPages.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     CcNotifyWriteBehind @ 0x1400AB9E0 (CcNotifyWriteBehind.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     MiWakeModifiedPageWriter @ 0x140113248 (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x14011329C (MiCanFlushMakeProgress.c)
 */

__int64 MiFlushAllPages()
{
  struct _KTHREAD *CurrentThread; // rbx
  int v1; // edi

  CurrentThread = KeGetCurrentThread();
  v1 = 255;
  --CurrentThread->KernelApcDisable;
  _InterlockedIncrement(&dword_1403237F8);
  _InterlockedIncrement(&dword_1403237FC);
  do
  {
    if ( !(unsigned int)MiCanFlushMakeProgress(MiSystemPartition, 0LL) )
      break;
    KeSetEvent(&stru_140323800, 0, 0);
    MiWakeModifiedPageWriter(MiSystemPartition, -1LL);
    CcNotifyWriteBehind(2);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    --v1;
    if ( (unsigned __int64)qword_140325180 <= 0x32 )
      break;
  }
  while ( v1 );
  _InterlockedAdd(&dword_1403237F8, 0xFFFFFFFF);
  _InterlockedAdd(&dword_1403237FC, 0xFFFFFFFF);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return 1LL;
}
