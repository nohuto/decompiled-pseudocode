/*
 * XREFs of HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0002F64
 * Callers:
 *     HUBHSM_GettingHubPortStatus @ 0x1C00075F0 (HUBHSM_GettingHubPortStatus.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002956C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetHubStatusUsingControlTransfer(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+28h] [rbp-30h]

  v1 = a1 + 748;
  *(_BYTE *)(a1 + 920) = *(_BYTE *)(a1 + 920) & 0x1C | 0xA0;
  *(_BYTE *)(a1 + 921) = 0;
  *(_DWORD *)(a1 + 922) = 0;
  *(_WORD *)(a1 + 926) = 4;
  *(_DWORD *)(a1 + 752) = *(_DWORD *)(a1 + 748);
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2488), 4u, 3u, 0x19u, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
  result = HUBMISC_ControlTransfer(
             a1,
             *(_QWORD *)(a1 + 240),
             a1,
             (int)a1 + 768,
             (__int64)HUBHTX_HubControlTransferComplete,
             v1,
             4,
             0,
             *(_BYTE *)(a1 + 2240));
  if ( (int)result < 0 )
  {
    LODWORD(v4) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2488),
      2u,
      3u,
      0x1Au,
      (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
      v4);
    return HUBSM_AddEvent(a1 + 1232, 2004LL);
  }
  return result;
}
