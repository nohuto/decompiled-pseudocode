/*
 * XREFs of ndisUpdateHDSplitKeyword @ 0x1C00C21D0
 * Callers:
 *     ndisOidPreSetHDSplitParameters @ 0x1C00C0EA0 (ndisOidPreSetHDSplitParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     NdisCloseConfiguration @ 0x1C009D130 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C009E2C0 (NdisOpenConfigurationEx.c)
 *     NdisWriteConfiguration @ 0x1C00C6E70 (NdisWriteConfiguration.c)
 */

__int64 __fastcall ndisUpdateHDSplitKeyword(void *a1, int a2)
{
  unsigned int v4; // ebx
  int Status; // [rsp+30h] [rbp-39h] BYREF
  PVOID ConfigurationHandle; // [rsp+38h] [rbp-31h] BYREF
  _UNICODE_STRING String; // [rsp+40h] [rbp-29h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+50h] [rbp-19h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+68h] [rbp-1h] BYREF
  _WORD v11[20]; // [rsp+80h] [rbp+17h] BYREF

  ConfigurationHandle = 0LL;
  *(_DWORD *)&String.Length = 0;
  String.Buffer = 0LL;
  memset(v11, 0, sizeof(v11));
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qD(0xEAu, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, (__int64)a1, a2);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v4 = Status;
  if ( !Status )
  {
    String.MaximumLength = 40;
    String.Buffer = v11;
    if ( RtlIntegerToUnicodeString(a2, 0xAu, &String) )
    {
      v4 = -1073741823;
    }
    else
    {
      ParameterValue.ParameterType = NdisParameterString;
      ParameterValue.ParameterData.StringData = String;
      NdisWriteConfiguration(&Status, ConfigurationHandle, &HDSplitStr, &ParameterValue);
      v4 = Status;
    }
  }
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qdD(0xEBu, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, (__int64)a1, a2, v4);
  return v4;
}
