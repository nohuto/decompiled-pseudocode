/*
 * XREFs of ndisUpdateHDSplitKeyword @ 0x1C00C8DB0
 * Callers:
 *     ndisOidPreSetHDSplitParameters @ 0x1C00C7A80 (ndisOidPreSetHDSplitParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     NdisCloseConfiguration @ 0x1C00A9050 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00AA1F0 (NdisOpenConfigurationEx.c)
 *     NdisWriteConfiguration @ 0x1C00CDA60 (NdisWriteConfiguration.c)
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
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qD(0xE8u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, (__int64)a1, a2);
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
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qdD(0xE9u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, (__int64)a1, a2, v4);
  return v4;
}
