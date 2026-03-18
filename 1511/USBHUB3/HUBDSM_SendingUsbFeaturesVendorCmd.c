/*
 * XREFs of HUBDSM_SendingUsbFeaturesVendorCmd @ 0x1C0019BA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026FD8 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SendingUsbFeaturesVendorCmd(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v4; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  *(_BYTE *)(v1 + 384) = 64;
  *(_BYTE *)(v1 + 385) = *(_BYTE *)(v1 + 2632);
  *(_WORD *)(v1 + 386) = *(_WORD *)(v1 + 2624);
  *(_WORD *)(v1 + 388) = *(_WORD *)(v1 + 2626);
  *(_WORD *)(v1 + 390) = 0;
  v2 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(v1 + 24),
         v1,
         (int)v1 + 232,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         1,
         *(_BYTE *)(v1 + 1496));
  if ( v2 >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v1 + 1620), 0x40000u);
  }
  else
  {
    LODWORD(v4) = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x35u,
      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
      v4);
    HUBSM_AddEvent(v1 + 488, 0xFA4u);
  }
  return 1000LL;
}
