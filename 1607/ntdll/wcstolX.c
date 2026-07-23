/*
 * XREFs of wcstolX @ 0x18009CB00
 * Callers:
 *     _wtoi @ 0x180098950 (_wtoi.c)
 *     _wtol @ 0x1800989A0 (_wtol.c)
 * Callees:
 *     wcstoxlX @ 0x18009C8BC (wcstoxlX.c)
 */

__int64 __fastcall wcstolX(wint_t *a1, wint_t **a2, unsigned int a3, int a4)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
