/*
 * XREFs of itrp_MPS @ 0x1C02DD1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_MPS(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C0323160 + 424);
  if ( (qword_1C0323160 ^ v1 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0323160 + 432)
    && (v1 - qword_1C0323148) >> 2 )
  {
    *(_DWORD *)qword_1C0323148 = *(unsigned __int16 *)(qword_1C0323160 + 26);
    result = a1;
    qword_1C0323148 += 4LL;
  }
  else
  {
    result = qword_1C03231B8;
    dword_1C03231B0 = 4369;
  }
  return result;
}
