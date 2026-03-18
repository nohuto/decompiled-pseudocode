/*
 * XREFs of ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C00285B0
 * Callers:
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032CE0 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     RFONTOBJ_vConstructPRFONTWrap_0 @ 0x1C0001090 (RFONTOBJ_vConstructPRFONTWrap_0.c)
 *     IsRFONTOBJ_vConstructPRFONTSupported_0 @ 0x1C0001098 (IsRFONTOBJ_vConstructPRFONTSupported_0.c)
 *     RFONTOBJ_dtHelperWrap_0 @ 0x1C00010A0 (RFONTOBJ_dtHelperWrap_0.c)
 *     IsRFONTOBJ_dtHelperSupported_0 @ 0x1C00010A8 (IsRFONTOBJ_dtHelperSupported_0.c)
 *     IsXDCOBJ_vCleanupColorTransformSupported_0 @ 0x1C00010B0 (IsXDCOBJ_vCleanupColorTransformSupported_0.c)
 *     XDCOBJ_vCleanupColorTransformWrap_0 @ 0x1C00010B8 (XDCOBJ_vCleanupColorTransformWrap_0.c)
 *     IsPFTOBJ_bUnloadWorkhorseSupported_0 @ 0x1C00010C0 (IsPFTOBJ_bUnloadWorkhorseSupported_0.c)
 *     PFTOBJ_bUnloadWorkhorseWrap_0 @ 0x1C00010C8 (PFTOBJ_bUnloadWorkhorseWrap_0.c)
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C48 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C50 (Win32FreeToPagedLookasideListImpl_0.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z @ 0x1C002B060 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C002B164 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0036468 (HmgDecProcessHandleCount.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005CF10 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00BD724 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00BD79C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00BD904 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     Template_pqz @ 0x1C00CC378 (Template_pqz.c)
 *     Template_pz @ 0x1C00CC434 (Template_pz.c)
 */

