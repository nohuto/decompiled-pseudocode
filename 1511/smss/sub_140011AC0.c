/*
 * XREFs of sub_140011AC0 @ 0x140011AC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400084D8 @ 0x1400084D8 (sub_1400084D8.c)
 */

__int64 __fastcall sub_140011AC0(__int64 a1, __int64 a2, const WCHAR *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_140020950 )
  {
    result = sub_1400084D8(a6, (const WCHAR *)qword_140020950, a3, 0, 0LL);
    qword_140020950 = 0LL;
  }
  else
  {
    qword_140020950 = (__int64)a3;
    return 0LL;
  }
  return result;
}
