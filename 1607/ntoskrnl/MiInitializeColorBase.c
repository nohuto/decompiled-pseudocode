/*
 * XREFs of MiInitializeColorBase @ 0x140100744
 * Callers:
 *     MiGetPageTablePages @ 0x140100588 (MiGetPageTablePages.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall MiInitializeColorBase(unsigned __int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rcx

  if ( a1 >= qword_140326950 && a1 < qword_140326950 + 0x8000000000LL )
    return (unsigned int *)MiInitializeColorBaseSession(a2);
  if ( a1 > 0x7FFFFFFEFFFFLL
    && (a1 < qword_140327FD0 || a1 > qword_140326D38)
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
