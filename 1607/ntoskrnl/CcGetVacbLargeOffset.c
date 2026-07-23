/*
 * XREFs of CcGetVacbLargeOffset @ 0x140017DC8
 * Callers:
 *     CcGetVirtualAddressIfMapped @ 0x1400169FC (CcGetVirtualAddressIfMapped.c)
 *     CcUnmapVacbArray @ 0x140017B40 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400182AC (CcGetVacbMiss.c)
 *     CcUnmapInactiveViews @ 0x140141F0C (CcUnmapInactiveViews.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetVacbLargeOffset(__int64 a1, __int64 a2)
{
  int v2; // r9d
  __int64 v3; // r10
  int v4; // r8d
  int v5; // r8d
  __int64 result; // rax
  __int64 v7; // rdx

  v2 = 0;
  v3 = a2;
  v4 = 25;
  do
  {
    v4 += 7;
    ++v2;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v4 );
  v5 = v4 - 7;
  for ( result = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * (a2 >> v5));
        result && v2;
        result = *(_QWORD *)(result + 8 * (v3 >> v5)) )
  {
    v7 = 1LL << v5;
    v5 -= 7;
    --v2;
    v3 &= v7 - 1;
  }
  return result;
}
