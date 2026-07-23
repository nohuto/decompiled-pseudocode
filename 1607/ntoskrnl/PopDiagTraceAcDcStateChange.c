/*
 * XREFs of PopDiagTraceAcDcStateChange @ 0x140670BC0
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
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
