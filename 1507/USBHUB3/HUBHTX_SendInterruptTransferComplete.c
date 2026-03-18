/*
 * XREFs of HUBHTX_SendInterruptTransferComplete @ 0x1C0002F20
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqqq @ 0x1C00018F0 (Template_pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001A3C (WPP_RECORDER_SF_dD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0026954 (HUBMISC_VerifierDbgBreak.c)
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

  v4 = *(unsigned __int16 *)(a4 + 932);
  v6 = *(_DWORD *)(a3 + 8);
  v7 = *(_DWORD *)(a4 + 900);
  v8 = *(_QWORD *)(a4 + 1040);
  *(_WORD *)(a4 + 1050) = v4;
  *(_DWORD *)(a4 + 1056) = 8 * v4;
  *(_QWORD *)(a4 + 1064) = v8;
  if ( v6 < 0 )
  {
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a4 + 2440),
      2u,
      3u,
      0x1Du,
      (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
      v6,
      v7);
    if ( v6 != -1073741536 )
    {
      LODWORD(v15) = v7;
      LODWORD(v13) = v6;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a4 + 2440),
        2u,
        3u,
        0x1Eu,
        (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
        v13,
        v15);
      if ( (*(_DWORD *)(a4 + 2512) & 4) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierInterruptTransferFailure", a4 + 1184);
      *(_DWORD *)(a4 + 2516) = 1073872898;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x4000) != 0 )
      {
        LODWORD(v16) = v6;
        LODWORD(v14) = v7;
        LODWORD(v12) = 0;
        Template_pqqq(
          v9,
          &USBHUB3_ETW_EVENT_PORT_INTERRUPT_TRANSFER_ERROR,
          (const GUID *)(a4 + 2332),
          *(_QWORD *)(a4 + 208),
          v12,
          v14,
          v16);
      }
    }
  }
  v10 = 2030LL;
  if ( v6 >= 0 )
    v10 = 2034LL;
  return HUBSM_AddEvent(a4 + 1184, v10);
}
