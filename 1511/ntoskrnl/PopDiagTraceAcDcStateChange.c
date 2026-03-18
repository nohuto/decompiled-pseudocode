/*
 * XREFs of PopDiagTraceAcDcStateChange @ 0x1406387B0
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1404F9820 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceAcDcStateChange(int a1)
{
  REGHANDLE v2; // rbx
  BOOL v3; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ACDC_STATE_CHANGE) )
    {
      UserData.Size = 4;
      UserData.Reserved = 0;
      v3 = a1 == 0;
      UserData.Ptr = (ULONGLONG)&v3;
      EtwWrite(v2, &POP_ETW_EVENT_ACDC_STATE_CHANGE, 0LL, 1u, &UserData);
    }
  }
}
