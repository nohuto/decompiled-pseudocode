/*
 * XREFs of vFetchShiftAndMerge @ 0x1C02D1F18
 * Callers:
 *     ?vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C00F3150 (-vPatXorRect8@@YAXPEAU_PATBLTFRAME@@@Z.c)
 *     ?vPatXorRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02C0110 (-vPatXorRow8@@YAXPEAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vFetchShiftAndMerge(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r10
  unsigned int v3; // r9d
  unsigned int *v4; // r11
  __int64 v5; // rdx
  int *v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // r10

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(unsigned int *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 20);
  v4 = *(unsigned int **)a1;
  v5 = *(unsigned int *)(a1 + 24);
  v6 = (int *)(v1 + v2);
  v7 = *(_QWORD *)a1 + 4 * v5;
  if ( v3 == 8 )
  {
    v8 = (unsigned int)(v2 + 4);
    if ( (unsigned int)v8 >= 8 )
      v8 = (unsigned int)(v8 - 8);
    MergePattern(v4, v5, *(_DWORD *)(v8 + v1), *v6);
  }
  else
  {
    while ( (unsigned __int64)v4 < v7 )
    {
      LODWORD(v2) = v2 + 4;
      *v4++ ^= *v6;
      if ( (unsigned int)v2 >= v3 )
        LODWORD(v2) = v2 - v3;
      v6 = (int *)(v1 + (unsigned int)v2);
    }
  }
}
