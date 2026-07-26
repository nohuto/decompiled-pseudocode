/*
 * XREFs of ndisUpdateFilterFakeStatus @ 0x1C00188F8
 * Callers:
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C001290C (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisFilterXStateSetFlag @ 0x1C00188EC (ndisFilterXStateSetFlag.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C001B438 (ndisIndicateInitialStateToFilter.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C0023F44 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 */

char __fastcall ndisUpdateFilterFakeStatus(__int64 a1)
{
  int v2; // edx
  unsigned __int8 v3; // cl
  char result; // al

  v2 = -1073741823;
  v3 = *(_BYTE *)(a1 + 376);
  result = v3 & 1;
  if ( (v3 & 1) != 0 )
    v2 = -1071448033;
  *(_DWORD *)(a1 + 96) = v2;
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    return WPP_SF_qdD(75LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1, v3, v2);
  return result;
}
