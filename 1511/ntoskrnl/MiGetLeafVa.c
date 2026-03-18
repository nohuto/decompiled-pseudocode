/*
 * XREFs of MiGetLeafVa @ 0x1401DFF14
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140017F70 (MiInitializeSystemPageTable.c)
 *     MiReplacePageTablePage @ 0x1400D98A0 (MiReplacePageTablePage.c)
 *     MiDbgReleaseAddress @ 0x1401DDCD4 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1401DE0F4 (MiDbgWriteCheck.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafVa(unsigned __int64 a1)
{
  while ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    a1 = (__int64)(a1 << 25) >> 16;
  return a1;
}
