/*
 * XREFs of itrp_ROFF @ 0x1C0118570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_ROFF(__int64 a1)
{
  __int64 v1; // r8
  _BOOL8 v2; // rax
  __int64 result; // rax

  v1 = qword_1C03294E0;
  *(_WORD *)(qword_1C03294E0 + 132) = 5;
  v2 = word_1C0329554 && ((*(_BYTE *)(qword_1C03294E0 + 120) & 4) != 0 || *(_BYTE *)(qword_1C03294E0 + 333));
  *(_DWORD *)(v1 + 128) = *((_DWORD *)&unk_1C02EDAD4 + 8 * v2);
  result = a1;
  word_1C032952C = 0;
  return result;
}
