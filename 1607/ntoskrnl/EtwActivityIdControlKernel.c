/*
 * XREFs of EtwActivityIdControlKernel @ 0x140086AF0
 * Callers:
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     PnpDeviceActionWorker @ 0x1400865A0 (PnpDeviceActionWorker.c)
 *     IopProcessWorkItem @ 0x140086970 (IopProcessWorkItem.c)
 *     IopQueueWorkItemProlog @ 0x1400CF2A8 (IopQueueWorkItemProlog.c)
 *     ExpWorkerThread @ 0x1400E55A0 (ExpWorkerThread.c)
 *     IoCallDriverWithTracing @ 0x1400E9A6C (IoCallDriverWithTracing.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     PnpInsertEventInQueue @ 0x14048AC64 (PnpInsertEventInQueue.c)
 *     PnpDeviceEventWorker @ 0x14048B32C (PnpDeviceEventWorker.c)
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
