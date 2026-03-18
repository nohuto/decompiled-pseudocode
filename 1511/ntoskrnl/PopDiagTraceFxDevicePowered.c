/*
 * XREFs of PopDiagTraceFxDevicePowered @ 0x1400DC8C4
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x1400DADB4 (PopFxCompleteDevicePowerRequired.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x14009DF00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDevicePowered(__int64 a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  __int64 v3; // [rsp+70h] [rbp+8h] BYREF

  v3 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_POWERED) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 8;
      EtwWriteEx(v1, &POP_ETW_EVENT_DEVICE_POWERED, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
  }
}
