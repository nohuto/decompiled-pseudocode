/*
 * XREFs of ndisIMDeleteIfStackEntry @ 0x1C0059354
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C00E02B8 (ndisPnPRemoveDevice.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisIfDeleteStackEntries @ 0x1C003FBA0 (ndisIfDeleteStackEntries.c)
 *     ndisDereferenceMiniportRef @ 0x1C0057484 (ndisDereferenceMiniportRef.c)
 *     ndisReferenceMiniportByName @ 0x1C00E30F8 (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisIMDeleteIfStackEntry(__int64 a1)
{
  _DWORD *v2; // rdx
  unsigned int v3; // edi

  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0xB8u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
  v2 = *(_DWORD **)(a1 + 3824);
  if ( *v2 > 1u )
  {
    ndisReferenceMiniportByName((PCUNICODE_STRING)&v2[4 * (*v2 - 2) + 2]);
    v3 = -1073741772;
  }
  else
  {
    v3 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0xB9u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
  return v3;
}
