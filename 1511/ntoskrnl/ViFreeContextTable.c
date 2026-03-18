/*
 * XREFs of ViFreeContextTable @ 0x1406B8910
 * Callers:
 *     VfInsertContext @ 0x14020AC6C (VfInsertContext.c)
 *     VfRemoveContext @ 0x14020AE24 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
