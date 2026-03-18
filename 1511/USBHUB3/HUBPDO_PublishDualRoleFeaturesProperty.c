/*
 * XREFs of HUBPDO_PublishDualRoleFeaturesProperty @ 0x1C00672BC
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0011FB0 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_PublishDualRoleFeaturesProperty(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-40h]
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+70h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = *(_QWORD *)(a1 + 24);
  v7 = *(_DWORD *)(v3 + 2628);
  v6[2] = 0LL;
  v6[0] = 24LL;
  v6[1] = &DEVPKEY_Device_UsbDualRoleFeatures;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int64, int, int *))(WdfFunctions_01015
                                                                                                  + 3480))(
             WdfDriverGlobals,
             v2,
             v6,
             7LL,
             4,
             &v7);
  if ( (int)result < 0 )
  {
    LODWORD(v5) = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
             2u,
             2u,
             0x52u,
             (__int64)&WPP_eff6e990951eaa46dbce5c3335bd4113_Traceguids,
             v5);
  }
  return result;
}