__int64 __fastcall XDCOBJ::bDeleteDC(__int64 **this)
{
  __int64 *v2; // rbx
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rax
  __int64 *v5; // rbx
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rbx
  volatile signed __int32 *v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // rbx
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rbx
  struct HPATH__ *v15; // rdx
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rbx
  __int64 *v19; // rcx
  struct _ERESOURCE *v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rsi
  unsigned int v23; // r13d
  _QWORD *DeferredContext; // rbx
  unsigned int v25; // eax
  __int64 v26; // rbx
  unsigned int v27; // ebp
  unsigned int v28; // edx
  signed int v29; // ecx
  __int64 v30; // rbx
  char v31; // si
  __int64 v32; // r12
  PVOID v33; // rbp
  unsigned int v34; // eax
  __int64 v35; // r9
  unsigned __int64 v36; // rdx
  unsigned int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // r9
  unsigned __int16 *v40; // r14
  bool v41; // zf
  int v42; // eax
  unsigned int v43; // esi
  __int64 v44; // rcx
  unsigned int v45; // r9d
  signed int v46; // edx
  __int64 v47; // r8
  int v48; // ebx
  PVOID v49; // rbp
  unsigned int v50; // esi
  __int64 v51; // rcx
  unsigned int v52; // r8d
  signed int v53; // edx
  __int64 v54; // r9
  _DWORD *v55; // r14
  int v56; // eax
  __int64 v57; // rsi
  __int64 v58; // r8
  __int64 v59; // rbx
  unsigned int v60; // edx
  signed int v61; // ecx
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v67; // rsi
  unsigned int v68; // ebx
  unsigned int v69; // ebx
  unsigned int v70; // ebx
  __int64 v71; // r12
  unsigned int v72; // ebx
  unsigned __int16 *v73; // [rsp+30h] [rbp-D8h] BYREF
  int v74; // [rsp+38h] [rbp-D0h]
  int v75; // [rsp+3Ch] [rbp-CCh]
  _BYTE v76[8]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v77[8]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v78; // [rsp+58h] [rbp-B0h]
  __int64 v79; // [rsp+110h] [rbp+8h]
  unsigned __int64 v80; // [rsp+120h] [rbp+18h]
  __int64 v81; // [rsp+128h] [rbp+20h] BYREF

  v81 = 0LL;
  if ( (int)IsRFONTOBJ_vConstructPRFONTSupported_0() >= 0 )
    RFONTOBJ_vConstructPRFONTWrap_0();
  v2 = *this;
  v3 = (volatile signed __int32 *)(*this)[202];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v3, 1LL);
    v2[202] = 0LL;
  }
  v4 = v2[199];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 - 16), 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v4 - 16, 0LL);
    v2[199] = 0LL;
  }
  v5 = *this;
  v6 = (volatile signed __int32 *)(*this)[220];
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v6, 1LL);
    v5[220] = 0LL;
  }
  v7 = v5[217];
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 - 16), 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v7 - 16, 0LL);
    v5[217] = 0LL;
  }
  v8 = *this;
  v9 = (volatile signed __int32 *)(*this)[238];
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v9, 1LL);
    v8[238] = 0LL;
  }
  v10 = v8[235];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 - 16), 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v10 - 16, 0LL);
    v8[235] = 0LL;
  }
  v11 = *this;
  v12 = (volatile signed __int32 *)(*this)[256];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v12, 1LL);
    v11[256] = 0LL;
  }
  v13 = v11[253];
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 - 16), 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v13 - 16, 0LL);
    v11[253] = 0LL;
  }
  v14 = *this;
  v15 = (struct HPATH__ *)(*this)[21];
  if ( v15 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v77, v15);
    if ( v78 && (*(_DWORD *)(v78 + 88) & 1) == 0 )
      HmgDecrementShareReferenceCount(v78);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v77);
    v14[21] = 0LL;
  }
  if ( (int)IsXDCOBJ_vCleanupColorTransformSupported_0() >= 0 )
    XDCOBJ_vCleanupColorTransformWrap_0();
  v18 = (*this)[311];
  while ( v18 )
  {
    v67 = v18;
    v18 = *(_QWORD *)(v18 + 8);
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    --*(_DWORD *)(*(_QWORD *)v67 + 64LL);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported_0() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap_0();
    Win32FreePool(v67);
  }
  v19 = (__int64 *)(*this)[39];
  if ( v19 && v19 != (__int64 *)((char *)*this + 276) )
  {
    Win32FreePool(v19);
    (*this)[39] = 0LL;
  }
  v20 = ghsemHmgr;
  v21 = 0LL;
  v22 = **this;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(v19);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v20);
    LODWORD(v20) = (_DWORD)ghsemHmgr;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((unsigned int)L"ghsemHmgr", v16, v17, (_DWORD)v20, 16, (__int64)L"ghsemHmgr");
  v73 = 0LL;
  v23 = (unsigned __int16)v22 | ((unsigned int)v22 >> 8) & 0xFF0000;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v76);
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v74 = 1;
  v25 = GdiHandleManager::DecodeIndex((GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext, v23);
  v26 = DeferredContext[2];
  v27 = v25;
  v28 = *(_DWORD *)(v26 + 2056);
  if ( v25 >= v28 + ((*(unsigned __int16 *)(v26 + 2) - 1) << 16) )
    goto LABEL_152;
  if ( v25 >= v28 )
  {
    v29 = ((v25 - v28) >> 16) + 1;
    if ( (v25 - v28) >> 16 == -2 )
    {
LABEL_152:
      KeLeaveCriticalRegion();
      goto LABEL_75;
    }
  }
  else
  {
    v29 = 0;
  }
  v30 = *(_QWORD *)(v26 + 8LL * v29 + 8);
  if ( v29 )
    v27 = v25 - ((v29 - 1) << 16) - v28;
  v31 = 0;
  if ( v27 >= *(_DWORD *)(v30 + 20) )
    goto LABEL_152;
  v32 = 16LL * (unsigned __int8)v27;
  v80 = 8 * ((unsigned __int64)v27 >> 8);
  v79 = v32 + *(_QWORD *)(**(_QWORD **)(v30 + 24) + v80);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v79, 0LL);
  if ( v27 < *(_DWORD *)(v30 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v30 + 24) + v80) + v32 + 8) )
  {
    v31 = 1;
    *(_DWORD *)(*(_QWORD *)v30 + 24LL * v27 + 8) |= 1u;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v79, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v31 )
    goto LABEL_152;
  v33 = WPP_MAIN_CB.Dpc.DeferredContext;
  v34 = GdiHandleManager::DecodeIndex((GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext, v23);
  v35 = *((_QWORD *)v33 + 2);
  v36 = v34;
  v37 = *(_DWORD *)(v35 + 2056);
  v38 = v37 + ((*(unsigned __int16 *)(v35 + 2) - 1) << 16);
  if ( v34 >= (unsigned int)v38 )
    goto LABEL_124;
  if ( v34 >= v37 )
  {
    v38 = ((v34 - v37) >> 16) + 1;
    if ( (v34 - v37) >> 16 != -2 )
      goto LABEL_32;
LABEL_124:
    v40 = 0LL;
    goto LABEL_37;
  }
  v38 = 0LL;
LABEL_32:
  v39 = *(_QWORD *)(v35 + 8LL * (int)v38 + 8);
  if ( (_DWORD)v38 )
    v36 = v34 - (((_DWORD)v38 - 1) << 16) - v37;
  v40 = 0LL;
  if ( (unsigned int)v36 < *(_DWORD *)(v39 + 20) )
  {
    v38 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v39 + 24) + 8 * (v36 >> 8)) + 16LL * (unsigned __int8)v36 + 8);
    if ( v38 )
    {
      v38 = 3LL * (unsigned int)v36;
      v40 = (unsigned __int16 *)(*(_QWORD *)v39 + 24LL * (unsigned int)v36);
    }
  }
