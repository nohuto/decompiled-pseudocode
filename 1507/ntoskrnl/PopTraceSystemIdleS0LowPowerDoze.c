/*
 * XREFs of PopTraceSystemIdleS0LowPowerDoze @ 0x1406BA730
 * Callers:
 *     PopIdleAoAcDozeToS4 @ 0x1406BCE08 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PopTraceSystemIdleS0LowPowerDoze(unsigned __int8 a1)
{
  REGHANDLE v2; // rbx
  int v3; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE) )
    {
      UserData.Reserved = 0;
      v3 = a1;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&v3;
      EtwWrite(v2, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE, 0LL, 1u, &UserData);
    }
  }
}
