/*
 * XREFs of ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0022AE0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     GreSelectVisRgn @ 0x1C0023950 (GreSelectVisRgn.c)
 *     GreSetBitmapOwner @ 0x1C0023A30 (GreSetBitmapOwner.c)
 *     NtGdiDeleteObjectApp @ 0x1C00266A0 (NtGdiDeleteObjectApp.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0028010 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z @ 0x1C0034240 (-vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z.c)
 *     GreSetBrushOwner @ 0x1C00357B0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x1C0045A40 (bDeleteBrush.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C004A1DC (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C005BAE0 (HmgSwapLockedHandleContents.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C005D1F0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkUndeletable @ 0x1C005DA10 (HmgMarkUndeletable.c)
 *     HmgLockAndModifyHandleType @ 0x1C005DBD0 (HmgLockAndModifyHandleType.c)
 *     GreSetSolidBrushLight @ 0x1C006E5F0 (GreSetSolidBrushLight.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0071170 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgReplace @ 0x1C0071330 (HmgReplace.c)
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

void __fastcall HANDLELOCK::vUnlock(HANDLELOCK *this)
{
  __int64 v2; // rcx
  unsigned int v3; // eax

  v2 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v2 + 15) & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * *((unsigned int *)this + 5));
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
