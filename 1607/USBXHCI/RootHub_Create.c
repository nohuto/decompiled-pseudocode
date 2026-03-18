/*
 * XREFs of RootHub_Create @ 0x1C004D774
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C004E2E0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00083DC (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 */

__int64 __fastcall RootHub_Create(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // esi
  __int64 *v8; // rbx
  _QWORD v10[20]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v11[8]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v12; // [rsp+148h] [rbp+40h] BYREF

  v12 = a1;
  memset(v10, 0, sizeof(v10));
  v10[0] = 0x1000000A0LL;
  v10[1] = RootHub_UcxEvtClearHubFeature;
  v10[2] = RootHub_UcxEvtClearPortFeature;
  v10[3] = RootHub_UcxEvtGetHubStatus;
  v10[4] = RootHub_UcxEvtGetPortStatus;
  v10[5] = RootHub_UcxEvtSetHubFeature;
  v10[6] = RootHub_UcxEvtSetPortFeature;
  v10[7] = RootHub_UcxEvtGetPortErrorCount;
  v10[9] = RootHub_UcxEvtInterruptTransfer;
  v10[10] = RootHub_UcxEvtGetInfo;
  v10[11] = RootHub_UcxEvtGet20PortInfo;
  v10[12] = RootHub_UcxEvtGet30PortInfo;
  memset(&v10[13], 0, 0x38uLL);
  v10[19] = off_1C0043070;
  LODWORD(v10[13]) = 56;
  v10[16] = 0x100000001LL;
  memset(v11, 0, 0x38uLL);
  v5 = *(_QWORD *)(a2 + 8);
  v11[6] = off_1C0043200;
  LODWORD(v11[0]) = 56;
  v11[3] = 0x100000001LL;
  v6 = ((__int64 (__fastcall *)(void *, __int64, _QWORD *, _QWORD *, __int64 *))qword_1C0044748)(
         WPP_MAIN_CB.Dpc.SystemArgument2,
         v5,
         v10,
         v11,
         &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 64),
      2u,
      0xAu,
      0xBu,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
      v6);
  }
  else
  {
    v8 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      v12,
                      off_1C0043200);
    *v8 = v12;
    v8[1] = a2;
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(a2 + 64),
      4u,
      0xAu,
      0xAu,
      (__int64)&WPP_464e706a19a63e058fe2f12c3ff05faa_Traceguids,
      v12,
      v8);
    *a3 = v8;
  }
  return v7;
}
