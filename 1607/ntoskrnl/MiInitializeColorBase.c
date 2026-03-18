/*
 * XREFs of MiInitializeColorBase @ 0x1401029C4
 * Callers:
 *     MiGetPageTablePages @ 0x140102808 (MiGetPageTablePages.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall MiInitializeColorBase(unsigned __int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rcx

  if ( a1 >= qword_140326910 && a1 < qword_140326910 + 0x8000000000LL )
    return (unsigned int *)MiInitializeColorBaseSession(a2);
  if ( a1 > 0x7FFFFFFEFFFFLL
    && (a1 < qword_140327F90 || a1 > qword_140326CF8)
    && (a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v2 = 0LL;
  }
  else
  {
    v2 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  }
  return MiInitializePageColorBase((__int64)v2, 0, a2);
}
