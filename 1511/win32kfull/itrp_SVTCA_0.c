/*
 * XREFs of itrp_SVTCA_0 @ 0x1C00A5A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SVTCA_0(__int64 a1)
{
  __int64 v2; // rcx
  __int16 v3; // ax

  dword_1C0323E08 = 0x40000000;
  dword_1C0323E0C = 0x40000000;
  dword_1C0323E5C = 3;
  dword_1C0323E60 = 4;
  v2 = 1LL;
  v3 = *(_WORD *)(qword_1C0323E30 + 452);
  if ( (v3 & 1) == 0 || (v3 & 4) == 0 )
  {
    word_1C0323EA4 = 0;
LABEL_3:
    v2 = 0LL;
    goto LABEL_4;
  }
  word_1C0323EA4 = 1;
  if ( (*(_BYTE *)(qword_1C0323E30 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C0323E30 + 333) )
    goto LABEL_3;
LABEL_4:
  *(_DWORD *)(qword_1C0323E30 + 128) = itrp_RoundFunctionId[8 * v2 + *(unsigned __int16 *)(qword_1C0323E30 + 132)];
  word_1C0323EA8 = -1;
  word_1C0323EA6 = -1;
  dword_1C0323E64 = 4;
  word_1C0323E58 = 0x4000;
  if ( word_1C0323E7C )
    word_1C0323E7C = 2;
  return a1;
}
