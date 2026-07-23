/*
 * XREFs of EtwEventWriteFull @ 0x18000F610
 * Callers:
 *     EvtIntReportEventWorker @ 0x18000E64C (EvtIntReportEventWorker.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18000F734 (EtwpEventWriteFull.c)
 */

ULONG __cdecl EtwEventWriteFull(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        USHORT EventProperty,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return EtwpEventWriteFull(
           RegHandle,
           (_DWORD)EventDescriptor,
           0,
           0,
           EventProperty,
           (__int64)ActivityId,
           (__int64)RelatedActivityId,
           UserDataCount,
           (__int64)UserData);
}
