/*
 * XREFs of NormBuffer__RecheckStartCombinations @ 0x1800E81FC
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x18006AE44 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x1800E7EE0 (NormBuffer__GetCurrentOutputChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1800E85B8 (Normalization__CanCombinableCharactersCombine.c)
 */

unsigned __int64 __fastcall NormBuffer__RecheckStartCombinations(__int64 a1)
{
  unsigned __int64 result; // rax
  bool v2; // zf
  __int64 v3; // rbx
  unsigned __int16 *v4; // rsi
  unsigned __int16 *v5; // rdi
  char v6; // r15
  __int64 v7; // r14
  unsigned __int64 v8; // r8
  char v9; // bp
  __int64 v10; // rcx
  unsigned __int16 *v11; // rdi
  __int64 v12; // r8
  unsigned __int16 *v13; // rdx
  char v14; // r9
  unsigned __int16 *v15; // r8
  char v16; // al
  char v17; // r9
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  unsigned __int16 *v19; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = *(_BYTE *)(a1 + 93) == 64;
  v3 = a1;
  v4 = *(unsigned __int16 **)(a1 + 80);
  v19 = v4;
  if ( v2 )
  {
    v5 = *(unsigned __int16 **)(a1 + 40);
    v6 = 0;
    if ( v4 != v5 )
    {
      v7 = *(_QWORD *)(a1 + 112);
      while ( 1 )
      {
        result = NormBuffer__GetCurrentOutputChar(a1, &v19);
        a1 = *(_QWORD *)(v7 + 40);
        v8 = (result & 0x7F)
           + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)result >> 7) + *(_QWORD *)(v7 + 32)) << 7);
        v9 = *(_BYTE *)(v8 + a1 - 128) & 0x3F;
        if ( v9 == v6 )
          goto LABEL_17;
        if ( (*(_BYTE *)(v8 + a1 - 128) & 0xC0) != 0xC0 )
          break;
        result = Normalization__CanCombinableCharactersCombine(v7, *(unsigned int *)(v3 + 88), (unsigned int)result);
        if ( !(_DWORD)result )
          break;
        v10 = *(_QWORD *)(v7 + 32);
        v11 = v5 - 1;
        *(_DWORD *)(v3 + 88) = result;
        *(_QWORD *)(v3 + 40) = v11;
        v12 = *(unsigned __int8 *)(((__int64)(int)result >> 7) + v10);
        a1 = *(_QWORD *)(v7 + 40);
        v13 = v19;
        v14 = *(_BYTE *)((result & 0x7F) + (v12 << 7) + a1 - 128);
        v15 = v19;
        *(v4 - 1) = result;
        v16 = v14 & 0x3F;
        v17 = v14 & 0xC0;
        *(_BYTE *)(v3 + 92) = v16;
        result = *(_QWORD *)(v3 + 64);
        *(_BYTE *)(v3 + 93) = v17;
        if ( (unsigned __int16 *)result == v11 )
        {
          if ( (unsigned __int64)v13 >= result )
          {
            result = *(_QWORD *)(v3 + 24) - 2LL;
            *(_WORD *)(v3 + 72) = 0;
            *(_DWORD *)(v3 + 56) = 0;
          }
          else
          {
            result -= 2LL;
          }
          *(_QWORD *)(v3 + 64) = result;
        }
        if ( v13 != v11 )
        {
          do
          {
            a1 = (__int64)(v15 + 1);
            result = v15[1];
            *v15 = result;
            v15 = (unsigned __int16 *)a1;
          }
          while ( (unsigned __int16 *)a1 != v11 );
        }
        if ( v17 != 64 )
          return result;
LABEL_18:
        v5 = *(unsigned __int16 **)(v3 + 40);
        if ( v13 == v5 )
          return result;
      }
      v6 = v9;
LABEL_17:
      v13 = ++v19;
      goto LABEL_18;
    }
  }
  return result;
}
