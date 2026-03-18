/*
 * XREFs of itrp_JROF @ 0x1C00E48E0
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

  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) != *(_QWORD *)(qword_1C0323160 + 432)
    || (v2 = qword_1C0323148, (unsigned __int64)((qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2) < 2) )
  {
    dword_1C03231B0 = 4368;
    return qword_1C03231B8;
  }
  qword_1C0323148 -= 4LL;
  v3 = *(_DWORD *)(v2 - 4);
  v4 = (_DWORD *)(v2 - 8);
  qword_1C0323148 = (__int64)v4;
  if ( v3 )
    return a1;
  a1 += *v4 - 1;
  if ( !--dword_1C03231C8 )
  {
    dword_1C03231B0 = 4359;
    return qword_1C03231B8;
  }
  result = qword_1C03231B8;
  if ( a1 < qword_1C03231C0 )
  {
    dword_1C03231B0 = 4363;
    return result;
  }
  if ( a1 <= qword_1C03231B8 )
    return a1;
  return result;
}
