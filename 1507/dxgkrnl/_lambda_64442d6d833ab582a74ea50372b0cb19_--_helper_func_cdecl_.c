/*
 * XREFs of _lambda_64442d6d833ab582a74ea50372b0cb19_::_helper_func_cdecl_ @ 0x1C0152120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_64442d6d833ab582a74ea50372b0cb19_::_helper_func_cdecl_(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  if ( (*(_DWORD *)(a1 + 284) & 1) == 0 )
    return 0LL;
  _m_prefetchw((const void *)(a1 + 24));
  v2 = *(_QWORD *)(a1 + 24);
  do
  {
    if ( !v2 )
      break;
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v2 + 1, v2);
  }
  while ( v3 != v2 );
  *(_QWORD *)(a2 + 8) = a1;
  return 128LL;
}
