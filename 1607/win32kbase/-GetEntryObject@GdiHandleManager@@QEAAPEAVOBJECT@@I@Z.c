/*
 * XREFs of ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0
 * Callers:
 *     GreSetBrushOwner @ 0x1C00246C0 (GreSetBrushOwner.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C002A0C0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C002A4AC (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgFree @ 0x1C0036630 (HmgFree.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0059CA0 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005A11C (-vCleanupDCs@@YAXK@Z.c)
 *     bDeleteDCInternal @ 0x1C005A4D0 (bDeleteDCInternal.c)
 *     HmgSetLock @ 0x1C005A5C0 (HmgSetLock.c)
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 *     HmgModifyHandleType @ 0x1C005C300 (HmgModifyHandleType.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C005C384 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C006B240 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x1C006B7B0 (bMigrateSurfaceForConversion.c)
 *     HmgQueryAltLock @ 0x1C006C050 (HmgQueryAltLock.c)
 *     HmgSwapLockedHandleContents @ 0x1C006C080 (HmgSwapLockedHandleContents.c)
 *     HmgLockAllOwners @ 0x1C00741F0 (HmgLockAllOwners.c)
 *     HmgMarkLazyDelete @ 0x1C00768F0 (HmgMarkLazyDelete.c)
 *     HmgPrefetchAllObjt @ 0x1C0076990 (HmgPrefetchAllObjt.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0078E80 (HmgShareUnlockRemoveObject.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C007A960 (HmgShareLockIgnoreStockBit.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C0081514 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00C0210 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00C02E0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00C04FC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C00C0B98 (HmgNextGarbageCollectible.c)
 *     HmgSafeNextObjtByIndex @ 0x1C00C0C6C (HmgSafeNextObjtByIndex.c)
 *     HmgUnlock @ 0x1C00C0CBC (HmgUnlock.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

struct OBJECT *__fastcall GdiHandleManager::GetEntryObject(GdiHandleEntryDirectory **this, unsigned int a2)
{
  unsigned int v3; // eax
  GdiHandleEntryDirectory *v4; // r9
  unsigned __int64 v5; // rdx
  unsigned int v6; // r10d
  struct OBJECT *result; // rax
  signed int v8; // r8d
  __int64 v9; // r9

  v3 = GdiHandleManager::DecodeIndex(this, a2);
  v4 = this[2];
  v5 = v3;
  v6 = *((_DWORD *)v4 + 514);
  if ( v3 >= v6 + ((*((unsigned __int16 *)v4 + 1) - 1) << 16) )
    return 0LL;
  result = 0LL;
  if ( (unsigned int)v5 >= v6 )
  {
    v8 = (((unsigned int)v5 - v6) >> 16) + 1;
    if ( ((unsigned int)v5 - v6) >> 16 != -2 )
      goto LABEL_4;
    return 0LL;
  }
  v8 = 0;
LABEL_4:
  v9 = *((_QWORD *)v4 + v8 + 1);
  if ( v8 )
    v5 = (_DWORD)v5 - ((v8 - 1) << 16) - v6;
  if ( (unsigned int)v5 < *(_DWORD *)(v9 + 20) )
    return *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v5 >> 8)) + 16LL * (unsigned __int8)v5 + 8);
  return result;
}
