/*
 * XREFs of sub_140011A70 @ 0x140011A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400084D8 @ 0x1400084D8 (sub_1400084D8.c)
 */

__int64 __fastcall sub_140011A70(__int64 a1, __int64 a2, const WCHAR *a3, __int64 a4, int a5, __int64 a6)
{
  _DWORD *v6; // rbx
  __int64 result; // rax

  v6 = (_DWORD *)a6;
  result = sub_1400084D8(a6 + 40, a3, 0LL, 1u, (__int64)&a6);
  if ( (int)result >= 0 )
  {
    ++*v6;
    v6[1] += *(unsigned __int16 *)(a6 + 16) + 2;
  }
  return result;
}
