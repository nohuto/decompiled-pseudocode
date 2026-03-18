/*
 * XREFs of itrp_SVTCA_0 @ 0x1C00CA430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SVTCA_0(__int64 a1)
{
  __int64 v2; // rcx
  __int16 v3; // ax

  dword_1C03294B8 = 0x40000000;
  dword_1C03294BC = 0x40000000;
  dword_1C032950C = 3;
  dword_1C0329510 = 4;
  v2 = 1LL;
  v3 = *(_WORD *)(qword_1C03294E0 + 452);
  if ( (v3 & 1) == 0 || (v3 & 4) == 0 )
  {
    word_1C0329554 = 0;
LABEL_3:
    v2 = 0LL;
    goto LABEL_4;
  }
  word_1C0329554 = 1;
  if ( (*(_BYTE *)(qword_1C03294E0 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C03294E0 + 333) )
    goto LABEL_3;
LABEL_4:
  *(_DWORD *)(qword_1C03294E0 + 128) = itrp_RoundFunctionId[8 * v2 + *(unsigned __int16 *)(qword_1C03294E0 + 132)];
  word_1C0329558 = -1;
  word_1C0329556 = -1;
  dword_1C0329514 = 4;
  word_1C0329508 = 0x4000;
  if ( word_1C032952C )
    word_1C032952C = 2;
  return a1;
}
