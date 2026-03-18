/*
 * XREFs of itrp_SVTCA_0 @ 0x1C00BA9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SVTCA_0(__int64 a1)
{
  __int64 v2; // rcx
  __int16 v3; // ax

  dword_1C0323138 = 0x40000000;
  dword_1C032313C = 0x40000000;
  dword_1C032318C = 3;
  dword_1C0323190 = 4;
  v2 = 1LL;
  v3 = *(_WORD *)(qword_1C0323160 + 452);
  if ( (v3 & 1) == 0 || (v3 & 4) == 0 )
  {
    word_1C03231D4 = 0;
LABEL_3:
    v2 = 0LL;
    goto LABEL_4;
  }
  word_1C03231D4 = 1;
  if ( (*(_BYTE *)(qword_1C0323160 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C0323160 + 333) )
    goto LABEL_3;
LABEL_4:
  *(_DWORD *)(qword_1C0323160 + 128) = itrp_RoundFunctionId[8 * v2 + *(unsigned __int16 *)(qword_1C0323160 + 132)];
  word_1C03231D8 = -1;
  word_1C03231D6 = -1;
  dword_1C0323194 = 4;
  word_1C0323188 = 0x4000;
  if ( word_1C03231AC )
    word_1C03231AC = 2;
  return a1;
}
