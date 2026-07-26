/*
 * XREFs of ndisIovFindVPortByVPortId @ 0x1C0064364
 * Callers:
 *     ndisOidPostRcvFilterMoveFilter @ 0x1C0039240 (ndisOidPostRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterEnumFilters @ 0x1C0039600 (ndisOidPreRcvFilterEnumFilters.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C0039C80 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisSetReceiveFilter @ 0x1C003A288 (ndisSetReceiveFilter.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C0063F30 (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 *     ndisOidPostIovVPortParameters @ 0x1C00650D0 (ndisOidPostIovVPortParameters.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00D3E10 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00D4D20 (ndisOidPreIovVPortParameters.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00DB6E0 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisIovFindVPortByVPortId(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r9
  __int64 v3; // r8
  __int64 *i; // rax
  unsigned int v5; // ecx

  v2 = (__int64 *)(a1 + 4808);
  v3 = 0LL;
  for ( i = *(__int64 **)(a1 + 4808); i != v2; i = (__int64 *)*i )
  {
    v5 = *((_DWORD *)i + 31);
    if ( v5 == a2 )
      return i;
    if ( v5 > a2 )
      return (__int64 *)v3;
  }
  return (__int64 *)v3;
}
