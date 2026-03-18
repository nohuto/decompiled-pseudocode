/*
 * XREFs of EtwActivityIdControlKernel @ 0x140007EA8
 * Callers:
 *     PnpRequestDeviceAction @ 0x14000794C (PnpRequestDeviceAction.c)
 *     IopProcessWorkItem @ 0x1400749F0 (IopProcessWorkItem.c)
 *     PnpDeviceActionWorker @ 0x1400AFA3C (PnpDeviceActionWorker.c)
 *     IopQueueWorkItemProlog @ 0x1400D1408 (IopQueueWorkItemProlog.c)
 *     ExpWorkerThread @ 0x1400E7700 (ExpWorkerThread.c)
 *     IoCallDriverWithTracing @ 0x1400EBBFC (IoCallDriverWithTracing.c)
 *     PnpDeviceEventWorker @ 0x1403EF9F0 (PnpDeviceEventWorker.c)
 *     PnpInsertEventInQueue @ 0x1403F0BD4 (PnpInsertEventInQueue.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x1404457B0 (IopSynchronousServiceTail.c)
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
