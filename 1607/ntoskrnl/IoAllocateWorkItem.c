/*
 * XREFs of IoAllocateWorkItem @ 0x14009E0A4
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

PIO_WORKITEM __stdcall IoAllocateWorkItem(PDEVICE_OBJECT DeviceObject)
{
  PIO_WORKITEM result; // rax

  if ( ViVerifierDriverAddedThunkListHead )
    result = (PIO_WORKITEM)ExAllocatePoolWithTagPriority(
                             NonPagedPoolNx,
                             0x58uLL,
                             0x20206F49u,
                             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    result = (PIO_WORKITEM)ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x20206F49u);
  if ( result )
  {
    result->WorkOnBehalfThread = 0LL;
    result->IoObject = DeviceObject;
    result->Type = 1;
    result->WorkItem.List.Flink = 0LL;
    result->WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopProcessWorkItem;
    result->WorkItem.Parameter = result;
  }
  return result;
}
