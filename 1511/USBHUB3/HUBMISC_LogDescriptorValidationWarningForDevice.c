/*
 * XREFs of HUBMISC_LogDescriptorValidationWarningForDevice @ 0x1C0028110
 * Callers:
 *     <none>
 * Callees:
 *     Template_ppqq @ 0x1C000F8F0 (Template_ppqq.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C00275A4 (HUBMISC_VerifierDbgBreak.c)
 */

void __fastcall HUBMISC_LogDescriptorValidationWarningForDevice(__int64 a1, ULONG a2)
{
  int v4; // [rsp+28h] [rbp-20h]

  if ( a1 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x100000) != 0 )
    {
      v4 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL);
      Template_ppqq(
        a1,
        &USBHUB3_ETW_EVENT_DESCRIPTOR_VALIDATION_WARNING,
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
