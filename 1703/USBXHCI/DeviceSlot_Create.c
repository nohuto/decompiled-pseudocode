/*
 * XREFs of DeviceSlot_Create @ 0x1C004E2C0
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C004FFB0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0009BA0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 */

__int64 __fastcall DeviceSlot_Create(__int64 a1, __int64 a2, __int64 **a3)
{
  int v6; // edi
  __int64 *v7; // rbx
  _QWORD v9[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+80h] [rbp+8h] BYREF

  memset(v9, 0, 0x38uLL);
  v9[3] = 0x100000001LL;
  v9[6] = off_1C00450E8;
  LODWORD(v9[0]) = 56;
  v9[4] = a1;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01015 + 1656))(
         WdfDriverGlobals,
         v9,
         &v10);
  if ( v6 < 0 )
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 64), 2u, 9u, 0xBu, (__int64)&WPP_456b2d758866307348448590413771d8_Traceguids, v6);
  }
  else
  {
    v7 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      v10,
                      off_1C00450E8);
    *v7 = v10;
    v7[1] = a2;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(a2 + 64),
      4u,
      9u,
      0xAu,
      (__int64)&WPP_456b2d758866307348448590413771d8_Traceguids,
      v10);
    *a3 = v7;
  }
  return (unsigned int)v6;
}
