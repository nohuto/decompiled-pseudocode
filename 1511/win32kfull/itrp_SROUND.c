/*
 * XREFs of itrp_SROUND @ 0x1C00A5850
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SetRoundValues @ 0x1C00A5B28 (itrp_SetRoundValues.c)
 */

__int64 __fastcall itrp_SROUND(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 result; // rax

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (v2 = 1LL, (qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) )
  {
    qword_1C0323E18 -= 4LL;
    itrp_SetRoundValues(*(unsigned int *)qword_1C0323E18, 1LL);
    v3 = qword_1C0323E30;
    *(_WORD *)(qword_1C0323E30 + 132) = 6;
    if ( !word_1C0323EA4 || (*(_BYTE *)(qword_1C0323E30 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C0323E30 + 333) )
      v2 = 0LL;
    *(_DWORD *)(v3 + 128) = *((_DWORD *)&unk_1C02E8728 + 8 * v2);
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
