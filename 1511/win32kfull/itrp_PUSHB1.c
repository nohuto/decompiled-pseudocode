/*
 * XREFs of itrp_PUSHB1 @ 0x1C00D9E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall itrp_PUSHB1(unsigned __int8 *a1)
{
  __int64 v1; // rax
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C0323E30 + 424);
  if ( (qword_1C0323E30 ^ v1 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (v1 - qword_1C0323E18) >> 2 )
  {
    if ( (unsigned __int64)a1 < qword_1C0323E90
      || (result = (unsigned __int64)(a1 + 1), (unsigned __int64)(a1 + 1) > qword_1C0323E88)
      || result < (unsigned __int64)a1 )
    {
      dword_1C0323E80 = 4381;
      return qword_1C0323E88;
    }
    else
    {
      *(_DWORD *)qword_1C0323E18 = *a1;
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
