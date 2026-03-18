/*
 * XREFs of itrp_EQ @ 0x1C00D7CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_EQ(__int64 a1)
{
  __int64 result; // rax

  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) == *(_QWORD *)(qword_1C0323160 + 432)
    && (unsigned __int64)((qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2) >= 2 )
  {
    qword_1C0323148 -= 4LL;
    result = a1;
    *(_DWORD *)(qword_1C0323148 - 4) = *(_DWORD *)(qword_1C0323148 - 4) == *(_DWORD *)qword_1C0323148;
  }
  else
  {
    result = qword_1C03231B8;
    dword_1C03231B0 = 4368;
  }
  return result;
}
