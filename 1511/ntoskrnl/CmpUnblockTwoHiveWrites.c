/*
 * XREFs of CmpUnblockTwoHiveWrites @ 0x1403BC320
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1403BC1C8 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x1405E2D38 (CmpVirtualPathPresent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     CmpDereferenceHive @ 0x1403DCA48 (CmpDereferenceHive.c)
 */

void __fastcall CmpUnblockTwoHiveWrites(__int64 a1, __int64 a2)
{
  if ( a1 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  if ( a2 )
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 2848));
  if ( a1 )
    CmpDereferenceHive(a1);
  if ( a2 )
    CmpDereferenceHive(a2);
}
