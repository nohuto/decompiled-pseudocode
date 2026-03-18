/*
 * XREFs of itrp_ROUND @ 0x1C00CD4C0
 * Callers:
 *     <none>
 * Callees:
 *     InvokeRoundValue @ 0x1C00CD55C (InvokeRoundValue.c)
 */

__int64 __fastcall itrp_ROUND(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2 )
  {
    qword_1C03294C8 -= 4LL;
    *(_DWORD *)qword_1C03294C8 = InvokeRoundValue(
                                   *(unsigned int *)(qword_1C03294E0 + 128),
                                   *(unsigned int *)qword_1C03294C8,
                                   *(unsigned int *)(qword_1C03294E0 + 4LL * (a2 - 104) + 32));
    result = a1;
    qword_1C03294C8 += 4LL;
  }
  else
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4368;
  }
  return result;
}
