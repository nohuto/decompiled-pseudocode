/*
 * XREFs of itrp_SROUND @ 0x1C010CC40
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SetRoundValues @ 0x1C010CD18 (itrp_SetRoundValues.c)
 */

__int64 __fastcall itrp_SROUND(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 result; // rax

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (v2 = 1LL, (qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) )
  {
    qword_1C03294C8 -= 4LL;
    itrp_SetRoundValues(*(unsigned int *)qword_1C03294C8, 1LL);
    v3 = qword_1C03294E0;
    *(_WORD *)(qword_1C03294E0 + 132) = 6;
    if ( !word_1C0329554 || (*(_BYTE *)(qword_1C03294E0 + 120) & 4) == 0 && !*(_BYTE *)(qword_1C03294E0 + 333) )
      v2 = 0LL;
    *(_DWORD *)(v3 + 128) = *((_DWORD *)&unk_1C02EDAD8 + 8 * v2);
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
