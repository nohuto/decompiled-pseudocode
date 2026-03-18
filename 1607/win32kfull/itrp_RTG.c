/*
 * XREFs of itrp_RTG @ 0x1C00C72F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RTG(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rdx

  v1 = qword_1C03294E0;
  v2 = 0LL;
  *(_WORD *)(qword_1C03294E0 + 132) = 3;
  if ( word_1C0329554 && ((*(_BYTE *)(qword_1C03294E0 + 120) & 4) != 0 || *(_BYTE *)(qword_1C03294E0 + 333)) )
    v2 = 1LL;
  *(_DWORD *)(v1 + 128) = *((_DWORD *)&unk_1C02EDACC + 8 * v2);
  return a1;
}
