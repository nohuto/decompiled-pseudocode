/*
 * XREFs of HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x1C0004D84
 * Callers:
 *     HUBHSM_GettingPortStatusOnPDORequestFromConfigWithIntTransfer @ 0x1C0006D20 (HUBHSM_GettingPortStatusOnPDORequestFromConfigWithIntTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026388 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetRequestedPortStatusUsingControlTransfer(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // al
  unsigned __int16 v4; // si
  __int64 result; // rax
  int v6; // [rsp+28h] [rbp-40h]
  __int64 v7; // [rsp+28h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 2504);
  v3 = *(_BYTE *)(a1 + 872) & 0x1C;
  *(_BYTE *)(a1 + 873) = 0;
  *(_BYTE *)(a1 + 872) = v3 | 0xA3;
  *(_WORD *)(a1 + 876) = *(_WORD *)(v1 + 200);
  if ( (*(_DWORD *)(v1 + 204) & 0x100) != 0 )
  {
    *(_WORD *)(a1 + 874) = 2;
    v4 = 8;
  }
  else
  {
    *(_WORD *)(a1 + 874) = 0;
    v4 = 4;
  }
  *(_WORD *)(a1 + 878) = v4;
  v6 = *(unsigned __int16 *)(v1 + 200);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1 + 2440),
    4u,
    3u,
    0x6Fu,
    (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
    v6);
  result = HUBMISC_ControlTransfer(
             a1,
             *(_QWORD *)(a1 + 208),
             a1,
             (int)a1 + 720,
             (__int64)HUBHTX_HubControlTransferComplete,
             v1 + 184,
             v4,
             0,
             *(_BYTE *)(a1 + 2192));
  if ( (int)result < 0 )
  {
    LODWORD(v7) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2440),
      2u,
      3u,
      0x70u,
      (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
      v7);
    return HUBSM_AddEvent(a1 + 1184, 2004LL);
  }
  return result;
}
