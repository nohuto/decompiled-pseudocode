/*
 * XREFs of NdisReadConfiguration @ 0x1C009DFB0
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001F5D8 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisCheckIfTypeMismatch @ 0x1C0058FF4 (ndisCheckIfTypeMismatch.c)
 *     ndisMFindNumaNode @ 0x1C009C6B0 (ndisMFindNumaNode.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009C75C (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisReadNetworkAddress @ 0x1C009C800 (NdisReadNetworkAddress.c)
 *     ndisReadMiniportSpecificPortAuthStates @ 0x1C009C88C (ndisReadMiniportSpecificPortAuthStates.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C009D048 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ndisInitializeConfiguration @ 0x1C009D18C (ndisInitializeConfiguration.c)
 *     ndisReadRssKeywords @ 0x1C009D6E0 (ndisReadRssKeywords.c)
 *     ndisReadPMAdminConfigState @ 0x1C009DA90 (ndisReadPMAdminConfigState.c)
 *     ndisReadOffloadRegistry @ 0x1C009DAD4 (ndisReadOffloadRegistry.c)
 *     ndisUpdateOffloadKeywords @ 0x1C00C2318 (ndisUpdateOffloadKeywords.c)
 *     NdisWdfReadConfiguration @ 0x1C00C6DC0 (NdisWdfReadConfiguration.c)
 *     ndisGetMiniportInfo @ 0x1C00CB158 (ndisGetMiniportInfo.c)
 *     ndisIovReadSwitchConfiguration @ 0x1C00D34E0 (ndisIovReadSwitchConfiguration.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00D6394 (ndisReadSSTimeoutKeywords.c)
 *     ndisIfInitialize @ 0x1C00FEE90 (ndisIfInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_Z @ 0x1C003EFB4 (WPP_SF_Z.c)
 *     ndisReadUpperBindings @ 0x1C004B408 (ndisReadUpperBindings.c)
 *     ndisSaveParameters @ 0x1C00A99D0 (ndisSaveParameters.c)
 *     ndisOpenProtocolSubkey @ 0x1C00C7024 (ndisOpenProtocolSubkey.c)
 *     ndisNDKGlobalDisabled @ 0x1C00D10A0 (ndisNDKGlobalDisabled.c)
 *     ndisReadNDKGlobalFlags @ 0x1C00D1714 (ndisReadNDKGlobalFlags.c)
 */

