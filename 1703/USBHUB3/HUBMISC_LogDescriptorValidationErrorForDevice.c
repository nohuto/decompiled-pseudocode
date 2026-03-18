/*
 * XREFs of HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C002A990
 * Callers:
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1C001AE70 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBDSM_AddingDeviceToGlobalChildList @ 0x1C001BF80 (HUBDSM_AddingDeviceToGlobalChildList.c)
 *     HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C00241F8 (HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader @ 0x1C0024524 (HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader.c)
 * Callees:
 *     Template_ppqq @ 0x1C0010724 (Template_ppqq.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0029B74 (HUBMISC_VerifierDbgBreak.c)
 */

void __fastcall HUBMISC_LogDescriptorValidationErrorForDevice(__int64 a1, ULONG a2)
{
  if ( a1 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
      Template_ppqq(
        a1,
        &USBHUB3_ETW_EVENT_DESCRIPTOR_VALIDATION_FAILURE,
        (const GUID *)(a1 + 1500),
        *(_QWORD *)(*(_QWORD *)a1 + 240LL),
        *(_QWORD *)(a1 + 24),
        *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL),
        a2);
    if ( (*(_DWORD *)(a1 + 2420) & 2) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierDescriptorValidationFailure", a1 + 488);
    RtlSetBit((PRTL_BITMAP)(a1 + 2568), a2);
  }
}
