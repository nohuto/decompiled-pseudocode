/*
 * XREFs of HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C00280F0
 * Callers:
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1C00192C0 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBDSM_AddingDeviceToGlobalChildList @ 0x1C001A2B0 (HUBDSM_AddingDeviceToGlobalChildList.c)
 *     HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C0021F48 (HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader @ 0x1C0022268 (HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader.c)
 * Callees:
 *     Template_ppqq @ 0x1C000F9A0 (Template_ppqq.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0027608 (HUBMISC_VerifierDbgBreak.c)
 */

void __fastcall HUBMISC_LogDescriptorValidationErrorForDevice(__int64 a1, ULONG a2)
{
  int v4; // [rsp+28h] [rbp-20h]

  if ( a1 )
  {
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
    {
      v4 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL);
      Template_ppqq(
        a1,
        &USBHUB3_ETW_EVENT_DESCRIPTOR_VALIDATION_FAILURE,
        (const GUID *)(a1 + 1500),
        *(_QWORD *)(*(_QWORD *)a1 + 224LL),
        *(_QWORD *)(a1 + 24),
        v4,
        a2);
    }
    if ( (*(_DWORD *)(a1 + 2420) & 2) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierDescriptorValidationFailure", a1 + 488);
    RtlSetBit((PRTL_BITMAP)(a1 + 2568), a2);
  }
}
