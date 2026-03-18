/*
 * XREFs of HUBDSM_ArmingDeviceForWake @ 0x1C001CF30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002956C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDSM_ArmingDeviceForWake(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // cl
  char v3; // cl
  char v4; // cl
  int v5; // eax
  __int64 v7; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 16) + 32LL), 2u);
  v2 = *(_BYTE *)(v1 + 384) & 0x9F;
  *(_BYTE *)(v1 + 385) = 3;
  v3 = v2 & 0x7F;
  *(_WORD *)(v1 + 390) = 0;
  *(_BYTE *)(v1 + 384) = v3;
  if ( (*(_DWORD *)(v1 + 1440) & 0x800) != 0 )
  {
    *(_DWORD *)(v1 + 386) = 50331648;
    v4 = v3 & 0xFC | 1;
  }
  else
  {
    v4 = v3 & 0x7C;
    *(_DWORD *)(v1 + 386) = 1;
  }
  *(_BYTE *)(v1 + 384) = v4;
  v5 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(v1 + 24),
         v1,
         (int)v1 + 232,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         1,
         *(_BYTE *)(v1 + 1496));
  if ( v5 < 0 )
  {
    LODWORD(v7) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x22u,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
      v7);
    HUBSM_AddEvent(v1 + 488, 4004);
  }
  return 1000LL;
}
