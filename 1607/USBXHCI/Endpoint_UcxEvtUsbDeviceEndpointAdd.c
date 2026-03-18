/*
 * XREFs of Endpoint_UcxEvtUsbDeviceEndpointAdd @ 0x1C0053590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BE0 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     Endpoint_Create @ 0x1C0052D7C (Endpoint_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtUsbDeviceEndpointAdd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 *a5,
        __int64 a6)
{
  unsigned __int8 *v9; // rdx
  int v10; // esi
  int v11; // edi
  int v12; // ebx
  __int64 v13; // rax
  __int64 v15; // [rsp+30h] [rbp-31h]
  _QWORD v16[10]; // [rsp+48h] [rbp-19h] BYREF

  memset(v16, 0, sizeof(v16));
  v16[1] = Endpoint_UcxEvtEndpointPurge;
  v16[2] = Endpoint_UcxEvtEndpointStart;
  v16[3] = Endpoint_UcxEvtEndpointAbort;
  v16[4] = Endpoint_UcxEvtEndpointReset;
  v16[5] = Endpoint_UcxEvtEndpointOkToCancelTransfers;
  v16[6] = Endpoint_UcxEvtEndpointStaticStreamsAdd;
  v16[7] = Endpoint_UcxEvtEndpointStaticStreamsEnable;
  v16[8] = Endpoint_UcxEvtEndpointStaticStreamsDisable;
  v16[9] = Endpoint_UcxEvtEndpointEnableForwardProgress;
  LODWORD(v16[0]) = 80;
  ((void (__fastcall *)(void *, __int64, _QWORD *))qword_1C0044788)(WPP_MAIN_CB.Dpc.SystemArgument2, a6, v16);
  v9 = 0LL;
  if ( a5 && (*(_BYTE *)(a3 + 3) & 3) == 1 && (a5[3] & 0x80u) != 0 )
    v9 = &a5[*a5];
  v10 = Endpoint_Create(a1, a2, a6, a3, (__int64)a5, v9);
  if ( v10 < 0 )
  {
    v11 = *(unsigned __int8 *)(a3 + 2) >> 7;
    v12 = *(unsigned __int8 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                               + 1616))(
                                 WdfDriverGlobals,
                                 a2,
                                 off_1C0043250)
                             + 135);
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            a1,
            off_1C0043340);
    LODWORD(v15) = v12;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v13 + 64),
      2u,
      0xCu,
      0xCu,
      (__int64)&WPP_069d2c2574d53496482fd2ef12d94007_Traceguids,
      v15,
      v11 + 2 * (*(_BYTE *)(a3 + 2) & 0x7F),
      v10);
  }
  return (unsigned int)v10;
}
