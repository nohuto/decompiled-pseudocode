/*
 * XREFs of IsPseudoPwnd @ 0x1C004C468
 * Callers:
 *     LinkWindow @ 0x1C00564E4 (LinkWindow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPseudoPwnd(__int64 a1)
{
  return (unsigned __int64)(a1 - 2) > 0xFFFFFFFFFFFFFFFBuLL;
}
