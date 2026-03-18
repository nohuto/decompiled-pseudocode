/*
 * XREFs of itrp_JROF @ 0x1C00E9A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_JROF(unsigned __int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  _DWORD *v4; // rcx
  __int64 result; // rax

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) != *(_QWORD *)(qword_1C0323E30 + 432)
    || (v2 = qword_1C0323E18, (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) < 2) )
  {
    dword_1C0323E80 = 4368;
    return qword_1C0323E88;
  }
  qword_1C0323E18 -= 4LL;
  v3 = *(_DWORD *)(v2 - 4);
  v4 = (_DWORD *)(v2 - 8);
  qword_1C0323E18 = (__int64)v4;
  if ( v3 )
    return a1;
  a1 += *v4 - 1;
  if ( !--dword_1C0323E98 )
  {
    dword_1C0323E80 = 4359;
    return qword_1C0323E88;
  }
  result = qword_1C0323E88;
  if ( a1 < qword_1C0323E90 )
  {
    dword_1C0323E80 = 4363;
    return result;
  }
  if ( a1 <= qword_1C0323E88 )
    return a1;
  return result;
}
