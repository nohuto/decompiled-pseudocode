/*
 * XREFs of itrp_RDTG @ 0x1C00D2CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RDTG(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = qword_1C03294E0;
  v2 = 1LL;
  *(_WORD *)(qword_1C03294E0 + 132) = 1;
  if ( !word_1C0329554 || (*(_BYTE *)(qword_1C03294E0 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C03294E0 + 333) )
    v2 = 0LL;
  *(_DWORD *)(v1 + 128) = *((_DWORD *)&unk_1C02EDAC4 + 8 * v2);
  result = a1;
  word_1C032952C = 0;
  return result;
}
