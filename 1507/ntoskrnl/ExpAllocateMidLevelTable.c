/*
 * XREFs of ExpAllocateMidLevelTable @ 0x140523564
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x140523718 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x140508DD0 (ExpFreeTablePagedPool.c)
 *     ExpAllocateTablePagedPool @ 0x1405235C8 (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x140523F88 (ExpAllocateLowLevelTable.c)
 */

__int64 *__fastcall ExpAllocateMidLevelTable(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *TablePagedPool; // rbx
  __int64 LowLevelTable; // rax

  TablePagedPool = (__int64 *)ExpAllocateTablePagedPool(*(_QWORD *)(a1 + 16), 4096LL);
  if ( TablePagedPool )
  {
    LowLevelTable = ExpAllocateLowLevelTable(a1, a3);
    *a2 = LowLevelTable;
    if ( LowLevelTable )
    {
      *TablePagedPool = LowLevelTable;
      return TablePagedPool;
    }
    ExpFreeTablePagedPool(*(_QWORD *)(a1 + 16), TablePagedPool, 0x1000uLL);
  }
  return 0LL;
}
