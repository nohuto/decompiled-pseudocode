/*
 * XREFs of ?VKTOMODIFIERS@@YAIE@Z @ 0x1C01D8F1C
 * Callers:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VKTOMODIFIERS(char a1)
{
  __int64 result; // rax

  if ( (unsigned __int8)(a1 - 16) <= 2u )
    return 4 >> (a1 - 16);
  result = 8LL;
  if ( (unsigned __int8)(a1 - 91) > 1u )
    return 0LL;
  return result;
}
