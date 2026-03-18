/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x1404CBD60
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404C6BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     CmpParseCacheAddHive @ 0x1404EA29C (CmpParseCacheAddHive.c)
 *     CmLoadKey @ 0x1404EC054 (CmLoadKey.c)
 *     CmUnloadKeyEx @ 0x1404ED844 (CmUnloadKeyEx.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405414B8 (CmpFindSubkeyInHashByChildCell.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 *     CmpParseCacheAddSymbolicLink @ 0x1405BB434 (CmpParseCacheAddSymbolicLink.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140655BB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140656248 (CmSetLastWriteTimeKey.c)
 *     CmpDoBuildVirtualStack @ 0x1406584F0 (CmpDoBuildVirtualStack.c)
 *     CmpGetVirtualStoreRoot @ 0x140658CB4 (CmpGetVirtualStoreRoot.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140663E6C (CmpUndoDeleteKeyForTransEx.c)
 *     CmpRefreshParent @ 0x140664730 (CmpRefreshParent.c)
 * Callees:
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 *     CmpRemoveFromDelayedClose @ 0x1404EDEA4 (CmpRemoveFromDelayedClose.c)
 *     CmpRemoveFromDelayedDeref @ 0x14054DEEC (CmpRemoveFromDelayedDeref.c)
 */

char __fastcall CmpReferenceKeyControlBlock(ULONG_PTR a1)
{
  signed __int32 v1; // eax
  signed __int32 v3; // ett

  v1 = *(_DWORD *)a1;
  do
  {
    if ( v1 == -1 )
      return 0;
    v3 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v1 + 1, v1);
  }
  while ( v3 != v1 );
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0 && (unsigned __int8)CmpRemoveFromDelayedDeref(a1) )
  {
    CmpDereferenceKeyControlBlock(a1);
  }
  else if ( (*(_DWORD *)(a1 + 8) & 2) != 0 )
  {
    CmpRemoveFromDelayedClose(a1);
  }
  return 1;
}
