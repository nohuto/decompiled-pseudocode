/*
 * XREFs of NdisScheduleWorkItem @ 0x1C004B950
 * Callers:
 *     <none>
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C001455C (ndisScheduleWorkItemInternal.c)
 *     ndisRecordEvent @ 0x1C00176EC (ndisRecordEvent.c)
 */

NDIS_STATUS __stdcall NdisScheduleWorkItem(PNDIS_WORK_ITEM WorkItem)
{
  ndisRecordEvent(ndisWorkItemLog, 0, WorkItem);
  ndisScheduleWorkItemInternal((__int64)WorkItem);
  return 0;
}
