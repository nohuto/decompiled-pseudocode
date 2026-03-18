/*
 * XREFs of MiFlushAllPages @ 0x140118BC4
 * Callers:
 *     MmFlushAllPages @ 0x140118BBC (MmFlushAllPages.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     CcNotifyWriteBehind @ 0x1400EB5C0 (CcNotifyWriteBehind.c)
 *     MiWakeModifiedPageWriter @ 0x140118C84 (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x140118CD8 (MiCanFlushMakeProgress.c)
 */

__int64 MiFlushAllPages()
{
  struct _KTHREAD *CurrentThread; // rbx
  int v1; // edi

  CurrentThread = KeGetCurrentThread();
  v1 = 255;
  --CurrentThread->KernelApcDisable;
  _InterlockedIncrement(&dword_140300000);
  _InterlockedIncrement(&dword_140300004);
  do
  {
    if ( !(unsigned int)MiCanFlushMakeProgress(MiSystemPartition, 0LL) )
      break;
    KeSetEvent(&stru_140300008, 0, 0);
    MiWakeModifiedPageWriter(MiSystemPartition, -1LL);
    CcNotifyWriteBehind(2);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    --v1;
    if ( (unsigned __int64)qword_1403014C0 <= 0x32 )
      break;
  }
  while ( v1 );
  _InterlockedAdd(&dword_140300000, 0xFFFFFFFF);
  _InterlockedAdd(&dword_140300004, 0xFFFFFFFF);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return 1LL;
}
