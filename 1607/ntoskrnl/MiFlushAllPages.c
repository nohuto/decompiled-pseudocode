/*
 * XREFs of MiFlushAllPages @ 0x1401136F8
 * Callers:
 *     MmFlushAllPages @ 0x1401136F0 (MmFlushAllPages.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     CcNotifyWriteBehind @ 0x1400A9F48 (CcNotifyWriteBehind.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MiWakeModifiedPageWriter @ 0x1401137B8 (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x14011380C (MiCanFlushMakeProgress.c)
 */

__int64 MiFlushAllPages()
{
  struct _KTHREAD *CurrentThread; // rbx
  int v1; // edi

  CurrentThread = KeGetCurrentThread();
  v1 = 255;
  --CurrentThread->KernelApcDisable;
  _InterlockedIncrement(&dword_140323838);
  _InterlockedIncrement(&dword_14032383C);
  do
  {
    if ( !(unsigned int)MiCanFlushMakeProgress(MiSystemPartition, 0LL) )
      break;
    KeSetEvent(&stru_140323840, 0, 0);
    MiWakeModifiedPageWriter(MiSystemPartition, -1LL);
    CcNotifyWriteBehind(2);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    --v1;
    if ( (unsigned __int64)qword_1403251C0 <= 0x32 )
      break;
  }
  while ( v1 );
  _InterlockedAdd(&dword_140323838, 0xFFFFFFFF);
  _InterlockedAdd(&dword_14032383C, 0xFFFFFFFF);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return 1LL;
}
