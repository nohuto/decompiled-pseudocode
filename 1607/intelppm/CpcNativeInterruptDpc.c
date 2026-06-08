/*
 * XREFs of CpcNativeInterruptDpc @ 0x1C0004850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpcNativeInterruptDpc(
        struct _KDPC *Dpc,
        PDEVICE_OBJECT *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _IO_WORKITEM *WorkItem; // rax

  WorkItem = IoAllocateWorkItem(*DeferredContext);
  if ( WorkItem )
    IoQueueWorkItem(WorkItem, AcpiCppcGuaranteedNotifyWorker, CriticalWorkQueue, WorkItem);
}
