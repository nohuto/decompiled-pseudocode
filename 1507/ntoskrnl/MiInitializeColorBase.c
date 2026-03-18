/*
 * XREFs of MiInitializeColorBase @ 0x14006AB5C
 * Callers:
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MiGetPageTablePages @ 0x14021EB20 (MiGetPageTablePages.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall MiInitializeColorBase(unsigned __int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rcx

  if ( a1 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    return (unsigned int *)MiInitializeColorBaseSession(a2);
  if ( a1 > (unsigned __int64)MmHighestUserAddress && a1 + 0xA8000000000LL > 0x17FFFFFFFFFLL )
    v2 = 0LL;
  else
    v2 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[8];
  return MI_INITIALIZE_COLOR_BASE((__int64)v2, 0, a2);
}
