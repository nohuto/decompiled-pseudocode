/*
 * XREFs of SepRmCapPoolExpand @ 0x140201A34
 * Callers:
 *     SepReadAndPopulateCapes @ 0x1404C5E6C (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1406567C8 (SepReadAndInsertCaps.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

PVOID __fastcall SepRmCapPoolExpand(void *a1, SIZE_T a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePoolWithTag(PagedPool, a2, 0x70536553u);
}
