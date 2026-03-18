/*
 * XREFs of itrp_PUSHW1 @ 0x1C00DC860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_PUSHW1(unsigned __int8 *a1)
{
  __int64 v2; // r8
  __int64 result; // rax
  unsigned __int64 v4; // rcx

  v2 = *(_QWORD *)(qword_1C0323E30 + 424);
  if ( (qword_1C0323E30 ^ v2 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (v2 - qword_1C0323E18) >> 2 )
  {
    result = qword_1C0323E88;
    if ( (unsigned __int64)a1 < qword_1C0323E90
      || (v4 = (unsigned __int64)(a1 + 2), v4 > qword_1C0323E88)
      || v4 < (unsigned __int64)a1 )
    {
      dword_1C0323E80 = 4381;
    }
    else
    {
      *(_DWORD *)qword_1C0323E18 = (__int16)((*a1 << 8) + a1[1]);
      result = (__int64)(a1 + 2);
      qword_1C0323E18 += 4LL;
    }
  }
  else
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4369;
  }
  return result;
}
