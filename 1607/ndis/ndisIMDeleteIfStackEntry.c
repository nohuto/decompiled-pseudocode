/*
 * XREFs of ndisIMDeleteIfStackEntry @ 0x1C005D7F8
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C00E6FA8 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisIfDeleteStackEntries @ 0x1C0012370 (ndisIfDeleteStackEntries.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisDereferenceMiniportRef @ 0x1C005BC24 (ndisDereferenceMiniportRef.c)
 *     ndisReferenceMiniportByName @ 0x1C00E81F0 (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisIMDeleteIfStackEntry(__int64 a1)
{
  _DWORD *v2; // rdx
  unsigned int v3; // edi

  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0xB8u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0xB9u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
  return v3;
}
