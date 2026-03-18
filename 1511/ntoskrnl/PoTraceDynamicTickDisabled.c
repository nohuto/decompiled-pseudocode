/*
 * XREFs of PoTraceDynamicTickDisabled @ 0x1401EEA1C
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x140032D00 (KePrepareClockTimerForIdle.c)
 *     KeInitializeClock @ 0x14076DF9C (KeInitializeClock.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x14009DF00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

BOOLEAN PoTraceDynamicTickDisabled()
{
  BOOLEAN result; // al
  REGHANDLE v1; // rbx
  char v2; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  result = KiDynamicTickDisableReason;
  v2 = KiDynamicTickDisableReason;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DYNAMIC_TICK_DISABLED);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 1;
      return EtwWriteEx(v1, &POP_ETW_EVENT_DYNAMIC_TICK_DISABLED, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
  }
  return result;
}
