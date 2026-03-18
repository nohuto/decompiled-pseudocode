/*
 * XREFs of HUBPSM30_SettingU1TImeOut @ 0x1C000FB50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 *     HUBMISC_ControlTransfer @ 0x1C002956C (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPSM30_SettingU1TImeOut(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  int v3; // eax
  int v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+28h] [rbp-30h]
  int v7; // [rsp+30h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_BYTE *)(v1 + 168) & 0x1C;
  *(_BYTE *)(v1 + 169) = 3;
  *(_BYTE *)(v1 + 168) = v2 | 0x23;
  *(_WORD *)(v1 + 170) = 23;
  *(_BYTE *)(v1 + 173) = *(_BYTE *)(*(_QWORD *)(v1 + 1328) + 2196LL);
  *(_BYTE *)(v1 + 172) = *(_BYTE *)(v1 + 200);
  *(_WORD *)(v1 + 174) = 0;
  v7 = *(unsigned __int8 *)(*(_QWORD *)(v1 + 1328) + 2196LL);
  v5 = *(unsigned __int16 *)(v1 + 200);
  WPP_RECORDER_SF_dD(
    *(_QWORD *)(v1 + 1432),
    4u,
    4u,
    0x3Cu,
    (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
    v5,
    v7);
  v3 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(*(_QWORD *)v1 + 240LL),
         v1,
         (int)v1 + 16,
         (__int64)HUBHTX_PortControlTransferComplete,
         0LL,
         0,
         0,
         *(_BYTE *)(*(_QWORD *)v1 + 2240LL));
  if ( v3 < 0 )
  {
    LODWORD(v6) = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 1432),
      2u,
      4u,
      0x3Du,
      (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
      v6);
    (*(void (__fastcall **)(__int64, __int64))(v1 + 1240))(v1, 3008LL);
  }
  return 1000LL;
}
