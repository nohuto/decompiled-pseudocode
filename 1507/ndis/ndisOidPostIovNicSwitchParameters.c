/*
 * XREFs of ndisOidPostIovNicSwitchParameters @ 0x1C0065D20
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C000F894 (ndisIovFindSwitchBySwitchId.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C00A5D70 (NdisOpenConfigurationKeyByName.c)
 *     NdisCloseConfiguration @ 0x1C00A9050 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00AA1F0 (NdisOpenConfigurationEx.c)
 *     NdisWriteConfiguration @ 0x1C00CDA60 (NdisWriteConfiguration.c)
 */

void __fastcall ndisOidPostIovNicSwitchParameters(__int64 a1)
{
  __int64 v1; // r15
  void *v3; // rdi
  int v4; // eax
  __int64 v5; // rbx
  __int64 *SwitchBySwitchId; // r13
  NDIS_STATUS v7; // eax
  PVOID v8; // rsi
  __int64 v9; // r8
  unsigned __int16 *v10; // rdx
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
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
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_qq(
      0x18u,
      &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids,
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
          v7 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
          v8 = ConfigurationHandle;
          Status = v7;
          if ( !v7 )
          {
            NdisOpenConfigurationKeyByName(&Status, ConfigurationHandle, &NicSwitchDefaultSwitchStr, &SubKeyHandle);
            if ( !Status && (*(_DWORD *)(v5 + 4) & 0x10000) != 0 )
            {
              v9 = 4LL;
              v10 = (unsigned __int16 *)(v5 + 16);
              v11 = (_OWORD *)((char *)SwitchBySwitchId + 116);
              v12 = (_OWORD *)(v5 + 16);
              do
              {
                *v11 = *v12;
                v11[1] = v12[1];
                v11[2] = v12[2];
                v11[3] = v12[3];
                v11[4] = v12[4];
                v11[5] = v12[5];
                v11[6] = v12[6];
                v11 += 8;
                v13 = v12[7];
                v12 += 8;
                *(v11 - 1) = v13;
                --v9;
              }
              while ( v9 );
              *(_DWORD *)v11 = *(_DWORD *)v12;
              ParameterValue.ParameterType = NdisParameterString;
              ParameterValue.ParameterData.StringData.Buffer = (wchar_t *)(v5 + 18);
              ParameterValue.ParameterData.StringData.Length = *v10;
              ParameterValue.ParameterData.StringData.MaximumLength = *v10 + 2;
              NdisWriteConfiguration(&Status, SubKeyHandle, &NicSwitchNameStr, &ParameterValue);
            }
            if ( SubKeyHandle )
              NdisCloseConfiguration(SubKeyHandle);
          }
          if ( v8 )
            NdisCloseConfiguration(v8);
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_qq(0x19u, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, v3, v1);
}
