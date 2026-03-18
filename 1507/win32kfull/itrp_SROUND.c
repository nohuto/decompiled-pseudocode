/*
 * XREFs of itrp_SROUND @ 0x1C00E84E0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SetRoundValues @ 0x1C00E85B8 (itrp_SetRoundValues.c)
 */

__int64 __fastcall itrp_SROUND(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 result; // rax

  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) == *(_QWORD *)(qword_1C0323160 + 432)
    && (v2 = 1LL, (qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2) )
  {
    qword_1C0323148 -= 4LL;
    itrp_SetRoundValues(*(unsigned int *)qword_1C0323148, 1LL);
    v3 = qword_1C0323160;
    *(_WORD *)(qword_1C0323160 + 132) = 6;
    if ( !word_1C03231D4 || (*(_BYTE *)(qword_1C0323160 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C0323160 + 333) )
      v2 = 0LL;
    *(_DWORD *)(v3 + 128) = *((_DWORD *)&unk_1C02E74F8 + 8 * v2);
    result = a1;
    word_1C03231AC = 0;
  }
  else
  {
    result = qword_1C03231B8;
    dword_1C03231B0 = 4368;
  }
  return result;
}
