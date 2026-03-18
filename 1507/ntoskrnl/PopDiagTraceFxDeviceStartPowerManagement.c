/*
 * XREFs of PopDiagTraceFxDeviceStartPowerManagement @ 0x1405B2228
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x140169748 (PoFxStartDevicePowerManagement.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDeviceStartPowerManagement(__int64 a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  __int64 v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_START_POWER_MANAGEMENT) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 8;
      EtwWrite(v1, &POP_ETW_EVENT_DEVICE_START_POWER_MANAGEMENT, 0LL, 1u, &UserData);
    }
  }
}
