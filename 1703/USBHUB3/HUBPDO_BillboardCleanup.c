/*
 * XREFs of HUBPDO_BillboardCleanup @ 0x1C006AD00
 * Callers:
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0015200 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C006B140 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBPDO_BillboardCleanup(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // eax
  int updated; // eax
  __int64 v6; // [rsp+28h] [rbp-40h]
  __int64 v7; // [rsp+28h] [rbp-40h]
  _DWORD v8[2]; // [rsp+40h] [rbp-28h] BYREF
  void *v9; // [rsp+48h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 2616) )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v8[1] = 0;
    v10 = 0LL;
    v8[0] = 24;
    v9 = &DEVPKEY_Device_UsbBillboardInfo;
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *, __int64, _DWORD, _QWORD))(WdfFunctions_01015 + 3480))(
           WdfDriverGlobals,
           v3,
           v8,
           4099LL,
           0,
           0LL);
    if ( v4 < 0 )
    {
      LODWORD(v6) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        2u,
        0x4Eu,
        (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
        v6);
    }
    updated = ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL, 0LL, 0LL, 0, 0);
    if ( updated < 0 )
    {
      LODWORD(v7) = updated;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        2u,
        0x4Fu,
        (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
        v7);
    }
    ExFreePoolWithTag(**(PVOID **)(a1 + 2616), 0x68334855u);
    ExFreePoolWithTag(*(PVOID *)(a1 + 2616), 0x68334855u);
    *(_QWORD *)(a1 + 2616) = 0LL;
  }
}
