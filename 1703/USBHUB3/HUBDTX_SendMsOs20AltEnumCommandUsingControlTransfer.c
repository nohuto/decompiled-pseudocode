/*
 * XREFs of HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x1C0022BE4
 * Callers:
 *     HUBDSM_SendingMsOs20AltEnumCmdOnReenum @ 0x1C001A690 (HUBDSM_SendingMsOs20AltEnumCmdOnReenum.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002956C (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+28h] [rbp-30h]

  *(_BYTE *)(a1 + 384) = 64;
  *(_BYTE *)(a1 + 385) = *(_BYTE *)(a1 + 2036);
  *(_BYTE *)(a1 + 387) = *(_BYTE *)(a1 + 2471);
  *(_BYTE *)(a1 + 386) = 0;
  *(_DWORD *)(a1 + 388) = 8;
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
  if ( v2 >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2452), 1u);
  }
  else
  {
    LODWORD(v3) = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x31u,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
      v3);
    HUBSM_AddEvent(a1 + 488, 4004);
  }
}
