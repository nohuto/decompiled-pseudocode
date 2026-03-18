/*
 * XREFs of HUBHTX_GetDescriptor @ 0x1C0002C10
 * Callers:
 *     HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x1C0002D18 (HUBHTX_GetHubDescriptorUsingControlTransfer.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength @ 0x1C00083A0 (HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength @ 0x1C00084B0 (HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength.c)
 * Callees:
 *     WPP_RECORDER_SF_c @ 0x1C0001F34 (WPP_RECORDER_SF_c.c)
 *     WPP_RECORDER_SF_cd @ 0x1C0002430 (WPP_RECORDER_SF_cd.c)
 *     HUBMISC_ControlTransfer @ 0x1C002956C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetDescriptor(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  int v7; // esi
  char v9; // al
  int v11; // [rsp+20h] [rbp-38h]

  v7 = a3;
  v9 = *(_BYTE *)(a1 + 920);
  *(_WORD *)(a1 + 921) = 6;
  *(_BYTE *)(a1 + 923) = a4;
  *(_BYTE *)(a1 + 920) = v9 & 0x1C | (32 * ((a6 != 0) | 0xFC));
  *(_WORD *)(a1 + 924) = 0;
  *(_WORD *)(a1 + 926) = a3;
  if ( a6 )
    WPP_RECORDER_SF_c(
      *(_QWORD *)(a1 + 2488),
      4u,
      3u,
      0xFu,
      (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
      a4);
  else
    WPP_RECORDER_SF_cd(*(_QWORD *)(a1 + 2488), a2, a3, a4, v11);
  return HUBMISC_ControlTransfer(
           a1,
           *(_QWORD *)(a1 + 240),
           a1,
           (int)a1 + 768,
           (__int64)HUBHTX_HubControlTransferComplete,
           a2,
           v7,
           1,
           *(_BYTE *)(a1 + 2240));
}
