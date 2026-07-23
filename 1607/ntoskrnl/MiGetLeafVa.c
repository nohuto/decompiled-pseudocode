/*
 * XREFs of MiGetLeafVa @ 0x1401F2468
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140020B3C (MiInitializeSystemPageTable.c)
 *     MiReplacePageTablePage @ 0x1400A3B30 (MiReplacePageTablePage.c)
 *     MiDbgWriteCheck @ 0x14012CB4C (MiDbgWriteCheck.c)
 *     MiDbgReleaseAddress @ 0x14012CD4C (MiDbgReleaseAddress.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafVa(unsigned __int64 a1)
{
  unsigned __int64 i; // rdx

  for ( i = a1; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
  {
    if ( i > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  return i;
}
