/*
 * XREFs of itrp_S45ROUND @ 0x1C02DD850
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SetRoundValues @ 0x1C00A5B28 (itrp_SetRoundValues.c)
 */

__int64 __fastcall itrp_S45ROUND(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 result; // rax

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (v2 = qword_1C0323E18, v3 = 1LL, (qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) )
  {
    qword_1C0323E18 -= 4LL;
    itrp_SetRoundValues(*(_DWORD *)(v2 - 4), 0);
    v4 = qword_1C0323E30;
    *(_WORD *)(qword_1C0323E30 + 132) = 7;
    if ( !word_1C0323EA4 || (*(_BYTE *)(qword_1C0323E30 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C0323E30 + 333) )
      v3 = 0LL;
    *(_DWORD *)(v4 + 128) = dword_1C02E872C[8 * v3];
    result = a1;
    word_1C0323E7C = 0;
  }
  else
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4368;
  }
  return result;
}
