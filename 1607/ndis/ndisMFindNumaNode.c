/*
 * XREFs of ndisMFindNumaNode @ 0x1C009F30C
 * Callers:
 *     ndisMFindNumaDistances @ 0x1C009EF48 (ndisMFindNumaDistances.c)
 * Callees:
 *     NdisCloseConfiguration @ 0x1C009F840 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00A0620 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00A0980 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisMFindNumaNode(__int64 a1)
{
  int v2; // ebx
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
    if ( ParameterValue->ParameterData.IntegerData > KeQueryHighestNodeNumber() )
      v2 = -1073676267;
    else
      *(_WORD *)(a1 + 4456) = ParameterValue->ParameterData.StringData.Length;
  }
  NdisCloseConfiguration(ConfigurationHandle);
  if ( v2 < 0 )
    return (unsigned int)IoGetDeviceNumaNode(*(PDEVICE_OBJECT *)(a1 + 3888), (PUSHORT)(a1 + 4456));
  return (unsigned int)v2;
}
