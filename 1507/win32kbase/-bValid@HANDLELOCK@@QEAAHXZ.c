/*
 * XREFs of ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0
 * Callers:
 *     HmgLockAllOwners @ 0x1C000B9E0 (HmgLockAllOwners.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C000C4E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkDeletable @ 0x1C000F5A0 (HmgMarkDeletable.c)
 *     HmgMarkUndeletable @ 0x1C000F910 (HmgMarkUndeletable.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00122D0 (HmgShareUnlockRemoveObject.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0013098 (HmgShareLockIgnoreStockBit.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0025074 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     HmgFree @ 0x1C0035650 (HmgFree.c)
 *     GreSetBrushOwner @ 0x1C00367D0 (GreSetBrushOwner.c)
 *     ?vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z @ 0x1C0038520 (-vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0038760 (HmgShareLockCheckIgnoreStockBit.c)
 *     GreSetSolidBrushLight @ 0x1C005B150 (GreSetSolidBrushLight.c)
 *     bDeleteBrush @ 0x1C005C2F0 (bDeleteBrush.c)
 *     HmgSwapLockedHandleContents @ 0x1C005E4B0 (HmgSwapLockedHandleContents.c)
 *     HmgIncrementShareReferenceCount @ 0x1C005E740 (HmgIncrementShareReferenceCount.c)
 *     HmgLockAndModifyHandleType @ 0x1C007E520 (HmgLockAndModifyHandleType.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B2C90 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00B2D50 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00B2F54 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgMarkUnXferable @ 0x1C00B3480 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C00B3540 (HmgMarkXferable.c)
 *     HmgUnlock @ 0x1C00B3690 (HmgUnlock.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF174 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF254 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF368 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF450 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF530 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HANDLELOCK::bValid(HANDLELOCK *this)
{
  return *((_DWORD *)this + 2) && *(_QWORD *)this;
}
