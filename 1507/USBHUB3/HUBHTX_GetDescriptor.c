/*
 * XREFs of HUBHTX_GetDescriptor @ 0x1C00027EC
 * Callers:
 *     HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x1C00028F0 (HUBHTX_GetHubDescriptorUsingControlTransfer.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength @ 0x1C00079F0 (HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength @ 0x1C0007AF0 (HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength.c)
 * Callees:
 *     WPP_RECORDER_SF_c @ 0x1C0001B58 (WPP_RECORDER_SF_c.c)
 *     WPP_RECORDER_SF_cd @ 0x1C0002040 (WPP_RECORDER_SF_cd.c)
 *     HUBMISC_ControlTransfer @ 0x1C0026388 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetDescriptor(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  int v7; // esi
  char v9; // al
  int v11; // [rsp+20h] [rbp-38h]

  v7 = a3;
  v9 = *(_BYTE *)(a1 + 872);
  *(_WORD *)(a1 + 873) = 6;
  *(_BYTE *)(a1 + 875) = a4;
  *(_BYTE *)(a1 + 872) = v9 & 0x1C | (32 * ((a6 != 0) | 0xFC));
  *(_WORD *)(a1 + 876) = 0;
  *(_WORD *)(a1 + 878) = a3;
  if ( a6 )
    WPP_RECORDER_SF_c(
      *(_QWORD *)(a1 + 2440),
      4u,
      3u,
      0xFu,
      (__int64)&WPP_08e7bf601c3e12d09f184cac358a51ee_Traceguids,
      a4);
  else
    WPP_RECORDER_SF_cd(*(_QWORD *)(a1 + 2440), a2, a3, a4, v11);
  return HUBMISC_ControlTransfer(
           a1,
           *(_QWORD *)(a1 + 208),
           a1,
           (int)a1 + 720,
           (__int64)HUBHTX_HubControlTransferComplete,
           a2,
           v7,
           1,
           *(_BYTE *)(a1 + 2192));
}
