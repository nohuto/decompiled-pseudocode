/*
 * XREFs of ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0031F80
 * Callers:
 *     ?vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z @ 0x1C0034240 (-vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z.c)
 *     GreSetBrushOwner @ 0x1C00357B0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C0045A40 (bDeleteBrush.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C004A1DC (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C005BAE0 (HmgSwapLockedHandleContents.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C005D1F0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkUndeletable @ 0x1C005DA10 (HmgMarkUndeletable.c)
 *     HmgLockAndModifyHandleType @ 0x1C005DBD0 (HmgLockAndModifyHandleType.c)
 *     GreSetSolidBrushLight @ 0x1C006E5F0 (GreSetSolidBrushLight.c)
 *     HmgMarkDeletable @ 0x1C0071C50 (HmgMarkDeletable.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00759C0 (HmgShareUnlockRemoveObject.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0077048 (HmgShareLockIgnoreStockBit.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B58C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00B5970 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     HmgFree @ 0x1C00B5EB0 (HmgFree.c)
 *     HmgLockAllOwners @ 0x1C00B5FA0 (HmgLockAllOwners.c)
 *     HmgMarkUnXferable @ 0x1C00B6080 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C00B6140 (HmgMarkXferable.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HANDLELOCK::bValid(HANDLELOCK *this)
{
  return *((_DWORD *)this + 2) && *(_QWORD *)this;
}
