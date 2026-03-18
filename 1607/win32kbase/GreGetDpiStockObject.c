/*
 * XREFs of GreGetDpiStockObject @ 0x1C00827B0
 * Callers:
 *     InitUserScreen @ 0x1C0057224 (InitUserScreen.c)
 * Callees:
 *     <none>
 */

void *__fastcall GreGetDpiStockObject(unsigned int a1, int a2)
{
  int v2; // eax
  void *result; // rax

  if ( a1 > 0x11 || (v2 = 205824, !_bittest(&v2, a1)) || a2 || (result = gahStockObjects96[a1]) == 0LL )
  {
    if ( a1 > 0x15 )
      return 0LL;
    else
      return gahStockObjects[a1];
  }
  return result;
}
