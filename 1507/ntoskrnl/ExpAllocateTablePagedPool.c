/*
 * XREFs of ExpAllocateTablePagedPool @ 0x1405235C8
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x140523564 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140523718 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x1406F0234 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140523FC0 (ExpAllocateTablePagedPoolNoZero.c)
 */

void *__fastcall ExpAllocateTablePagedPool(__int64 a1, size_t a2)
{
  void *TablePagedPoolNoZero; // rax
  void *v4; // rbx

  TablePagedPoolNoZero = (void *)ExpAllocateTablePagedPoolNoZero();
  v4 = TablePagedPoolNoZero;
  if ( TablePagedPoolNoZero )
    memset(TablePagedPoolNoZero, 0, a2);
  return v4;
}
