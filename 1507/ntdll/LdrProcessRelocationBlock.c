/*
 * XREFs of LdrProcessRelocationBlock @ 0x1800CBEE0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProcessRelocationBlockLongLong @ 0x1800736B0 (LdrProcessRelocationBlockLongLong.c)
 */

PIMAGE_BASE_RELOCATION __cdecl LdrProcessRelocationBlock(
        ULONG_PTR VA,
        ULONG SizeOfBlock,
        PUSHORT NextOffset,
        LONG_PTR Diff)
{
  return (PIMAGE_BASE_RELOCATION)LdrProcessRelocationBlockLongLong(34404, VA, SizeOfBlock, NextOffset, Diff);
}
