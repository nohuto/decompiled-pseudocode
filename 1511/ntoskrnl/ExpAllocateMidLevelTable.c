/*
 * XREFs of ExpAllocateMidLevelTable @ 0x1404B5F30
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x1404B5E6C (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpAllocateLowLevelTable @ 0x1403E32DC (ExpAllocateLowLevelTable.c)
 *     ExpFreeTablePagedPool @ 0x1404AE3D0 (ExpFreeTablePagedPool.c)
 *     ExpAllocateTablePagedPool @ 0x1404B5F94 (ExpAllocateTablePagedPool.c)
 */

_QWORD *__fastcall ExpAllocateMidLevelTable(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *TablePagedPool; // rbx
  _QWORD *LowLevelTable; // rax

  TablePagedPool = (_QWORD *)ExpAllocateTablePagedPool(*(_QWORD *)(a1 + 16), 4096LL);
  if ( TablePagedPool )
  {
    LowLevelTable = ExpAllocateLowLevelTable(a1, a3);
    *a2 = LowLevelTable;
    if ( LowLevelTable )
    {
      *TablePagedPool = LowLevelTable;
      return TablePagedPool;
    }
    ExpFreeTablePagedPool(*(struct _KPROCESS **)(a1 + 16), TablePagedPool, 4096LL);
  }
  return 0LL;
}
