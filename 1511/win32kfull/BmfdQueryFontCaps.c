/*
 * XREFs of BmfdQueryFontCaps @ 0x1C0110970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BmfdQueryFontCaps(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 2LL;
  if ( a1 < 2 )
    return 0LL;
  *a2 = 2;
  a2[1] = 2;
  return result;
}
