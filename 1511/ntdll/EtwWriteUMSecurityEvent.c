/*
 * XREFs of EtwWriteUMSecurityEvent @ 0x18007AFE0
 * Callers:
 *     EvtIntReportEventWorker @ 0x18004819C (EvtIntReportEventWorker.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
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
  __int16 v15; // [rsp+72h] [rbp-36h]
  ULONG v16; // [rsp+74h] [rbp-34h]
  PEVENT_DATA_DESCRIPTOR v17; // [rsp+78h] [rbp-30h]
  int v18; // [rsp+90h] [rbp-18h]

  v4 = 0;
  if ( !EventDescriptor )
    return 87;
  v5 = *EventDescriptor;
  v11 = EventProperty;
  v10 = 0;
  v12 = v5;
  v16 = UserDataCount;
  v17 = UserData;
  ActivityId = NtCurrentTeb()->ActivityId;
  v14 = 0;
  v15 = 0;
  v13 = ActivityId;
  v18 = 0;
  v7 = NtTraceEvent(0LL, 0x500u, 0x78u, Fields);
  if ( v7 )
    return RtlNtStatusToDosError(v7);
  return v4;
}
