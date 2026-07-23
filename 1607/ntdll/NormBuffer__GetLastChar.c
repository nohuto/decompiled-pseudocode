/*
 * XREFs of NormBuffer__GetLastChar @ 0x1800F1118
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180058880 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NormBuffer__GetLastChar(__int64 a1)
{
  unsigned __int16 *v2; // rcx
  int v4; // edx
  unsigned int v5; // r9d
  __int64 v6; // r10
  unsigned __int8 v7; // r11
  char v8; // dl

  v2 = (unsigned __int16 *)(*(_QWORD *)(a1 + 40) - 2LL);
  if ( *(unsigned __int16 **)(a1 + 64) == v2 )
    return *(unsigned int *)(a1 + 56);
  v4 = *v2;
  *(_QWORD *)(a1 + 64) = v2;
  *(_DWORD *)(a1 + 56) = v4;
  if ( (unsigned int)(v4 - 56321) <= 0x3FE )
    *(_DWORD *)(a1 + 56) = v4 + ((*(v2 - 1) - 55287) << 10);
  v5 = *(_DWORD *)(a1 + 56);
  v6 = *(_QWORD *)(a1 + 112);
  v7 = *(_BYTE *)(((__int64)(int)v5 >> 7) + *(_QWORD *)(v6 + 32));
  if ( (unsigned __int8)(v7 - 1) > 0xF9u )
  {
    *(_WORD *)(a1 + 72) = 0;
  }
  else
  {
    v8 = *(_BYTE *)(*(_QWORD *)(v6 + 40) + ((__int64)(v7 - 1) << 7) + (v5 & 0x7F));
    *(_BYTE *)(a1 + 72) = v8 & 0x3F;
    *(_BYTE *)(a1 + 73) = v8 & 0xC0;
  }
  return v5;
}
