/*
 * XREFs of HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x1C00223A8
 * Callers:
 *     HUBDSM_SettingDevicePDChargingPolicy @ 0x1C0017890 (HUBDSM_SettingDevicePDChargingPolicy.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026388 (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+28h] [rbp-30h]

  *(_BYTE *)(a1 + 384) &= 0x1Cu;
  *(_BYTE *)(a1 + 385) = 3;
  *(_WORD *)(a1 + 390) = 0;
  *(_WORD *)(a1 + 386) = 54;
  if ( *(_DWORD *)(*(_QWORD *)a1 + 84LL) == 100 )
    *(_WORD *)(a1 + 388) = 2;
  else
    *(_WORD *)(a1 + 388) = 1;
  v2 = HUBMISC_ControlTransfer(
         *(_QWORD *)a1,
         *(_QWORD *)(a1 + 24),
         a1,
         (int)a1 + 232,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         1,
         *(_BYTE *)(a1 + 1496));
  if ( v2 < 0 )
  {
    LODWORD(v3) = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x63u,
      (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
      v3);
    HUBSM_AddEvent(a1 + 488, 0xFA4u);
  }
}
