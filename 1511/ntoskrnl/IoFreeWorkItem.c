/*
 * XREFs of IoFreeWorkItem @ 0x1400E9B0C
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __stdcall IoFreeWorkItem(PIO_WORKITEM IoWorkItem)
{
  if ( IoWorkItem->WorkItem.List.Flink )
    KeBugCheckEx(0xE4u, 2uLL, (ULONG_PTR)IoWorkItem, (ULONG_PTR)&IoWorkItem->Routine, 0LL);
  ExFreePoolWithTag(IoWorkItem, 0);
}
