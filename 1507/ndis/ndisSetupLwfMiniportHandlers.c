/*
 * XREFs of ndisSetupLwfMiniportHandlers @ 0x1C0017B40
 * Callers:
 *     ndisHandleFilterHandlersChange @ 0x1C0017988 (ndisHandleFilterHandlersChange.c)
 *     NdisFSetAttributes @ 0x1C0017A00 (NdisFSetAttributes.c)
 *     ndisSetupNdis6OpenHandlers @ 0x1C0018E70 (ndisSetupNdis6OpenHandlers.c)
 *     ndisFilterAttachCleanUp @ 0x1C0054074 (ndisFilterAttachCleanUp.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E74C8 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisSetMiniportHandlers @ 0x1C00E80B8 (ndisSetMiniportHandlers.c)
 * Callees:
 *     ndisSetupUpwardHandlers @ 0x1C0017B94 (ndisSetupUpwardHandlers.c)
 *     ndisSetupDownwardHandlers @ 0x1C0017EA8 (ndisSetupDownwardHandlers.c)
 *     ndisSetupNoFilterHandlers @ 0x1C00182C4 (ndisSetupNoFilterHandlers.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetupLwfMiniportHandlers(__int64 a1)
{
  __int64 result; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(71LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1);
  if ( *(_QWORD *)(a1 + 2048) )
  {
    ndisSetupDownwardHandlers(a1);
    result = ndisSetupUpwardHandlers(a1);
  }
  else
  {
    *(_BYTE *)(a1 + 1999) = 0;
    result = ndisSetupNoFilterHandlers(a1);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    return WPP_SF_q(72LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1);
  return result;
}
