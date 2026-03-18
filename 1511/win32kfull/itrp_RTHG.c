/*
 * XREFs of itrp_RTHG @ 0x1C00A55E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_RTHG(__int64 a1)
{
  __int64 v1; // r8
  _BOOL8 v2; // rax
  __int64 result; // rax

  v1 = qword_1C0323E30;
  *(_WORD *)(qword_1C0323E30 + 132) = 4;
  v2 = word_1C0323EA4 && ((*(_BYTE *)(qword_1C0323E30 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0323E30 + 333));
  *(_DWORD *)(v1 + 128) = *((_DWORD *)&unk_1C02E8720 + 8 * v2);
  result = a1;
  word_1C0323E7C = 0;
  return result;
}
