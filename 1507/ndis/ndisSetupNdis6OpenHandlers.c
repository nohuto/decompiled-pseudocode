/*
 * XREFs of ndisSetupNdis6OpenHandlers @ 0x1C0018E70
 * Callers:
 *     ndisSetMiniportHandlers @ 0x1C00E80B8 (ndisSetMiniportHandlers.c)
 *     ndisMOpenAdapter @ 0x1C00E8200 (ndisMOpenAdapter.c)
 * Callees:
 *     ndisSetupLwfMiniportHandlers @ 0x1C0017B40 (ndisSetupLwfMiniportHandlers.c)
 *     ndisSetupMiniportProtocolHandlers @ 0x1C0018EE4 (ndisSetupMiniportProtocolHandlers.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 *     WPP_SF_qqqDD @ 0x1C003F4F0 (WPP_SF_qqqDD.c)
 */

__int64 __fastcall ndisSetupNdis6OpenHandlers(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_qqqDD(
      135LL,
      &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids,
      a2,
      a3,
      a1,
      *(_BYTE *)(a2 + 56) >= 6u,
      *(_BYTE *)(a3 + 32) >= 6u);
  result = ndisSetupMiniportProtocolHandlers(a1, a2, a3);
  if ( *(_QWORD *)(a3 + 2056) )
    result = ndisSetupLwfMiniportHandlers(a3);
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    return WPP_SF_qqq(136LL, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2, a3, a1);
  return result;
}
