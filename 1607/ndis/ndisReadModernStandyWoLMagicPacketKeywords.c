/*
 * XREFs of ndisReadModernStandyWoLMagicPacketKeywords @ 0x1C00D1AA0
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisCloseConfiguration @ 0x1C009F840 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00A0620 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00A0980 (NdisOpenConfigurationEx.c)
 */

void __fastcall ndisReadModernStandyWoLMagicPacketKeywords(_DWORD *a1)
{
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+30h] [rbp-20h] BYREF
  int Status; // [rsp+60h] [rbp+10h] BYREF
  PVOID ConfigurationHandle; // [rsp+68h] [rbp+18h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+70h] [rbp+20h] BYREF

  ConfigObject.Flags = 0;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !Status )
  {
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      ConfigurationHandle,
      &ModernStandbyWoLMagicPacketStr,
      NdisParameterInteger);
    if ( !Status )
      a1[1473] = ParameterValue->ParameterData.IntegerData;
    NdisCloseConfiguration(ConfigurationHandle);
  }
}
