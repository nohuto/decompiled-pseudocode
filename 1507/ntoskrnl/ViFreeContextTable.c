/*
 * XREFs of ViFreeContextTable @ 0x140738E34
 * Callers:
 *     VfInsertContext @ 0x14025A1E0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x14025A398 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
