/*
 * XREFs of ndisUpdateFilterFakeStatus @ 0x1C001FAD8
 * Callers:
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C0010674 (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C00138FC (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0016828 (ndisIndicateInitialStateToFilter.c)
 *     ndisFilterXStateSetFlag @ 0x1C001FACC (ndisFilterXStateSetFlag.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
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
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    return WPP_SF_qdD(75LL, &WPP_df3618ada41cd72bb8b0447b4c1fb5c5_Traceguids, a1, v3, v2);
  return result;
}
