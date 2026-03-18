/*
 * XREFs of LinkNodeAddLinkNode @ 0x1C002311C
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000B3A0 (ACPIBuildProcessDevicePhaseSta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodeAddLinkNode(_QWORD *Context)
{
  struct _IO_WORKITEM *WorkItem; // rax

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(RootDeviceExtension + 712));
  Context[30] = WorkItem;
  if ( !WorkItem )
    return 3221225626LL;
  IoQueueWorkItem(WorkItem, LinkNodepAddLinkNodeWorker, DelayedWorkQueue, Context);
  return 0LL;
}
