/*
 * XREFs of itrp_ROUND @ 0x1C00B5C00
 * Callers:
 *     <none>
 * Callees:
 *     InvokeRoundValue @ 0x1C00B5C98 (InvokeRoundValue.c)
 */

__int64 __fastcall itrp_ROUND(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2 )
  {
    qword_1C0323E18 -= 4LL;
    *(_DWORD *)qword_1C0323E18 = InvokeRoundValue(
                                   *(unsigned int *)(qword_1C0323E30 + 128),
                                   *(unsigned int *)qword_1C0323E18,
                                   *(unsigned int *)(qword_1C0323E30 + 4LL * a2 - 384));
    result = a1;
    qword_1C0323E18 += 4LL;
  }
  else
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4368;
  }
  return result;
}
