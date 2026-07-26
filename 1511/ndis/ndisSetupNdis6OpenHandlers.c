/*
 * XREFs of ndisSetupNdis6OpenHandlers @ 0x1C001AB18
 * Callers:
 *     ndisSetMiniportHandlers @ 0x1C00E2FB0 (ndisSetMiniportHandlers.c)
 *     ndisMOpenAdapter @ 0x1C00E340C (ndisMOpenAdapter.c)
 * Callees:
 *     ndisSetupLwfMiniportHandlers @ 0x1C001A0D4 (ndisSetupLwfMiniportHandlers.c)
 *     ndisSetupMiniportProtocolHandlers @ 0x1C001AB8C (ndisSetupMiniportProtocolHandlers.c)
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     WPP_SF_qqqDD @ 0x1C0040BEC (WPP_SF_qqqDD.c)
 */

__int64 __fastcall ndisSetupNdis6OpenHandlers(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)byte_1C008370D >= 4u )
    WPP_SF_qqqDD(
      138LL,
      &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids,
      a2,
      a3,
      a1,
      *(_BYTE *)(a2 + 56) >= 6u,
      *(_BYTE *)(a3 + 32) >= 6u);
  result = ndisSetupMiniportProtocolHandlers(a1, a2, a3);
  if ( *(_QWORD *)(a3 + 2056) )
    result = ndisSetupLwfMiniportHandlers(a3);
  if ( (unsigned __int8)byte_1C008370D >= 4u )
    return WPP_SF_qqq(139LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2, a3, a1);
  return result;
}
