/*
 * XREFs of IsPseudoPwnd @ 0x1C005E740
 * Callers:
 *     LinkWindow @ 0x1C006616C (LinkWindow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPseudoPwnd(__int64 a1)
{
  return (unsigned __int64)(a1 - 2) > 0xFFFFFFFFFFFFFFFBuLL;
}
