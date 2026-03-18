/*
 * XREFs of itrp_SVTCA_1 @ 0x1C00A5990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SVTCA_1(__int64 a1)
{
  __int16 v2; // ax
  __int64 v3; // rcx

  dword_1C0323E5C = 2;
  dword_1C0323E08 = 0x4000;
  dword_1C0323E0C = 0x4000;
  dword_1C0323E60 = 3;
  v2 = *(_WORD *)(qword_1C0323E30 + 452);
  if ( (v2 & 1) == 0 || (v2 & 4) != 0 )
  {
    word_1C0323EA4 = 0;
  }
  else
  {
    word_1C0323EA4 = 1;
    if ( (*(_BYTE *)(qword_1C0323E30 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0323E30 + 333) )
    {
      v3 = 1LL;
      goto LABEL_4;
    }
  }
  v3 = 0LL;
LABEL_4:
  *(_DWORD *)(qword_1C0323E30 + 128) = itrp_RoundFunctionId[8 * v3 + *(unsigned __int16 *)(qword_1C0323E30 + 132)];
  word_1C0323EA8 = -1;
  word_1C0323EA6 = -1;
  dword_1C0323E64 = 3;
  word_1C0323E58 = 0x4000;
  word_1C0323E7C = word_1C0323E7C != 0;
  return a1;
}
