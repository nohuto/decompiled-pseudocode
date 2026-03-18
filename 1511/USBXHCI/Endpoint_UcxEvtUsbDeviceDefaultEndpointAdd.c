/*
 * XREFs of Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C00512A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005540 (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     Endpoint_Create @ 0x1C0050C7C (Endpoint_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // ebx
  __int64 v9; // rax
  int v10; // edi
  int v11; // ebx
  __int64 v12; // rax
  int v14; // [rsp+28h] [rbp-58h]
  __int64 v15; // [rsp+28h] [rbp-58h]
  int v16; // [rsp+30h] [rbp-50h]
  __int64 v17; // [rsp+30h] [rbp-50h]
  int v18; // [rsp+40h] [rbp-40h] BYREF
  __int16 v19; // [rsp+44h] [rbp-3Ch]
  char v20; // [rsp+46h] [rbp-3Ah]
  _QWORD v21[7]; // [rsp+48h] [rbp-38h] BYREF

  v8 = *(unsigned __int8 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                              WdfDriverGlobals,
                              a2,
                              off_1C0041318)
                          + 135);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00410E8);
  v16 = a3;
  v14 = v8;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(v9 + 64),
    4u,
    0xCu,
    0xAu,
    (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
    v14,
    v16);
  v19 = a3;
  v20 = 0;
  v18 = 1287;
  memset(v21, 0, sizeof(v21));
  v21[1] = Endpoint_UcxEvtEndpointPurge;
  LODWORD(v21[0]) = 56;
  v21[2] = Endpoint_UcxEvtEndpointStart;
  v21[3] = Endpoint_UcxEvtEndpointAbort;
  v21[4] = Endpoint_UcxEvtEndpointOkToCancelTransfers;
  v21[5] = Endpoint_UcxEvtDefaultEndpointUpdate;
  v21[6] = Endpoint_UcxEvtEndpointEnableForwardProgress;
  ((void (__fastcall *)(void *, __int64, _QWORD *))qword_1C00427B0)(WPP_MAIN_CB.Dpc.DpcData, a4, v21);
  v10 = Endpoint_Create(a1, a2, a4, (__int64)&v18, 0LL, 0LL);
  if ( v10 < 0 )
  {
    v11 = *(unsigned __int8 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                               + 1616))(
                                 WdfDriverGlobals,
                                 a2,
                                 off_1C0041318)
                             + 135);
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a1,
            off_1C00410E8);
    LODWORD(v17) = v10;
    LODWORD(v15) = v11;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v12 + 64),
      2u,
      0xCu,
      0xBu,
      (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
      v15,
      v17);
  }
  return (unsigned int)v10;
}
