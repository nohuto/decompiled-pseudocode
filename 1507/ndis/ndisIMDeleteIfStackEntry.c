/*
 * XREFs of ndisIMDeleteIfStackEntry @ 0x1C0059304
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C00E63F0 (ndisPnPRemoveDevice.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisIfDeleteStackEntries @ 0x1C003E748 (ndisIfDeleteStackEntries.c)
 *     ndisDereferenceMiniportRef @ 0x1C0057758 (ndisDereferenceMiniportRef.c)
 *     ndisReferenceMiniportByName @ 0x1C00E8720 (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisIMDeleteIfStackEntry(__int64 a1)
{
  _DWORD *v2; // rdx
  unsigned int v3; // edi

  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0xB5u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0xB6u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
  return v3;
}
