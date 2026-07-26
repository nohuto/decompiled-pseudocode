/*
 * XREFs of ndisUpdateMiniportFakeStatus @ 0x1C00240C0
 * Callers:
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C001290C (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisMSwapOpenHandlers @ 0x1C0019720 (ndisMSwapOpenHandlers.c)
 *     ndisMiniportXStateClearFlag @ 0x1C0024090 (ndisMiniportXStateClearFlag.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 */

char __fastcall ndisUpdateMiniportFakeStatus(__int64 a1)
{
  unsigned __int8 v1; // r8
  int v2; // edx
  char result; // al

  v1 = *(_BYTE *)(a1 + 930);
  v2 = -1073741823;
  if ( (v1 & 4) != 0 )
  {
    v2 = -1071448017;
  }
  else if ( (v1 & 2) != 0 )
  {
    v2 = -1071448033;
  }
  else
  {
    result = v1 & 1;
    if ( (v1 & 1) != 0 )
      v2 = -1073676275;
  }
  *(_DWORD *)(a1 + 540) = v2;
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    return WPP_SF_qdD(76LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1, v1, v2);
  return result;
}
