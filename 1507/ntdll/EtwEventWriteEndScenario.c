/*
 * XREFs of EtwEventWriteEndScenario @ 0x18000CDE0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x18000CD00 (EtwEventEnabled.c)
 *     EtwpGetKmRegHandle @ 0x18000CD88 (EtwpGetKmRegHandle.c)
 *     EtwEventWrite @ 0x18000F6B0 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceControl @ 0x180095360 (NtTraceControl.c)
 *     memset @ 0x180098540 (memset.c)
 */

ULONG __cdecl EtwEventWriteEndScenario(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG result; // eax
  _GUID ActivityId; // xmm1
  ULONG ReturnLength; // [rsp+30h] [rbp-58h] BYREF
  _QWORD InputBuffer[6]; // [rsp+38h] [rbp-50h] BYREF

  ReturnLength = 0;
  if ( !EventDescriptor )
    return 87;
  if ( !EtwEventEnabled(RegHandle, EventDescriptor) )
    return 6;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  result = EtwpGetKmRegHandle(RegHandle, InputBuffer);
  if ( !result )
  {
    *(EVENT_DESCRIPTOR *)&InputBuffer[1] = *EventDescriptor;
    ActivityId = NtCurrentTeb()->ActivityId;
    LODWORD(InputBuffer[5]) = 11;
    *(_GUID *)&InputBuffer[3] = ActivityId;
    NtTraceControl(EtwWdiScenarioCode, InputBuffer, 0x30u, 0LL, 0, &ReturnLength);
    return EtwEventWrite(RegHandle, EventDescriptor, UserDataCount, UserData);
  }
  return result;
}
