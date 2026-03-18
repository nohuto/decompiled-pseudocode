/*
 * XREFs of HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0002E90
 * Callers:
 *     HUBHSM_GettingHubPortStatus @ 0x1C0007380 (HUBHSM_GettingHubPortStatus.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0027038 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetHubStatusUsingControlTransfer(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+28h] [rbp-30h]

  v1 = a1 + 724;
  *(_BYTE *)(a1 + 896) = *(_BYTE *)(a1 + 896) & 0x1C | 0xA0;
  *(_BYTE *)(a1 + 897) = 0;
  *(_DWORD *)(a1 + 898) = 0;
  *(_WORD *)(a1 + 902) = 4;
  *(_DWORD *)(a1 + 728) = *(_DWORD *)(a1 + 724);
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2464), 4u, 3u, 0x19u, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
  result = HUBMISC_ControlTransfer(
             a1,
             *(_QWORD *)(a1 + 224),
             a1,
             (int)a1 + 744,
             (__int64)HUBHTX_HubControlTransferComplete,
             v1,
             4,
             0,
             *(_BYTE *)(a1 + 2216));
  if ( (int)result < 0 )
  {
    LODWORD(v4) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2464),
      2u,
      3u,
      0x1Au,
      (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
      v4);
    return HUBSM_AddEvent(a1 + 1208, 2004LL);
  }
  return result;
}
