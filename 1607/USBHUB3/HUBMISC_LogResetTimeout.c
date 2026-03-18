/*
 * XREFs of HUBMISC_LogResetTimeout @ 0x1C0027E60
 * Callers:
 *     HUBDSM_LoggingResetTimeoutInResettingFor30 @ 0x1C0018630 (HUBDSM_LoggingResetTimeoutInResettingFor30.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     Template_p @ 0x1C0006168 (Template_p.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0027608 (HUBMISC_VerifierDbgBreak.c)
 */

char __fastcall HUBMISC_LogResetTimeout(__int64 a1)
{
  __int64 v2; // rax
  _BYTE *v3; // rdx

  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
    Template_p(a1, &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_RESET_TIMEOUT, (const GUID *)(a1 + 1500), *(_QWORD *)(a1 + 24));
  LOBYTE(v2) = WPP_RECORDER_SF_(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                 2u,
                 5u,
                 0x6Au,
                 (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids);
  v3 = *(_BYTE **)(a1 + 8);
  *(_DWORD *)(a1 + 2416) = 1073807362;
  if ( (v3[184] & 1) != 0 )
  {
    v2 = *(_QWORD *)v3;
    if ( (*(_DWORD *)(*(_QWORD *)v3 + 2536LL) & 0x40) != 0 )
      LOBYTE(v2) = HUBMISC_VerifierDbgBreak("HubHwVerifierPortResetTimeout", (__int64)(v3 + 272));
  }
  return v2;
}
