/*
 * XREFs of HUBHSM_GettingHubStatus @ 0x1C00085E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002956C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHSM_GettingHubStatus(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v4; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  *(_BYTE *)(v1 + 920) = *(_BYTE *)(v1 + 920) & 0x1C | 0x80;
  *(_BYTE *)(v1 + 921) = 0;
  *(_DWORD *)(v1 + 922) = 0;
  *(_WORD *)(v1 + 926) = 2;
  WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2488), 4u, 3u, 0x17u, (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids);
  v2 = HUBMISC_ControlTransfer(
         v1,
         *(_QWORD *)(v1 + 240),
         v1,
         (int)v1 + 768,
         (__int64)HUBHTX_HubControlTransferComplete,
         v1 + 764,
         2,
         0,
         *(_BYTE *)(v1 + 2240));
  if ( v2 < 0 )
  {
    LODWORD(v4) = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 2488),
      2u,
      3u,
      0x18u,
      (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
      v4);
    HUBSM_AddEvent(v1 + 1232, 2004LL);
  }
  return 1000LL;
}
