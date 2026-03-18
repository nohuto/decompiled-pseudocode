/*
 * XREFs of ViFreeContextTable @ 0x14070499C
 * Callers:
 *     VfInsertContext @ 0x140222728 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1402228E0 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
