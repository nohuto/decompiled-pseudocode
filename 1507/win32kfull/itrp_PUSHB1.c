/*
 * XREFs of itrp_PUSHB1 @ 0x1C00D3460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall itrp_PUSHB1(unsigned __int8 *a1)
{
  __int64 v1; // rax
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(qword_1C0323160 + 424);
  if ( (qword_1C0323160 ^ v1 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0323160 + 432)
    && (v1 - qword_1C0323148) >> 2 )
  {
    if ( (unsigned __int64)a1 < qword_1C03231C0
      || (result = (unsigned __int64)(a1 + 1), (unsigned __int64)(a1 + 1) > qword_1C03231B8)
      || result < (unsigned __int64)a1 )
    {
      dword_1C03231B0 = 4381;
      return qword_1C03231B8;
    }
    else
    {
      *(_DWORD *)qword_1C0323148 = *a1;
      qword_1C0323148 += 4LL;
    }
  }
  else
  {
    result = qword_1C03231B8;
    dword_1C03231B0 = 4369;
  }
  return result;
}
