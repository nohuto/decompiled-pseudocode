/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x140518944
 * Callers:
 *     CmpWalkOneLevel @ 0x14002D530 (CmpWalkOneLevel.c)
 *     CmpTransEnlistUowInKcb @ 0x14010BEB0 (CmpTransEnlistUowInKcb.c)
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     CmpFindSubKeyByNumberEx @ 0x140437BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404D35A0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmUnloadKeyEx @ 0x140515DB8 (CmUnloadKeyEx.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405185D4 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x140518740 (CmpPerformSingleKcbCacheLookup.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF1D4 (CmpResolveHiveLoadConflict.c)
 *     CmpGetVirtualStoreRoot @ 0x14060175C (CmpGetVirtualStoreRoot.c)
 *     CmpCreateLayerLink @ 0x14060BB68 (CmpCreateLayerLink.c)
 *     CmpPrepareDiscardReplacePost @ 0x14060BEC4 (CmpPrepareDiscardReplacePost.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14060F334 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14010BF00 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpRemoveFromDelayedDeref @ 0x1405192D8 (CmpRemoveFromDelayedDeref.c)
 *     CmpRemoveFromDelayedClose @ 0x14051934C (CmpRemoveFromDelayedClose.c)
 */

char __fastcall CmpReferenceKeyControlBlock(__int64 a1)
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
  if ( (*(_BYTE *)(a1 + 56) & 1) != 0 && (unsigned __int8)CmpRemoveFromDelayedDeref(a1) )
  {
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)a1);
  }
  else if ( (*(_BYTE *)(a1 + 56) & 2) != 0 )
  {
    CmpRemoveFromDelayedClose(a1);
  }
  return 1;
}
