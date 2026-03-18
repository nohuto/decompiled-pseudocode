/*
 * XREFs of atmfdQueryFontCaps @ 0x1C02A4A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall atmfdQueryFontCaps(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 2LL;
  if ( a1 < 2 )
    return 0xFFFFFFFFLL;
  *a2 = 2;
  a2[1] = 7;
  return result;
}
