/*
 * XREFs of HUBHSM_CheckIfThereIsAValidHubChange @ 0x1C0006A00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0026954 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C0027754 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBHSM_CheckIfThereIsAValidHubChange(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int16 v2; // bx
  __int16 v3; // di
  int v4; // eax
  unsigned int v5; // edi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_WORD *)(v1 + 702);
  v3 = *(_WORD *)(v1 + 700);
  if ( (v2 & 2) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*(_QWORD *)(a1 + 960));
    *(_DWORD *)(v1 + 708) = 1;
    v4 = (2 * (~(_BYTE)v3 & 2)) | 0x7F1;
LABEL_5:
    *(_DWORD *)(v1 + 712) = v4;
    return 2057;
  }
  if ( (v2 & 1) != 0 )
  {
    *(_DWORD *)(v1 + 708) = 0;
    v4 = (4 * (v3 & 1)) | 0x7E9;
    goto LABEL_5;
  }
  if ( v2 )
  {
    v5 = 2026;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 2440),
      2u,
      3u,
      0x54u,
      (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
      v2);
    if ( (*(_DWORD *)(v1 + 2512) & 0x10) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", v1 + 1184);
  }
  else
  {
    return 2041;
  }
  return v5;
}
