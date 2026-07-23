/*
 * XREFs of EtwEventWriteStartScenario @ 0x18008E010
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventWrite @ 0x18005AF10 (EtwEventWrite.c)
 *     EtwpGetKmRegHandle @ 0x18005D224 (EtwpGetKmRegHandle.c)
 *     EtwEventEnabled @ 0x18005D270 (EtwEventEnabled.c)
 *     EtwEventActivityIdControl @ 0x18006E510 (EtwEventActivityIdControl.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A99F0 (NtTraceControl.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

ULONG __cdecl EtwEventWriteStartScenario(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG KmRegHandle; // ebx
  ULONG ReturnLength; // [rsp+30h] [rbp-40h] BYREF
  _QWORD InputBuffer[6]; // [rsp+38h] [rbp-38h] BYREF

  ReturnLength = 0;
  if ( !EventDescriptor )
    return 87;
  if ( !EtwEventEnabled(RegHandle, EventDescriptor) )
    return 6;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  KmRegHandle = EtwpGetKmRegHandle(RegHandle, InputBuffer);
  if ( !KmRegHandle )
  {
    *(EVENT_DESCRIPTOR *)&InputBuffer[1] = *EventDescriptor;
    *(_GUID *)&InputBuffer[3] = NtCurrentTeb()->ActivityId;
    if ( _mm_cvtsi128_si32(*(__m128i *)&InputBuffer[3])
      || HIDWORD(InputBuffer[3])
      || LOBYTE(InputBuffer[4])
      || __PAIR16__(BYTE1(InputBuffer[4]), 0) != BYTE2(InputBuffer[4])
      || *(_WORD *)((char *)&InputBuffer[4] + 3)
      || BYTE5(InputBuffer[4])
      || __PAIR16__(BYTE6(InputBuffer[4]), 0) != HIBYTE(InputBuffer[4])
      || (KmRegHandle = EtwEventActivityIdControl(3u, (LPGUID)&InputBuffer[3])) == 0
      && (KmRegHandle = EtwEventActivityIdControl(2u, (LPGUID)&InputBuffer[3])) == 0 )
    {
      LODWORD(InputBuffer[5]) = 10;
      KmRegHandle = EtwEventWrite(RegHandle, EventDescriptor, UserDataCount, UserData);
      NtTraceControl(EtwWdiScenarioCode, InputBuffer, 0x30u, 0LL, 0, &ReturnLength);
    }
  }
  return KmRegHandle;
}
