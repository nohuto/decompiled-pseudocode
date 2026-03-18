/*
 * XREFs of HUBHSM_CheckIfThereIsAValidHubChange @ 0x1C0007050
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0027608 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C00285A0 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBHSM_CheckIfThereIsAValidHubChange(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int16 v3; // bx
  __int16 v4; // di
  int v5; // eax
  unsigned int v6; // edi

  v2 = *(_QWORD *)(a1 + 960);
  v3 = *(_WORD *)(v2 + 726);
  v4 = *(_WORD *)(v2 + 724);
  if ( (v3 & 2) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*(_QWORD *)(a1 + 960), a2);
    *(_DWORD *)(v2 + 732) = 1;
    v5 = (2 * (~(_BYTE)v4 & 2)) | 0x7F1;
LABEL_5:
    *(_DWORD *)(v2 + 736) = v5;
    return 2057;
  }
  if ( (v3 & 1) != 0 )
  {
    *(_DWORD *)(v2 + 732) = 0;
    v5 = (4 * (v4 & 1)) | 0x7E9;
    goto LABEL_5;
  }
  if ( v3 )
  {
    v6 = 2026;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2 + 2464),
      2u,
      3u,
      0x54u,
      (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
      v3);
    if ( (*(_DWORD *)(v2 + 2536) & 0x10) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", v2 + 1208);
  }
  else
  {
    return 2041;
  }
  return v6;
}