void __stdcall NdisReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        NDIS_PARAMETER_TYPE ParameterType)
{
  unsigned int v5; // r12d
  PNDIS_STATUS v8; // rsi
  unsigned int v10; // edi
  NDIS_PARAMETER_TYPE v11; // esi
  __int64 v12; // rdi
  NTSTATUS RegistryValues; // ebx
  char *PoolWithTag; // rax
  char *v15; // r12
  PNDIS_CONFIGURATION_PARAMETER v16; // rcx
  __int64 Length; // r9
  const wchar_t *v18; // rcx
  wchar_t *Buffer; // r8
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned int v22; // r8d
  unsigned int v23; // edi
  unsigned __int8 v24; // dl
  int v25; // eax
  struct _NDIS_CONFIGURATION_PARAMETER *v26; // rax
  _NDIS_M_DRIVER_BLOCK *v27; // rcx
  PVOID v28; // rdi
  int v30; // [rsp+38h] [rbp-59h] BYREF
  NTSTATUS v31; // [rsp+3Ch] [rbp-55h] BYREF
  PVOID v32; // [rsp+40h] [rbp-51h] BYREF
  _UNICODE_STRING String; // [rsp+48h] [rbp-49h] BYREF
  PVOID P; // [rsp+58h] [rbp-39h]
  _DWORD v35[2]; // [rsp+60h] [rbp-31h]
  char v36; // [rsp+68h] [rbp-29h]
  _WORD v37[20]; // [rsp+70h] [rbp-21h] BYREF

  v5 = 0;
  memset(v37, 0, sizeof(v37));
  v8 = Status;
  v32 = 0LL;
  v35[0] = 67305985;
  v35[1] = 33620481;
  v36 = 3;
  if ( (unsigned __int8)byte_1C008370F >= 4u )
    WPP_SF_Z(0x12u, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, (__int64 *)Keyword);
  v10 = 0;
  P = Keyword->Buffer;
  v31 = -1073741823;
  do
  {
    if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1C0070690 + v10, 1u) )
    {
      v26 = (struct _NDIS_CONFIGURATION_PARAMETER *)((char *)&unk_1C0075390 + 24 * v10);
      goto LABEL_84;
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
    v18 = L"MiniportName";
    Buffer = *(wchar_t **)(v12 + 3872);
    v20 = 1LL;
    goto LABEL_46;
  }
  if ( !RtlEqualUnicodeString(Keyword, &stru_1C00706F0, 1u)
    || (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 1) != 0 )
  {
    goto LABEL_88;
  }
  if ( (unsigned int)ParameterType <= NdisParameterHexInteger )
  {
    v20 = 4LL;
    Buffer = (wchar_t *)(v12 + 3768);
    Length = 4LL;
    goto LABEL_45;
  }
  if ( ParameterType != NdisParameterString )
  {
LABEL_88:
    do
    {
      if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1C0070600 + v5, 1u) )
        break;
      ++v5;
    }
    while ( v5 < 9 );
    RegistryValues = v31;
    v11 = ParameterType;
    if ( v5 >= 9 )
    {
      if ( RtlEqualUnicodeString(Keyword, &stru_1C00706E0, 1u) )
      {
        if ( ParameterType )
          goto LABEL_24;
        if ( (unsigned __int8)ndisNDKGlobalDisabled() )
          goto LABEL_70;
      }
      if ( RtlEqualUnicodeString(Keyword, &stru_1C00706D0, 1u) )
      {
        if ( ParameterType )
          goto LABEL_24;
        dword_1C0085118 = ndisReadNDKGlobalFlags();
        v26 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1C0085110;
        goto LABEL_71;
      }
      if ( RtlEqualUnicodeString(Keyword, &::Keyword, 1u) )
      {
        *(_DWORD *)(v12 + 568) |= 0x80u;
        *(_DWORD *)(v12 + 1872) |= 0x10000u;
      }
LABEL_16:
      if ( !LODWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) && RtlEqualUnicodeString(Keyword, &FlowControlStr, 1u) )
      {
        if ( (unsigned __int8)byte_1C008370F >= 3u )
          WPP_SF_(0x13u, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids);
LABEL_70:
        v26 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1C0075360;
LABEL_71:
        v8 = Status;
LABEL_84:
        *ParameterValue = v26;
        RegistryValues = 0;
        goto LABEL_25;
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
          goto LABEL_29;
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
LABEL_33:
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
          goto LABEL_24;
        }
        if ( RtlEqualUnicodeString(Keyword, &stru_1C0070710, 1u) )
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
        goto LABEL_24;
      goto LABEL_33;
    }
    v21 = *(_QWORD *)(v12 + 944);
    if ( !v21 )
      goto LABEL_24;
    v22 = *(_DWORD *)(v21 + 16);
    v23 = 0;
    if ( !v22 )
    {
LABEL_66:
      if ( v23 >= *(_DWORD *)(v21 + 16) )
        RegistryValues = -1073741823;
      goto LABEL_24;
    }
    v24 = *((_BYTE *)v35 + v5);
    while ( *(_BYTE *)(v21 + 20LL * v23 + 20) != v24 )
    {
      if ( ++v23 >= v22 )
        goto LABEL_66;
    }
    if ( v24 == 1 )
    {
      v25 = *(_DWORD *)(v21 + 20LL * v23 + 24);
    }
    else if ( v24 == 2 )
    {
      v25 = *(unsigned __int16 *)(v21 + 20LL * v23 + 24);
    }
    else
    {
      if ( (unsigned int)v24 - 3 > 1 )
      {
LABEL_65:
        RegistryValues = ndisSaveParameters(
                           *((_QWORD *)&unk_1C0070600 + 2 * v5 + 1),
                           4LL,
                           &v30,
                           4LL,
                           ConfigurationHandle,
                           ParameterValue);
        goto LABEL_66;
      }
      v25 = *(_DWORD *)(v21 + 20LL * v23 + 24);
    }
    v30 = v25;
    goto LABEL_65;
  }
  *(_DWORD *)&String.Length = 2621440;
  String.Buffer = v37;
  RegistryValues = RtlIntegerToUnicodeString(*(_DWORD *)(v12 + 3768), 0xAu, &String);
  if ( !RegistryValues )
  {
    Length = String.Length;
    v20 = 1LL;
    Buffer = String.Buffer;
LABEL_45:
    v18 = L"BusType";
LABEL_46:
    RegistryValues = ndisSaveParameters(v18, v20, Buffer, Length, ConfigurationHandle, ParameterValue);
  }
LABEL_24:
  v8 = Status;
LABEL_25:
  if ( P && P != Keyword->Buffer )
    ExFreePoolWithTag(P, 0);
  if ( RegistryValues < 0 )
  {
LABEL_29:
    *Status = -1073741823;
    goto LABEL_30;
  }
  *v8 = 0;
LABEL_30:
  if ( (unsigned __int8)byte_1C008370F >= 4u )
    WPP_SF_(0x14u, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids);
}
