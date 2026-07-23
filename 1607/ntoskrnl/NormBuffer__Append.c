/*
 * XREFs of NormBuffer__Append @ 0x140214F70
 * Callers:
 *     NormBuffer__AppendEx @ 0x14021501C (NormBuffer__AppendEx.c)
 *     Normalization__Normalize @ 0x14068B598 (Normalization__Normalize.c)
 *     Normalization__NormalizeCharacter @ 0x14068B744 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

char __fastcall NormBuffer__Append(__int64 a1, int a2)
{
  _WORD *v2; // r8
  _WORD *v4; // rax

  if ( a2 >= 0x10000 )
  {
    v2 = *(_WORD **)(a1 + 40);
    if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 32) )
      return 0;
    *v2 = (a2 - 0x10000) / 1024 - 10240;
    *(_QWORD *)(a1 + 40) = v2 + 1;
    LOWORD(a2) = (a2 - 0x10000) % 1024 - 9216;
  }
  v4 = *(_WORD **)(a1 + 40);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 32) )
    return 0;
  *v4 = a2;
  *(_QWORD *)(a1 + 40) = v4 + 1;
  return 1;
}
