/*
 * XREFs of itrp_SRP1 @ 0x1C00E2740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SRP1(__int64 a1)
{
  __int64 result; // rax

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2 )
  {
    qword_1C0323E18 -= 4LL;
    HIDWORD(qword_1C0323E40) = *(_DWORD *)qword_1C0323E18;
    return a1;
  }
  else
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4368;
  }
  return result;
}
