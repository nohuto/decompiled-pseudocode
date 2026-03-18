/*
 * XREFs of HUBHSM_GettingHubStatus @ 0x1C0008180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026FD8 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHSM_GettingHubStatus(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v4; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  *(_BYTE *)(v1 + 896) = *(_BYTE *)(v1 + 896) & 0x1C | 0x80;
  *(_BYTE *)(v1 + 897) = 0;
  *(_DWORD *)(v1 + 898) = 0;
  *(_WORD *)(v1 + 902) = 2;
  WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2464), 4u, 3u, 0x17u, (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids);
  v2 = HUBMISC_ControlTransfer(
         v1,
         *(_QWORD *)(v1 + 224),
         v1,
         (int)v1 + 744,
         (__int64)HUBHTX_HubControlTransferComplete,
         v1 + 740,
         2,
         0,
         *(_BYTE *)(v1 + 2216));
  if ( v2 < 0 )
  {
    LODWORD(v4) = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 2464),
      2u,
      3u,
      0x18u,
      (__int64)&WPP_d10ba0436d0df785b384537e9d821623_Traceguids,
      v4);
    HUBSM_AddEvent(v1 + 1208, 2004LL);
  }
  return 1000LL;
}
