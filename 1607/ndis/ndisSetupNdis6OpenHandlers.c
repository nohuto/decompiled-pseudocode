/*
 * XREFs of ndisSetupNdis6OpenHandlers @ 0x1C0018BF4
 * Callers:
 *     ndisMOpenAdapter @ 0x1C00E7CD0 (ndisMOpenAdapter.c)
 *     ndisSetMiniportHandlers @ 0x1C00E839C (ndisSetMiniportHandlers.c)
 * Callees:
 *     ndisSetupMiniportProtocolHandlers @ 0x1C0018C68 (ndisSetupMiniportProtocolHandlers.c)
 *     ndisSetupLwfMiniportHandlers @ 0x1C0018D40 (ndisSetupLwfMiniportHandlers.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 *     WPP_SF_qqqDD @ 0x1C0044730 (WPP_SF_qqqDD.c)
 */

__int64 __fastcall ndisSetupNdis6OpenHandlers(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    WPP_SF_qqqDD(
      138LL,
      &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids,
      a2,
      a3,
      a1,
      *(_BYTE *)(a2 + 56) >= 6u,
      *(_BYTE *)(a3 + 32) >= 6u);
  result = ndisSetupMiniportProtocolHandlers(a1, a2, a3);
  if ( *(_QWORD *)(a3 + 2056) )
    result = ndisSetupLwfMiniportHandlers(a3);
  if ( (unsigned __int8)byte_1C00895CD >= 4u )
    return WPP_SF_qqq(139LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2, a3, a1);
  return result;
}
