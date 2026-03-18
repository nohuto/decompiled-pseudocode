/*
 * XREFs of CmpUnblockTwoHiveWrites @ 0x140407838
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x140407698 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x1406591BC (CmpVirtualPathPresent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     CmpDereferenceHive @ 0x140447BD4 (CmpDereferenceHive.c)
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
