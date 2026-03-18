/*
 * XREFs of wcstolX @ 0x140146088
 * Callers:
 *     _wtoi @ 0x140144648 (_wtoi.c)
 *     _wtol @ 0x140144668 (_wtol.c)
 * Callees:
 *     ?wcstoxlX@@YAKPEAUlocaleinfo_struct@@PEBGPEAPEBGHHH@Z @ 0x140145E54 (-wcstoxlX@@YAKPEAUlocaleinfo_struct@@PEBGPEAPEBGHHH@Z.c)
 */

__int64 __fastcall wcstolX(unsigned __int16 *a1, const unsigned __int16 **a2, unsigned int a3, int a4)
{
  return wcstoxlX(&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
