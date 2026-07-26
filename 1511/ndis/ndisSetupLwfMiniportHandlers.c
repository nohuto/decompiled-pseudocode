/*
 * XREFs of ndisSetupLwfMiniportHandlers @ 0x1C001A0D4
 * Callers:
 *     ndisHandleFilterHandlersChange @ 0x1C0018E00 (ndisHandleFilterHandlersChange.c)
 *     NdisFSetAttributes @ 0x1C0018E80 (NdisFSetAttributes.c)
 *     ndisSetupNdis6OpenHandlers @ 0x1C001AB18 (ndisSetupNdis6OpenHandlers.c)
 *     ndisFilterAttachCleanUp @ 0x1C0054464 (ndisFilterAttachCleanUp.c)
 *     ndisSetMiniportHandlers @ 0x1C00E2FB0 (ndisSetMiniportHandlers.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E3284 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ndisSetupNoFilterHandlers @ 0x1C0019358 (ndisSetupNoFilterHandlers.c)
 *     ndisSetupUpwardHandlers @ 0x1C001A128 (ndisSetupUpwardHandlers.c)
 *     ndisSetupDownwardHandlers @ 0x1C001A43C (ndisSetupDownwardHandlers.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetupLwfMiniportHandlers(__int64 a1)
{
  __int64 result; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(71LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1);
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
    return WPP_SF_q(72LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1);
  return result;
}
