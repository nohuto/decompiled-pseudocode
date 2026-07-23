/*
 * XREFs of EtwEventWriteTransfer @ 0x18005AF50
 * Callers:
 *     _TlgWrite @ 0x1800D1D90 (_TlgWrite.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18005AF94 (EtwpEventWriteFull.c)
 */

ULONG __cdecl EtwEventWriteTransfer(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
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
           0,
           (__int64)ActivityId,
           (__int64)RelatedActivityId,
           UserDataCount,
           (__int64)UserData);
}
