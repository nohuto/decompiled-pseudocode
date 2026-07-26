/*
 * XREFs of ndisIovFindVPortByVPortId @ 0x1C0065540
 * Callers:
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C000F7E0 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisOidPostRcvFilterMoveFilter @ 0x1C0038550 (ndisOidPostRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterEnumFilters @ 0x1C0038910 (ndisOidPreRcvFilterEnumFilters.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C0038F90 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisSetReceiveFilter @ 0x1C0039558 (ndisSetReceiveFilter.c)
 *     ndisOidPostIovVPortParameters @ 0x1C0065F10 (ndisOidPostIovVPortParameters.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00DA520 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00DB3E0 (ndisOidPreIovVPortParameters.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00E19B0 (ndisOidPrePDOpenProvider.c)
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
