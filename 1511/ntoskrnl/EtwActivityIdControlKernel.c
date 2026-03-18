/*
 * XREFs of EtwActivityIdControlKernel @ 0x1400FF658
 * Callers:
 *     ExpWorkerThread @ 0x14006F990 (ExpWorkerThread.c)
 *     IoCallDriverWithTracing @ 0x140077C20 (IoCallDriverWithTracing.c)
 *     IopProcessWorkItem @ 0x14009FE90 (IopProcessWorkItem.c)
 *     PnpDeviceActionWorker @ 0x1400D11E4 (PnpDeviceActionWorker.c)
 *     PnpRequestDeviceAction @ 0x1400D1618 (PnpRequestDeviceAction.c)
 *     IopQueueWorkItemProlog @ 0x140101A80 (IopQueueWorkItemProlog.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     PnpInsertEventInQueue @ 0x1404DEFD8 (PnpInsertEventInQueue.c)
 *     PnpDeviceEventWorker @ 0x1404E0578 (PnpDeviceEventWorker.c)
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
