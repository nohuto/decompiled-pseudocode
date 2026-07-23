/*
 * XREFs of NormBuffer__GetLastChar @ 0x1402150A4
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x14068B744 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     Normalization__PageLookup @ 0x140582044 (Normalization__PageLookup.c)
 *     Normalization__TableLookup @ 0x140582054 (Normalization__TableLookup.c)
 */

__int64 __fastcall NormBuffer__GetLastChar(__int64 a1)
{
  unsigned __int16 *v2; // rcx
  int v4; // edx
  __int64 v5; // r9
  unsigned int v6; // r10d
  char v7; // al
  __int64 v8; // r9

  v2 = (unsigned __int16 *)(*(_QWORD *)(a1 + 40) - 2LL);
  if ( *(unsigned __int16 **)(a1 + 64) == v2 )
    return *(unsigned int *)(a1 + 56);
  v4 = *v2;
  *(_QWORD *)(a1 + 64) = v2;
  *(_DWORD *)(a1 + 56) = v4;
  if ( (unsigned int)(v4 - 56321) <= 0x3FE )
    *(_DWORD *)(a1 + 56) = v4 + ((*(v2 - 1) - 55287) << 10);
  if ( (unsigned __int8)(Normalization__PageLookup(*(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 56)) - 1) > 0xF9u )
  {
    *(_WORD *)(v5 + 72) = 0;
  }
  else
  {
    v7 = Normalization__TableLookup();
    *(_BYTE *)(v8 + 72) = v7 & 0x3F;
    *(_BYTE *)(v8 + 73) = v7 & 0xC0;
  }
  return v6;
}
