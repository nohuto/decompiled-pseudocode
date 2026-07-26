/*
 * XREFs of ndisTraceDelayStopRoutine @ 0x1C00205C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisTraceDelayStopRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _IO_WORKITEM *WorkItem; // rax

  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)ndisDriverObject);
  if ( WorkItem )
  {
    IoQueueWorkItemEx(WorkItem, ndisTraceRundownStopTraceWorkItem, DelayedWorkQueue, 0LL);
  }
  else if ( (unsigned __int8)byte_1C0085322 >= 2u )
  {
    WPP_SF_(30LL, &WPP_98be5e8eac0fef6790683cac5c76438b_Traceguids);
  }
}
