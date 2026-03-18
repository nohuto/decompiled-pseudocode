/*
 * XREFs of PoTraceSystemTimerResolutionUpdate @ 0x1400B4CF0
 * Callers:
 *     ExpUpdateTimerResolution @ 0x140006F0C (ExpUpdateTimerResolution.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

BOOLEAN PoTraceSystemTimerResolutionUpdate()
{
  BOOLEAN result; // al
  REGHANDLE v1; // rbx
  int v2; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  result = KeTimeIncrement;
  v2 = KeTimeIncrement;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_UPDATE);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 4;
      return EtwWrite(v1, &POP_ETW_EVENT_TIME_RESOLUTION_UPDATE, 0LL, 1u, &UserData);
    }
  }
  return result;
}
