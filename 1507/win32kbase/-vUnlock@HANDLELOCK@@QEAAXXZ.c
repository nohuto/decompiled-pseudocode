/*
 * XREFs of ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0
 * Callers:
 *     HmgLockAllOwners @ 0x1C000B9E0 (HmgLockAllOwners.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C000C4E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgReplace @ 0x1C000EBA0 (HmgReplace.c)
 *     HmgMarkDeletable @ 0x1C000F5A0 (HmgMarkDeletable.c)
 *     HmgMarkUndeletable @ 0x1C000F910 (HmgMarkUndeletable.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00122D0 (HmgShareUnlockRemoveObject.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0013098 (HmgShareLockIgnoreStockBit.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0025074 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     HmgFree @ 0x1C0035650 (HmgFree.c)
 *     GreSetBrushOwner @ 0x1C00367D0 (GreSetBrushOwner.c)
 *     ?vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z @ 0x1C0038520 (-vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0038760 (HmgShareLockCheckIgnoreStockBit.c)
 *     NtGdiDeleteObjectApp @ 0x1C00417F0 (NtGdiDeleteObjectApp.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0042D40 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     GreSetBitmapOwner @ 0x1C0044330 (GreSetBitmapOwner.c)
 *     GreSelectVisRgn @ 0x1C0044570 (GreSelectVisRgn.c)
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

void __fastcall HANDLELOCK::vUnlock(HANDLELOCK *this)
{
  __int64 v2; // rcx
  unsigned int v3; // eax

  v2 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v2 + 15) & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * *((unsigned int *)this + 5), 0LL);
  }
  else
  {
    _m_prefetchw((const void *)(v2 + 8));
    v3 = *(_DWORD *)(v2 + 8) & 0xFFFFFFFE;
    *((_DWORD *)this + 3) = v3;
    _InterlockedExchange((volatile __int32 *)(v2 + 8), v3);
  }
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
