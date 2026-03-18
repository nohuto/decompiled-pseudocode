/*
 * XREFs of HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0002B24
 * Callers:
 *     HUBHSM_GettingHubPortStatus @ 0x1C0006D00 (HUBHSM_GettingHubPortStatus.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026388 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetHubStatusUsingControlTransfer(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+28h] [rbp-30h]

  v1 = a1 + 700;
  *(_BYTE *)(a1 + 872) = *(_BYTE *)(a1 + 872) & 0x1C | 0xA0;
  *(_BYTE *)(a1 + 873) = 0;
  *(_DWORD *)(a1 + 874) = 0;
  *(_WORD *)(a1 + 878) = 4;
  *(_DWORD *)(a1 + 704) = *(_DWORD *)(a1 + 700);
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2440), 4u, 3u, 0x19u, (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids);
  result = HUBMISC_ControlTransfer(
             a1,
             *(_QWORD *)(a1 + 208),
             a1,
             (int)a1 + 720,
             (__int64)HUBHTX_HubControlTransferComplete,
             v1,
             4,
             0,
             *(_BYTE *)(a1 + 2192));
  if ( (int)result < 0 )
  {
    LODWORD(v4) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2440),
      2u,
      3u,
      0x1Au,
      (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
      v4);
    return HUBSM_AddEvent(a1 + 1184, 2004LL);
  }
  return result;
}
