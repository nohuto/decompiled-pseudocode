/*
 * XREFs of LinkNodeAddLinkNode @ 0x1C002A15C
 * Callers:
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000EE50 (ACPIBuildProcessDevicePhaseSta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodeAddLinkNode(_QWORD *Context)
{
  struct _IO_WORKITEM *WorkItem; // rax

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(RootDeviceExtension + 720));
  Context[31] = WorkItem;
  if ( !WorkItem )
    return 3221225626LL;
  IoQueueWorkItem(WorkItem, LinkNodepAddLinkNodeWorker, DelayedWorkQueue, Context);
  return 0LL;
}
