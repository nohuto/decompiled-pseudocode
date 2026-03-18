/*
 * XREFs of itrp_PUSHW1 @ 0x1C00D6D80
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

  v2 = *(_QWORD *)(qword_1C0323160 + 424);
  if ( (qword_1C0323160 ^ v2 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0323160 + 432)
    && (v2 - qword_1C0323148) >> 2 )
  {
    result = qword_1C03231B8;
    if ( (unsigned __int64)a1 < qword_1C03231C0
      || (v4 = (unsigned __int64)(a1 + 2), v4 > qword_1C03231B8)
      || v4 < (unsigned __int64)a1 )
    {
      dword_1C03231B0 = 4381;
    }
    else
    {
      *(_DWORD *)qword_1C0323148 = (__int16)((*a1 << 8) + a1[1]);
      result = (__int64)(a1 + 2);
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
