/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x1403FA9B0
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpUndoDeleteKeyForTrans @ 0x1403B4238 (CmpUndoDeleteKeyForTrans.c)
 *     CmpResolveHiveLoadConflict @ 0x1403B57A8 (CmpResolveHiveLoadConflict.c)
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     CmpParseCacheAddHive @ 0x1403BB0AC (CmpParseCacheAddHive.c)
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1403DE9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmpFindSubKeyByNumberEx @ 0x1403FDA60 (CmpFindSubKeyByNumberEx.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     CmUnloadKeyEx @ 0x140498BA0 (CmUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 *     CmpParseCacheAddSymbolicLink @ 0x14054488C (CmpParseCacheAddSymbolicLink.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 *     CmpRefreshParent @ 0x1405EC198 (CmpRefreshParent.c)
 * Callees:
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpRemoveFromDelayedDeref @ 0x1404BAD8C (CmpRemoveFromDelayedDeref.c)
 *     CmpRemoveFromDelayedClose @ 0x1404C082C (CmpRemoveFromDelayedClose.c)
 */

char __fastcall CmpReferenceKeyControlBlock(signed __int32 *BugCheckParameter4)
{
  signed __int32 v1; // eax
  signed __int32 v3; // ett

  v1 = *BugCheckParameter4;
  do
  {
    if ( v1 == -1 )
      return 0;
    v3 = v1;
    v1 = _InterlockedCompareExchange(BugCheckParameter4, v1 + 1, v1);
  }
  while ( v3 != v1 );
  if ( (BugCheckParameter4[2] & 1) != 0 && (unsigned __int8)CmpRemoveFromDelayedDeref(BugCheckParameter4) )
  {
    CmpDereferenceKeyControlBlock((ULONG_PTR)BugCheckParameter4);
  }
  else if ( (BugCheckParameter4[2] & 2) != 0 )
  {
    CmpRemoveFromDelayedClose(BugCheckParameter4);
  }
  return 1;
}
