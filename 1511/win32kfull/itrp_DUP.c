/*
 * XREFs of itrp_DUP @ 0x1C00DC550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DUP(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C0323E30 + 424);
  if ( (qword_1C0323E30 ^ v1 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2 )
  {
    if ( (v1 - qword_1C0323E18) >> 2 )
    {
      *(_DWORD *)qword_1C0323E18 = *(_DWORD *)(qword_1C0323E18 - 4);
      result = a1;
      qword_1C0323E18 += 4LL;
      return result;
    }
    dword_1C0323E80 = 4369;
  }
  else
  {
    dword_1C0323E80 = 4368;
  }
  return qword_1C0323E88;
}
