/*
 * XREFs of HUBDSM_ConfiguringDevice @ 0x1C001A100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026388 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDSM_ConfiguringDevice(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  int v3; // eax
  __int64 v5; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  *(_BYTE *)(v1 + 384) &= 0x1Cu;
  v2 = *(_QWORD *)(v1 + 48);
  *(_BYTE *)(v1 + 385) = 9;
  *(_WORD *)(v1 + 386) = *(unsigned __int8 *)(v2 + 37);
  *(_DWORD *)(v1 + 388) = 0;
  v3 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(v1 + 24),
         v1,
         (int)v1 + 232,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         0,
         *(_BYTE *)(v1 + 1496));
  if ( v3 < 0 )
  {
    LODWORD(v5) = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x40u,
      (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
      v5);
    HUBSM_AddEvent(v1 + 488, 0xFA4u);
  }
  return 1000LL;
}
