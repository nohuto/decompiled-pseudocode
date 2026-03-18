/*
 * XREFs of itrp_SVTCA_1 @ 0x1C00CA360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SVTCA_1(__int64 a1)
{
  __int16 v2; // ax
  __int64 v3; // rcx

  dword_1C032950C = 2;
  dword_1C03294B8 = 0x4000;
  dword_1C03294BC = 0x4000;
  dword_1C0329510 = 3;
  v2 = *(_WORD *)(qword_1C03294E0 + 452);
  if ( (v2 & 1) == 0 || (v2 & 4) != 0 )
  {
    word_1C0329554 = 0;
  }
  else
  {
    word_1C0329554 = 1;
    if ( (*(_BYTE *)(qword_1C03294E0 + 120) & 4) != 0 || *(_BYTE *)(qword_1C03294E0 + 333) )
    {
      v3 = 1LL;
      goto LABEL_4;
    }
  }
  v3 = 0LL;
LABEL_4:
  *(_DWORD *)(qword_1C03294E0 + 128) = itrp_RoundFunctionId[8 * v3 + *(unsigned __int16 *)(qword_1C03294E0 + 132)];
  word_1C0329558 = -1;
  word_1C0329556 = -1;
  dword_1C0329514 = 3;
  word_1C0329508 = 0x4000;
  word_1C032952C = word_1C032952C != 0;
  return a1;
}
