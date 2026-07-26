/*
 * XREFs of ndisOidPostRSSParameters @ 0x1C001FB60
 * Callers:
 *     <none>
 * Callees:
 *     ndisPostSetOpenRSSParameters @ 0x1C001FBE4 (ndisPostSetOpenRSSParameters.c)
 *     ndisPostSetMiniportRSSParameters @ 0x1C001FD64 (ndisPostSetMiniportRSSParameters.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisOidPostRSSParameters(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 result; // rax

  v1 = *a1;
  v3 = a1[4];
  v4 = a1[3];
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    result = WPP_SF_qqq(160LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v1, v4, v3);
  if ( *(_DWORD *)(v3 + 4) == 1 )
  {
    if ( v1 )
      result = ndisPostSetMiniportRSSParameters(v1, v3, *((unsigned int *)a1 + 10));
    if ( v4 )
      result = ndisPostSetOpenRSSParameters(v4, v3, *((unsigned int *)a1 + 10));
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    return WPP_SF_qqd(161LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v1, v4, *((_DWORD *)a1 + 10));
  return result;
}
