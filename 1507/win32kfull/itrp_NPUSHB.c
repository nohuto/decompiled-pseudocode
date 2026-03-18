/*
 * XREFs of itrp_NPUSHB @ 0x1C00C7310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall itrp_NPUSHB(unsigned __int8 *a1)
{
  unsigned __int8 *result; // rax
  unsigned __int64 v2; // r9
  _DWORD *v3; // r8
  __int64 v4; // r10
  unsigned __int64 v5; // rcx
  int v6; // ecx

  if ( (unsigned __int64)a1 < qword_1C03231C0 )
    goto LABEL_12;
  result = a1 + 1;
  if ( (unsigned __int64)(a1 + 1) > qword_1C03231B8 || result < a1 )
    goto LABEL_12;
  v2 = *a1;
  v3 = (_DWORD *)qword_1C0323148;
  v4 = *(_QWORD *)(qword_1C0323160 + 424);
  if ( (qword_1C0323160 ^ v4 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330]) != *(_QWORD *)(qword_1C0323160 + 432)
    || v2 > (v4 - qword_1C0323148) >> 2 )
  {
    dword_1C03231B0 = 4369;
    return (unsigned __int8 *)qword_1C03231B8;
  }
  if ( (unsigned __int64)result < qword_1C03231C0
    || (v5 = (unsigned __int64)&result[*a1], v5 > qword_1C03231B8)
    || v5 < (unsigned __int64)result )
  {
LABEL_12:
    dword_1C03231B0 = 4381;
    return (unsigned __int8 *)qword_1C03231B8;
  }
  for ( ; (_DWORD)v2; LODWORD(v2) = v2 - 1 )
  {
    v6 = *result++;
    *v3++ = v6;
  }
  qword_1C0323148 = (__int64)v3;
  return result;
}
