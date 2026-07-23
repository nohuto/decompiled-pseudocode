/*
 * XREFs of ViFreeContextTable @ 0x1407049CC
 * Callers:
 *     VfInsertContext @ 0x140222554 (VfInsertContext.c)
 *     VfRemoveContext @ 0x14022270C (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
