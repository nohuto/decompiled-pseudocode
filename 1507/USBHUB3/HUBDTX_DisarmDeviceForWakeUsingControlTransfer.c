/*
 * XREFs of HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x1C001F9B8
 * Callers:
 *     HUBDSM_DisarmingDeviceForWakeOnD0Entry @ 0x1C001A430 (HUBDSM_DisarmingDeviceForWakeOnD0Entry.c)
 *     HUBDSM_DisarmingDeviceForWakeOnPortResumed @ 0x1C001A460 (HUBDSM_DisarmingDeviceForWakeOnPortResumed.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026388 (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBDTX_DisarmDeviceForWakeUsingControlTransfer(__int64 a1)
{
  char v2; // cl
  char v3; // cl
  char v4; // cl
  int v5; // eax
  __int64 v6; // [rsp+28h] [rbp-30h]

  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 32LL), 0xFFFFFFFD);
  v2 = *(_BYTE *)(a1 + 384) & 0x9F;
  *(_WORD *)(a1 + 390) = 0;
  v3 = v2 & 0x7F;
  *(_BYTE *)(a1 + 384) = v3;
  if ( (*(_DWORD *)(a1 + 1440) & 0x800) != 0 )
  {
    *(_BYTE *)(a1 + 385) = 3;
    v4 = v3 & 0xFC | 1;
    *(_DWORD *)(a1 + 386) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 385) = 1;
    v4 = v3 & 0xFC;
    *(_DWORD *)(a1 + 386) = 1;
  }
  *(_BYTE *)(a1 + 384) = v4;
  v5 = HUBMISC_ControlTransfer(
         *(_QWORD *)a1,
         *(_QWORD *)(a1 + 24),
         a1,
         (int)a1 + 232,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         1,
         *(_BYTE *)(a1 + 1496));
  if ( v5 < 0 )
  {
    LODWORD(v6) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x23u,
      (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
      v6);
    HUBSM_AddEvent(a1 + 488, 0xFA4u);
  }
}
