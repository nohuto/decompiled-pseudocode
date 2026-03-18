/*
 * XREFs of HUBMISC_LogDeviceReEnumeration @ 0x1C0023D4C
 * Callers:
 *     HUBDSM_InitializingEnumRetryCountInReEnumDuringResetInUnConfigured @ 0x1C001A9F0 (HUBDSM_InitializingEnumRetryCountInReEnumDuringResetInUnConfigured.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     Template_p @ 0x1C0006168 (Template_p.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0027608 (HUBMISC_VerifierDbgBreak.c)
 */

NTSTATUS __fastcall HUBMISC_LogDeviceReEnumeration(__int64 a1)
{
  __int64 v2; // rcx
  NTSTATUS result; // eax
  int v4; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a1 + 1340);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    0xFu,
    (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids,
    v4);
  result = *(_DWORD *)(a1 + 2420);
  if ( (result & 0x40) != 0 )
    result = HUBMISC_VerifierDbgBreak("DeviceHwVerifierBusRenumeration", a1 + 488);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40000) != 0 )
    return Template_p(v2, &USBHUB3_ETW_EVENT_BUS_RENUMERATION, (const GUID *)(a1 + 1500), *(_QWORD *)(a1 + 24));
  return result;
}
