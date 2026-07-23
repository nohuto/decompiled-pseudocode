/*
 * XREFs of PopDiagTraceFxDevicePowerState @ 0x14012C080
 * Callers:
 *     PoFxReportDevicePoweredOn @ 0x140124C40 (PoFxReportDevicePoweredOn.c)
 *     PopRequestCompletion @ 0x14012BB00 (PopRequestCompletion.c)
 * Callees:
 *     EtwWriteEx @ 0x140012EE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDevicePowerState(__int64 a1, char a2)
{
  REGHANDLE v3; // rdi
  char v4; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  char *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]
  __int64 v9; // [rsp+80h] [rbp+8h] BYREF

  v9 = a1;
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_POWER_STATE) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 8;
      v6 = &v4;
      v4 = a2 - 1;
      v7 = 1;
      EtwWriteEx(v3, &POP_ETW_EVENT_DEVICE_POWER_STATE, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
    }
  }
}
