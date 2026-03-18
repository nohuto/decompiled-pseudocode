/*
 * XREFs of ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0
 * Callers:
 *     GreIntersectClipRect @ 0x1C0014D20 (GreIntersectClipRect.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0022AE0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     GreSelectVisRgn @ 0x1C0023950 (GreSelectVisRgn.c)
 *     GreSetBitmapOwner @ 0x1C0023A30 (GreSetBitmapOwner.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0024220 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0024A30 (--1SURFMEM@@QEAA@XZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0025350 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C00266A0 (NtGdiDeleteObjectApp.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0028110 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C002A290 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     EngLockSurface @ 0x1C00308D0 (EngLockSurface.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0031C80 (DEC_SHARE_REF_CNT.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0031F98 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z @ 0x1C0034240 (-vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z.c)
 *     HmgLock @ 0x1C0034CD0 (HmgLock.c)
 *     GreSetBrushOwner @ 0x1C00357B0 (GreSetBrushOwner.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C004A1DC (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C005BAE0 (HmgSwapLockedHandleContents.c)
 *     HmgMarkUndeletable @ 0x1C005DA10 (HmgMarkUndeletable.c)
 *     HmgLockAndModifyHandleType @ 0x1C005DBD0 (HmgLockAndModifyHandleType.c)
 *     EngUnlockSurface @ 0x1C005EAD0 (EngUnlockSurface.c)
 *     INC_SHARE_REF_CNT @ 0x1C006DCD0 (INC_SHARE_REF_CNT.c)
 *     GreSetSolidBrushLight @ 0x1C006E5F0 (GreSetSolidBrushLight.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C0071170 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgReplace @ 0x1C0071330 (HmgReplace.c)
 *     HmgMarkDeletable @ 0x1C0071C50 (HmgMarkDeletable.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00759C0 (HmgShareUnlockRemoveObject.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0077048 (HmgShareLockIgnoreStockBit.c)
 *     HmgFree @ 0x1C00B5EB0 (HmgFree.c)
 *     HmgLockAllOwners @ 0x1C00B5FA0 (HmgLockAllOwners.c)
 *     HmgMarkUnXferable @ 0x1C00B6080 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C00B6140 (HmgMarkXferable.c)
 * Callees:
 *     <none>
 */

void __fastcall HANDLELOCK::vLockHandle(HANDLELOCK *this, struct _ENTRY *a2, int a3, int a4, int a5)
{
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  int v12; // edi
  __int64 v13; // rdx
  int v14; // ecx
  unsigned int v15; // ecx
  __int64 v16; // rdx
  int v17; // ecx
  signed __int32 v18; // eax
  signed __int32 v19; // ecx
  __int64 v20; // rcx
  unsigned int v21; // eax
  int v22; // [rsp+40h] [rbp+8h] BYREF

  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v22);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v10 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v11 = *(_QWORD *)(v10 + 72);
  else
    v11 = 0LL;
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 5) = a4;
  v12 = a5;
  *((_DWORD *)this + 2) = 1;
LABEL_6:
  v13 = *(_QWORD *)this;
  _m_prefetchw((const void *)(*(_QWORD *)this + 8LL));
  v14 = *(_DWORD *)(v13 + 8);
  *((_DWORD *)this + 3) = v14;
  if ( a3 )
  {
    if ( v12 )
      goto LABEL_15;
    v15 = v14 & 0xFFFFFFFE;
    if ( v15 != (v22 & 0xFFFFFFFC) && v15 && (!v11 || v15 != *(_DWORD *)(v11 + 8)) )
      goto LABEL_12;
  }
  else if ( v12 )
  {
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(v13 + 15) & 0x20) != 0 )
  {
LABEL_12:
    *((_DWORD *)this + 2) = 0;
    *(_QWORD *)this = 0LL;
    KeLeaveCriticalRegion();
    return;
  }
LABEL_15:
  while ( 1 )
  {
    v16 = *(_QWORD *)this;
    if ( (*(_BYTE *)(*(_QWORD *)this + 15LL) & 0x40) != 0 )
      break;
    v17 = *((_DWORD *)this + 3);
    if ( (v17 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
      goto LABEL_6;
    }
    v18 = *((_DWORD *)this + 3);
    v19 = v17 | 1;
    *((_DWORD *)this + 4) = v19;
    if ( v18 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v19, v18)
      || (*(_BYTE *)(*(_QWORD *)this + 15LL) & 0x40) != 0 )
    {
      goto LABEL_6;
    }
    *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + *((unsigned int *)this + 5)) = 0LL;
    *(_BYTE *)(*(_QWORD *)this + 15LL) |= 0x40u;
    v20 = *(_QWORD *)this;
    _m_prefetchw((const void *)(*(_QWORD *)this + 8LL));
    v21 = *(_DWORD *)(v20 + 8) & 0xFFFFFFFE;
    *((_DWORD *)this + 3) = v21;
    _InterlockedExchange((volatile __int32 *)(v20 + 8), v21);
  }
  ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * *((unsigned int *)this + 5), 0LL);
}
