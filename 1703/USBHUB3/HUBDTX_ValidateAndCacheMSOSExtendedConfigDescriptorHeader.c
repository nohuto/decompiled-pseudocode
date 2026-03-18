/*
 * XREFs of HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader @ 0x1C0024524
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader @ 0x1C001B270 (HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 *     Template_p @ 0x1C000630C (Template_p.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C002A990 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader(__int64 a1)
{
  unsigned int v2; // r15d
  char v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rdx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]

  v2 = 4077;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    WdfDriverGlobals->Driver,
    off_1C005B110);
  v3 = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
  if ( *(_DWORD *)(a1 + 240) != 16 )
  {
    WPP_RECORDER_SF_dD(
      v4,
      2u,
      5u,
      0x110u,
      (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids,
      *(_DWORD *)(a1 + 240),
      16);
    v5 = 122LL;
LABEL_3:
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, v5);
LABEL_13:
    WPP_RECORDER_SF_(v4, 2u, 5u, 0x115u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
    *(_DWORD *)(a1 + 2416) = 1073807382;
    v2 = 4065;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
      Template_p(
        v8,
        &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_CONFIGURATION_DESCRIPTOR_HEADER,
        (const GUID *)(a1 + 1500),
        *(_QWORD *)(a1 + 24));
    return v2;
  }
  v6 = *(_WORD *)(a1 + 1720);
  if ( v6 != 256 )
  {
    WPP_RECORDER_SF_dD(v4, 2u, 5u, 0x111u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v6, 256);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 120LL);
    v3 = 0;
  }
  v7 = *(_WORD *)(a1 + 1722);
  if ( v7 != 4 )
  {
    LODWORD(v11) = 4;
    LODWORD(v10) = v7;
    WPP_RECORDER_SF_dD(v4, 2u, 5u, 0x112u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v10, v11);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 125LL);
    v3 = 0;
  }
  if ( *(_BYTE *)(a1 + 1724) != 1 )
  {
    WPP_RECORDER_SF_(v4, 2u, 5u, 0x113u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
    v5 = 121LL;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a1 + 1716) != 40 )
  {
    v3 = 0;
    LODWORD(v11) = 40;
    LODWORD(v10) = *(_DWORD *)(a1 + 1716);
    WPP_RECORDER_SF_dD(v4, 2u, 5u, 0x114u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids, v10, v11);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 127LL);
  }
  if ( !v3 )
    goto LABEL_13;
  return v2;
}
