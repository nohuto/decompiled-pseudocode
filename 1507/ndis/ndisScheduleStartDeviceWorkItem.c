/*
 * XREFs of ndisScheduleStartDeviceWorkItem @ 0x1C009FEAC
 * Callers:
 *     ndisPnPIrpStartDevice @ 0x1C009FF2C (ndisPnPIrpStartDevice.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 */

__int64 __fastcall ndisScheduleStartDeviceWorkItem(_LIST_ENTRY *a1, _LIST_ENTRY *a2)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v5; // rbx

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x2020444Eu);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x30uLL);
  v5->List.Flink = 0LL;
  v5->WorkerRoutine = (void (__fastcall *)(void *))ndisStartDeviceWorkItem;
  v5->Parameter = v5;
  v5[1].List.Flink = a1;
  v5[1].List.Blink = a2;
  ExQueueWorkItem(v5, CriticalWorkQueue);
  return 0LL;
}
