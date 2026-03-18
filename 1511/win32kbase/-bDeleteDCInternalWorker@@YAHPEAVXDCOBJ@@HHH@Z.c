/*
 * XREFs of ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C00266A0 (NtGdiDeleteObjectApp.c)
 *     bDeleteDCInternal @ 0x1C006BEB0 (bDeleteDCInternal.c)
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
 *     HmgFreeDcAttr @ 0x1C000B098 (HmgFreeDcAttr.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0030F10 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0031C80 (DEC_SHARE_REF_CNT.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038000 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?bValid@PDEVOBJ@@QEAAHXZ @ 0x1C0038FE0 (-bValid@PDEVOBJ@@QEAAHXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003ECE0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00599A0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005C290 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00B3280 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00B32E8 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00B3454 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B58C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00B5970 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

__int64 __fastcall bDeleteDCInternalWorker(DC **a1, int a2, int a3, int a4)
{
  unsigned int v7; // r14d
  DC *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r12
  __int128 *v11; // rax
  __int128 *v12; // rcx
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 CurrentProcessWin32Process; // r15
  __int64 v22; // rbx
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  DC *v28; // rsi
  int v29; // eax
  __int64 v30; // rdi
  struct REGION *v31; // rbx
  DC *v32; // rax
  struct REGION *v33; // rbx
  REGION *v34; // rcx
  REGION *v35; // rcx
  REGION *v36; // rcx
  DC *v37; // rsi
  volatile signed __int32 *v38; // rcx
  __int64 v39; // rcx
  volatile signed __int32 *v40; // rcx
  DC *v41; // rsi
  volatile signed __int32 *v42; // rcx
  __int64 v43; // rcx
  volatile signed __int32 *v44; // rcx
  DC *v45; // rsi
  volatile signed __int32 *v46; // rcx
  __int64 v47; // rcx
  volatile signed __int32 *v48; // rcx
  DC *v49; // rsi
  volatile signed __int32 *v50; // rcx
  __int64 v51; // rcx
  volatile signed __int32 *v52; // rcx
  DC *v53; // rbx
  struct HPATH__ *v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rsi
  __int64 v58; // rbx
  DC *v59; // rcx
  __int64 v60; // r12
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v61; // rcx
  __int64 v62; // r15
  struct _ERESOURCE *v63; // rbx
  __int64 v64; // rcx
  char *v65; // rsi
  bool v66; // zf
  signed __int32 v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rdx
  int v71; // r8d
  char *v72; // rcx
  int v73; // ebx
  signed int v74; // r12d
  struct _ERESOURCE *v75; // r15
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 ProcessWin32Process; // rax
  __int64 v81; // rcx
  __int64 v82; // rax
  struct _ERESOURCE *v83; // rbx
  int v84; // ebx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v88; // [rsp+30h] [rbp-D0h] BYREF
  char *v89; // [rsp+38h] [rbp-C8h]
  PEPROCESS Process; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v91; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v92; // [rsp+50h] [rbp-B0h]
  __int64 v93; // [rsp+58h] [rbp-A8h]
  __int64 v94; // [rsp+60h] [rbp-A0h]
  unsigned int v95; // [rsp+74h] [rbp-8Ch]
  int v96; // [rsp+78h] [rbp-88h]
  __int64 v97; // [rsp+80h] [rbp-80h] BYREF
  BOOL v98; // [rsp+88h] [rbp-78h]
  int v99; // [rsp+8Ch] [rbp-74h]
  _BYTE v100[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v101[8]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v102; // [rsp+A8h] [rbp-58h]

  v7 = 0;
  XDCOBJ::bCleanDC(a1, a4);
  if ( !a2 && (*((_DWORD *)*a1 + 9) & 8) != 0 )
    return v7;
  if ( a3 )
    goto LABEL_26;
  v8 = *a1;
  v9 = *((_QWORD *)*a1 + 10);
  v10 = (__int64)*a1 + 536;
  if ( v9 == v10 )
    goto LABEL_26;
  v11 = (__int128 *)((char *)*a1 + 536);
  v12 = (__int128 *)*((_QWORD *)*a1 + 10);
  v13 = 3LL;
  do
  {
    v11 += 8;
    v14 = *v12;
    v12 += 8;
    *(v11 - 8) = v14;
    *(v11 - 7) = *(v12 - 7);
    *(v11 - 6) = *(v12 - 6);
    *(v11 - 5) = *(v12 - 5);
    *(v11 - 4) = *(v12 - 4);
    *(v11 - 3) = *(v12 - 3);
    *(v11 - 2) = *(v12 - 2);
    *(v11 - 1) = *(v12 - 1);
    --v13;
  }
  while ( v13 );
  *v11 = *v12;
  v11[1] = v12[1];
  if ( (DC *)v9 != (DC *)((char *)v8 + 960) )
  {
    HmgFreeDcAttr(v9);
    goto LABEL_25;
  }
  v15 = 0LL;
  v16 = *((_QWORD *)v8 + 119);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), 0LL, v9);
  if ( ThreadWin32Thread )
    v15 = *ThreadWin32Thread;
  if ( !v16 || !v15 )
    goto LABEL_25;
  if ( *(_QWORD *)(v15 + 24) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
    if ( CurrentProcessWin32Process )
    {
      GreAcquireHmgrSemaphore(v20, v19);
      v22 = CurrentProcessWin32Process + 192;
      if ( *(_QWORD *)v22 == v22 || (v23 = *(_QWORD **)v22, *(_DWORD *)(*(_QWORD *)v22 + 16LL) == 9) )
      {
        v23 = PALLOCMEM2(0x60uLL, 1717789767LL, 0);
        if ( !v23 )
        {
          GreReleaseHmgrSemaphore(v24, 0LL);
          goto LABEL_25;
        }
        v25 = *(_QWORD **)v22;
        *v23 = *(_QWORD *)v22;
        v23[1] = v22;
        if ( v25[1] != v22 )
          __fastfail(3u);
        v25[1] = v23;
        *(_QWORD *)v22 = v23;
        *((_DWORD *)v23 + 4) = 0;
      }
      v23[(unsigned int)(*((_DWORD *)v23 + 4))++ + 3] = v16;
      *(_QWORD *)(CurrentProcessWin32Process + 40) = v16;
      EtwTraceGreLockReleaseSemaphore(L"ghsemHmgr");
      if ( ghsemHmgr )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
        PsLeavePriorityRegion(v26);
      }
    }
  }
  else
  {
    *(_QWORD *)(v15 + 24) = v16;
  }
LABEL_25:
  v27 = (unsigned __int16)*(_DWORD *)v8;
  *((_QWORD *)v8 + 10) = v10;
  *((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * v27 + 2) = 0LL;
LABEL_26:
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*a1 + 18));
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*a1 + 19));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)*a1 + 20));
  DEC_SHARE_REF_CNT(*((_DWORD **)*a1 + 13));
  v28 = *a1;
  v29 = *(_DWORD *)*a1;
  v30 = *((_QWORD *)*a1 + 6);
  *((_DWORD *)v28 + 9) |= 0x10u;
  *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v29 + 15) |= 4u;
  v31 = (struct REGION *)*((_QWORD *)v28 + 189);
  if ( v31 && v31 != prgnDefault )
  {
    if ( (*((_WORD *)v31 + 7) & 0x8000) != 0 )
    {
      if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
        Win32FreeToPagedLookasideListImpl_0();
    }
    else
    {
      Win32FreePool();
    }
  }
  *((_QWORD *)v28 + 189) = prgnDefault;
  v32 = *a1;
  *((_DWORD *)v32 + 9) |= 0x10u;
  *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v32 + 15) |= 4u;
  v33 = (struct REGION *)*((_QWORD *)*a1 + 190);
  if ( v33 && v33 != prgnDefault )
  {
    if ( (*((_WORD *)v33 + 7) & 0x8000) != 0 )
    {
      if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
        Win32FreeToPagedLookasideListImpl_0();
    }
    else
    {
      Win32FreePool();
    }
  }
  v34 = (REGION *)*((_QWORD *)*a1 + 191);
  if ( v34 )
    REGION::vDeleteREGION(v34);
  v35 = (REGION *)*((_QWORD *)*a1 + 192);
  if ( v35 )
    REGION::vDeleteREGION(v35);
  v36 = (REGION *)*((_QWORD *)*a1 + 193);
  if ( v36 )
    REGION::vDeleteREGION(v36);
  v91 = *((_QWORD *)*a1 + 7);
  v88 = 0LL;
  if ( (int)IsRFONTOBJ_vConstructPRFONTSupported_0() >= 0 )
    RFONTOBJ_vConstructPRFONTWrap_0();
  v37 = *a1;
  v38 = (volatile signed __int32 *)*((_QWORD *)*a1 + 199);
  if ( v38 )
  {
    if ( _InterlockedExchangeAdd(v38, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v38, 1LL);
    *((_QWORD *)v37 + 199) = 0LL;
  }
  v39 = *((_QWORD *)v37 + 196);
  if ( v39 )
  {
    v40 = (volatile signed __int32 *)(v39 - 16);
    if ( _InterlockedExchangeAdd(v40, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v40, 0LL);
    *((_QWORD *)v37 + 196) = 0LL;
  }
  v41 = *a1;
  v42 = (volatile signed __int32 *)*((_QWORD *)*a1 + 217);
  if ( v42 )
  {
    if ( _InterlockedExchangeAdd(v42, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v42, 1LL);
    *((_QWORD *)v41 + 217) = 0LL;
  }
  v43 = *((_QWORD *)v41 + 214);
  if ( v43 )
  {
    v44 = (volatile signed __int32 *)(v43 - 16);
    if ( _InterlockedExchangeAdd(v44, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v44, 0LL);
    *((_QWORD *)v41 + 214) = 0LL;
  }
  v45 = *a1;
  v46 = (volatile signed __int32 *)*((_QWORD *)*a1 + 235);
  if ( v46 )
  {
    if ( _InterlockedExchangeAdd(v46, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v46, 1LL);
    *((_QWORD *)v45 + 235) = 0LL;
  }
  v47 = *((_QWORD *)v45 + 232);
  if ( v47 )
  {
    v48 = (volatile signed __int32 *)(v47 - 16);
    if ( _InterlockedExchangeAdd(v48, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v48, 0LL);
    *((_QWORD *)v45 + 232) = 0LL;
  }
  v49 = *a1;
  v50 = (volatile signed __int32 *)*((_QWORD *)*a1 + 253);
  if ( v50 )
  {
    if ( _InterlockedExchangeAdd(v50, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v50, 1LL);
    *((_QWORD *)v49 + 253) = 0LL;
  }
  v51 = *((_QWORD *)v49 + 250);
  if ( v51 )
  {
    v52 = (volatile signed __int32 *)(v51 - 16);
    if ( _InterlockedExchangeAdd(v52, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v52, 0LL);
    *((_QWORD *)v49 + 250) = 0LL;
  }
  v53 = *a1;
  v54 = (struct HPATH__ *)*((_QWORD *)*a1 + 21);
  if ( v54 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v101, v54);
    if ( v102 && (v102[22] & 1) == 0 )
      DEC_SHARE_REF_CNT(v102);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v101);
    *((_QWORD *)v53 + 21) = 0LL;
  }
  if ( (int)IsXDCOBJ_vCleanupColorTransformSupported_0() >= 0 )
    XDCOBJ_vCleanupColorTransformWrap_0();
  v57 = *((_QWORD *)*a1 + 308);
  while ( v57 )
  {
    v58 = v57;
    v57 = *(_QWORD *)(v57 + 8);
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    v94 = *(_QWORD *)(*(_QWORD *)v58 + 128LL);
    --*(_DWORD *)(*(_QWORD *)v58 + 64LL);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported_0() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap_0();
    Win32FreePool();
  }
  v59 = (DC *)*((_QWORD *)*a1 + 39);
  if ( v59 && v59 != (DC *)((char *)*a1 + 276) )
  {
    Win32FreePool();
    *((_QWORD *)*a1 + 39) = 0LL;
  }
  v60 = 0LL;
  v61 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)*(unsigned int *)*a1;
  if ( *(_WORD *)&v61 >= (unsigned int)gcMaxHmgr )
    goto LABEL_141;
  v62 = (__int64)v61;
  v63 = ghsemHmgr;
  v92 = (__int64)v61;
  v64 = 24LL * *(_WORD *)&v61;
  v65 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + v64;
  v89 = (char *)v64;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(v64, v55);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v63);
    LODWORD(v63) = (_DWORD)ghsemHmgr;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz(v64, v55, v56, (_DWORD)v63, 16, (__int64)L"ghsemHmgr");
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v100);
  _m_prefetchw(v65 + 8);
  v66 = (v65[15] & 0x20) == 0;
  v67 = *((_DWORD *)v65 + 2);
  v95 = v67;
  if ( !v66 )
  {
LABEL_106:
    KeLeaveCriticalRegion();
    goto LABEL_107;
  }
  while ( (v65[15] & 0x40) == 0 )
  {
    if ( (v67 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_105:
      _m_prefetchw(v65 + 8);
      v66 = (v65[15] & 0x20) == 0;
      v67 = *((_DWORD *)v65 + 2);
      v95 = v67;
      if ( !v66 )
        goto LABEL_106;
    }
    else
    {
      v96 = v67 | 1;
      if ( v67 != _InterlockedCompareExchange((volatile signed __int32 *)v65 + 2, v67 | 1, v67) || (v65[15] & 0x40) != 0 )
        goto LABEL_105;
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v62) = 0LL;
      v65[15] |= 0x40u;
      _m_prefetchw(v65 + 8);
      v95 = *((_DWORD *)v65 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v65 + 2, v95);
      v67 = v95;
    }
  }
  ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v62, 0LL);
  v72 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + (unsigned __int64)v89;
  v93 = *(_QWORD *)v65;
  v73 = *(_DWORD *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + (unsigned __int64)v89 + 8);
  v89 += (unsigned __int64)WPP_MAIN_CB.Dpc.SystemArgument2;
  v74 = v73 & 0xFFFFFFFE;
  if ( (v73 & 0xFFFFFFFE) != 0 && v74 != -2147483630 )
  {
    v75 = ghsemHmgr;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion(v72, v70);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v75);
      LODWORD(v75) = (_DWORD)ghsemHmgr;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pqz((_DWORD)v72, v70, v71, (_DWORD)v75, 16, (__int64)L"ghsemHmgr");
    if ( v74 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v77 = PsGetCurrentProcessWin32Process(v76);
      if ( v77 )
        --*(_DWORD *)(v77 + 60);
    }
    else if ( PsLookupProcessByProcessId((HANDLE)v74, &Process) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Process);
      if ( ProcessWin32Process )
        --*(_DWORD *)(ProcessWin32Process + 60);
      ObfDereferenceObject(Process);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v78, &LockRelease, v79, ghsemHmgr, L"ghsemHmgr");
    if ( ghsemHmgr )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
      PsLeavePriorityRegion(v81);
    }
    v72 = v89;
    v62 = v92;
  }
  --gcCurHmgr;
  *(_QWORD *)v72 = ghFreeHmgr;
  *((_WORD *)v65 + 6) += 256;
  v65[14] = 0;
  *((_QWORD *)v65 + 2) = 0LL;
  *((_DWORD *)v72 + 2) = v73 & 1;
  ghFreeHmgr = v62;
  if ( (v65[15] & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v62);
  }
  else
  {
    _m_prefetchw(v65 + 8);
    v95 = *((_DWORD *)v65 + 2) & 0xFFFFFFFE;
    _InterlockedExchange((volatile __int32 *)v65 + 2, v95);
  }
  KeLeaveCriticalRegion();
  v60 = v93;
LABEL_107:
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v68, &LockRelease, v56, ghsemHmgr, L"ghsemHmgr");
  v61 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)ghsemHmgr;
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion(v69);
  }
  if ( v60 )
  {
    if ( *(__int16 *)(v60 + 14) >= 0 )
    {
      Win32FreePool();
    }
    else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
    {
      Win32FreeToPagedLookasideListImpl_0();
    }
  }
LABEL_141:
  v82 = v88;
  *a1 = 0LL;
  if ( v82 )
  {
    if ( (*(_DWORD *)(v82 + 720) & 0x81) != 0 && (int)IsRFONTOBJ_dtHelperSupported_0() >= 0 )
      RFONTOBJ_dtHelperWrap_0();
    RFONTOBJ::vReleaseCache((RFONTOBJ *)&v88);
  }
  v83 = ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))PsEnterPriorityRegion)(v61, v55);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v83);
    LODWORD(v83) = (_DWORD)ghsemDriverMgmt;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz(*(_DWORD *)&v61, v55, v56, (_DWORD)v83, 12, (__int64)L"ghsemDriverMgmt");
  v66 = (*(_DWORD *)(v30 + 32))-- == 1;
  v84 = *(_DWORD *)(v30 + 32);
  if ( v66 )
  {
    v61 = WPP_MAIN_CB.DeviceQueue.1;
    if ( *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 == v30 )
    {
      WPP_MAIN_CB.DeviceQueue.1 = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(v30 + 24);
    }
    else if ( WPP_MAIN_CB.DeviceQueue.1 )
    {
      while ( 1 )
      {
        v85 = *(_QWORD *)(*(_QWORD *)&v61 + 24LL);
        if ( v85 == v30 )
          break;
        v61 = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)&v61 + 24LL);
        if ( !v85 )
          goto LABEL_159;
      }
      *(_QWORD *)(*(_QWORD *)&v61 + 24LL) = *(_QWORD *)(v30 + 24);
    }
  }
LABEL_159:
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))Template_pz)(
      v61,
      &LockRelease,
      v56,
      ghsemDriverMgmt,
      L"ghsemDriverMgmt");
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion(v86);
  }
  if ( !v84 )
  {
    v97 = v30;
    v98 = a3 != 0;
    v99 = 1;
    vUnreferencePdevWorker((struct tagUNREFDATA *)&v97);
  }
  if ( (unsigned int)PDEVOBJ::bValid((PDEVOBJ *)&v91) )
  {
    LOBYTE(v7) = a3 != 0;
    PDEVOBJ::vUnreferencePdev(&v91, v7);
  }
  return 1;
}
