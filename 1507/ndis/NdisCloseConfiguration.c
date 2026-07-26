/*
 * XREFs of NdisCloseConfiguration @ 0x1C00A9050
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
 *     ndisReadMiniportMediaSpecificPortAuthStates @ 0x1C00AACBC (ndisReadMiniportMediaSpecificPortAuthStates.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00ABC88 (ndisIovCreateDefaultNicSwitch.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C00C5E48 (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 *     ndisUpdateHDSplitKeyword @ 0x1C00C8DB0 (ndisUpdateHDSplitKeyword.c)
 *     ndisUpdateOffloadKeywords @ 0x1C00C8EF8 (ndisUpdateOffloadKeywords.c)
 *     DisableMagicPacketKeyword @ 0x1C00C9A08 (DisableMagicPacketKeyword.c)
 *     ndisWmiSetPMAdminConfig @ 0x1C00CC1B4 (ndisWmiSetPMAdminConfig.c)
 *     ndisGetMiniportInfo @ 0x1C00D1DE8 (ndisGetMiniportInfo.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D53A0 (ndisWmiChangeSingleInstance.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00D7AD0 (ndisNDKHandleWmiChangeRequest.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00DCA44 (ndisReadSSTimeoutKeywords.c)
 *     ndisIfInitialize @ 0x1C010505C (ndisIfInitialize.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __stdcall NdisCloseConfiguration(NDIS_HANDLE ConfigurationHandle)
{
  void *v2; // rcx
  _QWORD *v3; // rcx

  if ( (unsigned __int8)byte_1C008530F >= 4u )
    WPP_SF_q(0x17u, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, (__int64)ConfigurationHandle);
  v2 = (void *)*((_QWORD *)ConfigurationHandle + 4);
  if ( v2 )
    ZwClose(v2);
  while ( 1 )
  {
    v3 = (_QWORD *)*((_QWORD *)ConfigurationHandle + 3);
    if ( !v3 )
      break;
    *((_QWORD *)ConfigurationHandle + 3) = *v3;
    ExFreePoolWithTag(v3, 0);
  }
  ExFreePoolWithTag(ConfigurationHandle, 0);
  if ( (unsigned __int8)byte_1C008530F >= 4u )
    WPP_SF_q(0x18u, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, 0LL);
}
