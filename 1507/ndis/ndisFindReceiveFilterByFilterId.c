/*
 * XREFs of ndisFindReceiveFilterByFilterId @ 0x1C0038168
 * Callers:
 *     ndisClearReceiveFilter @ 0x1C0037D54 (ndisClearReceiveFilter.c)
 *     ndisOidPostRcvFilterMoveFilter @ 0x1C0038550 (ndisOidPostRcvFilterMoveFilter.c)
 *     ndisOidPostRcvFilterSetFilter @ 0x1C0038700 (ndisOidPostRcvFilterSetFilter.c)
 *     ndisOidPreRcvFilterClearFilter @ 0x1C00387E0 (ndisOidPreRcvFilterClearFilter.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C0038F90 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterParameters @ 0x1C0039120 (ndisOidPreRcvFilterParameters.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisFindReceiveFilterByFilterId(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r9
  __int64 v3; // r8
  __int64 *i; // rax
  unsigned int v5; // ecx

  v2 = (__int64 *)(a1 + 3544);
  v3 = 0LL;
  for ( i = *(__int64 **)(a1 + 3544); i != v2; i = (__int64 *)*i )
  {
    v5 = *((_DWORD *)i + 12);
    if ( v5 == a2 )
      return i;
    if ( v5 > a2 )
      return (__int64 *)v3;
  }
  return (__int64 *)v3;
}
