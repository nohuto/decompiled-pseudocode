/*
 * XREFs of GreGetDpiStockObject @ 0x1C007E1B0
 * Callers:
 *     InitUserScreen @ 0x1C007D934 (InitUserScreen.c)
 * Callees:
 *     <none>
 */

void * near *__fastcall GreGetDpiStockObject(unsigned int a1, int a2)
{
  int v2; // eax
  void * near *result; // rax

  if ( a1 > 0x11 || (v2 = 205824, !_bittest(&v2, a1)) || a2 || (result = (&gahStockObjects96)[a1]) == 0LL )
  {
    if ( a1 > 0x15 )
      return 0LL;
    else
      return (void * near *)*((_QWORD *)&WPP_MAIN_CB.DeviceQueue.Busy + (int)a1);
  }
  return result;
}
