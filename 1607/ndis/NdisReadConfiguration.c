/*
 * XREFs of NdisReadConfiguration @ 0x1C00A0620
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0013B84 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005D498 (ndisCheckIfTypeMismatch.c)
 *     NdisReadNetworkAddress @ 0x1C009EA60 (NdisReadNetworkAddress.c)
 *     ndisMFindNumaNode @ 0x1C009F30C (ndisMFindNumaNode.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009F394 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReadMiniportSpecificPortAuthStates @ 0x1C009F434 (ndisReadMiniportSpecificPortAuthStates.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C009F758 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ndisReadRssKeywords @ 0x1C009F89C (ndisReadRssKeywords.c)
 *     ndisReadPMAdminConfigState @ 0x1C009FC24 (ndisReadPMAdminConfigState.c)
 *     ndisInitializeConfiguration @ 0x1C009FC68 (ndisInitializeConfiguration.c)
 *     ndisReadOffloadRegistry @ 0x1C00A022C (ndisReadOffloadRegistry.c)
 *     ndisUpdateOffloadKeywords @ 0x1C00C745C (ndisUpdateOffloadKeywords.c)
 *     NdisWdfReadConfiguration @ 0x1C00CC860 (NdisWdfReadConfiguration.c)
 *     ndisGetMiniportInfo @ 0x1C00D0B78 (ndisGetMiniportInfo.c)
 *     ndisReadModernStandyWoLMagicPacketKeywords @ 0x1C00D1AA0 (ndisReadModernStandyWoLMagicPacketKeywords.c)
 *     ndisIovReadSwitchConfiguration @ 0x1C00D9420 (ndisIovReadSwitchConfiguration.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00DC2BC (ndisReadSSTimeoutKeywords.c)
 *     ndisIfInitialize @ 0x1C0102000 (ndisIfInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_Z @ 0x1C0042BCC (WPP_SF_Z.c)
 *     ndisReadUpperBindings @ 0x1C004FE28 (ndisReadUpperBindings.c)
 *     ndisSaveParameters @ 0x1C00AEAD0 (ndisSaveParameters.c)
 *     ndisOpenProtocolSubkey @ 0x1C00CC908 (ndisOpenProtocolSubkey.c)
 *     ndisNDKGlobalDisabled @ 0x1C00D70D4 (ndisNDKGlobalDisabled.c)
 *     ndisReadNDKGlobalFlags @ 0x1C00D7744 (ndisReadNDKGlobalFlags.c)
 */

