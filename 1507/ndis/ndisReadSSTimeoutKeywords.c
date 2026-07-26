/*
 * XREFs of ndisReadSSTimeoutKeywords @ 0x1C00DCA44
 * Callers:
 *     ndisSelectiveSuspendInitialize @ 0x1C00DCC7C (ndisSelectiveSuspendInitialize.c)
 * Callees:
 *     WPP_SF_dq @ 0x1C0046274 (WPP_SF_dq.c)
 *     NdisCloseConfiguration @ 0x1C00A9050 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00A9EE0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00AA1F0 (NdisOpenConfigurationEx.c)
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
    if ( (unsigned __int8)byte_1C0085316 >= 2u )
      WPP_SF_dq(0xCu, &WPP_a612080d527c97bcc88e648492c760b7_Traceguids, v2, a1);
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
