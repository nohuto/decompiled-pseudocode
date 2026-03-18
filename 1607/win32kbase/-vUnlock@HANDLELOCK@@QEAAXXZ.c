/*
 * XREFs of ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70
 * Callers:
 *     _GetDCEx @ 0x1C00212B0 (_GetDCEx.c)
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00246C0 (GreSetBrushOwner.c)
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0027340 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C00285B0 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0028D90 (NtGdiDeleteObjectApp.c)
 *     INC_SHARE_REF_CNT @ 0x1C00294C0 (INC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 *     HmgShareLockCheck @ 0x1C0029900 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029DA0 (DEC_SHARE_REF_CNT.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002A400 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002A438 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgLockEx @ 0x1C002A600 (HmgLockEx.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002E800 (HmgIncrementShareReferenceCount.c)
 *     HmgSetOwner @ 0x1C0035D00 (HmgSetOwner.c)
 *     HmgFree @ 0x1C0036630 (HmgFree.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0036950 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgReplaceObject @ 0x1C0036E20 (HmgReplaceObject.c)
 *     GreSetSolidBrushLight @ 0x1C0059350 (GreSetSolidBrushLight.c)
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C005B448 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     HmgMarkUndeletable @ 0x1C005B650 (HmgMarkUndeletable.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C005B950 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgLockAndModifyHandleType @ 0x1C005C2A0 (HmgLockAndModifyHandleType.c)
 *     HmgSwapLockedHandleContents @ 0x1C006C080 (HmgSwapLockedHandleContents.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0073650 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgLockAllOwners @ 0x1C00741F0 (HmgLockAllOwners.c)
 *     HmgMarkLazyDelete @ 0x1C00768F0 (HmgMarkLazyDelete.c)
 *     HmgMarkDeletable @ 0x1C0076D00 (HmgMarkDeletable.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0078E80 (HmgShareUnlockRemoveObject.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C007A960 (HmgShareLockIgnoreStockBit.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00C0210 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00C02E0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00C04FC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgMarkUnXferable @ 0x1C00C0A40 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C00C0B00 (HmgMarkXferable.c)
 *     HmgUnlock @ 0x1C00C0CBC (HmgUnlock.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CC8E4 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CC9CC (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCAE0 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCBE8 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCCC4 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCDA8 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall HANDLELOCK::vUnlock(HANDLELOCK *this)
{
  GdiHandleManager *DeferredContext; // rbx
  unsigned int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // r9d
  unsigned int v6; // ecx
  signed int v7; // r8d
  __int64 v8; // r10
  _DWORD *v9; // rdx
  unsigned int v10; // esi
  __int64 v11; // rdx
  unsigned int v12; // r8d
  signed int v13; // ecx
  __int64 v14; // rdx

  DeferredContext = (GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext;
  v3 = GdiHandleManager::DecodeIndex((GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext, **(_DWORD **)this & 0xFFFFFF);
  v4 = *((_QWORD *)DeferredContext + 2);
  v5 = v3;
  v6 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v6 + ((*(unsigned __int16 *)(v4 + 2) - 1) << 16) )
    goto LABEL_16;
  if ( v3 >= v6 )
  {
    v7 = ((v3 - v6) >> 16) + 1;
    if ( (v3 - v6) >> 16 == -2 )
      goto LABEL_16;
  }
  else
  {
    v7 = 0;
  }
  v8 = *(_QWORD *)(v4 + 8LL * v7 + 8);
  if ( v7 )
    v5 = v3 - ((v7 - 1) << 16) - v6;
  if ( v5 < *(_DWORD *)(v8 + 20) )
  {
    v9 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * ((unsigned __int64)v5 >> 8))
                    + 16LL * (unsigned __int8)v5
                    + 8);
    goto LABEL_8;
  }
LABEL_16:
  v9 = 0LL;
LABEL_8:
  v10 = GdiHandleManager::DecodeIndex(DeferredContext, (unsigned __int16)*v9 | (*v9 >> 8) & 0xFF0000);
  GdiHandleManager::DecodeIndex(DeferredContext, v10);
  v11 = *((_QWORD *)DeferredContext + 2);
  v12 = *(_DWORD *)(v11 + 2056);
  if ( v10 < v12 + ((*(unsigned __int16 *)(v11 + 2) - 1) << 16) )
  {
    if ( v10 >= v12 )
    {
      v13 = ((v10 - v12) >> 16) + 1;
      if ( (v10 - v12) >> 16 == -2 )
        goto LABEL_14;
    }
    else
    {
      v13 = 0;
    }
    v14 = *(_QWORD *)(v11 + 8LL * v13 + 8);
    if ( v13 )
      v10 = v10 - ((v13 - 1) << 16) - v12;
    *(_DWORD *)(*(_QWORD *)v14 + 24LL * v10 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v10 >> 8)) + 16LL * (unsigned __int8)v10,
      0LL);
    KeLeaveCriticalRegion();
  }
LABEL_14:
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
