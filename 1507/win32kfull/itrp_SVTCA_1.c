/*
 * XREFs of itrp_SVTCA_1 @ 0x1C00BA8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SVTCA_1(__int64 a1)
{
  __int16 v2; // ax
  __int64 v3; // rcx

  dword_1C032318C = 2;
  dword_1C0323138 = 0x4000;
  dword_1C032313C = 0x4000;
  dword_1C0323190 = 3;
  v2 = *(_WORD *)(qword_1C0323160 + 452);
  if ( (v2 & 1) == 0 || (v2 & 4) != 0 )
  {
    word_1C03231D4 = 0;
  }
  else
  {
    word_1C03231D4 = 1;
    if ( (*(_BYTE *)(qword_1C0323160 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0323160 + 333) )
    {
      v3 = 1LL;
      goto LABEL_4;
    }
  }
  v3 = 0LL;
LABEL_4:
  *(_DWORD *)(qword_1C0323160 + 128) = itrp_RoundFunctionId[8 * v3 + *(unsigned __int16 *)(qword_1C0323160 + 132)];
  word_1C03231D8 = -1;
  word_1C03231D6 = -1;
  dword_1C0323194 = 3;
  word_1C0323188 = 0x4000;
  word_1C03231AC = word_1C03231AC != 0;
  return a1;
}
