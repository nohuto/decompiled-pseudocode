/*
 * XREFs of PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x14063A6F4
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x1401F3A18 (PopIdleArmAoAcDozeS4Timer.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PopDiagInterruptTimeToLocalTime @ 0x1403B27E0 (PopDiagInterruptTimeToLocalTime.c)
 */

void __fastcall PopTraceSystemIdleS0LowPowerDozeTimerArmed(int a1, __int64 a2)
{
  LARGE_INTEGER v3; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  LARGE_INTEGER *v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]
  int v8; // [rsp+70h] [rbp+8h] BYREF

  v8 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE_TIMER_ARMED) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v8;
      UserData.Size = 4;
      PopDiagInterruptTimeToLocalTime(a2, &v3);
      v7 = 0;
      v5 = &v3;
      v6 = 8;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE_TIMER_ARMED, 0LL, 2u, &UserData);
    }
  }
}
