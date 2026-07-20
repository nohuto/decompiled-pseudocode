/*
 * XREFs of sub_1400119F0 @ 0x1400119F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400084D8 @ 0x1400084D8 (sub_1400084D8.c)
 */

__int64 __fastcall sub_1400119F0(__int64 a1, int a2, const WCHAR *a3, __int64 a4, int a5, __int64 a6)
{
  const WCHAR *v6; // rbx
  __int64 result; // rax

  v6 = a3;
  if ( a2 != 7 && a2 != 1 || !*a3 )
    return 0LL;
  while ( 1 )
  {
    result = sub_1400084D8(a6, v6, 0LL, 1u, 0LL);
    if ( (int)result < 0 || a2 == 1 )
      break;
    while ( *v6++ )
      ;
    if ( !*v6 )
      return 0LL;
  }
  return result;
}
