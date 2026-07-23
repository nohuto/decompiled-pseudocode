/*
 * XREFs of NormBuffer__RecheckStartCombinations @ 0x140215314
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x14068B744 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x140215054 (NormBuffer__GetCurrentOutputChar.c)
 *     Normalization__GetCharacterInfo @ 0x14058200C (Normalization__GetCharacterInfo.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x14068A984 (Normalization__CanCombinableCharactersCombine.c)
 */

void __fastcall NormBuffer__RecheckStartCombinations(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rbx
  unsigned __int16 *v3; // rsi
  unsigned __int16 *v4; // rdi
  char v5; // r15
  __int64 v6; // r12
  unsigned int CurrentOutputChar; // r14d
  unsigned int CanCombinableCharactersCombine; // eax
  unsigned int v9; // r14d
  unsigned __int16 *v10; // rdi
  char v11; // r9
  unsigned __int16 *v12; // rdx
  _WORD *v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  char v17; // [rsp+60h] [rbp+40h] BYREF
  char v18; // [rsp+68h] [rbp+48h] BYREF
  unsigned __int16 *v19; // [rsp+70h] [rbp+50h] BYREF

  v1 = *(_BYTE *)(a1 + 93) == 64;
  v2 = a1;
  v3 = *(unsigned __int16 **)(a1 + 80);
  v19 = v3;
  if ( v1 )
  {
    v4 = *(unsigned __int16 **)(a1 + 40);
    v5 = 0;
    if ( v3 != v4 )
    {
      v6 = *(_QWORD *)(a1 + 112);
      while ( 1 )
      {
        CurrentOutputChar = NormBuffer__GetCurrentOutputChar(a1, &v19);
        Normalization__GetCharacterInfo(v6, CurrentOutputChar, &v17, &v18);
        if ( v17 == v5 )
          goto LABEL_17;
        if ( v18 != -64 )
          break;
        CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(
                                           v6,
                                           *(unsigned int *)(v2 + 88),
                                           CurrentOutputChar);
        v9 = CanCombinableCharactersCombine;
        if ( !CanCombinableCharactersCombine )
          break;
        Normalization__GetCharacterInfo(v6, CanCombinableCharactersCombine, &v17, &v18);
        v10 = v4 - 1;
        v11 = v18;
        v12 = v19;
        *(_BYTE *)(v2 + 92) = v17;
        v13 = v12;
        v14 = *(_QWORD *)(v2 + 64);
        *(v3 - 1) = v9;
        *(_DWORD *)(v2 + 88) = v9;
        *(_BYTE *)(v2 + 93) = v11;
        *(_QWORD *)(v2 + 40) = v10;
        if ( (unsigned __int16 *)v14 == v10 )
        {
          if ( (unsigned __int64)v12 >= v14 )
          {
            v16 = *(_QWORD *)(v2 + 24);
            *(_DWORD *)(v2 + 56) = 0;
            v15 = v16 - 2;
            *(_WORD *)(v2 + 72) = 0;
          }
          else
          {
            v15 = v14 - 2;
          }
          *(_QWORD *)(v2 + 64) = v15;
        }
        if ( v12 != v10 )
        {
          do
          {
            a1 = (__int64)(v13 + 1);
            *v13 = v13[1];
            v13 = (_WORD *)a1;
          }
          while ( (unsigned __int16 *)a1 != v10 );
        }
        if ( v11 != 64 )
          return;
LABEL_18:
        v4 = *(unsigned __int16 **)(v2 + 40);
        if ( v12 == v4 )
          return;
      }
      v5 = v17;
LABEL_17:
      v12 = ++v19;
      goto LABEL_18;
    }
  }
}
