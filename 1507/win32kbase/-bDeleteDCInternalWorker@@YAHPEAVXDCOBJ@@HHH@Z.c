/*
 * XREFs of ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C00417F0 (NtGdiDeleteObjectApp.c)
 *     bDeleteDCInternal @ 0x1C005C1D0 (bDeleteDCInternal.c)
 * Callees:
 *     RFONTOBJ_vConstructPRFONTWrap_0 @ 0x1C0001090 (RFONTOBJ_vConstructPRFONTWrap_0.c)
 *     IsRFONTOBJ_vConstructPRFONTSupported_0 @ 0x1C0001098 (IsRFONTOBJ_vConstructPRFONTSupported_0.c)
 *     RFONTOBJ_dtHelperWrap_0 @ 0x1C00010A0 (RFONTOBJ_dtHelperWrap_0.c)
 *     IsRFONTOBJ_dtHelperSupported_0 @ 0x1C00010A8 (IsRFONTOBJ_dtHelperSupported_0.c)
 *     IsXDCOBJ_vCleanupColorTransformSupported_0 @ 0x1C00010B0 (IsXDCOBJ_vCleanupColorTransformSupported_0.c)
 *     XDCOBJ_vCleanupColorTransformWrap_0 @ 0x1C00010B8 (XDCOBJ_vCleanupColorTransformWrap_0.c)
 *     IsPFTOBJ_bUnloadWorkhorseSupported_0 @ 0x1C00010C0 (IsPFTOBJ_bUnloadWorkhorseSupported_0.c)
 *     PFTOBJ_bUnloadWorkhorseWrap_0 @ 0x1C00010C8 (PFTOBJ_bUnloadWorkhorseWrap_0.c)
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C18 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C20 (Win32FreeToPagedLookasideListImpl_0.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0017C10 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0034150 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0035640 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     FreeObject @ 0x1C0035700 (FreeObject.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003B190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C003BD20 (DEC_SHARE_REF_CNT.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     HmgFreeDcAttr @ 0x1C005A7F8 (HmgFreeDcAttr.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C005AC00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00AF5E0 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00AF604 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00AF640 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00AF894 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B2C90 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00B2D50 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00B3DB8 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     Template_pqz @ 0x1C00BEC08 (Template_pqz.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

__int64 __fastcall bDeleteDCInternalWorker(struct XDCOBJ *a1, int a2, int a3, int a4)
{
  unsigned int v7; // r14d
  int *v8; // rdi
  int *v9; // r8
  __int64 v10; // r13
  __int128 *v11; // rax
  __int128 *v12; // rcx
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 CurrentProcessWin32Process; // r15
  __int64 v23; // r8
  __int64 *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rsi
  int v30; // eax
  __int64 v31; // rdi
  struct REGION *v32; // rbx
  _DWORD *v33; // rax
  struct REGION *v34; // rbx
  struct REGION *v35; // rcx
  REGION *v36; // rcx
  REGION *v37; // rcx
  int *v38; // rsi
  volatile signed __int32 *v39; // rcx
  __int64 v40; // rcx
  volatile signed __int32 *v41; // rcx
  int *v42; // rsi
  volatile signed __int32 *v43; // rcx
  __int64 v44; // rcx
  volatile signed __int32 *v45; // rcx
  int *v46; // rsi
  volatile signed __int32 *v47; // rcx
  __int64 v48; // rcx
  volatile signed __int32 *v49; // rcx
  int *v50; // rsi
  volatile signed __int32 *v51; // rcx
  __int64 v52; // rcx
  volatile signed __int32 *v53; // rcx
  int *v54; // rbx
  struct HPATH__ *v55; // rdx
  int v56; // edx
  __int64 v57; // r8
  __int64 v58; // rsi
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // r13
  struct PDEV *v62; // rcx
  __int64 v63; // r15
  struct _ERESOURCE *v64; // rbx
  __int64 v65; // rcx
  __int64 v66; // rsi
  bool v67; // zf
  signed __int32 v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rcx
  int v71; // edx
  int v72; // r8d
  __int64 v73; // rcx
  int v74; // ebx
  signed int v75; // r13d
  struct _ERESOURCE *v76; // r15
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 ProcessWin32Process; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  struct _ERESOURCE *v87; // rbx
  int v88; // ebx
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v92; // [rsp+20h] [rbp-E0h]
  __int64 v93; // [rsp+28h] [rbp-D8h]
  __int64 v94; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v95; // [rsp+38h] [rbp-C8h]
  __int64 v96; // [rsp+40h] [rbp-C0h] BYREF
  PEPROCESS Process; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v98; // [rsp+50h] [rbp-B0h]
  __int64 v99; // [rsp+58h] [rbp-A8h]
  unsigned int v100; // [rsp+6Ch] [rbp-94h]
  int v101; // [rsp+70h] [rbp-90h]
  char v102[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v103; // [rsp+80h] [rbp-80h]
  __int64 v104; // [rsp+88h] [rbp-78h] BYREF
  BOOL v105; // [rsp+90h] [rbp-70h]
  int v106; // [rsp+94h] [rbp-6Ch]
  char v107[8]; // [rsp+98h] [rbp-68h] BYREF
  char v108[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v109; // [rsp+A8h] [rbp-58h]

  v7 = 0;
  XDCOBJ::bCleanDC(a1, a4);
  if ( !a2 && (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 8) != 0 )
    return v7;
  if ( a3 )
    goto LABEL_26;
  v8 = *(int **)a1;
  v9 = *(int **)(*(_QWORD *)a1 + 80LL);
  v10 = *(_QWORD *)a1 + 536LL;
  if ( v9 == (int *)v10 )
    goto LABEL_26;
  v11 = (__int128 *)(*(_QWORD *)a1 + 536LL);
  v12 = *(__int128 **)(*(_QWORD *)a1 + 80LL);
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
  if ( v9 != v8 + 240 )
  {
    HmgFreeDcAttr(v9);
    goto LABEL_25;
  }
  v15 = 0LL;
  v16 = *((_QWORD *)v8 + 119);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v15 = *ThreadWin32Thread;
  if ( !v16 || !v15 )
    goto LABEL_25;
  if ( *(_QWORD *)(v15 + 24) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19, v18, v20, v21, v92, v93);
    if ( CurrentProcessWin32Process )
    {
      GreAcquireHmgrSemaphore();
      v24 = (__int64 *)(CurrentProcessWin32Process + 192);
      if ( (__int64 *)*v24 == v24 || (v25 = *v24, *(_DWORD *)(*v24 + 16) == 9) )
      {
        v25 = PALLOCMEM2(0x60uLL);
        if ( !v25 )
        {
          GreReleaseHmgrSemaphore();
          goto LABEL_25;
        }
        v26 = *v24;
        *(_QWORD *)v25 = *v24;
        *(_QWORD *)(v25 + 8) = v24;
        if ( *(__int64 **)(v26 + 8) != v24 )
          __fastfail(3u);
        *(_QWORD *)(v26 + 8) = v25;
        *v24 = v25;
        *(_DWORD *)(v25 + 16) = 0;
      }
      *(_QWORD *)(v25 + 8LL * (unsigned int)(*(_DWORD *)(v25 + 16))++ + 24) = v16;
      *(_QWORD *)(CurrentProcessWin32Process + 40) = v16;
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHmgr", (__int64)ghsemHmgr, v23);
      if ( ghsemHmgr )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
        PsLeavePriorityRegion(v27);
      }
    }
  }
  else
  {
    *(_QWORD *)(v15 + 24) = v16;
  }
LABEL_25:
  v28 = (unsigned __int16)*v8;
  *((_QWORD *)v8 + 10) = v10;
  *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v28 + 16) = 0LL;
LABEL_26:
  DEC_SHARE_REF_CNT_LAZY0(*(struct BRUSH **)(*(_QWORD *)a1 + 144LL));
  DEC_SHARE_REF_CNT_LAZY0(*(struct BRUSH **)(*(_QWORD *)a1 + 152LL));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(*(_QWORD *)a1 + 160LL));
  DEC_SHARE_REF_CNT(*(_QWORD *)(*(_QWORD *)a1 + 104LL));
  v29 = *(_QWORD *)a1;
  v30 = **(_DWORD **)a1;
  v31 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  *(_DWORD *)(v29 + 36) |= 0x10u;
  *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v30 + 15) |= 4u;
  AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)v102, (struct DC *)v29);
  v32 = *(struct REGION **)(v29 + 1536);
  if ( v32 && v32 != prgnDefault )
  {
    if ( (*((_WORD *)v32 + 7) & 0x8000) != 0 )
    {
      if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
        Win32FreeToPagedLookasideListImpl_0();
    }
    else
    {
      Win32FreePool();
    }
  }
  *(_QWORD *)(v29 + 1536) = prgnDefault;
  AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v102);
  v33 = *(_DWORD **)a1;
  v33[9] |= 0x10u;
  *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*v33 + 15) |= 4u;
  v34 = *(struct REGION **)(*(_QWORD *)a1 + 1544LL);
  if ( v34 )
  {
    if ( v34 != prgnDefault )
    {
      if ( (*((_WORD *)v34 + 7) & 0x8000) != 0 )
      {
        if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
          Win32FreeToPagedLookasideListImpl_0();
      }
      else
      {
        Win32FreePool();
      }
    }
    *(_QWORD *)(*(_QWORD *)a1 + 1544LL) = 0LL;
  }
  v35 = *(struct REGION **)(*(_QWORD *)a1 + 1552LL);
  if ( v35 )
  {
    if ( v35 != prgnDefault )
      FreeObject((__int64)v35);
    *(_QWORD *)(*(_QWORD *)a1 + 1552LL) = 0LL;
  }
  v36 = *(REGION **)(*(_QWORD *)a1 + 1560LL);
  if ( v36 )
  {
    REGION::vDeleteREGION(v36);
    *(_QWORD *)(*(_QWORD *)a1 + 1560LL) = 0LL;
  }
  v37 = *(REGION **)(*(_QWORD *)a1 + 1568LL);
  if ( v37 )
  {
    REGION::vDeleteREGION(v37);
    *(_QWORD *)(*(_QWORD *)a1 + 1568LL) = 0LL;
  }
  v96 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v94 = 0LL;
  if ( (int)IsRFONTOBJ_vConstructPRFONTSupported_0() >= 0 )
    RFONTOBJ_vConstructPRFONTWrap_0();
  v38 = *(int **)a1;
  v39 = *(volatile signed __int32 **)(*(_QWORD *)a1 + 1616LL);
  if ( v39 )
  {
    if ( _InterlockedExchangeAdd(v39, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v39, 1);
    *((_QWORD *)v38 + 202) = 0LL;
  }
  v40 = *((_QWORD *)v38 + 199);
  if ( v40 )
  {
    v41 = (volatile signed __int32 *)(v40 - 16);
    if ( _InterlockedExchangeAdd(v41, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v41, 0);
    *((_QWORD *)v38 + 199) = 0LL;
  }
  v42 = *(int **)a1;
  v43 = *(volatile signed __int32 **)(*(_QWORD *)a1 + 1760LL);
  if ( v43 )
  {
    if ( _InterlockedExchangeAdd(v43, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v43, 1);
    *((_QWORD *)v42 + 220) = 0LL;
  }
  v44 = *((_QWORD *)v42 + 217);
  if ( v44 )
  {
    v45 = (volatile signed __int32 *)(v44 - 16);
    if ( _InterlockedExchangeAdd(v45, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v45, 0);
    *((_QWORD *)v42 + 217) = 0LL;
  }
  v46 = *(int **)a1;
  v47 = *(volatile signed __int32 **)(*(_QWORD *)a1 + 1904LL);
  if ( v47 )
  {
    if ( _InterlockedExchangeAdd(v47, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v47, 1);
    *((_QWORD *)v46 + 238) = 0LL;
  }
  v48 = *((_QWORD *)v46 + 235);
  if ( v48 )
  {
    v49 = (volatile signed __int32 *)(v48 - 16);
    if ( _InterlockedExchangeAdd(v49, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v49, 0);
    *((_QWORD *)v46 + 235) = 0LL;
  }
  v50 = *(int **)a1;
  v51 = *(volatile signed __int32 **)(*(_QWORD *)a1 + 2048LL);
  if ( v51 )
  {
    if ( _InterlockedExchangeAdd(v51, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v51, 1);
    *((_QWORD *)v50 + 256) = 0LL;
  }
  v52 = *((_QWORD *)v50 + 253);
  if ( v52 )
  {
    v53 = (volatile signed __int32 *)(v52 - 16);
    if ( _InterlockedExchangeAdd(v53, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v53, 0);
    *((_QWORD *)v50 + 253) = 0LL;
  }
  v54 = *(int **)a1;
  v55 = *(struct HPATH__ **)(*(_QWORD *)a1 + 168LL);
  if ( v55 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v108, v55);
    if ( v109 && (*(_DWORD *)(v109 + 88) & 1) == 0 )
      DEC_SHARE_REF_CNT(v109);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v108);
    *((_QWORD *)v54 + 21) = 0LL;
  }
  if ( (int)IsXDCOBJ_vCleanupColorTransformSupported_0() >= 0 )
    XDCOBJ_vCleanupColorTransformWrap_0();
  v58 = *(_QWORD *)(*(_QWORD *)a1 + 2488LL);
  while ( v58 )
  {
    v59 = v58;
    v58 = *(_QWORD *)(v58 + 8);
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 14);
    v103 = *(_QWORD *)(*(_QWORD *)v59 + 128LL);
    --*(_DWORD *)(*(_QWORD *)v59 + 64LL);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported_0() >= 0 )
      PFTOBJ_bUnloadWorkhorseWrap_0();
    Win32FreePool();
  }
  v60 = *(_QWORD *)(*(_QWORD *)a1 + 312LL);
  if ( v60 && v60 != *(_QWORD *)a1 + 276LL )
  {
    Win32FreePool();
    *(_QWORD *)(*(_QWORD *)a1 + 312LL) = 0LL;
  }
  v61 = 0LL;
  v62 = (struct PDEV *)**(unsigned int **)a1;
  if ( (unsigned __int16)v62 >= (unsigned int)gcMaxHmgr )
    goto LABEL_144;
  v63 = (unsigned __int16)v62;
  v64 = ghsemHmgr;
  v98 = (unsigned __int16)v62;
  v65 = 24LL * (unsigned __int16)v62;
  v66 = v65 + *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v95 = v65;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(v65);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v64);
    LODWORD(v64) = (_DWORD)ghsemHmgr;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz(v65, v56, v57, (_DWORD)v64, 16, (__int64)L"ghsemHmgr");
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v107);
  _m_prefetchw((const void *)(v66 + 8));
  v67 = (*(_BYTE *)(v66 + 15) & 0x20) == 0;
  v68 = *(_DWORD *)(v66 + 8);
  v100 = v68;
  if ( !v67 )
  {
LABEL_109:
    KeLeaveCriticalRegion();
    goto LABEL_110;
  }
  while ( (*(_BYTE *)(v66 + 15) & 0x40) == 0 )
  {
    if ( (v68 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_108:
      _m_prefetchw((const void *)(v66 + 8));
      v67 = (*(_BYTE *)(v66 + 15) & 0x20) == 0;
      v68 = *(_DWORD *)(v66 + 8);
      v100 = v68;
      if ( !v67 )
        goto LABEL_109;
    }
    else
    {
      v101 = v68 | 1;
      if ( v68 != _InterlockedCompareExchange((volatile signed __int32 *)(v66 + 8), v68 | 1, v68)
        || (*(_BYTE *)(v66 + 15) & 0x40) != 0 )
      {
        goto LABEL_108;
      }
      *((_QWORD *)gpentPushLock + v63) = 0LL;
      *(_BYTE *)(v66 + 15) |= 0x40u;
      _m_prefetchw((const void *)(v66 + 8));
      v100 = *(_DWORD *)(v66 + 8) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)(v66 + 8), v100);
      v68 = v100;
    }
  }
  ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * v63, 0LL);
  v73 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + v95;
  v99 = *(_QWORD *)v66;
  v74 = *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + v95 + 8);
  v95 += *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v75 = v74 & 0xFFFFFFFE;
  if ( (v74 & 0xFFFFFFFE) != 0 && v75 != -2147483630 )
  {
    v76 = ghsemHmgr;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion(v73);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v76);
      LODWORD(v76) = (_DWORD)ghsemHmgr;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pqz(v73, v71, v72, (_DWORD)v76, 16, (__int64)L"ghsemHmgr");
    if ( v75 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v81 = PsGetCurrentProcessWin32Process(v78, v77, v79, v80, v92, v93);
      if ( v81 )
        --*(_DWORD *)(v81 + 60);
    }
    else if ( PsLookupProcessByProcessId((HANDLE)v75, &Process) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Process);
      if ( ProcessWin32Process )
        --*(_DWORD *)(ProcessWin32Process + 60);
      ObfDereferenceObject(Process);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v82, &LockRelease, v83, ghsemHmgr);
    if ( ghsemHmgr )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
      PsLeavePriorityRegion(v85);
    }
    v73 = v95;
    v63 = v98;
  }
  --gcCurHmgr;
  *(_QWORD *)v73 = ghFreeHmgr;
  *(_WORD *)(v66 + 12) += 256;
  *(_BYTE *)(v66 + 14) = 0;
  *(_QWORD *)(v66 + 16) = 0LL;
  *(_DWORD *)(v73 + 8) = v74 & 1;
  ghFreeHmgr = v63;
  if ( (*(_BYTE *)(v66 + 15) & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v63, 0LL);
  }
  else
  {
    _m_prefetchw((const void *)(v66 + 8));
    v100 = *(_DWORD *)(v66 + 8) & 0xFFFFFFFE;
    _InterlockedExchange((volatile __int32 *)(v66 + 8), v100);
  }
  KeLeaveCriticalRegion();
  v61 = v99;
LABEL_110:
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v69, &LockRelease, v57, ghsemHmgr);
  v62 = (struct PDEV *)ghsemHmgr;
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion(v70);
  }
  if ( v61 )
  {
    if ( *(__int16 *)(v61 + 14) >= 0 )
    {
      Win32FreePool();
    }
    else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
    {
      Win32FreeToPagedLookasideListImpl_0();
    }
  }
LABEL_144:
  v86 = v94;
  *(_QWORD *)a1 = 0LL;
  if ( v86 )
  {
    if ( (*(_DWORD *)(v86 + 720) & 0x81) != 0 && (int)IsRFONTOBJ_dtHelperSupported_0() >= 0 )
      RFONTOBJ_dtHelperWrap_0();
    RFONTOBJ::vReleaseCache((RFONTOBJ *)&v94);
  }
  v87 = (struct _ERESOURCE *)ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
  {
    PsEnterPriorityRegion(v62);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v87);
    LODWORD(v87) = (_DWORD)ghsemDriverMgmt;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((_DWORD)v62, v56, v57, (_DWORD)v87, 12, (__int64)L"ghsemDriverMgmt");
  v67 = (*(_DWORD *)(v31 + 32))-- == 1;
  v88 = *(_DWORD *)(v31 + 32);
  if ( v67 )
  {
    v62 = gppdevList;
    if ( gppdevList == (struct PDEV *)v31 )
    {
      gppdevList = *(struct PDEV **)(v31 + 24);
    }
    else if ( gppdevList )
    {
      while ( 1 )
      {
        v89 = *((_QWORD *)v62 + 3);
        if ( v89 == v31 )
          break;
        v62 = (struct PDEV *)*((_QWORD *)v62 + 3);
        if ( !v89 )
          goto LABEL_162;
      }
      *((_QWORD *)v62 + 3) = *(_QWORD *)(v31 + 24);
    }
  }
LABEL_162:
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v62, &LockRelease, v57, ghsemDriverMgmt);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v90);
  }
  if ( !v88 )
  {
    v104 = v31;
    v105 = a3 != 0;
    v106 = 1;
    vUnreferencePdevWorker((struct tagUNREFDATA *)&v104);
  }
  if ( HmgLockResultBase<DRVOBJ>::operator bool(&v96) )
  {
    LOBYTE(v7) = a3 != 0;
    PDEVOBJ::vUnreferencePdev(&v96, v7);
  }
  return 1;
}
