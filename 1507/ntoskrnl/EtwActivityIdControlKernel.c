/*
 * XREFs of EtwActivityIdControlKernel @ 0x140026D54
 * Callers:
 *     IopQueueWorkItemProlog @ 0x14000DA70 (IopQueueWorkItemProlog.c)
 *     PnpDeviceActionWorker @ 0x14002604C (PnpDeviceActionWorker.c)
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     ExpWorkerThread @ 0x1400316D0 (ExpWorkerThread.c)
 *     IopProcessWorkItem @ 0x140032200 (IopProcessWorkItem.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     PnpDeviceEventWorker @ 0x14045FC1C (PnpDeviceEventWorker.c)
 *     PnpInsertEventInQueue @ 0x14046093C (PnpInsertEventInQueue.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwActivityIdControlKernel(int a1, PVOID *a2)
{
  unsigned int v2; // r8d
  int v3; // ecx

  v2 = 0;
  v3 = a1 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      KeGetCurrentThread()[1].WaitBlock[0].SparePtr = *a2;
    else
      return (unsigned int)-1073741811;
  }
  else
  {
    *a2 = KeGetCurrentThread()[1].WaitBlock[0].SparePtr;
  }
  return v2;
}
