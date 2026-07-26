/*
 * XREFs of NdisOpenConfigurationEx @ 0x1C00A0980
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0013B84 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005D498 (ndisCheckIfTypeMismatch.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C0069440 (ndisOidPostIovNicSwitchParameters.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C009ECAC (ndisReadMiniportDefaultPortAuthStates.c)
 *     ndisMFindNumaNode @ 0x1C009F30C (ndisMFindNumaNode.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009F394 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C009F758 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ndisReadRssKeywords @ 0x1C009F89C (ndisReadRssKeywords.c)
 *     ndisReadOffloadRegistry @ 0x1C00A022C (ndisReadOffloadRegistry.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00AC004 (ndisIovCreateDefaultNicSwitch.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C00C3CC0 (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 *     ndisUpdateHDSplitKeyword @ 0x1C00C731C (ndisUpdateHDSplitKeyword.c)
 *     ndisUpdateOffloadKeywords @ 0x1C00C745C (ndisUpdateOffloadKeywords.c)
 *     DisableMagicPacketKeyword @ 0x1C00C7F70 (DisableMagicPacketKeyword.c)
 *     ndisWmiSetPMAdminConfig @ 0x1C00CB074 (ndisWmiSetPMAdminConfig.c)
 *     ndisGetMiniportInfo @ 0x1C00D0B78 (ndisGetMiniportInfo.c)
 *     ndisReadModernStandyWoLMagicPacketKeywords @ 0x1C00D1AA0 (ndisReadModernStandyWoLMagicPacketKeywords.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00DC2BC (ndisReadSSTimeoutKeywords.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     NdisOpenConfiguration @ 0x1C00A0B20 (NdisOpenConfiguration.c)
 *     ndisAllocateConfigurationString @ 0x1C00A0BF4 (ndisAllocateConfigurationString.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00A81A0 (NdisOpenProtocolConfiguration.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00CE108 (ndisGetOrCreateFilterInstanceKey.c)
 */

NDIS_STATUS __stdcall NdisOpenConfigurationEx(
        PNDIS_CONFIGURATION_OBJECT ConfigObject,
        PNDIS_HANDLE ConfigurationHandle)
{
  unsigned __int8 *NdisHandle; // rdi
  char v3; // r15
  void *v6; // r8
  int v7; // ebx
  int v9; // eax
  bool v10; // zf
  _UNICODE_STRING *p_Destination; // r8
  const UNICODE_STRING *v12; // r8
  const UNICODE_STRING *v13; // rdx
  const UNICODE_STRING *v14; // rcx
  __int64 v15; // rdx
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING GuidString; // [rsp+40h] [rbp-10h] BYREF
  int Status; // [rsp+80h] [rbp+30h] BYREF

  NdisHandle = (unsigned __int8 *)ConfigObject->NdisHandle;
  *(_DWORD *)&Destination.Length = 0;
  v3 = 0;
  Destination.Buffer = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  LOBYTE(Status) = 0;
  if ( (unsigned __int8)byte_1C00895CF >= 4u )
    WPP_SF_q(0x1Bu, &WPP_88e16e7e343236ed4c0ce3da79f3a552_Traceguids, (__int64)ConfigObject);
  if ( ConfigObject->Header.Type != 0xA9 || ConfigObject->Header.Size < 0x14u || !ConfigObject->Header.Revision )
    return -1073741811;
  switch ( *NdisHandle )
  {
    case 2u:
      if ( NdisHandle[24] < 6u )
      {
        v7 = -1073741637;
        goto LABEL_15;
      }
      p_Destination = (_UNICODE_STRING *)(NdisHandle + 488);
      goto LABEL_31;
    case 3u:
      v14 = (const UNICODE_STRING *)(NdisHandle + 72);
      goto LABEL_37;
    case 4u:
      v14 = (const UNICODE_STRING *)(NdisHandle + 144);
LABEL_37:
      v12 = 0LL;
      v13 = 0LL;
LABEL_38:
      v9 = ndisAllocateConfigurationString(v14, v13, v12, &Destination);
      v7 = v9;
      v10 = v9 == 0;
      goto LABEL_29;
    case 5u:
      if ( (ConfigObject->Flags & 1) != 0 )
      {
        v15 = *((_QWORD *)NdisHandle + 2);
        if ( (*(_DWORD *)(*(_QWORD *)(v15 + 464) + 56LL) & 2) == 0 )
          goto LABEL_42;
        v9 = ndisGetOrCreateFilterInstanceKey((PCUNICODE_STRING)(v15 + 144), (__int64)&Status, &Destination);
      }
      else
      {
        if ( RtlStringFromGUID(
               (const GUID *const)(*(_QWORD *)(*((_QWORD *)NdisHandle + 4) + 16LL) + 4064LL),
               &GuidString) )
        {
          goto LABEL_42;
        }
        v3 = 1;
        v9 = ndisAllocateConfigurationString(
               (PCUNICODE_STRING)(*((_QWORD *)NdisHandle + 2) + 144LL),
               &GuidString,
               &ndisFilterAdapterStr,
               &Destination);
      }
      v7 = v9;
      v10 = v9 == 0;
LABEL_29:
      Status = v9;
      if ( !v10 )
        goto LABEL_15;
      p_Destination = &Destination;
      goto LABEL_31;
    case 0xAu:
      v6 = NdisHandle;
      goto LABEL_13;
  }
  if ( *NdisHandle != 17 )
  {
    if ( *NdisHandle != 18 )
    {
      if ( *NdisHandle == 134 )
      {
        p_Destination = (_UNICODE_STRING *)*((_QWORD *)NdisHandle + 1);
LABEL_31:
        NdisOpenProtocolConfiguration(&Status, ConfigurationHandle, p_Destination);
        goto LABEL_14;
      }
LABEL_42:
      v7 = -1073741823;
      goto LABEL_15;
    }
    v12 = (const UNICODE_STRING *)&ndisAdapterStr;
    v13 = (const UNICODE_STRING *)(*((_QWORD *)NdisHandle + 2) + 3848LL);
    v14 = (const UNICODE_STRING *)(*((_QWORD *)NdisHandle + 3) + 72LL);
    goto LABEL_38;
  }
  v6 = (void *)*((_QWORD *)NdisHandle + 507);
LABEL_13:
  NdisOpenConfiguration(&Status, ConfigurationHandle, v6);
LABEL_14:
  v7 = Status;
LABEL_15:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( !v7 && *ConfigurationHandle )
    *((_QWORD *)*ConfigurationHandle + 1) = NdisHandle;
  if ( v3 )
    RtlFreeUnicodeString(&GuidString);
  if ( (unsigned __int8)byte_1C00895CF >= 4u )
    WPP_SF_qD(0x1Cu, &WPP_88e16e7e343236ed4c0ce3da79f3a552_Traceguids, (__int64)ConfigObject, v7);
  return v7;
}
