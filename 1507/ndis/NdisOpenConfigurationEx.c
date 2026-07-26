/*
 * XREFs of NdisOpenConfigurationEx @ 0x1C00AA1F0
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001AED4 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisCheckIfTypeMismatch @ 0x1C0021F14 (ndisCheckIfTypeMismatch.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C0065D20 (ndisOidPostIovNicSwitchParameters.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C00A8F64 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ndisReadRssKeywords @ 0x1C00A9600 (ndisReadRssKeywords.c)
 *     ndisReadOffloadRegistry @ 0x1C00A9A08 (ndisReadOffloadRegistry.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AA6BC (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMFindNumaNode @ 0x1C00AA75C (ndisMFindNumaNode.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C00AABCC (ndisReadMiniportDefaultPortAuthStates.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00ABC88 (ndisIovCreateDefaultNicSwitch.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C00C5E48 (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 *     ndisUpdateHDSplitKeyword @ 0x1C00C8DB0 (ndisUpdateHDSplitKeyword.c)
 *     ndisUpdateOffloadKeywords @ 0x1C00C8EF8 (ndisUpdateOffloadKeywords.c)
 *     DisableMagicPacketKeyword @ 0x1C00C9A08 (DisableMagicPacketKeyword.c)
 *     ndisWmiSetPMAdminConfig @ 0x1C00CC1B4 (ndisWmiSetPMAdminConfig.c)
 *     ndisGetMiniportInfo @ 0x1C00D1DE8 (ndisGetMiniportInfo.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00DCA44 (ndisReadSSTimeoutKeywords.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00A5040 (NdisOpenProtocolConfiguration.c)
 *     ndisAllocateConfigurationString @ 0x1C00AA418 (ndisAllocateConfigurationString.c)
 *     NdisOpenConfiguration @ 0x1C00CD890 (NdisOpenConfiguration.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00CF3E0 (ndisGetOrCreateFilterInstanceKey.c)
 */

