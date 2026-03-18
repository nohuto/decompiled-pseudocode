/*
 * XREFs of HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset @ 0x1C00051C4
 * Callers:
 *     HUBPSM20_ErrorOnResettingPort @ 0x1C000DB00 (HUBPSM20_ErrorOnResettingPort.c)
 * Callees:
 *     WPP_RECORDER_SF_dDD @ 0x1C0002594 (WPP_RECORDER_SF_dDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C00275A4 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C00283A4 (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 */

__int64 __fastcall HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int16 v4; // di
  unsigned __int16 v5; // bx
  unsigned int v7; // esi
  __int64 v8; // rax
  int v10; // [rsp+20h] [rbp-28h]

  v4 = *((_WORD *)a1 + 97);
  v5 = *((_WORD *)a1 + 92);
  v7 = 3049;
  if ( (v4 & 1) != 0 )
  {
    if ( (v5 & 1) == 0 )
LABEL_3:
      v7 = 3021;
  }
  else
  {
    if ( (v4 & 0x10) == 0 )
      goto LABEL_11;
    if ( (v5 & 1) == 0 )
    {
      v7 = (v5 & 2) != 0 ? 3021 : 3077;
      goto LABEL_13;
    }
    if ( (v5 & 4) != 0 )
      goto LABEL_3;
    if ( (v5 & 8) != 0 )
    {
      HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
      v8 = *a1;
      v7 = 3065;
      *((_DWORD *)a1 + 356) = 4;
      if ( (*(_DWORD *)(v8 + 2536) & 0x200) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    }
    else
    {
LABEL_11:
      if ( ((unsigned __int8)v5 & (unsigned __int8)v4 & 2) != 0 )
        v7 = 3037;
    }
  }
LABEL_13:
  WPP_RECORDER_SF_dDD(a1[179], v5, *((unsigned __int16 *)a1 + 100), a4, v10);
  return v7;
}
