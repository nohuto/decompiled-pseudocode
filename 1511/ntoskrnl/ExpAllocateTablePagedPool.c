/*
 * XREFs of ExpAllocateTablePagedPool @ 0x1404B5F94
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x1404B5E6C (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x1404B5F30 (ExpAllocateMidLevelTable.c)
 *     ExpSetHandleExtraInfo @ 0x14066CA18 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1403E3314 (ExpAllocateTablePagedPoolNoZero.c)
 */

PVOID __fastcall ExpAllocateTablePagedPool(__int64 a1, SIZE_T a2)
{
  PVOID TablePagedPoolNoZero; // rax
  PVOID v4; // rbx

  TablePagedPoolNoZero = ExpAllocateTablePagedPoolNoZero(a1, a2);
  v4 = TablePagedPoolNoZero;
  if ( TablePagedPoolNoZero )
    memset(TablePagedPoolNoZero, 0, a2);
  return v4;
}
