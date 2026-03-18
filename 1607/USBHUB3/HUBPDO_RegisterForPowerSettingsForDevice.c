/*
 * XREFs of HUBPDO_RegisterForPowerSettingsForDevice @ 0x1C00145EC
 * Callers:
 *     HUBPDO_CreatePdoInternal @ 0x1C0068850 (HUBPDO_CreatePdoInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0034DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

int __fastcall HUBPDO_RegisterForPowerSettingsForDevice(__int64 a1)
{
  LPCGUID *v1; // rbx
  PVOID *Handle; // rsi
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rax
  struct _DEVICE_OBJECT *v7; // rax
  int result; // eax
  __int64 v9; // [rsp+28h] [rbp-50h]
  GUID *v10; // [rsp+30h] [rbp-48h] BYREF
  GUID *v11; // [rsp+38h] [rbp-40h]
  GUID *v12; // [rsp+40h] [rbp-38h]
  GUID *v13; // [rsp+48h] [rbp-30h]
  GUID *v14; // [rsp+50h] [rbp-28h]

  v10 = &GUID_POWER_USB_U1_ENABLE_FOR_DEVICES;
  v1 = &v10;
  v11 = &GUID_POWER_USB_U2_ENABLE_FOR_DEVICES;
  Handle = (PVOID *)(a1 + 272);
  v4 = 5LL;
  v12 = &GUID_POWER_USB_U1_TIMEOUT_FOR_DEVICES;
  v13 = &GUID_POWER_USB_U2_TIMEOUT_FOR_DEVICES;
  v14 = &GUID_POWER_USB_3_LINK_POWER_MANAGEMENT_POLICY;
  v5 = a1 - (_QWORD)&v10;
  do
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v7 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                    WdfDriverGlobals,
                                    v6);
    result = PoRegisterPowerSettingCallback(v7, *v1, HUBPDO_PowerSettingCallback, *(PVOID *)(a1 + 24), Handle);
    if ( result < 0 )
    {
      LODWORD(v9) = result;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
                 2u,
                 5u,
                 0x5Eu,
                 (__int64)&WPP_54842a9813333d375964e0f94b002c66_Traceguids,
                 v9,
                 v10,
                 v11,
                 v12,
                 v13,
                 v14);
      *(LPCGUID *)((char *)v1 + v5 + 272) = 0LL;
    }
    ++Handle;
    ++v1;
    --v4;
  }
  while ( v4 );
  return result;
}
