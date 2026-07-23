/*
 * XREFs of Normalization__CanCombinableCharactersCombine @ 0x14068A984
 * Callers:
 *     NormBuffer__LastStartBasePair @ 0x1402152CC (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x140215314 (NormBuffer__RecheckStartCombinations.c)
 *     Normalization__CanCombineWithStartBase @ 0x14068AB08 (Normalization__CanCombineWithStartBase.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x14068AB4C (Normalization__CanCombineWithStartFirstPair.c)
 *     Normalization__IsNormalized @ 0x14068AEDC (Normalization__IsNormalized.c)
 *     Normalization__NormalizeCharacter @ 0x14068B744 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Normalization__CanCombinableCharactersCombine(__int64 a1, int a2, int a3)
{
  int v6; // ecx
  int v7; // edx
  __int64 v8; // rcx
  unsigned __int16 v9; // r9
  unsigned __int16 v10; // si
  __int64 v11; // r10
  int v12; // r8d

  if ( ((a2 & 0x1F0000) == 0) != ((a3 & 0x1F0000) == 0) )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 88);
  if ( !v6 )
    return 0LL;
  v7 = (a2 + 12541 * a3) % v6;
  v8 = *(_QWORD *)(a1 + 96);
  v9 = *(_WORD *)(v8 + 2LL * (unsigned __int16)v7);
  v10 = *(_WORD *)(v8 + 2LL * ((unsigned __int16)v7 + 1));
  if ( v9 >= v10 )
    return 0LL;
  v11 = *(_QWORD *)(a1 + 104);
  while ( 1 )
  {
    v12 = *(unsigned __int16 *)(v11 + 2LL * v9);
    if ( a2 == v12 && a3 == *(unsigned __int16 *)(v11 + 2LL * (v9 + 1)) )
      return *(unsigned __int16 *)(v11 + 2LL * (v9 + 2));
    if ( (unsigned __int16)(v12 + 10240) <= 0x7FFu )
      break;
LABEL_14:
    v9 += 3;
    if ( v9 >= v10 )
      return 0LL;
  }
  if ( a2 <= 0xFFFF
    || (_WORD)v12 != (unsigned __int16)((a2 - 0x10000) / 1024) - 10240
    || *(_WORD *)(v11 + 2LL * (v9 + 1)) != (unsigned __int16)((a2 - 0x10000) % 1024) - 9216
    || *(_WORD *)(v11 + 2LL * (v9 + 2)) != (unsigned __int16)((a3 - 0x10000) / 1024) - 10240
    || *(_WORD *)(v11 + 2LL * (v9 + 3)) != (unsigned __int16)((a3 - 0x10000) % 1024) - 9216 )
  {
    v9 += 3;
    goto LABEL_14;
  }
  return *(unsigned __int16 *)(v11 + 2LL * (v9 + 5))
       + (((unsigned int)*(unsigned __int16 *)(v11 + 2LL * (v9 + 4)) - 55287) << 10);
}
