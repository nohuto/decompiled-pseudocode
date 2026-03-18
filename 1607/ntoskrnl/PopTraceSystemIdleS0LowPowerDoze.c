/*
 * XREFs of PopTraceSystemIdleS0LowPowerDoze @ 0x1406727EC
 * Callers:
 *     PopIdleAoAcDozeToS4 @ 0x140674EC0 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

void PopTraceSystemIdleS0LowPowerDoze()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE) )
    {
      v1 = 0;
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v1;
      UserData.Size = 4;
      EtwWrite(v0, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE, 0LL, 1u, &UserData);
    }
  }
}
