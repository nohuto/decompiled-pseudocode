/*
 * XREFs of itrp_MUL @ 0x1C00B8F30
 * Callers:
 *     <none>
 * Callees:
 *     Mul26Dot6 @ 0x1C00B8FB4 (Mul26Dot6.c)
 */

__int64 __fastcall itrp_MUL(__int64 a1)
{
  __int64 result; // rax

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) >= 2 )
  {
    qword_1C0323E18 -= 4LL;
    *(_DWORD *)(qword_1C0323E18 - 4) = Mul26Dot6(
                                         *(unsigned int *)(qword_1C0323E18 - 4),
                                         *(unsigned int *)qword_1C0323E18,
                                         qword_1C0323E30);
    return a1;
  }
  else
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4368;
  }
  return result;
}
