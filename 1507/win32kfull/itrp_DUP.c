/*
 * XREFs of itrp_DUP @ 0x1C00D76B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DUP(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C0323160 + 424);
  if ( (qword_1C0323160 ^ v1 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0323160 + 432)
    && (qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2 )
  {
    if ( (v1 - qword_1C0323148) >> 2 )
    {
      *(_DWORD *)qword_1C0323148 = *(_DWORD *)(qword_1C0323148 - 4);
      result = a1;
      qword_1C0323148 += 4LL;
      return result;
    }
    dword_1C03231B0 = 4369;
  }
  else
  {
    dword_1C03231B0 = 4368;
  }
  return qword_1C03231B8;
}
