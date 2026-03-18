/*
 * XREFs of HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C0021F48
 * Callers:
 *     HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor @ 0x1C0019410 (HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D9C (WPP_RECORDER_SF_dD.c)
 *     Template_p @ 0x1C0006168 (Template_p.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C00280F0 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rbp
  char v4; // al
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // cx
  __int64 v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-18h]

  v2 = 4077;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    WdfDriverGlobals->Driver,
    off_1C00580E8);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
  v4 = 1;
  if ( *(_DWORD *)(a1 + 240) != 8 )
  {
    v9 = *(_DWORD *)(a1 + 240);
    WPP_RECORDER_SF_d(v3, 2u, 5u, 0x100u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v9);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 117LL);
LABEL_10:
    WPP_RECORDER_SF_(v3, 2u, 5u, 0x104u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids);
    *(_DWORD *)(a1 + 2416) = 1073807381;
    v2 = 4065;
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      Template_p(
        LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink),
        &USBHUB3_ETW_EVENT_INVALID_MSOS_CONTAINER_ID_DESCRIPTOR_HEADER,
        (const GUID *)(a1 + 1500),
        *(_QWORD *)(a1 + 24));
    return v2;
  }
  v5 = *(_WORD *)(a1 + 1720);
  if ( v5 != 256 )
  {
    v12 = 256;
    v10 = v5;
    WPP_RECORDER_SF_dD(v3, 2u, 5u, 0x101u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v10, v12);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 115LL);
    v4 = 0;
  }
  v6 = *(_WORD *)(a1 + 1722);
  if ( v6 != 6 )
  {
    LODWORD(v11) = 6;
    LODWORD(v8) = v6;
    WPP_RECORDER_SF_dD(v3, 2u, 5u, 0x102u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v8, v11);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 116LL);
    v4 = 0;
  }
  if ( *(_DWORD *)(a1 + 1716) != 24 )
  {
    LODWORD(v11) = 24;
    LODWORD(v8) = *(_DWORD *)(a1 + 1716);
    WPP_RECORDER_SF_dD(v3, 2u, 5u, 0x103u, (__int64)&WPP_91309e1e7e68342ce699a1e67e712f7c_Traceguids, v8, v11);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 118LL);
    v4 = 0;
  }
  if ( !v4 )
    goto LABEL_10;
  return v2;
}
