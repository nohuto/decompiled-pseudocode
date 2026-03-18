/*
 * XREFs of itrp_NPUSHB @ 0x1C00D9ED0
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

  if ( (unsigned __int64)a1 < qword_1C0323E90 )
    goto LABEL_12;
  result = a1 + 1;
  if ( (unsigned __int64)(a1 + 1) > qword_1C0323E88 || result < a1 )
    goto LABEL_12;
  v2 = *a1;
  v3 = (_DWORD *)qword_1C0323E18;
  v4 = *(_QWORD *)(qword_1C0323E30 + 424);
  if ( (qword_1C0323E30 ^ v4 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330]) != *(_QWORD *)(qword_1C0323E30 + 432)
    || v2 > (v4 - qword_1C0323E18) >> 2 )
  {
    dword_1C0323E80 = 4369;
    return (unsigned __int8 *)qword_1C0323E88;
  }
  if ( (unsigned __int64)result < qword_1C0323E90
    || (v5 = (unsigned __int64)&result[*a1], v5 > qword_1C0323E88)
    || v5 < (unsigned __int64)result )
  {
LABEL_12:
    dword_1C0323E80 = 4381;
    return (unsigned __int8 *)qword_1C0323E88;
  }
  for ( ; (_DWORD)v2; LODWORD(v2) = v2 - 1 )
  {
    v6 = *result++;
    *v3++ = v6;
  }
  qword_1C0323E18 = (__int64)v3;
  return result;
}
