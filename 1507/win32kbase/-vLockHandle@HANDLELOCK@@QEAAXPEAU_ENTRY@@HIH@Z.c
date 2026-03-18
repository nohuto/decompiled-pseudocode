/*
 * XREFs of ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0
 * Callers:
 *     EngLockSurface @ 0x1C0008010 (EngLockSurface.c)
 *     EngUnlockSurface @ 0x1C0008310 (EngUnlockSurface.c)
 *     HmgLockAllOwners @ 0x1C000B9E0 (HmgLockAllOwners.c)
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
 *     HmgLock @ 0x1C003BC00 (HmgLock.c)
 *     DEC_SHARE_REF_CNT @ 0x1C003BD20 (DEC_SHARE_REF_CNT.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C003C3B8 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00433D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetBitmapOwner @ 0x1C0044330 (GreSetBitmapOwner.c)
 *     GreSelectVisRgn @ 0x1C0044570 (GreSelectVisRgn.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C004AA70 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     GreSetSolidBrushLight @ 0x1C005B150 (GreSetSolidBrushLight.c)
 *     HmgSwapLockedHandleContents @ 0x1C005E4B0 (HmgSwapLockedHandleContents.c)
 *     INC_SHARE_REF_CNT @ 0x1C005E660 (INC_SHARE_REF_CNT.c)
 *     HmgIncrementShareReferenceCount @ 0x1C005E740 (HmgIncrementShareReferenceCount.c)
 *     HmgLockAndModifyHandleType @ 0x1C007E520 (HmgLockAndModifyHandleType.c)
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
    *((_QWORD *)gpentPushLock + *((unsigned int *)this + 5)) = 0LL;
    *(_BYTE *)(*(_QWORD *)this + 15LL) |= 0x40u;
    v20 = *(_QWORD *)this;
    _m_prefetchw((const void *)(*(_QWORD *)this + 8LL));
    v21 = *(_DWORD *)(v20 + 8) & 0xFFFFFFFE;
    *((_DWORD *)this + 3) = v21;
    _InterlockedExchange((volatile __int32 *)(v20 + 8), v21);
  }
  ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * *((unsigned int *)this + 5), 0LL);
}
