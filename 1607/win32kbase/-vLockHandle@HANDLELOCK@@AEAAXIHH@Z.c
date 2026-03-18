/*
 * XREFs of ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170
 * Callers:
 *     GreSetBrushOwner @ 0x1C00246C0 (GreSetBrushOwner.c)
 *     INC_SHARE_REF_CNT @ 0x1C00294C0 (INC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 *     HmgShareLockCheck @ 0x1C0029900 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029DA0 (DEC_SHARE_REF_CNT.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z @ 0x1C002A130 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002A438 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002E800 (HmgIncrementShareReferenceCount.c)
 *     HmgFree @ 0x1C0036630 (HmgFree.c)
 *     HmgMarkUndeletable @ 0x1C005B650 (HmgMarkUndeletable.c)
 *     HmgSwapLockedHandleContents @ 0x1C006C080 (HmgSwapLockedHandleContents.c)
 *     HmgLockAllOwners @ 0x1C00741F0 (HmgLockAllOwners.c)
 *     HmgMarkDeletable @ 0x1C0076D00 (HmgMarkDeletable.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0078E80 (HmgShareUnlockRemoveObject.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C007A960 (HmgShareLockIgnoreStockBit.c)
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
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall HANDLELOCK::vLockHandle(HANDLELOCK *this, unsigned int a2, int a3, int a4)
{
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // ebp
  _QWORD *DeferredContext; // r13
  __int64 v13; // rdi
  unsigned int v14; // edx
  signed int v15; // ecx
  __int64 v16; // rdi
  char v17; // r13
  _QWORD *v18; // rbp
  __int64 v19; // r9
  unsigned int v20; // edx
  signed int v21; // ecx
  __int64 v22; // r9
  int v23; // ecx
  unsigned int v24; // ecx
  __int64 v25; // [rsp+20h] [rbp-48h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]
  __int64 v27; // [rsp+30h] [rbp-38h]
  int v28; // [rsp+38h] [rbp-30h] BYREF
  __int64 v29; // [rsp+70h] [rbp+8h]

  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v28);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v9 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
  {
    v10 = 0LL;
    v25 = *(_QWORD *)(v9 + 72);
  }
  else
  {
    v10 = 0LL;
    v25 = 0LL;
  }
  *((_DWORD *)this + 2) = 1;
  v11 = a2;
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  if ( a2 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)a2,
                                  1)
           + 13) == HIWORD(a2) )
        v11 = (unsigned __int16)a2;
    }
    else
    {
      v11 = (unsigned __int16)a2;
    }
  }
  v13 = DeferredContext[2];
  v14 = *(_DWORD *)(v13 + 2056);
  if ( v11 >= v14 + ((*(unsigned __int16 *)(v13 + 2) - 1) << 16) )
    goto LABEL_39;
  if ( v11 >= v14 )
  {
    v15 = ((v11 - v14) >> 16) + 1;
    if ( (v11 - v14) >> 16 == -2 )
    {
LABEL_39:
      *((_DWORD *)this + 2) = 0;
      KeLeaveCriticalRegion();
      return;
    }
  }
  else
  {
    v15 = 0;
  }
  v16 = *(_QWORD *)(v13 + 8LL * v15 + 8);
  if ( v15 )
    v11 = v11 - ((v15 - 1) << 16) - v14;
  v17 = 0;
  if ( v11 >= *(_DWORD *)(v16 + 20) )
    goto LABEL_39;
  v27 = 16LL * (unsigned __int8)v11;
  v26 = 8 * ((unsigned __int64)v11 >> 8);
  v29 = v27 + *(_QWORD *)(**(_QWORD **)(v16 + 24) + v26);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v29, 0LL);
  if ( v11 < *(_DWORD *)(v16 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + v26) + v27 + 8) )
  {
    v17 = 1;
    *(_DWORD *)(*(_QWORD *)v16 + 24LL * v11 + 8) |= 1u;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v29, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v17 )
    goto LABEL_39;
  v18 = WPP_MAIN_CB.Dpc.DeferredContext;
  if ( a2 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)a2,
                                  1)
           + 13) == HIWORD(a2) )
        a2 = (unsigned __int16)a2;
    }
    else
    {
      a2 = (unsigned __int16)a2;
    }
  }
  v19 = v18[2];
  v20 = *(_DWORD *)(v19 + 2056);
  if ( a2 < v20 + ((*(unsigned __int16 *)(v19 + 2) - 1) << 16) )
  {
    if ( a2 >= v20 )
    {
      v21 = ((a2 - v20) >> 16) + 1;
      if ( (a2 - v20) >> 16 == -2 )
        goto LABEL_28;
    }
    else
    {
      v21 = 0;
    }
    v22 = *(_QWORD *)(v19 + 8LL * v21 + 8);
    if ( v21 )
      a2 = a2 - ((v21 - 1) << 16) - v20;
    if ( a2 < *(_DWORD *)(v22 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v22 + 24) + 8 * ((unsigned __int64)a2 >> 8))
                   + 16LL * (unsigned __int8)a2
                   + 8) )
    {
      v10 = *(_QWORD *)v22 + 24LL * a2;
    }
  }
LABEL_28:
  *(_QWORD *)this = v10;
  _m_prefetchw((const void *)(v10 + 8));
  v23 = *(_DWORD *)(v10 + 8);
  *((_DWORD *)this + 3) = v23;
  if ( a3 )
  {
    if ( a4 )
      return;
    v24 = v23 & 0xFFFFFFFE;
    if ( v24 != (v28 & 0xFFFFFFFC) && v24 && (!v25 || v24 != *(_DWORD *)(v25 + 8)) )
      goto LABEL_50;
  }
  else if ( a4 )
  {
    return;
  }
  if ( (*(_BYTE *)(v10 + 15) & 0x20) != 0 )
LABEL_50:
    HANDLELOCK::vUnlock(this);
}
