/*
 * XREFs of DeviceSlot_Create @ 0x1C004D668
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C004E2E0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0008630 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 */

__int64 __fastcall DeviceSlot_Create(__int64 a1, __int64 a2, __int64 **a3)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 *v8; // rbx
  _QWORD v10[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF

  memset(v10, 0, 0x38uLL);
  v10[3] = 0x100000001LL;
  v10[6] = off_1C00430E8;
  LODWORD(v10[0]) = 56;
  v10[4] = a1;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01015 + 1656))(
         WdfDriverGlobals,
         v10,
         &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 64), 2u, 9u, 0xBu, (__int64)&WPP_456b2d758866307348448590413771d8_Traceguids, v6);
  }
  else
  {
    v8 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      v11,
                      off_1C00430E8);
    *v8 = v11;
    v8[1] = a2;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(a2 + 64),
      4u,
      9u,
      0xAu,
      (__int64)&WPP_456b2d758866307348448590413771d8_Traceguids,
      v11);
    *a3 = v8;
  }
  return v7;
}
