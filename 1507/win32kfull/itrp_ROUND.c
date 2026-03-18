/*
 * XREFs of itrp_ROUND @ 0x1C00BD280
 * Callers:
 *     <none>
 * Callees:
 *     InvokeRoundValue @ 0x1C00BD5B4 (InvokeRoundValue.c)
 */

__int64 __fastcall itrp_ROUND(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) == *(_QWORD *)(qword_1C0323160 + 432)
    && (qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2 )
  {
    qword_1C0323148 -= 4LL;
    *(_DWORD *)qword_1C0323148 = InvokeRoundValue(
                                   *(unsigned int *)(qword_1C0323160 + 128),
                                   *(unsigned int *)qword_1C0323148,
                                   *(unsigned int *)(qword_1C0323160 + 4LL * a2 - 384));
    result = a1;
    qword_1C0323148 += 4LL;
  }
  else
  {
    result = qword_1C03231B8;
    dword_1C03231B0 = 4368;
  }
  return result;
}
