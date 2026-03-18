/*
 * XREFs of HUBHTX_SendInterruptTransferComplete @ 0x1C0003280
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqqq @ 0x1C0001C50 (Template_pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D9C (WPP_RECORDER_SF_dD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0027608 (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBHTX_SendInterruptTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v6; // edi
  int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v4 = *(unsigned __int16 *)(a4 + 956);
  v6 = *(_DWORD *)(a3 + 8);
  v7 = *(_DWORD *)(a4 + 924);
  v8 = *(_QWORD *)(a4 + 1064);
  *(_WORD *)(a4 + 1074) = v4;
  *(_DWORD *)(a4 + 1080) = 8 * v4;
  *(_QWORD *)(a4 + 1088) = v8;
  if ( v6 < 0 )
  {
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a4 + 2464),
      2u,
      3u,
      0x1Du,
      (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
      v6,
      v7);
    if ( v6 != -1073741536 )
    {
      LODWORD(v15) = v7;
      LODWORD(v13) = v6;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a4 + 2464),
        2u,
        3u,
        0x1Eu,
        (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
        v13,
        v15);
      if ( (*(_DWORD *)(a4 + 2536) & 4) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierInterruptTransferFailure", a4 + 1208);
      *(_DWORD *)(a4 + 2540) = 1073872898;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x8000) != 0 )
      {
        LODWORD(v16) = v6;
        LODWORD(v14) = v7;
        LODWORD(v12) = 0;
        Template_pqqq(
          v9,
          &USBHUB3_ETW_EVENT_PORT_INTERRUPT_TRANSFER_ERROR,
          (const GUID *)(a4 + 2356),
          *(_QWORD *)(a4 + 224),
          v12,
          v14,
          v16);
      }
    }
  }
  v10 = 2030LL;
  if ( v6 >= 0 )
    v10 = 2034LL;
  return HUBSM_AddEvent(a4 + 1208, v10);
}
