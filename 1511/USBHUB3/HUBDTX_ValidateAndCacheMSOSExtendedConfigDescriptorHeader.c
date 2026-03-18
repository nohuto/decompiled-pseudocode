/*
 * XREFs of HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader @ 0x1C0022204
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader @ 0x1C0019640 (HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D7C (WPP_RECORDER_SF_dD.c)
 *     Template_p @ 0x1C0006048 (Template_p.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C0028080 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader(__int64 a1)
{
  unsigned int v2; // r15d
  char v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rdx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  __int64 v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+30h] [rbp-18h]

  v2 = 4077;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    WdfDriverGlobals->Driver,
    off_1C00570E8);
  v3 = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
  if ( *(_DWORD *)(a1 + 240) != 16 )
  {
    v13 = 16;
    v10 = *(_DWORD *)(a1 + 240);
    WPP_RECORDER_SF_dD(v4, 2u, 5u, 0x10Bu, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v10, v13);
    v5 = 122LL;
LABEL_3:
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, v5);
LABEL_13:
    WPP_RECORDER_SF_(v4, 2u, 5u, 0x110u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
    *(_DWORD *)(a1 + 2416) = 1073807382;
    v2 = 4065;
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
      Template_p(
        LODWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp),
        &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_CONFIGURATION_DESCRIPTOR_HEADER,
        (const GUID *)(a1 + 1500),
        *(_QWORD *)(a1 + 24));
    return v2;
  }
  v6 = *(_WORD *)(a1 + 1720);
  if ( v6 != 256 )
  {
    v14 = 256;
    v11 = v6;
    WPP_RECORDER_SF_dD(v4, 2u, 5u, 0x10Cu, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v11, v14);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 120LL);
    v3 = 0;
  }
  v7 = *(_WORD *)(a1 + 1722);
  if ( v7 != 4 )
  {
    LODWORD(v12) = 4;
    LODWORD(v9) = v7;
    WPP_RECORDER_SF_dD(v4, 2u, 5u, 0x10Du, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v9, v12);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 125LL);
    v3 = 0;
  }
  if ( *(_BYTE *)(a1 + 1724) != 1 )
  {
    WPP_RECORDER_SF_(v4, 2u, 5u, 0x10Eu, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
    v5 = 121LL;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a1 + 1716) != 40 )
  {
    v3 = 0;
    LODWORD(v12) = 40;
    LODWORD(v9) = *(_DWORD *)(a1 + 1716);
    WPP_RECORDER_SF_dD(v4, 2u, 5u, 0x10Fu, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids, v9, v12);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 127LL);
  }
  if ( !v3 )
    goto LABEL_13;
  return v2;
}
