/*
 * XREFs of NdisCloseConfiguration @ 0x1C009D130
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001F5D8 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisCheckIfTypeMismatch @ 0x1C0058FF4 (ndisCheckIfTypeMismatch.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C0064EF0 (ndisOidPostIovNicSwitchParameters.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C009BFA8 (ndisReadMiniportDefaultPortAuthStates.c)
 *     ndisReadMiniportMediaSpecificPortAuthStates @ 0x1C009C098 (ndisReadMiniportMediaSpecificPortAuthStates.c)
 *     ndisMFindNumaNode @ 0x1C009C6B0 (ndisMFindNumaNode.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009C75C (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C009D048 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ndisReadRssKeywords @ 0x1C009D6E0 (ndisReadRssKeywords.c)
 *     ndisReadOffloadRegistry @ 0x1C009DAD4 (ndisReadOffloadRegistry.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00AB088 (ndisIovCreateDefaultNicSwitch.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C00BEF78 (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 *     ndisUpdateHDSplitKeyword @ 0x1C00C21D0 (ndisUpdateHDSplitKeyword.c)
 *     ndisUpdateOffloadKeywords @ 0x1C00C2318 (ndisUpdateOffloadKeywords.c)
 *     DisableMagicPacketKeyword @ 0x1C00C2E28 (DisableMagicPacketKeyword.c)
 *     ndisWmiSetPMAdminConfig @ 0x1C00C55D4 (ndisWmiSetPMAdminConfig.c)
 *     ndisGetMiniportInfo @ 0x1C00CB158 (ndisGetMiniportInfo.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00CEB60 (ndisWmiChangeSingleInstance.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00D1140 (ndisNDKHandleWmiChangeRequest.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00D6394 (ndisReadSSTimeoutKeywords.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 *     ndisIfInitialize @ 0x1C00FEE90 (ndisIfInitialize.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __stdcall NdisCloseConfiguration(NDIS_HANDLE ConfigurationHandle)
{
  void *v2; // rcx
  _QWORD *v3; // rcx

  if ( (unsigned __int8)byte_1C008370F >= 4u )
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
  if ( (unsigned __int8)byte_1C008370F >= 4u )
    WPP_SF_q(0x18u, &WPP_b8a967438bdde46f34f27b2375f98c29_Traceguids, 0LL);
}
