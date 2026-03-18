/*
 * XREFs of wcstolX @ 0x14014F464
 * Callers:
 *     _wtoi @ 0x14014DA68 (_wtoi.c)
 *     _wtol @ 0x14014DA88 (_wtol.c)
 * Callees:
 *     wcstoxlX @ 0x14014F230 (wcstoxlX.c)
 */

__int64 __fastcall wcstolX(wint_t *a1, wint_t **a2, unsigned int a3, int a4)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
