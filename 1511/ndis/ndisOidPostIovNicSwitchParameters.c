/*
 * XREFs of ndisOidPostIovNicSwitchParameters @ 0x1C0064EF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C00139E8 (ndisIovFindSwitchBySwitchId.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     NdisCloseConfiguration @ 0x1C009D130 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C009E2C0 (NdisOpenConfigurationEx.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C00A0BF0 (NdisOpenConfigurationKeyByName.c)
 *     NdisWriteConfiguration @ 0x1C00C6E70 (NdisWriteConfiguration.c)
 */

void __fastcall ndisOidPostIovNicSwitchParameters(__int64 a1)
{
  __int64 v1; // r15
  void *v3; // rdi
  int v4; // eax
  __int64 v5; // rbx
  __int64 *SwitchBySwitchId; // r13
  __int64 v7; // r8
  unsigned __int16 *v8; // rdx
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+20h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+38h] [rbp-18h] BYREF
  int Status; // [rsp+80h] [rbp+30h] BYREF
  PVOID SubKeyHandle; // [rsp+88h] [rbp+38h] BYREF
  PVOID ConfigurationHandle; // [rsp+90h] [rbp+40h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  ConfigurationHandle = 0LL;
  SubKeyHandle = 0LL;
  v3 = *(void **)a1;
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_qq(
      0x1Bu,
      &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids,
      v3,
      v1,
      *(_QWORD *)&ConfigObject.Header.Type,
      ConfigObject.NdisHandle,
      *(_QWORD *)&ConfigObject.Flags);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL) == 1 )
  {
    if ( v3 )
    {
      v4 = *(_DWORD *)(a1 + 40);
      if ( !v4 || v4 == -1071448016 )
      {
        v5 = *(_QWORD *)(v1 + 40);
        SwitchBySwitchId = ndisIovFindSwitchBySwitchId((__int64)v3, *(_DWORD *)(v5 + 12));
        if ( SwitchBySwitchId )
        {
          ConfigObject.Flags = 0;
          ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
          ConfigObject.NdisHandle = v3;
          Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
          if ( !Status )
          {
            NdisOpenConfigurationKeyByName(&Status, ConfigurationHandle, &NicSwitchDefaultSwitchStr, &SubKeyHandle);
            if ( !Status && (*(_DWORD *)(v5 + 4) & 0x10000) != 0 )
            {
              v7 = 4LL;
              v8 = (unsigned __int16 *)(v5 + 16);
              v9 = (_OWORD *)((char *)SwitchBySwitchId + 116);
              v10 = (_OWORD *)(v5 + 16);
              do
              {
                *v9 = *v10;
                v9[1] = v10[1];
                v9[2] = v10[2];
                v9[3] = v10[3];
                v9[4] = v10[4];
                v9[5] = v10[5];
                v9[6] = v10[6];
                v9 += 8;
                v11 = v10[7];
                v10 += 8;
                *(v9 - 1) = v11;
                --v7;
              }
              while ( v7 );
              *(_DWORD *)v9 = *(_DWORD *)v10;
              ParameterValue.ParameterType = NdisParameterString;
              ParameterValue.ParameterData.StringData.Buffer = (wchar_t *)(v5 + 18);
              ParameterValue.ParameterData.StringData.Length = *v8;
              ParameterValue.ParameterData.StringData.MaximumLength = *v8 + 2;
              NdisWriteConfiguration(&Status, SubKeyHandle, &NicSwitchNameStr, &ParameterValue);
            }
            if ( SubKeyHandle )
              NdisCloseConfiguration(SubKeyHandle);
          }
          if ( ConfigurationHandle )
            NdisCloseConfiguration(ConfigurationHandle);
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_qq(0x1Cu, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v3, v1);
}
