/*
 * XREFs of itrp_RTHG @ 0x1C00F12A0
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

  v1 = qword_1C0323160;
  *(_WORD *)(qword_1C0323160 + 132) = 4;
  v2 = word_1C03231D4 && ((*(_BYTE *)(qword_1C0323160 + 120) & 4) != 0 || *(_BYTE *)(qword_1C0323160 + 333));
  *(_DWORD *)(v1 + 128) = *((_DWORD *)&unk_1C02E74F0 + 8 * v2);
  result = a1;
  word_1C03231AC = 0;
  return result;
}
