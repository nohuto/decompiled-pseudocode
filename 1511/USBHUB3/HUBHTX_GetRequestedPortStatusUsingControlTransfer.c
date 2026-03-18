/*
 * XREFs of HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x1C00052B8
 * Callers:
 *     HUBHSM_GettingPortStatusOnPDORequestFromConfigWithIntTransfer @ 0x1C0007280 (HUBHSM_GettingPortStatusOnPDORequestFromConfigWithIntTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026FD8 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetRequestedPortStatusUsingControlTransfer(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // al
  unsigned __int16 v4; // si
  __int64 result; // rax
  int v6; // [rsp+28h] [rbp-40h]
  __int64 v7; // [rsp+28h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 2528);
  v3 = *(_BYTE *)(a1 + 896) & 0x1C;
  *(_BYTE *)(a1 + 897) = 0;
  *(_BYTE *)(a1 + 896) = v3 | 0xA3;
  *(_WORD *)(a1 + 900) = *(_WORD *)(v1 + 200);
  if ( (*(_DWORD *)(v1 + 204) & 0x100) != 0 )
  {
    *(_WORD *)(a1 + 898) = 2;
    v4 = 8;
  }
  else
  {
    *(_WORD *)(a1 + 898) = 0;
    v4 = 4;
  }
  *(_WORD *)(a1 + 902) = v4;
  v6 = *(unsigned __int16 *)(v1 + 200);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1 + 2464),
    4u,
    3u,
    0x6Fu,
    (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids,
    v6);
  result = HUBMISC_ControlTransfer(
             a1,
             *(_QWORD *)(a1 + 224),
             a1,
             (int)a1 + 744,
             (__int64)HUBHTX_HubControlTransferComplete,
             v1 + 184,
             v4,
             0,
             *(_BYTE *)(a1 + 2216));
  if ( (int)result < 0 )
  {
    LODWORD(v7) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2464),
      2u,
      3u,
      0x70u,
      (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids,
      v7);
    return HUBSM_AddEvent(a1 + 1208, 2004LL);
  }
  return result;
}
