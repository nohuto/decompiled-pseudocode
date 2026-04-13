/*
 * XREFs of sub_180021988 @ 0x180021988
 * Callers:
 *     sub_18000A968 @ 0x18000A968 (sub_18000A968.c)
 *     sub_180018340 @ 0x180018340 (sub_180018340.c)
 *     sub_18001865C @ 0x18001865C (sub_18001865C.c)
 *     sub_1800187A4 @ 0x1800187A4 (sub_1800187A4.c)
 *     sub_180021550 @ 0x180021550 (sub_180021550.c)
 *     sub_180021614 @ 0x180021614 (sub_180021614.c)
 *     sub_180021820 @ 0x180021820 (sub_180021820.c)
 * Callees:
 *     EnterCriticalSection @ 0x180022B2C (EnterCriticalSection.c)
 *     _lock @ 0x180026558 (_lock.c)
 */

int *__fastcall sub_180021988(int *a1, int a2)
{
  *a1 = a2;
  if ( a2 )
  {
    if ( a2 < 4 )
      EnterCriticalSection(&CriticalSection + a2);
  }
  else
  {
    lock(12LL);
  }
  return a1;
}
