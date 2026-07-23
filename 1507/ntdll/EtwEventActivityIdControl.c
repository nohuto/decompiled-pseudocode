/*
 * XREFs of EtwEventActivityIdControl @ 0x180063E10
 * Callers:
 *     EtwEventWriteStartScenario @ 0x1800817B0 (EtwEventWriteStartScenario.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x180095360 (NtTraceControl.c)
 */

ULONG __cdecl EtwEventActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  NTSTATUS v2; // r8d
  ULONG v3; // ecx
  ULONG v4; // ecx
  ULONG v5; // ebx
  ULONG v7; // ecx
  _GUID *p_ActivityId; // r9
  ULONG v9; // ecx
  _GUID v10; // xmm1
  LONG v11; // eax
  ULONG ReturnLength; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( ActivityId )
  {
    v3 = ControlCode - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( !v4 )
      {
        NtCurrentTeb()->ActivityId = *ActivityId;
        return 0;
      }
      v7 = v4 - 1;
      if ( v7 )
      {
        v9 = v7 - 1;
        if ( !v9 )
        {
          v10 = NtCurrentTeb()->ActivityId;
          NtCurrentTeb()->ActivityId = *ActivityId;
          *ActivityId = v10;
          return 0;
        }
        if ( v9 != 1 )
        {
          v2 = -1073741811;
          goto LABEL_19;
        }
        *ActivityId = NtCurrentTeb()->ActivityId;
        p_ActivityId = &NtCurrentTeb()->ActivityId;
      }
      else
      {
        p_ActivityId = ActivityId;
      }
      v2 = NtTraceControl(EtwActivityIdCreate, 0LL, 0, p_ActivityId, 0x10u, &ReturnLength);
    }
    else
    {
      *ActivityId = NtCurrentTeb()->ActivityId;
    }
    if ( !v2 )
      return 0;
LABEL_19:
    v11 = RtlNtStatusToDosError(v2);
    v5 = v11;
    if ( v11 )
      RtlSetLastWin32Error(v11);
    return v5;
  }
  return 87;
}
