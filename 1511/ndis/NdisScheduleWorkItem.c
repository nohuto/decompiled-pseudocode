/*
 * XREFs of NdisScheduleWorkItem @ 0x1C0026470
 * Callers:
 *     <none>
 * Callees:
 *     ndisRecordEvent @ 0x1C0019544 (ndisRecordEvent.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001FFD8 (ndisScheduleWorkItemInternal.c)
 */

NDIS_STATUS __stdcall NdisScheduleWorkItem(PNDIS_WORK_ITEM WorkItem)
{
  ndisRecordEvent(ndisWorkItemLog, 0, WorkItem);
  ndisScheduleWorkItemInternal((__int64)WorkItem);
  return 0;
}
