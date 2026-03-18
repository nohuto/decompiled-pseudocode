/*
 * XREFs of NtGdiDeleteObjectApp @ 0x1C0028D90
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteFont_0 @ 0x1C00011B0 (bDeleteFont_0.c)
 *     UserReleaseDC @ 0x1C00206D0 (UserReleaseDC.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C002AF70 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C002B250 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryTable@@QEAA_NI_N@Z @ 0x1C002B280 (-AcquireEntryLock@GdiHandleEntryTable@@QEAA_NI_N@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C002D3A0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C002E5F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032CE0 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0036A00 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteSurface @ 0x1C003A320 (bDeleteSurface.c)
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C005A930 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     HmgFreeObjectAttr @ 0x1C005AF54 (HmgFreeObjectAttr.c)
 *     bDeletePalette @ 0x1C005C930 (bDeletePalette.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00740F0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C00BCF30 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00BD350 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C00BD410 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall NtGdiDeleteObjectApp(struct HOBJ__ *a1)
{
  _QWORD *DeferredContext; // rdi
  unsigned int v4; // r13d
  int v5; // esi
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  __int64 v8; // r10
  unsigned int v9; // edi
  unsigned int v10; // edx
  signed int v11; // ecx
  __int64 v12; // r10
  __int64 v13; // r8
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  unsigned int v18; // ebx
  __int64 v19; // rcx
  int v20; // esi
  GdiHandleEntryDirectory **v21; // rbx
  unsigned int v22; // eax
  struct OBJECT *EntryObject; // rax
  volatile signed __int32 *v24; // rax
  __int64 v25; // r12
  int v26; // eax
  __int64 v27; // r15
  unsigned int v28; // r14d
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v30; // rax
  _QWORD *v31; // rbx
  unsigned int v32; // esi
  unsigned int v33; // eax
  __int64 v34; // r9
  unsigned int v35; // edx
  unsigned int v36; // r8d
  signed int v37; // ecx
  GdiHandleManager *v38; // r13
  unsigned int v39; // eax
  __int64 v40; // r10
  unsigned __int64 v41; // rdx
  unsigned int v42; // r8d
  signed int v43; // ecx
  __int64 v44; // r10
  __int64 v45; // r8
  unsigned int v46; // eax
  __int64 *v47; // r15
  unsigned int v48; // eax
  __int64 v49; // r14
  unsigned int v50; // edx
  signed int v51; // ecx
  __int64 v52; // r10
  unsigned int v53; // ecx
  __int64 v54; // rbx
  unsigned int v55; // eax
  unsigned int v56; // r8d
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  __int64 v59; // r9
  __int64 *v60; // rdx
  __int64 v61; // [rsp+30h] [rbp-59h] BYREF
  int v62; // [rsp+38h] [rbp-51h]
  int v63; // [rsp+3Ch] [rbp-4Dh]
  volatile signed __int32 *v64; // [rsp+48h] [rbp-41h] BYREF
  char v65[40]; // [rsp+50h] [rbp-39h] BYREF
  int v66; // [rsp+78h] [rbp-11h]
  _QWORD v67[2]; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v68[32]; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v69; // [rsp+F0h] [rbp+67h] BYREF
  struct GdiHandleEntryTable *v70; // [rsp+F8h] [rbp+6Fh] BYREF
  int v71; // [rsp+100h] [rbp+77h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v4 = (unsigned int)a1 >> 16;
  v5 = BYTE2(a1) & 0x1F;
  v6 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v7 = v6;
  if ( v6 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)a1,
                                  1)
           + 13) == ((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000) >> 16 )
        v7 = (unsigned __int16)v6;
    }
    else
    {
      v7 = (unsigned __int16)a1;
    }
  }
  v8 = DeferredContext[2];
  v9 = 0;
  v10 = *(_DWORD *)(v8 + 2056);
  if ( v7 < v10 + ((*(unsigned __int16 *)(v8 + 2) - 1) << 16) )
  {
    if ( v7 >= v10 )
    {
      v11 = ((v7 - v10) >> 16) + 1;
      if ( (v7 - v10) >> 16 == -2 )
        goto LABEL_22;
    }
    else
    {
      v11 = 0;
    }
    v12 = *(_QWORD *)(v8 + 8LL * v11 + 8);
    if ( v11 )
      v7 = v7 - ((v11 - 1) << 16) - v10;
    v13 = 0LL;
    if ( v7 < *(_DWORD *)(v12 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v7 >> 8))
                   + 16LL * (unsigned __int8)v7
                   + 8) )
    {
      v13 = *(_QWORD *)v12 + 24LL * v7;
    }
    if ( v13
      && *(unsigned __int8 *)(v13 + 14) == v5
      && *(_WORD *)(v13 + 12) == (_WORD)v4
      && (*(_DWORD *)(v13 + 8) & 0xFFFFFFFE) == 0 )
    {
      LOBYTE(v9) = a1 != 0LL;
      return v9;
    }
  }
LABEL_22:
  if ( v5 != 4 )
  {
    v14 = v5 - 1;
    if ( v14 )
    {
      v15 = v14 - 4;
      if ( v15 )
      {
        v16 = v15 - 3;
        if ( v16 )
        {
          v17 = v16 - 2;
          if ( v17 )
          {
            if ( v17 == 6 )
              return bDeleteBrush(a1);
            else
              return 0LL;
          }
          else
          {
            return bDeleteFont_0();
          }
        }
        else
        {
          return bDeletePalette((HPALETTE)a1);
        }
      }
      else
      {
        if ( ghsemDynamicModeChange )
          ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange");
        v18 = bDeleteSurface(a1);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
        if ( ghsemDynamicModeChange )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDynamicModeChange);
          PsLeavePriorityRegion(v19);
        }
        return v18;
      }
    }
    else
    {
      v67[0] = 0LL;
      v20 = 0;
      v67[1] = 0LL;
      UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v68);
      XDCOBJ::vLock((XDCOBJ *)v67, (HDC)a1);
      if ( v67[0]
        && ((v21 = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
             v70 = 0LL,
             v69 = 0,
             v22 = GdiHandleManager::DecodeIndex((GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext, v6),
             GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v21[2], v22, &v70, &v69))
          ? (EntryObject = GdiHandleEntryTable::GetEntryObject(v70, v69))
          : (EntryObject = 0LL),
            *((_WORD *)EntryObject + 6) <= 1u) )
      {
        v9 = bDeleteDCInternalWorker((struct XDCOBJ *)v67, 0, 0, 0);
        if ( !v9 )
          v20 = 1;
      }
      else
      {
        EngSetLastError(0xAAu);
      }
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v67);
      UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v68);
      if ( v20 )
        return (unsigned int)UserReleaseDC((__int64)a1);
      return v9;
    }
  }
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v64, (HRGN)a1, 0, 0);
  v24 = v64;
  if ( !v64 || *((_DWORD *)v64 + 8) )
    goto LABEL_118;
  v25 = *(_QWORD *)v64;
  v26 = (unsigned __int16)*(_QWORD *)v64;
  v27 = 0LL;
  v69 = 0;
  v28 = v26 | ((unsigned int)v25 >> 8) & 0xFF0000;
  v61 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v71);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v30 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v70 = *(struct GdiHandleEntryTable **)(v30 + 72);
  else
    v70 = 0LL;
  v31 = WPP_MAIN_CB.Dpc.DeferredContext;
  v32 = 1;
  v62 = 1;
  v33 = GdiHandleManager::DecodeIndex((GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext, v28);
  v34 = v31[2];
  v35 = v33;
  v36 = *(_DWORD *)(v34 + 2056);
  if ( v33 >= v36 + ((*(unsigned __int16 *)(v34 + 2) - 1) << 16) )
    goto LABEL_112;
  if ( v33 >= v36 )
  {
    v37 = ((v33 - v36) >> 16) + 1;
    if ( (v33 - v36) >> 16 == -2 )
    {
LABEL_112:
      KeLeaveCriticalRegion();
      goto LABEL_113;
    }
  }
  else
  {
    v37 = 0;
  }
  if ( v37 )
    v35 = v33 - ((v37 - 1) << 16) - v36;
  if ( !GdiHandleEntryTable::AcquireEntryLock(*(GdiHandleEntryTable **)(v34 + 8LL * v37 + 8), v35, 0) )
    goto LABEL_112;
  v38 = (GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext;
  v39 = GdiHandleManager::DecodeIndex((GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext, v28);
  v40 = *((_QWORD *)v38 + 2);
  v41 = v39;
  v42 = *(_DWORD *)(v40 + 2056);
  if ( v39 >= v42 + ((*(unsigned __int16 *)(v40 + 2) - 1) << 16) )
    goto LABEL_70;
  if ( v39 >= v42 )
  {
    v43 = ((v39 - v42) >> 16) + 1;
    if ( (v39 - v42) >> 16 != -2 )
      goto LABEL_65;
LABEL_70:
    v45 = 0LL;
    goto LABEL_71;
  }
  v43 = 0;
LABEL_65:
  v44 = *(_QWORD *)(v40 + 8LL * v43 + 8);
  if ( v43 )
    v41 = v39 - ((v43 - 1) << 16) - v42;
  v45 = 0LL;
  if ( (unsigned int)v41 < *(_DWORD *)(v44 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v44 + 24) + 8 * (v41 >> 8)) + 16LL * (unsigned __int8)v41 + 8) )
  {
    v45 = *(_QWORD *)v44 + 24LL * (unsigned int)v41;
  }
LABEL_71:
  v61 = v45;
  _m_prefetchw((const void *)(v45 + 8));
  v63 = *(_DWORD *)(v45 + 8);
  v46 = v63 & 0xFFFFFFFE;
  if ( (v63 & 0xFFFFFFFE) != (v71 & 0xFFFFFFFC) && v46 && (!v70 || v46 != *((_DWORD *)v70 + 2))
    || (*(_BYTE *)(v45 + 15) & 0x20) != 0 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v61);
    if ( !v62 )
      goto LABEL_113;
    v45 = v61;
    v38 = (GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext;
  }
  if ( *(_BYTE *)(v45 + 14) != 4 || *(_WORD *)(v45 + 12) != WORD1(v25) )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v61);
    v45 = v61;
    v38 = (GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext;
  }
  if ( v62 )
  {
    if ( !v45 )
      goto LABEL_108;
    v47 = (__int64 *)v64;
    v48 = GdiHandleManager::DecodeIndex(v38, (unsigned __int16)*v64 | ((unsigned __int32)*v64 >> 8) & 0xFF0000);
    v49 = *((_QWORD *)v38 + 2);
    v50 = *(_DWORD *)(v49 + 2056);
    if ( v48 < v50 + ((*(unsigned __int16 *)(v49 + 2) - 1) << 16) )
    {
      if ( v48 < v50 )
      {
        v51 = 0;
        goto LABEL_87;
      }
      v51 = ((v48 - v50) >> 16) + 1;
      if ( (v48 - v50) >> 16 != -2 )
      {
LABEL_87:
        v52 = *(_QWORD *)(v49 + 8LL * v51 + 8);
        if ( v51 )
          v53 = v48 - ((v51 - 1) << 16) - v50;
        else
          v53 = v48;
        v54 = 0LL;
        if ( v53 < *(_DWORD *)(v52 + 20)
          && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v52 + 24) + 8 * ((unsigned __int64)v53 >> 8))
                       + 16LL * (unsigned __int8)v53
                       + 8) )
        {
          v54 = *(_QWORD *)v52 + 24LL * v53;
        }
LABEL_94:
        v55 = GdiHandleManager::DecodeIndex(v38, v48);
        v56 = *(_DWORD *)(v49 + 2056);
        v57 = v56 + ((*(unsigned __int16 *)(v49 + 2) - 1) << 16);
        v58 = v55;
        if ( v55 < (unsigned int)v57 )
        {
          if ( v55 >= v56 )
          {
            v57 = ((v55 - v56) >> 16) + 1;
            if ( (v55 - v56) >> 16 == -2 )
              goto LABEL_102;
          }
          else
          {
            v57 = 0LL;
          }
          v59 = *(_QWORD *)(v49 + 8LL * (int)v57 + 8);
          if ( (_DWORD)v57 )
            v58 = v55 - (((_DWORD)v57 - 1) << 16) - v56;
          if ( (unsigned int)v58 < *(_DWORD *)(v59 + 20) )
          {
            v57 = 2LL * (unsigned __int8)v58;
            v60 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v59 + 24) + 8 * (v58 >> 8)) + 16LL * (unsigned __int8)v58 + 8);
LABEL_103:
            if ( v60 != v47 )
              v54 = 0LL;
            v27 = *(_QWORD *)(v54 + 16);
            if ( !v27 || (v69 = bPEBCacheHandle(v57, 2LL, v27, v54, &v61, &v64)) == 0 )
              HANDLELOCK::vUnlock((HANDLELOCK *)&v61);
LABEL_108:
            if ( v62 )
              HANDLELOCK::vUnlock((HANDLELOCK *)&v61);
            if ( v69 )
              goto LABEL_116;
            goto LABEL_113;
          }
        }
LABEL_102:
        v60 = 0LL;
        goto LABEL_103;
      }
    }
    v54 = 0LL;
    goto LABEL_94;
  }
LABEL_113:
  if ( !(unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)&v64) )
  {
    v24 = v64;
LABEL_118:
    v32 = 0;
    goto LABEL_119;
  }
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v64);
  if ( v27 )
    HmgFreeObjectAttr(v27);
LABEL_116:
  v24 = v64;
LABEL_119:
  if ( !v66 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v64);
    v24 = v64;
  }
  if ( v24 )
    _InterlockedDecrement(v24 + 3);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v65);
  return v32;
}
