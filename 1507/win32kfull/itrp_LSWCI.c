/*
 * XREFs of itrp_LSWCI @ 0x1C02DD130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_LSWCI(__int64 a1)
{
  __int64 result; // rax

  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) == *(_QWORD *)(qword_1C0323160 + 432)
    && (qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2 )
  {
    qword_1C0323148 -= 4LL;
    *(_DWORD *)(qword_1C0323160 + 108) = *(_DWORD *)qword_1C0323148;
    word_1C03231AC = 0;
    return a1;
  }
  else
  {
    result = qword_1C03231B8;
    dword_1C03231B0 = 4368;
  }
  return result;
}
