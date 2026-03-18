/*
 * XREFs of CmpUnblockTwoHiveWrites @ 0x1403E164C
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1403E14A8 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140601D0C (CmpVirtualPathPresent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     CmpDereferenceHive @ 0x1403FCA50 (CmpDereferenceHive.c)
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
