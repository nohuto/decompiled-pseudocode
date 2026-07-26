/*
 * XREFs of ndisMHaltMiniport @ 0x1C0098F24
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C00E02B8 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisCloseULongRef @ 0x1C0013904 (ndisCloseULongRef.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C0098F88 (ndisMDeregisterBugCheckHandler.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E0560 (ndisMCommonHaltMiniport.c)
 */

void __fastcall ndisMHaltMiniport(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Eu, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, BugCheckParameter2);
  if ( ndisCloseULongRef((PKSPIN_LOCK)(BugCheckParameter2 + 4496)) )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 124) & 0x4000) == 0 )
    {
      ndisMCommonHaltMiniport(BugCheckParameter2);
      ndisMDeregisterBugCheckHandler(BugCheckParameter2);
    }
    ndisDereferenceMiniport(BugCheckParameter2, 0x16u);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Fu, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, BugCheckParameter2);
}
