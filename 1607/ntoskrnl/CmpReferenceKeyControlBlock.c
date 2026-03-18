/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x1404A0538
 * Callers:
 *     CmpWalkOneLevel @ 0x14002D9B0 (CmpWalkOneLevel.c)
 *     CmpTransEnlistUowInKcb @ 0x140087CB8 (CmpTransEnlistUowInKcb.c)
 *     CmpCreateKeyControlBlock @ 0x140434610 (CmpCreateKeyControlBlock.c)
 *     CmpFindSubKeyByNumberEx @ 0x140438CE0 (CmpFindSubKeyByNumberEx.c)
 *     CmUnloadKeyEx @ 0x14049D9AC (CmUnloadKeyEx.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1404A01C8 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1404A0334 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1404F14AC (CmpEnumerateAllHigherLayerKcbs.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF120 (CmpResolveHiveLoadConflict.c)
 *     CmpGetVirtualStoreRoot @ 0x1406016A8 (CmpGetVirtualStoreRoot.c)
 *     CmpCreateLayerLink @ 0x14060BAB4 (CmpCreateLayerLink.c)
 *     CmpPrepareDiscardReplacePost @ 0x14060BE10 (CmpPrepareDiscardReplacePost.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14060F280 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140087D10 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpRemoveFromDelayedDeref @ 0x1404A0ECC (CmpRemoveFromDelayedDeref.c)
 *     CmpRemoveFromDelayedClose @ 0x1404A0F40 (CmpRemoveFromDelayedClose.c)
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
