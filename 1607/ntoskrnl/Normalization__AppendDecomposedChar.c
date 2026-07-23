/*
 * XREFs of Normalization__AppendDecomposedChar @ 0x14068A87C
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x14068B744 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     Normalization__NormalizeCharacter @ 0x14068B744 (Normalization__NormalizeCharacter.c)
 */

__int64 __fastcall Normalization__AppendDecomposedChar(__int64 a1, int a2, __int64 a3)
{
  __int16 v3; // r10
  unsigned __int16 v6; // bx
  __int64 v7; // rdx
  unsigned __int16 i; // bx
  __int16 v9; // cx
  int v10; // edi
  unsigned __int16 j; // bx
  __int64 v12; // r8
  unsigned __int16 v13; // cx
  __int64 v14; // rdx
  __int64 result; // rax

  v3 = a2;
  v6 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (a2 % *(_DWORD *)(a1 + 56)));
  if ( (v6 & 0xE000) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 72);
    for ( i = 2 * v6; ; i += 2 )
    {
      v9 = *(_WORD *)(v7 + 2LL * i);
      if ( !v9 || v9 == v3 )
        break;
    }
    v6 = *(_WORD *)(v7 + 2LL * (i + 1));
  }
  v10 = v6 >> 13;
  if ( v10 == 7 )
    v10 = 100;
  for ( j = v6 & 0x1FFF; v10 > 0; ++j )
  {
    v12 = *(_QWORD *)(a1 + 80);
    v13 = *(_WORD *)(v12 + 2LL * j);
    if ( !v13 )
      break;
    v14 = v13;
    if ( (unsigned int)v13 - 55296 <= 0x7FF )
    {
      ++j;
      --v10;
      v14 = *(unsigned __int16 *)(v12 + 2LL * j) + (((unsigned int)v13 - 55287) << 10);
    }
    LOBYTE(v12) = *(_BYTE *)(((__int64)(int)v14 >> 7) + *(_QWORD *)(a1 + 32));
    result = Normalization__NormalizeCharacter(a1, v14, v12, a3);
    if ( (_DWORD)result )
      return result;
    --v10;
  }
  return 0LL;
}