NDIS_STATUS __stdcall NdisOpenConfigurationEx(
        PNDIS_CONFIGURATION_OBJECT ConfigObject,
        PNDIS_HANDLE ConfigurationHandle)
{
  _QWORD *NdisHandle; // rdi
  char v3; // r12
  __int64 v6; // r15
  HANDLE *PoolWithTag; // rax
  HANDLE *v8; // rsi
  NTSTATUS v9; // ebx
  PDEVICE_OBJECT *v10; // rcx
  int v12; // eax
  bool v13; // zf
  _UNICODE_STRING *p_Destination; // r8
  const UNICODE_STRING *v15; // r8
  const UNICODE_STRING *v16; // rdx
  const UNICODE_STRING *v17; // rcx
  __int64 v18; // rdx
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING GuidString; // [rsp+40h] [rbp-10h] BYREF
  int Status; // [rsp+80h] [rbp+30h] BYREF

  NdisHandle = ConfigObject->NdisHandle;
  *(_DWORD *)&Destination.Length = 0;
  v3 = 0;
  Destination.Buffer = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  LOBYTE(Status) = 0;
  if ( (unsigned __int8)byte_1C008530F >= 4u )
    WPP_SF_q(0x1Bu, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, (__int64)ConfigObject);
  if ( ConfigObject->Header.Type != 0xA9 || ConfigObject->Header.Size < 0x14u || !ConfigObject->Header.Revision )
    return -1073741811;
  switch ( *(_BYTE *)NdisHandle )
  {
    case 2:
      if ( *((_BYTE *)NdisHandle + 24) < 6u )
      {
        v9 = -1073741637;
        goto LABEL_22;
      }
      p_Destination = (_UNICODE_STRING *)(NdisHandle + 61);
      goto LABEL_38;
    case 3:
      v17 = (const UNICODE_STRING *)(NdisHandle + 9);
      goto LABEL_45;
    case 4:
      v17 = (const UNICODE_STRING *)(NdisHandle + 18);
LABEL_45:
      v15 = 0LL;
      v16 = 0LL;
LABEL_46:
      v12 = ndisAllocateConfigurationString(v17, v16, v15, &Destination);
      v9 = v12;
      v13 = v12 == 0;
      goto LABEL_36;
  }
  if ( *(_BYTE *)NdisHandle != 5 )
  {
    if ( *(_BYTE *)NdisHandle == 10 )
    {
      NdisOpenConfiguration(&Status, ConfigurationHandle, NdisHandle);
      goto LABEL_39;
    }
    if ( *(_BYTE *)NdisHandle == 17 )
    {
      v6 = NdisHandle[507];
      if ( (unsigned __int8)byte_1C008530F >= 4u )
        WPP_SF_q(0xAu, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, NdisHandle[507]);
      PoolWithTag = (HANDLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6863444Eu);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        v9 = 0;
        *(_WORD *)PoolWithTag = 267;
        PoolWithTag[3] = 0LL;
        PoolWithTag[4] = 0LL;
        PoolWithTag[2] = (HANDLE)v6;
        *((_WORD *)PoolWithTag + 1) = 40;
        if ( *(_BYTE *)v6 == 10 )
        {
          v10 = *(PDEVICE_OBJECT **)(v6 + 8);
          PoolWithTag[1] = v10;
          if ( !v10 )
          {
LABEL_19:
            *ConfigurationHandle = v8;
            goto LABEL_20;
          }
          v9 = IoOpenDeviceRegistryKey(v10[486], 2u, 0xC2000000, PoolWithTag + 4);
        }
        else
        {
          if ( (unsigned __int8)byte_1C008530F < 2u )
            goto LABEL_19;
          WPP_SF_q(0xBu, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, v6);
        }
        if ( v9 >= 0 )
          goto LABEL_19;
        ExFreePoolWithTag(v8, 0);
      }
      else
      {
        v9 = -1073741670;
      }
LABEL_20:
      if ( (unsigned __int8)byte_1C008530F >= 4u )
        WPP_SF_q(0xCu, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, v6);
      goto LABEL_22;
    }
    if ( *(_BYTE *)NdisHandle != 18 )
    {
      if ( *(unsigned __int8 *)NdisHandle == 134 )
      {
        p_Destination = (_UNICODE_STRING *)NdisHandle[1];
        goto LABEL_38;
      }
LABEL_54:
      v9 = -1073741823;
      goto LABEL_22;
    }
    v15 = (const UNICODE_STRING *)&ndisAdapterStr;
    v16 = (const UNICODE_STRING *)(NdisHandle[2] + 3848LL);
    v17 = (const UNICODE_STRING *)(NdisHandle[3] + 72LL);
    goto LABEL_46;
  }
  if ( (ConfigObject->Flags & 1) != 0 )
  {
    v18 = NdisHandle[2];
    if ( (*(_DWORD *)(*(_QWORD *)(v18 + 464) + 56LL) & 2) == 0 )
      goto LABEL_54;
    v12 = ndisGetOrCreateFilterInstanceKey((PCUNICODE_STRING)(v18 + 144), (__int64)&Status, &Destination);
  }
  else
  {
    if ( RtlStringFromGUID((const GUID *const)(*(_QWORD *)(NdisHandle[4] + 16LL) + 4064LL), &GuidString) )
      goto LABEL_54;
    v3 = 1;
    v12 = ndisAllocateConfigurationString(
            (PCUNICODE_STRING)(NdisHandle[2] + 144LL),
            &GuidString,
            &ndisFilterAdapterStr,
            &Destination);
  }
  v9 = v12;
  v13 = v12 == 0;
LABEL_36:
  Status = v12;
  if ( v13 )
  {
    p_Destination = &Destination;
LABEL_38:
    NdisOpenProtocolConfiguration(&Status, ConfigurationHandle, &p_Destination->Length);
LABEL_39:
    v9 = Status;
  }
LABEL_22:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( !v9 && *ConfigurationHandle )
    *((_QWORD *)*ConfigurationHandle + 1) = NdisHandle;
  if ( v3 )
    RtlFreeUnicodeString(&GuidString);
  if ( (unsigned __int8)byte_1C008530F >= 4u )
    WPP_SF_qD(0x1Cu, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, (__int64)ConfigObject, v9);
  return v9;
}