LABEL_37:
  v73 = v40;
  _m_prefetchw(v40 + 4);
  v41 = (*((_BYTE *)v40 + 15) & 0x20) == 0;
  v75 = *((_DWORD *)v40 + 2);
  if ( v41 )
  {
    v42 = v74;
  }
  else
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v73);
    v42 = v74;
    if ( !v74 )
      goto LABEL_75;
    v33 = WPP_MAIN_CB.Dpc.DeferredContext;
    v40 = v73;
  }
  if ( v40 )
  {
    v43 = *(_DWORD *)v40 & 0xFFFFFF;
    if ( v43 >= 0x10000 )
    {
      if ( *(_DWORD *)v33 > 0x10000u )
      {
        v68 = *v40;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v33 + 2), v68, 1) + 13) == HIWORD(v43) )
          v43 = v68;
      }
      else
      {
        v43 = *v40;
      }
    }
    v44 = *((_QWORD *)v33 + 2);
    v45 = *(_DWORD *)(v44 + 2056);
    if ( v43 >= v45 + ((*(unsigned __int16 *)(v44 + 2) - 1) << 16) )
      goto LABEL_131;
    if ( v43 >= v45 )
    {
      v46 = ((v43 - v45) >> 16) + 1;
      if ( (v43 - v45) >> 16 == -2 )
        goto LABEL_131;
    }
    else
    {
      v46 = 0;
    }
    v47 = *(_QWORD *)(v44 + 8LL * v46 + 8);
    if ( v46 )
      v43 = v43 - ((v46 - 1) << 16) - v45;
    if ( v43 < *(_DWORD *)(v47 + 20) )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v47 + 24) + 8 * ((unsigned __int64)v43 >> 8))
                      + 16LL * (unsigned __int8)v43
                      + 8);
      goto LABEL_50;
    }
LABEL_131:
    v21 = 0LL;
LABEL_50:
    v48 = *((_DWORD *)v40 + 2);
    HmgDecProcessHandleCount(v48 & 0xFFFFFFFE);
    *((_BYTE *)v40 + 14) = 0;
    *((_QWORD *)v40 + 2) = 0LL;
    *((_DWORD *)v40 + 2) = v48 & 1;
    v49 = WPP_MAIN_CB.Dpc.DeferredContext;
    v50 = *(_DWORD *)v40 & 0xFFFFFF;
    if ( v50 >= 0x10000 )
    {
      if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
      {
        v69 = *v40;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                    v69,
                                    1)
             + 13) == HIWORD(v50) )
          v50 = v69;
      }
      else
      {
        v50 = *v40;
      }
    }
    v51 = *((_QWORD *)v49 + 2);
    v52 = *(_DWORD *)(v51 + 2056);
    if ( v50 >= v52 + ((*(unsigned __int16 *)(v51 + 2) - 1) << 16) )
      goto LABEL_136;
    if ( v50 >= v52 )
    {
      v53 = ((v50 - v52) >> 16) + 1;
      if ( (v50 - v52) >> 16 == -2 )
        goto LABEL_136;
    }
    else
    {
      v53 = 0;
    }
    v54 = *(_QWORD *)(v51 + 8LL * v53 + 8);
    if ( v53 )
      v50 = v50 - ((v53 - 1) << 16) - v52;
    if ( v50 < *(_DWORD *)(v54 + 20) )
    {
      v55 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v54 + 24) + 8 * ((unsigned __int64)v50 >> 8))
                       + 16LL * (unsigned __int8)v50
                       + 8);
      goto LABEL_60;
    }
