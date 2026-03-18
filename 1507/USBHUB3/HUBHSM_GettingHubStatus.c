/*
 * XREFs of HUBHSM_GettingHubStatus @ 0x1C0007C20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026388 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHSM_GettingHubStatus(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v4; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  *(_BYTE *)(v1 + 872) = *(_BYTE *)(v1 + 872) & 0x1C | 0x80;
  *(_BYTE *)(v1 + 873) = 0;
  *(_DWORD *)(v1 + 874) = 0;
  *(_WORD *)(v1 + 878) = 2;
  WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2440), 4u, 3u, 0x17u, (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids);
  v2 = HUBMISC_ControlTransfer(
         v1,
         *(_QWORD *)(v1 + 208),
         v1,
         (int)v1 + 720,
         (__int64)HUBHTX_HubControlTransferComplete,
         v1 + 716,
         2,
         0,
         *(_BYTE *)(v1 + 2192));
  if ( v2 < 0 )
  {
    LODWORD(v4) = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 2440),
      2u,
      3u,
      0x18u,
      (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
      v4);
    HUBSM_AddEvent(v1 + 1184, 2004LL);
  }
  return 1000LL;
}
