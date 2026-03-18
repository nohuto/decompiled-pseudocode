/*
 * XREFs of HUBPDO_QueryForD3ColdSupportInAcpi @ 0x1C0011744
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0011940 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBPDO_QueryForD3ColdSupportInAcpi(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // eax
  unsigned __int16 v7; // r9
  unsigned __int8 v8; // dl
  __int64 v9; // [rsp+28h] [rbp-D8h]
  _BYTE v10[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B8h]
  __int64 (__fastcall *v12)(__int64); // [rsp+58h] [rbp-A8h]
  int (__fastcall *v13)(__int64, char *); // [rsp+70h] [rbp-90h]
  _QWORD v14[20]; // [rsp+90h] [rbp-70h] BYREF
  char v15; // [rsp+148h] [rbp+48h] BYREF
  __int64 v16; // [rsp+150h] [rbp+50h] BYREF

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00570C0)
                 + 24);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1336))(
         WdfDriverGlobals,
         a1,
         0LL,
         &v16);
  if ( v3 < 0 )
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
             2u,
             5u,
             0x2Bu,
             (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
             v3);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, a1);
  memset(v14, 0, 0x88uLL);
  v14[0] = 0x100000088LL;
  v14[4] = v5;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1344))(
         WdfDriverGlobals,
         v16,
         v14);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _BYTE *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1416))(
           WdfDriverGlobals,
           v16,
           &GUID_D3COLD_SUPPORT_INTERFACE,
           v10,
           72,
           1,
           *(_QWORD *)(v2 + 16));
    if ( v6 >= 0 )
    {
      if ( v13(v11, &v15) >= 0 && v15 )
        _InterlockedOr((volatile signed __int32 *)(v2 + 1616), 0x8000u);
      result = (__int64)v12;
      if ( v12 )
        result = v12(v11);
      goto LABEL_13;
    }
    v7 = 45;
    v8 = 4;
  }
  else
  {
    v7 = 44;
    v8 = 2;
  }
  LODWORD(v9) = v6;
  result = WPP_RECORDER_SF_d(
             *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
             v8,
             5u,
             v7,
             (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
             v9);
LABEL_13:
  if ( v16 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return result;
}
