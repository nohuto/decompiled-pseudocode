/*
 * XREFs of ExpAllocateTablePagedPool @ 0x1404C1184
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1404C1120 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1404C12B4 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x1406AD594 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1404C1600 (ExpAllocateTablePagedPoolNoZero.c)
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
