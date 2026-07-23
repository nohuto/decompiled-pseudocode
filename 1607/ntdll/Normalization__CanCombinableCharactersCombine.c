/*
 * XREFs of Normalization__CanCombinableCharactersCombine @ 0x1800F18B8
 * Callers:
 *     Normalization__IsNormalized @ 0x180002D18 (Normalization__IsNormalized.c)
 *     Normalization__NormalizeCharacter @ 0x180058880 (Normalization__NormalizeCharacter.c)
 *     NormBuffer__LastStartBasePair @ 0x1800F1390 (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x1800F13E0 (NormBuffer__RecheckStartCombinations.c)
 *     Normalization__CanCombineWithStartBase @ 0x1800F1A44 (Normalization__CanCombineWithStartBase.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x1800F1A90 (Normalization__CanCombineWithStartFirstPair.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Normalization__CanCombinableCharactersCombine(__int64 a1, int a2, int a3)
{
  int v6; // edx
  __int64 v7; // rcx
  unsigned __int16 v8; // r9
  unsigned __int16 v9; // si
  __int64 v10; // r10
  int v11; // r8d

  if ( ((a2 & 0x1F0000) == 0) != ((a3 & 0x1F0000) == 0) )
    return 0LL;
  if ( !*(_DWORD *)(a1 + 88) )
    return 0LL;
  v6 = (a2 + 12541 * a3) % *(_DWORD *)(a1 + 88);
  v7 = *(_QWORD *)(a1 + 96);
  v8 = *(_WORD *)(v7 + 2LL * (unsigned __int16)v6);
  v9 = *(_WORD *)(v7 + 2LL * ((unsigned __int16)v6 + 1));
  if ( v8 >= v9 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 104);
  while ( 1 )
  {
    v11 = *(unsigned __int16 *)(v10 + 2LL * v8);
    if ( a2 == v11 && a3 == *(unsigned __int16 *)(v10 + 2LL * (v8 + 1)) )
      return *(unsigned __int16 *)(v10 + 2LL * (v8 + 2));
    if ( (unsigned __int16)(v11 + 10240) <= 0x7FFu )
      break;
LABEL_14:
    v8 += 3;
    if ( v8 >= v9 )
      return 0LL;
  }
  if ( a2 <= 0xFFFF
    || (_WORD)v11 != (unsigned __int16)((a2 - 0x10000) / 1024) - 10240
    || *(_WORD *)(v10 + 2LL * (v8 + 1)) != (unsigned __int16)((a2 - 0x10000) % 1024) - 9216
    || *(_WORD *)(v10 + 2LL * (v8 + 2)) != (unsigned __int16)((a3 - 0x10000) / 1024) - 10240
    || *(_WORD *)(v10 + 2LL * (v8 + 3)) != (unsigned __int16)((a3 - 0x10000) % 1024) - 9216 )
  {
    v8 += 3;
    goto LABEL_14;
  }
  return *(unsigned __int16 *)(v10 + 2LL * (v8 + 5))
       + (((unsigned int)*(unsigned __int16 *)(v10 + 2LL * (v8 + 4)) - 55287) << 10);
}
