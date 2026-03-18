/*
 * XREFs of HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x1C00236C0
 * Callers:
 *     HUBDSM_DeConfiguringDeviceOnClientRequest @ 0x1C0018B00 (HUBDSM_DeConfiguringDeviceOnClientRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002956C (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBDTX_SetDeviceNullConfigurationUsingControlTransfer(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+28h] [rbp-30h]

  *(_BYTE *)(a1 + 384) &= 0x1Cu;
  *(_BYTE *)(a1 + 385) = 9;
  *(_DWORD *)(a1 + 386) = 0;
  *(_WORD *)(a1 + 390) = 0;
  v2 = HUBMISC_ControlTransfer(
         *(_QWORD *)a1,
         *(_QWORD *)(a1 + 24),
         a1,
         (int)a1 + 232,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         0,
         *(_BYTE *)(a1 + 1496));
  if ( v2 < 0 )
  {
    LODWORD(v3) = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x42u,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
      v3);
    HUBSM_AddEvent(a1 + 488, 4004);
  }
}
