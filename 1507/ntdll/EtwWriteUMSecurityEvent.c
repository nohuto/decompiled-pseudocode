/*
 * XREFs of EtwWriteUMSecurityEvent @ 0x18006E250
 * Callers:
 *     EvtIntReportEventWorker @ 0x18000E64C (EvtIntReportEventWorker.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

ULONG __cdecl EtwWriteUMSecurityEvent(
        PCEVENT_DESCRIPTOR EventDescriptor,
        USHORT EventProperty,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG v4; // ebx
  EVENT_DESCRIPTOR v5; // xmm0
  _GUID ActivityId; // xmm0
  NTSTATUS v7; // eax
  _BYTE Fields[4]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v10; // [rsp+24h] [rbp-84h]
  USHORT v11; // [rsp+26h] [rbp-82h]
  EVENT_DESCRIPTOR v12; // [rsp+48h] [rbp-60h]
  _GUID v13; // [rsp+60h] [rbp-48h]
  char v14; // [rsp+70h] [rbp-38h]
  ULONG v15; // [rsp+74h] [rbp-34h]
  PEVENT_DATA_DESCRIPTOR v16; // [rsp+78h] [rbp-30h]

  v4 = 0;
  if ( !EventDescriptor )
    return 87;
  v5 = *EventDescriptor;
  v11 = EventProperty;
  v15 = UserDataCount;
  v16 = UserData;
  v12 = v5;
  v10 = 0;
  ActivityId = NtCurrentTeb()->ActivityId;
  v14 = 0;
  v13 = ActivityId;
  v7 = NtTraceEvent(0LL, 0x500u, 0x78u, Fields);
  if ( v7 )
    return RtlNtStatusToDosError(v7);
  return v4;
}
