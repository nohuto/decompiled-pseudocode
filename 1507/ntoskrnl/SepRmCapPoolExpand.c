/*
 * XREFs of SepRmCapPoolExpand @ 0x140250A0C
 * Callers:
 *     SepReadAndPopulateCapes @ 0x14055C3A8 (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1406D8C80 (SepReadAndInsertCaps.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

PVOID __fastcall SepRmCapPoolExpand(void *a1, SIZE_T a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePoolWithTag(PagedPool, a2, 0x70536553u);
}
