/*
 * XREFs of MiGetLeafVa @ 0x140225AFC
 * Callers:
 *     MiInitializeSystemPageTable @ 0x14006A1F8 (MiInitializeSystemPageTable.c)
 *     MiReplacePageTablePage @ 0x14010F190 (MiReplacePageTablePage.c)
 *     MiDbgReleaseAddress @ 0x140223080 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1402236C0 (MiDbgWriteCheck.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafVa(unsigned __int64 a1)
{
  while ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    a1 = (__int64)(a1 << 25) >> 16;
  return a1;
}
