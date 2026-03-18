/*
 * XREFs of HUBHTX_GetDescriptor @ 0x1C0002B4C
 * Callers:
 *     HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x1C0002C50 (HUBHTX_GetHubDescriptorUsingControlTransfer.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength @ 0x1C0008000 (HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength @ 0x1C0008100 (HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength.c)
 * Callees:
 *     WPP_RECORDER_SF_c @ 0x1C0001EB8 (WPP_RECORDER_SF_c.c)
 *     WPP_RECORDER_SF_cd @ 0x1C00023A0 (WPP_RECORDER_SF_cd.c)
 *     HUBMISC_ControlTransfer @ 0x1C0027038 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetDescriptor(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  int v7; // esi
  char v9; // al
  int v11; // [rsp+20h] [rbp-38h]

  v7 = a3;
  v9 = *(_BYTE *)(a1 + 896);
  *(_WORD *)(a1 + 897) = 6;
  *(_BYTE *)(a1 + 899) = a4;
  *(_BYTE *)(a1 + 896) = v9 & 0x1C | (32 * ((a6 != 0) | 0xFC));
  *(_WORD *)(a1 + 900) = 0;
  *(_WORD *)(a1 + 902) = a3;
  if ( a6 )
    WPP_RECORDER_SF_c(
      *(_QWORD *)(a1 + 2464),
      4u,
      3u,
      0xFu,
      (__int64)&WPP_aebd157f2d2c311e8b884f2de7866b9a_Traceguids,
      a4);
  else
    WPP_RECORDER_SF_cd(*(_QWORD *)(a1 + 2464), a2, a3, a4, v11);
  return HUBMISC_ControlTransfer(
           a1,
           *(_QWORD *)(a1 + 224),
           a1,
           (int)a1 + 744,
           (__int64)HUBHTX_HubControlTransferComplete,
           a2,
           v7,
           1,
           *(_BYTE *)(a1 + 2216));
}
