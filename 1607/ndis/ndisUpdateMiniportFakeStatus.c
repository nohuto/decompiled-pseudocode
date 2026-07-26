/*
 * XREFs of ndisUpdateMiniportFakeStatus @ 0x1C00203E4
 * Callers:
 *     ndisMiniportXStateClearFlag @ 0x1C001F85C (ndisMiniportXStateClearFlag.c)
 *     ndisMSwapOpenHandlers @ 0x1C001FB1C (ndisMSwapOpenHandlers.c)
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C00593D4 (ndisSwapFilterHandlersForMediaDisconnect.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 */

__int64 __fastcall ndisUpdateMiniportFakeStatus(__int64 a1)
{
  unsigned __int8 v1; // dl
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 930);
  result = 3221225473LL;
  if ( (v1 & 4) != 0 )
  {
    result = 3223519279LL;
  }
  else if ( (v1 & 2) != 0 )
  {
    result = 3223519263LL;
  }
  else if ( (v1 & 1) != 0 )
  {
    result = 3221291021LL;
  }
  *(_DWORD *)(a1 + 540) = result;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    return WPP_SF_qdD(76LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1, v1, result);
  return result;
}
