/*
 * XREFs of NormBuffer__RecheckStartCombinations @ 0x1800F13E0
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180058880 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__GetCurrentOutputChar @ 0x1800F10C0 (NormBuffer__GetCurrentOutputChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1800F18B8 (Normalization__CanCombinableCharactersCombine.c)
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
  __int64 v8; // r8
  char v9; // bp
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int16 *v13; // rdi
  unsigned __int16 *v14; // rdx
  unsigned __int16 *v15; // r8
  char v16; // r10
  __int64 v17; // rax
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
           + ((__int64)(*(unsigned __int8 *)(((__int64)(int)result >> 7) + *(_QWORD *)(v7 + 32)) - 1) << 7);
        v9 = *(_BYTE *)(v8 + a1) & 0x3F;
        if ( v9 == v6 )
          goto LABEL_17;
        if ( (*(_BYTE *)(v8 + a1) & 0xC0) != 0xC0 )
          break;
        result = Normalization__CanCombinableCharactersCombine(v7, *(unsigned int *)(v3 + 88), (unsigned int)result);
        v10 = (int)result;
        if ( !(_DWORD)result )
          break;
        v11 = *(_QWORD *)(v7 + 40);
        v12 = *(_QWORD *)(v7 + 32);
        v13 = v5 - 1;
        *(_DWORD *)(v3 + 88) = v10;
        *(_QWORD *)(v3 + 40) = v13;
        v14 = v19;
        a1 = (v10 & 0x7F) + ((__int64)(*(unsigned __int8 *)((v10 >> 7) + v12) - 1) << 7);
        v15 = v19;
        LOBYTE(v11) = *(_BYTE *)(a1 + v11);
        *(v4 - 1) = v10;
        v16 = v11 & 0xC0;
        *(_BYTE *)(v3 + 92) = v11 & 0x3F;
        result = *(_QWORD *)(v3 + 64);
        *(_BYTE *)(v3 + 93) = v16;
        if ( (unsigned __int16 *)result == v13 )
        {
          if ( (unsigned __int64)v14 >= result )
          {
            v17 = *(_QWORD *)(v3 + 24);
            *(_DWORD *)(v3 + 56) = 0;
            result = v17 - 2;
            *(_WORD *)(v3 + 72) = 0;
          }
          else
          {
            result -= 2LL;
          }
          *(_QWORD *)(v3 + 64) = result;
        }
        if ( v14 != v13 )
        {
          do
          {
            a1 = (__int64)(v15 + 1);
            result = v15[1];
            *v15 = result;
            v15 = (unsigned __int16 *)a1;
          }
          while ( (unsigned __int16 *)a1 != v13 );
        }
        if ( v16 != 64 )
          return result;
LABEL_18:
        v5 = *(unsigned __int16 **)(v3 + 40);
        if ( v14 == v5 )
          return result;
      }
      v6 = v9;
LABEL_17:
      v14 = ++v19;
      goto LABEL_18;
    }
  }
  return result;
}
