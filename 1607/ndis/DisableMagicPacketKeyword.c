/*
 * XREFs of DisableMagicPacketKeyword @ 0x1C00C7F70
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 *     NdisCloseConfiguration @ 0x1C009F840 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00A0980 (NdisOpenConfigurationEx.c)
 *     ndisWritePMAdminConfigState @ 0x1C00CB2B0 (ndisWritePMAdminConfigState.c)
 */

void __fastcall DisableMagicPacketKeyword(_DWORD *a1)
{
  NDIS_STATUS v2; // eax
  NDIS_HANDLE v3; // rcx
  struct _NDIS_CONFIGURATION_OBJECT v4; // [rsp+20h] [rbp-28h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+50h] [rbp+8h] BYREF

  ConfigurationHandle = 0LL;
  v4.Flags = 0;
  v4.NdisHandle = a1;
  v4.Header = (_NDIS_OBJECT_HEADER)1573289;
  v2 = NdisOpenConfigurationEx(&v4, &ConfigurationHandle);
  if ( v2 )
  {
    if ( (unsigned __int8)byte_1C00895D5 >= 2u )
      WPP_SF_dq(0x8Fu, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, v2, a1);
  }
  else
  {
    ndisWritePMAdminConfigState(ConfigurationHandle, &WakeOnMagicPacketStr);
    v3 = ConfigurationHandle;
    a1[992] = a1[992] & 0xFFFFFFF3 | 4;
    NdisCloseConfiguration(v3);
  }
}
