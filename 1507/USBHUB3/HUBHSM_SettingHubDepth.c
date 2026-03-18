/*
 * XREFs of HUBHSM_SettingHubDepth @ 0x1C0008030
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026388 (HUBMISC_ControlTransfer.c)
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
  v2 = *(_BYTE *)(v1 + 872) & 0x1C;
  *(_BYTE *)(v1 + 873) = 12;
  *(_BYTE *)(v1 + 872) = v2 | 0x20;
  v3 = *(unsigned __int8 *)(v1 + 200) - 1;
  *(_WORD *)(v1 + 874) = v3;
  *(_DWORD *)(v1 + 876) = 0;
  v6 = v3;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v1 + 2440),
    4u,
    3u,
    0x1Bu,
    (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
    v6);
  v4 = HUBMISC_ControlTransfer(
         v1,
         *(_QWORD *)(v1 + 208),
         v1,
         (int)v1 + 720,
         (__int64)HUBHTX_HubControlTransferComplete,
         0LL,
         0,
         0,
         *(_BYTE *)(v1 + 2192));
  if ( v4 < 0 )
  {
    LODWORD(v7) = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 2440),
      2u,
      3u,
      0x1Cu,
      (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
      v7);
    HUBSM_AddEvent(v1 + 1184, 2004LL);
  }
  return 1000LL;
}
