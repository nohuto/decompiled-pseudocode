/*
 * XREFs of ndisMFindNumaNode @ 0x1C00AA75C
 * Callers:
 *     ndisMFindNumaDistances @ 0x1C00AAAA8 (ndisMFindNumaDistances.c)
 * Callees:
 *     NdisCloseConfiguration @ 0x1C00A9050 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00A9EE0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00AA1F0 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisMFindNumaNode(__int64 a1)
{
  int v2; // ebx
  PNDIS_CONFIGURATION_PARAMETER v4; // rsi
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+30h] [rbp-20h] BYREF
  int Status; // [rsp+70h] [rbp+20h] BYREF
  PVOID ConfigurationHandle; // [rsp+78h] [rbp+28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+80h] [rbp+30h] BYREF

  ConfigObject.Flags = 0;
  ConfigObject.NdisHandle = (void *)a1;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( Status < 0 )
    return (unsigned int)IoGetDeviceNumaNode(*(PDEVICE_OBJECT *)(a1 + 3888), (PUSHORT)(a1 + 4456));
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NumaNodeIdStr, NdisParameterInteger);
  v2 = Status;
  if ( Status >= 0 )
  {
    v4 = ParameterValue;
    if ( v4->ParameterData.IntegerData <= KeQueryHighestNodeNumber() )
      *(_WORD *)(a1 + 4456) = v4->ParameterData.StringData.Length;
    else
      v2 = -1073676267;
  }
  NdisCloseConfiguration(ConfigurationHandle);
  if ( v2 < 0 )
    return (unsigned int)IoGetDeviceNumaNode(*(PDEVICE_OBJECT *)(a1 + 3888), (PUSHORT)(a1 + 4456));
  return (unsigned int)v2;
}
