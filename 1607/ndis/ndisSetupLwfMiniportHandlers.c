/*
 * XREFs of ndisSetupLwfMiniportHandlers @ 0x1C0018D40
 * Callers:
 *     ndisFilterAttachCleanUp @ 0x1C0011700 (ndisFilterAttachCleanUp.c)
 *     ndisSetupNdis6OpenHandlers @ 0x1C0018BF4 (ndisSetupNdis6OpenHandlers.c)
 *     ndisHandleFilterHandlersChange @ 0x1C001A090 (ndisHandleFilterHandlersChange.c)
 *     NdisFSetAttributes @ 0x1C001A440 (NdisFSetAttributes.c)
 *     ndisSetMiniportHandlers @ 0x1C00E839C (ndisSetMiniportHandlers.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E8738 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ndisSetupUpwardHandlers @ 0x1C0018D94 (ndisSetupUpwardHandlers.c)
 *     ndisSetupDownwardHandlers @ 0x1C00190AC (ndisSetupDownwardHandlers.c)
 *     ndisSetupNoFilterHandlers @ 0x1C00194C8 (ndisSetupNoFilterHandlers.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetupLwfMiniportHandlers(__int64 a1)
{
  __int64 result; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(71LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1);
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
    return WPP_SF_q(72LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1);
  return result;
}
