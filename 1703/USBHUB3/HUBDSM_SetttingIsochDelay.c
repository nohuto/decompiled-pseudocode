/*
 * XREFs of HUBDSM_SetttingIsochDelay @ 0x1C001DB30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002956C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SetttingIsochDelay(__int64 a1)
{
  __int64 v1; // rbx
  __int16 v2; // dx
  int v3; // eax
  __int64 v5; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_WORD *)(v1 + 2558) + *(_WORD *)(*(_QWORD *)v1 + 1156LL) + *(_WORD *)(*(_QWORD *)v1 + 2460LL);
  *(_BYTE *)(v1 + 384) &= 0x1Cu;
  *(_WORD *)(v1 + 386) = v2;
  *(_BYTE *)(v1 + 385) = 49;
  *(_DWORD *)(v1 + 388) = 0;
  v3 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(v1 + 24),
         v1,
         (int)v1 + 232,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         1,
         *(_BYTE *)(v1 + 1496));
  if ( v3 < 0 )
  {
    LODWORD(v5) = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x64u,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
      v5);
    HUBSM_AddEvent(v1 + 488, 4004);
  }
  return 1000LL;
}
