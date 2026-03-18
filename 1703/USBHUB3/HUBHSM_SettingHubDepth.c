/*
 * XREFs of HUBHSM_SettingHubDepth @ 0x1C0008A40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002956C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHSM_SettingHubDepth(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  unsigned __int16 v3; // ax
  int v4; // eax
  int v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_BYTE *)(v1 + 920) & 0x1C;
  *(_BYTE *)(v1 + 921) = 12;
  *(_BYTE *)(v1 + 920) = v2 | 0x20;
  v3 = *(unsigned __int8 *)(v1 + 232) - 1;
  *(_WORD *)(v1 + 922) = v3;
  *(_DWORD *)(v1 + 924) = 0;
  v6 = v3;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v1 + 2488),
    4u,
    3u,
    0x1Bu,
    (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
    v6);
  v4 = HUBMISC_ControlTransfer(
         v1,
         *(_QWORD *)(v1 + 240),
         v1,
         (int)v1 + 768,
         (__int64)HUBHTX_HubControlTransferComplete,
         0LL,
         0,
         0,
         *(_BYTE *)(v1 + 2240));
  if ( v4 < 0 )
  {
    LODWORD(v7) = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 2488),
      2u,
      3u,
      0x1Cu,
      (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
      v7);
    HUBSM_AddEvent(v1 + 1232, 2004LL);
  }
  return 1000LL;
}
