/*
 * XREFs of itrp_JROF @ 0x1C0109F10
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

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || (v2 = qword_1C03294C8, (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) < 2) )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  qword_1C03294C8 -= 4LL;
  v3 = *(_DWORD *)(v2 - 4);
  v4 = (_DWORD *)(v2 - 8);
  qword_1C03294C8 = (__int64)v4;
  if ( v3 )
    return a1;
  a1 += *v4 - 1;
  if ( !--dword_1C0329548 )
  {
    dword_1C0329530 = 4359;
    return qword_1C0329538;
  }
  result = qword_1C0329538;
  if ( a1 < qword_1C0329540 )
  {
    dword_1C0329530 = 4363;
    return result;
  }
  if ( a1 <= qword_1C0329538 )
    return a1;
  return result;
}