LABEL_136:
    v55 = 0LL;
LABEL_60:
    v56 = (unsigned __int16)*v55;
    v57 = v56 | (*v55 >> 8) & 0xFF0000u;
    if ( (unsigned int)v57 >= 0x10000 )
    {
      if ( *(_DWORD *)v49 > 0x10000u )
      {
        v70 = (unsigned __int16)v56;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)v49 + 2),
                                    (unsigned __int16)v56,
                                    1)
             + 13) == WORD1(v57) )
          v57 = v70;
      }
      else
      {
        v57 = (unsigned __int16)v56;
      }
      if ( (unsigned int)v57 >= 0x10000 && *(_DWORD *)v49 > 0x10000u )
        GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v49 + 2), (unsigned __int16)v57, 1);
    }
    v58 = *((_QWORD *)v49 + 3);
    if ( v58 )
    {
      v71 = 4LL * (unsigned __int16)v57;
      v72 = *(_DWORD *)(v71 + v58);
      if ( v72 )
      {
        if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v49 + 2), v72, 1) )
          GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v49 + 2), v72, 1);
        *(_DWORD *)(v71 + *((_QWORD *)v49 + 3)) = 0;
        --*((_DWORD *)v49 + 1);
      }
    }
    v59 = *((_QWORD *)v49 + 2);
    v60 = *(_DWORD *)(v59 + 2056);
    if ( (unsigned int)v57 >= v60 + ((*(unsigned __int16 *)(v59 + 2) - 1) << 16) )
      goto LABEL_74;
    if ( (unsigned int)v57 >= v60 )
    {
      v61 = (((unsigned int)v57 - v60) >> 16) + 1;
      if ( ((unsigned int)v57 - v60) >> 16 == -2 )
      {
LABEL_74:
        *(_QWORD *)v55 = 0LL;
        --*((_DWORD *)v49 + 1);
        KeLeaveCriticalRegion();
        goto LABEL_75;
      }
    }
    else
    {
      v61 = 0;
    }
    v62 = *(_QWORD *)(v59 + 8LL * v61 + 8);
    if ( v61 )
      v57 = (_DWORD)v57 - ((v61 - 1) << 16) - v60;
    if ( (unsigned int)v57 < *(_DWORD *)(v62 + 20) )
    {
      v63 = *(_QWORD *)(**(_QWORD **)(v62 + 24) + 8 * ((unsigned __int64)(unsigned int)v57 >> 8));
      if ( *(_QWORD *)(v63 + 16LL * (unsigned __int8)v57 + 8) )
      {
        *(_QWORD *)(v63 + 16LL * (unsigned __int8)v57 + 8) = 0LL;
        *(_QWORD *)(*(_QWORD *)v62 + 24 * v57) = *(unsigned int *)(v62 + 12);
        --*(_DWORD *)(v62 + 16);
        *(_DWORD *)(v62 + 12) = v57;
      }
    }
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v62 + 24) + 8 * ((unsigned __int64)(unsigned int)v57 >> 8))
    + 16LL * (unsigned __int8)v57,
      0LL);
    KeLeaveCriticalRegion();
    *(_BYTE *)v59 = 0;
    goto LABEL_74;
  }
  if ( v42 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v73);
LABEL_75:
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v38, &LockRelease);
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion(v64);
  }
  if ( v21 )
  {
    if ( *(__int16 *)(v21 + 14) >= 0 )
    {
      Win32FreePool(v21);
    }
    else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
    {
      Win32FreeToPagedLookasideListImpl_0();
    }
  }
  v65 = v81;
  *this = 0LL;
  if ( v65 )
  {
    if ( (*(_DWORD *)(v65 + 720) & 0x81) != 0 && (int)IsRFONTOBJ_dtHelperSupported_0() >= 0 )
      RFONTOBJ_dtHelperWrap_0();
    RFONTOBJ::vReleaseCache((RFONTOBJ *)&v81);
  }
  return 1LL;
}
