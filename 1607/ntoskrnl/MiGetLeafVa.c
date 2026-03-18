/*
 * XREFs of MiGetLeafVa @ 0x1401F263C
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140020FBC (MiInitializeSystemPageTable.c)
 *     MiReplacePageTablePage @ 0x1400A55B8 (MiReplacePageTablePage.c)
 *     MiDbgWriteCheck @ 0x14012C5DC (MiDbgWriteCheck.c)
 *     MiDbgReleaseAddress @ 0x14012C7DC (MiDbgReleaseAddress.c)
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
