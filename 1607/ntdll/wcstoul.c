/*
 * XREFs of wcstoul @ 0x18009CB40
 * Callers:
 *     <none>
 * Callees:
 *     wcstoxlX @ 0x18009C8CC (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)String, EndPtr, Radix, 1, 0);
}
