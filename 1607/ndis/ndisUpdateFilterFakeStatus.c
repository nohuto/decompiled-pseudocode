/*
 * XREFs of ndisUpdateFilterFakeStatus @ 0x1C00256BC
 * Callers:
 *     ndisIndicateInitialStateToFilter @ 0x1C001A534 (ndisIndicateInitialStateToFilter.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001F710 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisFilterXStateSetFlag @ 0x1C00256B0 (ndisFilterXStateSetFlag.c)
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C00593D4 (ndisSwapFilterHandlersForMediaDisconnect.c)
 * Callees:
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 */

__int64 __fastcall ndisUpdateFilterFakeStatus(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 v3; // cl

  result = 3221225473LL;
  v3 = *(_BYTE *)(a1 + 376);
  if ( (v3 & 1) != 0 )
    result = 3223519263LL;
  *(_DWORD *)(a1 + 96) = result;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    return WPP_SF_qdD(75LL, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, a1, v3, result);
  return result;
}
