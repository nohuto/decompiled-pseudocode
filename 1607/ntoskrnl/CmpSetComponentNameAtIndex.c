/*
 * XREFs of CmpSetComponentNameAtIndex @ 0x14049B798
 * Callers:
 *     CmpComputeComponentHashes @ 0x14049B480 (CmpComputeComponentHashes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSetComponentNameAtIndex(__int64 a1, unsigned int a2, __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 result; // rax

  v3 = *a3;
  if ( a2 >= 8 )
  {
    result = *(_QWORD *)(a1 + 160);
    *(_OWORD *)(result + 16 * (a2 - 8 + 6LL)) = v3;
  }
  else
  {
    result = 2 * (a2 + 2LL);
    *(_OWORD *)(a1 + 16 * (a2 + 2LL)) = v3;
  }
  return result;
}
