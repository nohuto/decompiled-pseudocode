/*
 * XREFs of CcGetVacbLargeOffset @ 0x1400855D0
 * Callers:
 *     CcGetVacbMiss @ 0x14003F1B0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x140086690 (CcUnmapVacbArray.c)
 *     CcGetVirtualAddressIfMapped @ 0x140113B48 (CcGetVirtualAddressIfMapped.c)
 *     CcUnmapInactiveViews @ 0x140167FCC (CcUnmapInactiveViews.c)
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
