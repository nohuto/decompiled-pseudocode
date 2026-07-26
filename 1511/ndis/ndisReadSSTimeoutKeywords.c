/*
 * XREFs of ndisReadSSTimeoutKeywords @ 0x1C00D6394
 * Callers:
 *     ndisSelectiveSuspendInitialize @ 0x1C00D65CC (ndisSelectiveSuspendInitialize.c)
 * Callees:
 *     WPP_SF_dq @ 0x1C0047594 (WPP_SF_dq.c)
 *     NdisCloseConfiguration @ 0x1C009D130 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C009DFB0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C009E2C0 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisReadSSTimeoutKeywords(_QWORD *a1)
{
  NDIS_STATUS v2; // eax
  __int64 result; // rax
  unsigned int IntegerData; // edi
  unsigned int v5; // edi
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+30h] [rbp-20h] BYREF
  int Status; // [rsp+70h] [rbp+20h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+78h] [rbp+28h] BYREF
  PVOID ConfigurationHandle; // [rsp+80h] [rbp+30h] BYREF

  *(_QWORD *)&ConfigObject.Header.Revision = 0LL;
  ConfigObject.NdisHandle = a1;
  *((_BYTE *)&ConfigObject.Flags + 4) = 0;
  ConfigObject.Flags = 0;
  *(_WORD *)((char *)&ConfigObject.Flags + 5) = 0;
  *((_BYTE *)&ConfigObject.Flags + 7) = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  v2 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  Status = v2;
  if ( v2 )
  {
    if ( (unsigned __int8)byte_1C0083716 >= 2u )
      WPP_SF_dq(0xCu, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, v2, a1);
    result = a1[564];
    *(_DWORD *)(result + 8) = 5000;
  }
  else
  {
    IntegerData = 5;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &SSIdleTimeoutStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData - 1 <= 0x3B )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    v5 = 1000 * IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &SSIdleTimeoutMsStr, NdisParameterInteger);
    if ( !Status )
      v5 = ParameterValue->ParameterData.IntegerData;
    NdisCloseConfiguration(ConfigurationHandle);
    result = a1[564];
    *(_DWORD *)(result + 8) = v5;
  }
  return result;
}
