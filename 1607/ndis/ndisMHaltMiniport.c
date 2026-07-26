/*
 * XREFs of ndisMHaltMiniport @ 0x1C009E8F8
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C00E6FA8 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisCloseULongRef @ 0x1C0013414 (ndisCloseULongRef.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C009E95C (ndisMDeregisterBugCheckHandler.c)
 *     ndisMCommonHaltMiniport @ 0x1C00EB5E4 (ndisMCommonHaltMiniport.c)
 */

void __fastcall ndisMHaltMiniport(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Eu, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, BugCheckParameter2);
  if ( ndisCloseULongRef((PKSPIN_LOCK)(BugCheckParameter2 + 4496)) )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 124) & 0x4000) == 0 )
    {
      ndisMCommonHaltMiniport(BugCheckParameter2);
      ndisMDeregisterBugCheckHandler(BugCheckParameter2);
    }
    ndisDereferenceMiniport(BugCheckParameter2);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Fu, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, BugCheckParameter2);
}