void __stdcall NdisReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        NDIS_PARAMETER_TYPE ParameterType)
{
  PNDIS_STATUS v7; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // edi
  NDIS_PARAMETER_TYPE v11; // esi
  __int64 v12; // rdi
  NTSTATUS RegistryValues; // ebx
  char *PoolWithTag; // rax
  char *v15; // r12
  PNDIS_CONFIGURATION_PARAMETER v16; // rcx
  struct _NDIS_CONFIGURATION_PARAMETER *v17; // rax
  __int64 Length; // r9
  const wchar_t *v19; // rcx
  wchar_t *Buffer; // r8
  __int64 v21; // rdx
  __int64 v22; // rsi
  unsigned int v23; // r8d
  unsigned int v24; // edi
  unsigned __int8 v25; // dl
  int v26; // eax
  _NDIS_M_DRIVER_BLOCK *v27; // rcx
  PVOID v28; // rdi
  int v30; // [rsp+38h] [rbp-59h] BYREF
  NTSTATUS v31; // [rsp+3Ch] [rbp-55h] BYREF
  PVOID v32; // [rsp+40h] [rbp-51h] BYREF
  PVOID P; // [rsp+48h] [rbp-49h]
  _UNICODE_STRING String; // [rsp+50h] [rbp-41h] BYREF
  _DWORD v35[2]; // [rsp+60h] [rbp-31h]
  char v36; // [rsp+68h] [rbp-29h]
  _BYTE v37[40]; // [rsp+70h] [rbp-21h] BYREF

  v7 = Status;
  memset(v37, 0, sizeof(v37));
  v9 = 0;
  v35[0] = 67305985;
  v32 = 0LL;
  v35[1] = 33620481;
  v36 = 3;
  if ( (unsigned __int8)byte_1C00895CF >= 4u )
    WPP_SF_Z(0x12u, &WPP_88e16e7e343236ed4c0ce3da79f3a552_Traceguids, &Keyword->Length);
  v10 = 0;
  P = Keyword->Buffer;
  v31 = -1073741823;
  do
  {
    if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1C0075100 + v10, 1u) )
    {
      v17 = (struct _NDIS_CONFIGURATION_PARAMETER *)((char *)&unk_1C007A9C0 + 24 * v10);
      goto LABEL_48;
    }
    ++v10;
  }
  while ( v10 < 3 );
  v11 = ParameterType;
  v12 = *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 8LL);
  if ( !v12 )
    goto LABEL_16;
  if ( RtlEqualUnicodeString(Keyword, &String2, 1u) )
  {
    Length = *(unsigned __int16 *)(v12 + 3864);
    v19 = L"MiniportName";
    Buffer = *(wchar_t **)(v12 + 3872);
    v21 = 1LL;
    goto LABEL_54;
  }
  if ( !RtlEqualUnicodeString(Keyword, &stru_1C0075160, 1u)
    || (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 1) != 0 )
  {
    goto LABEL_90;
  }
  if ( (unsigned int)ParameterType <= NdisParameterHexInteger )
  {
    v21 = 4LL;
    Buffer = (wchar_t *)(v12 + 3768);
    Length = 4LL;
    goto LABEL_53;
  }
  if ( ParameterType != NdisParameterString )
  {
LABEL_90:
    do
    {
      if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1C0075070 + v9, 1u) )
        break;
      ++v9;
    }
    while ( v9 < 9 );
    RegistryValues = v31;
    v11 = ParameterType;
    if ( v9 >= 9 )
    {
      if ( RtlEqualUnicodeString(Keyword, &stru_1C0075150, 1u) )
      {
        if ( ParameterType )
          goto LABEL_25;
        if ( (unsigned __int8)ndisNDKGlobalDisabled() )
          goto LABEL_46;
      }
      if ( RtlEqualUnicodeString(Keyword, &stru_1C0075140, 1u) )
      {
        if ( ParameterType )
          goto LABEL_25;
        dword_1C008AF58 = ndisReadNDKGlobalFlags();
        v17 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1C008AF50;
        goto LABEL_47;
      }
      if ( RtlEqualUnicodeString(Keyword, &::Keyword, 1u) )
      {
        *(_DWORD *)(v12 + 568) |= 0x80u;
        *(_DWORD *)(v12 + 1872) |= 0x10000u;
      }
LABEL_16:
      if ( !ndisAllowFlowControl && RtlEqualUnicodeString(Keyword, &FlowControlStr, 1u) )
      {
        if ( (unsigned __int8)byte_1C00895CF >= 3u )
          WPP_SF_(0x13u, &WPP_88e16e7e343236ed4c0ce3da79f3a552_Traceguids);
LABEL_46:
        v17 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1C0076FA0;
LABEL_47:
        v7 = Status;
LABEL_48:
        *ParameterValue = v17;
        RegistryValues = 0;
        goto LABEL_26;
      }
      if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0 || *((_QWORD *)ConfigurationHandle + 4) )
        RegistryValues = 0;
      else
        RegistryValues = ndisOpenProtocolSubkey(ConfigurationHandle);
      if ( RegistryValues >= 0 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Keyword->Length + 2LL, 0x2020444Eu);
        P = PoolWithTag;
        v15 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_30;
        memmove(PoolWithTag, Keyword->Buffer, Keyword->Length);
        *(_WORD *)&v15[Keyword->Length] = 0;
        *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 40LL) = v15;
        *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 48LL) = ParameterValue;
        RegistryValues = RtlQueryRegistryValuesEx(
                           0x40000000u,
                           *((PCWSTR *)ConfigurationHandle + 4),
                           (PRTL_QUERY_REGISTRY_TABLE)(*((_QWORD *)ConfigurationHandle + 2) + 24LL),
                           ConfigurationHandle,
                           0LL);
      }
      if ( !v12 )
      {
        if ( RegistryValues >= 0 )
        {
LABEL_34:
          v16 = *ParameterValue;
          if ( (*ParameterValue)->ParameterType == NdisParameterString )
          {
            if ( v11 )
            {
              if ( v11 == NdisParameterHexInteger )
              {
                RtlUnicodeStringToInteger((PCUNICODE_STRING)&v16->ParameterData, 0x10u, &v16->ParameterData.IntegerData);
                (*ParameterValue)->ParameterType = NdisParameterHexInteger;
              }
            }
            else
            {
              RtlUnicodeStringToInteger((PCUNICODE_STRING)&v16->ParameterData, 0xAu, &v16->ParameterData.IntegerData);
              (*ParameterValue)->ParameterType = NdisParameterInteger;
            }
          }
          goto LABEL_25;
        }
        if ( RtlEqualUnicodeString(Keyword, &stru_1C0075180, 1u) )
        {
          v27 = (_NDIS_M_DRIVER_BLOCK *)*((_QWORD *)ConfigurationHandle + 1);
          if ( v27 )
          {
            if ( v27->Header.Type == 2
              && v27->MajorNdisVersion >= 6u
              && !(unsigned int)ndisReadUpperBindings(v27, &v32, (unsigned int *)&v31) )
            {
              v28 = v32;
              RegistryValues = ndisSaveParameters(
                                 L"UpperBindings",
                                 7LL,
                                 v32,
                                 (unsigned int)v31,
                                 ConfigurationHandle,
                                 ParameterValue);
              if ( v28 )
                ExFreePoolWithTag(v28, 0);
            }
          }
        }
      }
      if ( RegistryValues < 0 )
        goto LABEL_25;
      goto LABEL_34;
    }
    v22 = *(_QWORD *)(v12 + 944);
    if ( !v22 )
      goto LABEL_25;
    v23 = *(_DWORD *)(v22 + 16);
    v24 = 0;
    if ( !v23 )
    {
LABEL_73:
      if ( v24 >= *(_DWORD *)(v22 + 16) )
        RegistryValues = -1073741823;
      goto LABEL_25;
    }
    v25 = *((_BYTE *)v35 + v9);
    while ( *(_BYTE *)(v22 + 20LL * v24 + 20) != v25 )
    {
      if ( ++v24 >= v23 )
        goto LABEL_73;
    }
    if ( v25 == 1 )
    {
      v26 = *(_DWORD *)(v22 + 20LL * v24 + 24);
    }
    else if ( v25 == 2 )
    {
      v26 = *(unsigned __int16 *)(v22 + 20LL * v24 + 24);
    }
    else
    {
      if ( (unsigned int)v25 - 3 > 1 )
      {
LABEL_72:
        RegistryValues = ndisSaveParameters(
                           *((_QWORD *)&unk_1C0075070 + 2 * v9 + 1),
                           4LL,
                           &v30,
                           4LL,
                           ConfigurationHandle,
                           ParameterValue);
        goto LABEL_73;
      }
      v26 = *(_DWORD *)(v22 + 20LL * v24 + 24);
    }
    v30 = v26;
    goto LABEL_72;
  }
  *(_DWORD *)&String.Length = 2621440;
  String.Buffer = (wchar_t *)v37;
  RegistryValues = RtlIntegerToUnicodeString(*(_DWORD *)(v12 + 3768), 0xAu, &String);
  if ( !RegistryValues )
  {
    Length = String.Length;
    v21 = 1LL;
    Buffer = String.Buffer;
LABEL_53:
    v19 = L"BusType";
LABEL_54:
    RegistryValues = ndisSaveParameters(v19, v21, Buffer, Length, ConfigurationHandle, ParameterValue);
  }
LABEL_25:
  v7 = Status;
LABEL_26:
  if ( P && P != Keyword->Buffer )
    ExFreePoolWithTag(P, 0);
  if ( RegistryValues < 0 )
  {
LABEL_30:
    *Status = -1073741823;
    goto LABEL_31;
  }
  *v7 = 0;
LABEL_31:
  if ( (unsigned __int8)byte_1C00895CF >= 4u )
    WPP_SF_(0x14u, &WPP_88e16e7e343236ed4c0ce3da79f3a552_Traceguids);
}
