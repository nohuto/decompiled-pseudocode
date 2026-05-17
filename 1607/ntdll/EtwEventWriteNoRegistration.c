/*
 * XREFs of EtwEventWriteNoRegistration @ 0x180008A70
 * Callers:
 *     SignalStartWerSvc @ 0x1800089BC (SignalStartWerSvc.c)
 *     LdrpSearchPath @ 0x18000EBF0 (LdrpSearchPath.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180081EC4 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D0F94 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800D16A8 (LdrpLogFatalLdrEtwEvent.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 */

__int64 __fastcall EtwEventWriteNoRegistration(__int64 a1, __int128 *a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int128 v5; // xmm0
  _GUID ActivityId; // xmm0
  NTSTATUS v7; // eax
  _BYTE v9[4]; // [rsp+20h] [rbp-88h] BYREF
  int v10; // [rsp+24h] [rbp-84h]
  __int128 v11; // [rsp+48h] [rbp-60h]
  _GUID v12; // [rsp+60h] [rbp-48h]
  char v13; // [rsp+70h] [rbp-38h]
  __int16 v14; // [rsp+72h] [rbp-36h]
  int v15; // [rsp+74h] [rbp-34h]
  __int64 v16; // [rsp+78h] [rbp-30h]
  int v17; // [rsp+90h] [rbp-18h]

  v4 = 0;
  if ( a2 && a1 )
  {
    v5 = *a2;
    v10 = 0;
    v11 = v5;
    v15 = a3;
    v16 = a4;
    ActivityId = NtCurrentTeb()->ActivityId;
    v13 = 0;
    v14 = 0;
    v12 = ActivityId;
    v17 = 0;
    v7 = NtTraceEvent(a1, 1792LL, 120LL, v9);
    if ( v7 )
      return RtlNtStatusToDosError(v7);
  }
  else
  {
    return 87;
  }
  return v4;
}
