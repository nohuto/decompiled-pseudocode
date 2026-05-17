/*
 * XREFs of Normalization__CanCombinableCharactersCombine @ 0x1800E85B8
 * Callers:
 *     Normalization__IsNormalized @ 0x180002758 (Normalization__IsNormalized.c)
 *     Normalization__NormalizeCharacter @ 0x18006AE44 (Normalization__NormalizeCharacter.c)
 *     NormBuffer__LastStartBasePair @ 0x1800E81AC (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x1800E81FC (NormBuffer__RecheckStartCombinations.c)
 *     Normalization__CanCombineWithStartBase @ 0x1800E8708 (Normalization__CanCombineWithStartBase.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x1800E8754 (Normalization__CanCombineWithStartFirstPair.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Normalization__CanCombinableCharactersCombine(__int64 a1, int a2, int a3)
{
  int v5; // edx
  __int64 v6; // rax
  unsigned __int16 v7; // r8
  unsigned __int16 v8; // di
  __int64 v9; // r9
  int v10; // r10d

  if ( ((a2 & 0x1F0000) == 0) != ((a3 & 0x1F0000) == 0) )
    return 0LL;
  if ( !*(_DWORD *)(a1 + 88) )
    return 0LL;
  v5 = (a2 + 12541 * a3) % *(_DWORD *)(a1 + 88);
  v6 = *(_QWORD *)(a1 + 96);
  v7 = *(_WORD *)(v6 + 2LL * (unsigned __int16)v5);
  v8 = *(_WORD *)(v6 + 2LL * (unsigned __int16)v5 + 2);
  if ( v7 >= v8 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 104);
  while ( 1 )
  {
    v10 = *(unsigned __int16 *)(v9 + 2LL * v7);
    if ( a2 == v10 && a3 == *(unsigned __int16 *)(v9 + 2LL * v7 + 2) )
      return *(unsigned __int16 *)(v9 + 2LL * v7 + 4);
    if ( (unsigned __int16)(v10 + 10240) <= 0x7FFu )
      break;
LABEL_14:
    v7 += 3;
    if ( v7 >= v8 )
      return 0LL;
  }
  if ( a2 <= 0xFFFF
    || (_WORD)v10 != (unsigned __int16)((a2 - 0x10000) / 1024) - 10240
    || *(_WORD *)(v9 + 2LL * v7 + 2) != (unsigned __int16)((a2 - 0x10000) % 1024) - 9216
    || *(_WORD *)(v9 + 2LL * v7 + 4) != (unsigned __int16)((a3 - 0x10000) / 1024) - 10240
    || *(_WORD *)(v9 + 2LL * v7 + 6) != (unsigned __int16)((a3 - 0x10000) % 1024) - 9216 )
  {
    v7 += 3;
    goto LABEL_14;
  }
  return *(unsigned __int16 *)(v9 + 2LL * v7 + 10)
       + (((unsigned int)*(unsigned __int16 *)(v9 + 2LL * v7 + 8) - 55287) << 10);
}
