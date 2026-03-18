/*
 * XREFs of itrp_S45ROUND @ 0x1C02E1120
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SetRoundValues @ 0x1C010CD18 (itrp_SetRoundValues.c)
 */

__int64 __fastcall itrp_S45ROUND(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 result; // rax

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (v2 = qword_1C03294C8, v3 = 1LL, (qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) )
  {
    qword_1C03294C8 -= 4LL;
    itrp_SetRoundValues(*(_DWORD *)(v2 - 4), 0);
    v4 = qword_1C03294E0;
    *(_WORD *)(qword_1C03294E0 + 132) = 7;
    if ( !word_1C0329554 || (*(_BYTE *)(qword_1C03294E0 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C03294E0 + 333) )
      v3 = 0LL;
    *(_DWORD *)(v4 + 128) = dword_1C02EDADC[8 * v3];
    result = a1;
    word_1C032952C = 0;
  }
  else
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4368;
  }
  return result;
}
