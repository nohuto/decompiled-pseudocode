/*
 * XREFs of GreRestoreDC @ 0x1C0032D00
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0030F10 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     RFONTOBJ_vConstructPRFONTWrap_0 @ 0x1C0001090 (RFONTOBJ_vConstructPRFONTWrap_0.c)
 *     IsRFONTOBJ_vConstructPRFONTSupported_0 @ 0x1C0001098 (IsRFONTOBJ_vConstructPRFONTSupported_0.c)
 *     RFONTOBJ_dtHelperWrap_0 @ 0x1C00010A0 (RFONTOBJ_dtHelperWrap_0.c)
 *     IsRFONTOBJ_dtHelperSupported_0 @ 0x1C00010A8 (IsRFONTOBJ_dtHelperSupported_0.c)
 *     IsXDCOBJ_vCleanupColorTransformSupported_0 @ 0x1C00010B0 (IsXDCOBJ_vCleanupColorTransformSupported_0.c)
 *     XDCOBJ_vCleanupColorTransformWrap_0 @ 0x1C00010B8 (XDCOBJ_vCleanupColorTransformWrap_0.c)
 *     IsPFTOBJ_bUnloadWorkhorseSupported_0 @ 0x1C00010C0 (IsPFTOBJ_bUnloadWorkhorseSupported_0.c)
 *     PFTOBJ_bUnloadWorkhorseWrap_0 @ 0x1C00010C8 (PFTOBJ_bUnloadWorkhorseWrap_0.c)
 *     IsvRestorePathSupported_0 @ 0x1C0001908 (IsvRestorePathSupported_0.c)
 *     vRestorePathWrap_0 @ 0x1C0001910 (vRestorePathWrap_0.c)
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C48 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C50 (Win32FreeToPagedLookasideListImpl_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029EE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C002B590 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     hbmSelectBitmap @ 0x1C002DCA0 (hbmSelectBitmap.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0031910 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0031C80 (DEC_SHARE_REF_CNT.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     GreDCSelectPen @ 0x1C0048F10 (GreDCSelectPen.c)
 *     GreSelectPalette @ 0x1C0049120 (GreSelectPalette.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00492E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005C290 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C006DCD0 (INC_SHARE_REF_CNT.c)
 *     GreDCSelectBrush @ 0x1C006E4B0 (GreDCSelectBrush.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00A8A80 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00B3280 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00B32E8 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00B3320 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00B3454 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B58C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00B5970 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

__int64 __fastcall GreRestoreDC(__int64 a1, int a2)
{
  __int16 v2; // r12d^2
  DC *v3; // rdi
  int v4; // r15d
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rsi
  char *v8; // rbx
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v10; // r14
  signed __int32 v11; // eax
  unsigned int v12; // edx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v14; // ax
  int v15; // ebx
  unsigned int v16; // r12d
  __int64 v17; // rdx
  int v18; // ebx
  __int64 v19; // rsi
  const wchar_t *v20; // rcx
  PERESOURCE v21; // r9
  struct _ERESOURCE *v22; // rbx
  struct _ERESOURCE *v23; // rbx
  __int64 v24; // r15
  __int64 v25; // r12
  _BYTE *SystemArgument2; // rbx
  bool v27; // zf
  signed __int32 v28; // eax
  __int16 v29; // cx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdx
  SURFACE *v33; // rcx
  HDC v34; // rbx
  int v35; // eax
  struct _ERESOURCE *v36; // rdi
  HPALETTE v37; // rdx
  _DWORD *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r15
  DC *v41; // rcx
  __int128 *v42; // rcx
  __int128 *v43; // rdx
  __int64 v44; // rax
  __int128 v45; // xmm0
  DC *v46; // r14
  struct HPATH__ *v47; // rbx
  struct HPATH__ *v48; // rdx
  __int128 *v49; // rcx
  __int128 *v50; // rax
  __int64 v51; // rdx
  __int128 v52; // xmm0
  __int64 v53; // rcx
  __int64 v54; // rbx
  volatile signed __int32 *v55; // rcx
  __int64 v56; // rcx
  volatile signed __int32 *v57; // rcx
  __int64 v58; // rbx
  volatile signed __int32 *v59; // rcx
  __int64 v60; // rcx
  volatile signed __int32 *v61; // rcx
  __int64 v62; // rbx
  volatile signed __int32 *v63; // rcx
  __int64 v64; // rcx
  volatile signed __int32 *v65; // rcx
  __int64 v66; // rbx
  volatile signed __int32 *v67; // rcx
  __int64 v68; // rcx
  volatile signed __int32 *v69; // rcx
  __int64 v70; // rbx
  struct HPATH__ *v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // r14
  __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // r12
  unsigned __int64 v78; // rcx
  struct _ERESOURCE *v79; // rbx
  __int64 v80; // r13
  __int64 v81; // r15
  char *v82; // r14
  signed __int32 v83; // eax
  void *v84; // rax
  void *v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  char *v90; // r12
  int v91; // ebx
  signed int v92; // r15d
  __int64 v93; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v98; // rcx
  DC *v99; // r8
  __int64 v100; // r9
  int v101; // ecx
  __m128i v102; // xmm0
  int v103; // ecx
  int v104; // eax
  __m128i v105; // xmm0
  DC *v106; // r14
  int v107; // eax
  __int64 v108; // rcx
  __int64 v109; // rdi
  _DWORD *v110; // rbx
  struct _ERESOURCE *v111; // rdx
  __int64 v112; // r8
  __int64 v113; // rcx
  struct REGION *v114; // rax
  __int16 *v115; // rbx
  __int64 v116; // rax
  __int64 v117; // rax
  __m128i v118; // xmm0
  int v119; // ecx
  __int64 v120; // rdx
  int v121; // eax
  DC *v122; // rdx
  int v123; // eax
  int v124; // ecx
  int v125; // ecx
  __int64 v126; // rcx
  PERESOURCE v127; // rcx
  __int64 v128; // rcx
  PERESOURCE v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rcx
  DC *v133; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v134; // [rsp+40h] [rbp-C8h]
  _QWORD v135[2]; // [rsp+48h] [rbp-C0h] BYREF
  __m128i v136; // [rsp+58h] [rbp-B0h]
  struct _RECTL v137; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v138; // [rsp+78h] [rbp-90h] BYREF
  int v139; // [rsp+80h] [rbp-88h]
  int v140; // [rsp+84h] [rbp-84h]
  __int16 *v141; // [rsp+88h] [rbp-80h] BYREF
  int v142; // [rsp+90h] [rbp-78h]
  PEPROCESS Process; // [rsp+98h] [rbp-70h] BYREF
  __int64 v144; // [rsp+A0h] [rbp-68h]
  __int64 v145; // [rsp+A8h] [rbp-60h]
  __int64 v146; // [rsp+B0h] [rbp-58h] BYREF
  __int16 *v147; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD *v148; // [rsp+C0h] [rbp-48h] BYREF
  int v149[5]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v150; // [rsp+DCh] [rbp-2Ch]
  int v151; // [rsp+E0h] [rbp-28h]
  unsigned int v152; // [rsp+F4h] [rbp-14h]
  int v153; // [rsp+F8h] [rbp-10h]
  unsigned int v154; // [rsp+10Ch] [rbp+4h]
  int v155; // [rsp+110h] [rbp+8h]
  char v156[8]; // [rsp+118h] [rbp+10h] BYREF
  char v157[8]; // [rsp+120h] [rbp+18h] BYREF
  char v158[8]; // [rsp+128h] [rbp+20h] BYREF
  _DWORD *v159; // [rsp+130h] [rbp+28h]
  char v160[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v161; // [rsp+1B0h] [rbp+A8h]
  char v162[8]; // [rsp+228h] [rbp+120h] BYREF
  _DWORD *v163; // [rsp+230h] [rbp+128h]
  int v165; // [rsp+300h] [rbp+1F8h]

  v165 = a2;
  v2 = WORD1(a1);
  v3 = 0LL;
  v4 = a2;
  v5 = (unsigned __int16)a1;
  v6 = 0;
  v133 = 0LL;
  v134 = 0LL;
  if ( (unsigned __int16)a1 >= (unsigned int)gcMaxHmgr )
    goto LABEL_28;
  v7 = (unsigned __int16)a1;
  v8 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v149);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    v10 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  else
    v10 = 0LL;
LABEL_6:
  _m_prefetchw(v8 + 8);
  v11 = *((_DWORD *)v8 + 2);
  v12 = v11 & 0xFFFFFFFE;
  v154 = v11;
  if ( ((v11 & 0xFFFFFFFE) == (v149[0] & 0xFFFFFFFC) || !v12 || v10 && v12 == *(_DWORD *)(v10 + 8))
    && (v8[15] & 0x20) == 0 )
  {
    while ( (v8[15] & 0x40) == 0 )
    {
      if ( (v11 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
        goto LABEL_6;
      }
      v155 = v11 | 1;
      if ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)v8 + 2, v11 | 1, v11) || (v8[15] & 0x40) != 0 )
        goto LABEL_6;
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v7) = 0LL;
      v8[15] |= 0x40u;
      _m_prefetchw(v8 + 8);
      v154 = *((_DWORD *)v8 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v8 + 2, v154);
      v11 = v154;
    }
    ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v7, 0LL);
    if ( v8[14] == 1 && *((_WORD *)v8 + 6) == v2 )
    {
      CurrentThread = KeGetCurrentThread();
      v3 = *(DC **)v8;
      v14 = *(_WORD *)(*(_QWORD *)v8 + 12LL);
      if ( !v14 || *((struct _KTHREAD **)v3 + 2) == CurrentThread )
      {
        *((_QWORD *)v3 + 2) = CurrentThread;
        *((_WORD *)v3 + 6) = v14 + 1;
      }
      else
      {
        v3 = 0LL;
      }
    }
    if ( (v8[15] & 0x40) != 0 )
    {
      ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v7);
    }
    else
    {
      _m_prefetchw(v8 + 8);
      v154 = *((_DWORD *)v8 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v8 + 2, v154);
    }
    KeLeaveCriticalRegion();
    v6 = HIDWORD(v134);
LABEL_28:
    v133 = v3;
    if ( v3 )
    {
      if ( v6 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v3 + 6) + 56LL) & 0x8000) == 0 )
        {
LABEL_33:
          _InterlockedDecrement((volatile signed __int32 *)v3 + 3);
          v133 = 0LL;
          EngSetLastError(6u);
          v16 = 0;
          goto LABEL_315;
        }
        v15 = *((_DWORD *)v3 + 626);
        if ( v15 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          v3 = v133;
          goto LABEL_33;
        }
      }
      if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v133) )
      {
        v3 = v133;
      }
      else
      {
        v3 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v133 + 3);
        v133 = 0LL;
      }
    }
    goto LABEL_37;
  }
  KeLeaveCriticalRegion();
  v133 = 0LL;
LABEL_37:
  if ( !v3 )
  {
    EngSetLastError(6u);
    v16 = 0;
    goto LABEL_315;
  }
  v17 = *((_QWORD *)v3 + 10);
  v18 = *(_DWORD *)(v17 + 8);
  if ( (v18 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v3, *(_QWORD *)(v17 + 16));
    v3 = v133;
  }
  if ( (v18 & 0x2000) != 0 )
  {
    GreDCSelectPen(v3);
    v3 = v133;
  }
  if ( v4 < 0 )
  {
    v4 += *((_DWORD *)v3 + 29);
    v165 = v4;
  }
  if ( v4 < 1 || v4 >= *((_DWORD *)v3 + 29) )
  {
    EngSetLastError(0x57u);
    v16 = 0;
    goto LABEL_315;
  }
  v19 = *((_QWORD *)v3 + 6);
  v20 = L"ghsemDynamicModeChange";
  v144 = v19;
  if ( (*(_DWORD *)(v19 + 56) & 1) != 0 )
  {
    v21 = ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
    {
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
      v21 = ghsemDynamicModeChange;
      v20 = L"ghsemDynamicModeChange";
      v3 = v133;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    {
      Template_pz(L"ghsemDynamicModeChange", &LockAcquireShared, v5, v21, L"ghsemDynamicModeChange");
      v3 = v133;
    }
    v22 = ghsemGreLock;
    if ( ghsemGreLock )
    {
      PsEnterPriorityRegion(v20, v17);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v22);
      v3 = v133;
      LODWORD(v22) = (_DWORD)ghsemGreLock;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    {
      Template_pqz((_DWORD)v20, v17, v5, (_DWORD)v22, 2, (__int64)L"ghsemGreLock");
      v3 = v133;
    }
    v23 = ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      PsEnterPriorityRegion(v20, v17);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v23);
      v3 = v133;
      LODWORD(v23) = (_DWORD)ghsemDCVisRgn;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    {
      Template_pqz((_DWORD)v20, v17, v5, (_DWORD)v23, 3, (__int64)L"ghsemDCVisRgn");
      v3 = v133;
    }
  }
  v140 = *((_DWORD *)v3 + 9) & 0x800;
  if ( v140 )
  {
    DC::bMakeInfoDC(v3, 0);
    v3 = v133;
  }
  v24 = 0LL;
  v139 = *(_DWORD *)(*((_QWORD *)v3 + 10) + 308LL);
  do
  {
    v135[1] = 0LL;
    v135[0] = 0LL;
    v25 = *((_QWORD *)v3 + 16);
    if ( (unsigned __int16)v25 >= (unsigned int)gcMaxHmgr )
      goto LABEL_87;
    SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v156);
    _m_prefetchw(&SystemArgument2[24 * (unsigned __int16)v25 + 8]);
    v27 = (SystemArgument2[24 * (unsigned __int16)v25 + 15] & 0x20) == 0;
    v28 = *(_DWORD *)&SystemArgument2[24 * (unsigned __int16)v25 + 8];
    v152 = v28;
    if ( !v27 )
    {
LABEL_75:
      KeLeaveCriticalRegion();
      v135[0] = 0LL;
LABEL_76:
      EngSetLastError(6u);
      v16 = 0;
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v135);
      v3 = v133;
      goto LABEL_244;
    }
    while ( (SystemArgument2[24 * (unsigned __int16)v25 + 15] & 0x40) == 0 )
    {
      if ( (v28 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_74:
        _m_prefetchw(&SystemArgument2[24 * (unsigned __int16)v25 + 8]);
        v27 = (SystemArgument2[24 * (unsigned __int16)v25 + 15] & 0x20) == 0;
        v28 = *(_DWORD *)&SystemArgument2[24 * (unsigned __int16)v25 + 8];
        v152 = v28;
        if ( !v27 )
          goto LABEL_75;
      }
      else
      {
        v153 = v28 | 1;
        if ( v28 != _InterlockedCompareExchange(
                      (volatile signed __int32 *)&SystemArgument2[24 * (unsigned __int16)v25 + 8],
                      v28 | 1,
                      v28)
          || (SystemArgument2[24 * (unsigned __int16)v25 + 15] & 0x40) != 0 )
        {
          goto LABEL_74;
        }
        *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + (unsigned __int16)v25) = 0LL;
        SystemArgument2[24 * (unsigned __int16)v25 + 15] |= 0x40u;
        _m_prefetchw(&SystemArgument2[24 * (unsigned __int16)v25 + 8]);
        v152 = *(_DWORD *)&SystemArgument2[24 * (unsigned __int16)v25 + 8] & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)&SystemArgument2[24 * (unsigned __int16)v25 + 8], v152);
        v28 = v152;
      }
    }
    ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v25, 0LL);
    if ( SystemArgument2[24 * (unsigned __int16)v25 + 14] == 1
      && *(_WORD *)&SystemArgument2[24 * (unsigned __int16)v25 + 12] == WORD1(v25) )
    {
      v24 = *(_QWORD *)&SystemArgument2[24 * (unsigned __int16)v25];
      v29 = *(_WORD *)(v24 + 12);
      if ( !v29 || *(struct _KTHREAD **)(v24 + 16) == KeGetCurrentThread() )
      {
        *(_WORD *)(v24 + 12) = v29 + 1;
        *(_QWORD *)(v24 + 16) = KeGetCurrentThread();
      }
      else
      {
        v24 = 0LL;
      }
    }
    if ( (SystemArgument2[24 * (unsigned __int16)v25 + 15] & 0x40) != 0 )
    {
      ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v25);
    }
    else
    {
      _m_prefetchw(&SystemArgument2[24 * (unsigned __int16)v25 + 8]);
      v152 = *(_DWORD *)&SystemArgument2[24 * (unsigned __int16)v25 + 8] & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)&SystemArgument2[24 * (unsigned __int16)v25 + 8], v152);
    }
    KeLeaveCriticalRegion();
    v3 = v133;
LABEL_87:
    v135[0] = v24;
    if ( !v24 )
      goto LABEL_76;
    DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)v3 + 18));
    DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)v133 + 19));
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)v133 + 20));
    DEC_SHARE_REF_CNT(*((_DWORD **)v133 + 13));
    v30 = *((_QWORD *)v133 + 29);
    if ( v30 )
    {
      v27 = (*(_DWORD *)(v30 + 32))-- == 1;
      v147 = (__int16 *)v30;
      if ( v27 )
        RGNOBJ::vDeleteRGNOBJ(&v147);
    }
    v31 = *((_QWORD *)v133 + 28);
    if ( v31 )
    {
      v27 = (*(_DWORD *)(v31 + 32))-- == 1;
      if ( v27 && (struct REGION *)v31 != prgnDefault )
      {
        if ( *(__int16 *)(v31 + 14) >= 0 )
        {
          Win32FreePool();
        }
        else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
        {
          Win32FreeToPagedLookasideListImpl_0();
        }
      }
    }
    if ( (int)IsvRestorePathSupported_0() >= 0 )
      vRestorePathWrap_0();
    v33 = (SURFACE *)*((_QWORD *)v133 + 64);
    if ( v33 )
    {
      if ( *((_DWORD *)v133 + 8) == 1 )
      {
        v34 = (HDC)a1;
        hbmSelectBitmap(a1, qword_1C0103E98, 1, 0);
        goto LABEL_108;
      }
      v35 = *((_DWORD *)v33 + 28);
      if ( (v35 & 0x800) != 0 )
      {
        DEC_SHARE_REF_CNT(v33);
      }
      else if ( v35 >= 0 )
      {
        SURFACE::vDec_cRef(v33);
      }
    }
    v34 = (HDC)a1;
LABEL_108:
    v36 = ghsemPalette;
    if ( ghsemPalette )
    {
      PsEnterPriorityRegion(v33, v32);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v36);
    }
    v37 = *(HPALETTE *)(v135[0] + 88LL);
    if ( *((HPALETTE *)v133 + 11) != v37 )
      GreSelectPalette(v34, v37, 1);
    if ( *((_QWORD *)v133 + 12) != *(_QWORD *)(v135[0] + 96LL) )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)&v148, *((HPALETTE *)v133 + 11));
      v38 = v148;
      *(_QWORD *)(v135[0] + 96LL) = v148;
      if ( v38 )
        DEC_SHARE_REF_CNT(v38);
    }
    v39 = *(_QWORD *)(v135[0] + 96LL);
    if ( (struct _SINGLE_LIST_ENTRY *)v39 != WPP_MAIN_CB.Dpc.DpcListEntry.Next )
      _InterlockedDecrement((volatile signed __int32 *)(v39 + 56));
    v40 = v135[0];
    v41 = (DC *)*((_QWORD *)v133 + 39);
    if ( v41 && v41 != (DC *)((char *)v133 + 276) )
      Win32FreePool();
    v42 = *(__int128 **)(v40 + 80);
    v43 = (__int128 *)*((_QWORD *)v133 + 10);
    v44 = 3LL;
    do
    {
      v43 += 8;
      v45 = *v42;
      v42 += 8;
      *(v43 - 8) = v45;
      *(v43 - 7) = *(v42 - 7);
      *(v43 - 6) = *(v42 - 6);
      *(v43 - 5) = *(v42 - 5);
      *(v43 - 4) = *(v42 - 4);
      *(v43 - 3) = *(v42 - 3);
      *(v43 - 2) = *(v42 - 2);
      *(v43 - 1) = *(v42 - 1);
      --v44;
    }
    while ( v44 );
    *v43 = *v42;
    v43[1] = v42[1];
    v46 = v133;
    v47 = *(struct HPATH__ **)(v40 + 168);
    v48 = (struct HPATH__ *)*((_QWORD *)v133 + 21);
    if ( v47 != v48 )
    {
      if ( v48 )
      {
        XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v158, v48);
        if ( v159 && (v159[22] & 1) == 0 )
          DEC_SHARE_REF_CNT(v159);
        XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v158);
      }
      *((_QWORD *)v46 + 21) = v47;
      if ( v47 )
      {
        XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v160, v47);
        if ( v161 && (*(_DWORD *)(v161 + 88) & 1) == 0 )
          INC_SHARE_REF_CNT(v161);
        XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v160);
      }
    }
    v49 = (__int128 *)(v40 + 88);
    v50 = (__int128 *)((char *)v133 + 88);
    v51 = 3LL;
    do
    {
      v50 += 8;
      v52 = *v49;
      v49 += 8;
      *(v50 - 8) = v52;
      *(v50 - 7) = *(v49 - 7);
      *(v50 - 6) = *(v49 - 6);
      *(v50 - 5) = *(v49 - 5);
      *(v50 - 4) = *(v49 - 4);
      *(v50 - 3) = *(v49 - 3);
      *(v50 - 2) = *(v49 - 2);
      *(v50 - 1) = *(v49 - 1);
      --v51;
    }
    while ( v51 );
    *v50 = *v49;
    v50[1] = v49[1];
    v50[2] = v49[2];
    v50[3] = v49[3];
    v53 = *(_QWORD *)(v40 + 312);
    if ( v53 == v40 + 276 )
    {
      *((_QWORD *)v133 + 39) = (char *)v133 + 276;
      goto LABEL_137;
    }
    if ( v53 )
    {
      v84 = PALLOCMEM2((unsigned int)(8 * *(_DWORD *)(v40 + 320)), 1684300103LL, 1);
      *((_QWORD *)v133 + 39) = v84;
      v85 = (void *)*((_QWORD *)v133 + 39);
      if ( v85 )
      {
        memmove(v85, *(const void **)(v40 + 312), 8LL * *(unsigned int *)(v40 + 320));
        goto LABEL_137;
      }
      v24 = 0LL;
      *((_DWORD *)v133 + 80) = 0;
    }
    else
    {
LABEL_137:
      v24 = 0LL;
    }
    v138 = 0LL;
    if ( (int)IsRFONTOBJ_vConstructPRFONTSupported_0() >= 0 )
      RFONTOBJ_vConstructPRFONTWrap_0();
    v54 = v135[0];
    v55 = *(volatile signed __int32 **)(v135[0] + 1592LL);
    if ( v55 )
    {
      if ( _InterlockedExchangeAdd(v55, 0xFFFFFFFF) == 1 )
        RBRUSH::vFreeOrCacheRBrush(v55, 1LL);
      *(_QWORD *)(v54 + 1592) = 0LL;
    }
    v56 = *(_QWORD *)(v54 + 1568);
    if ( v56 )
    {
      v57 = (volatile signed __int32 *)(v56 - 16);
      if ( _InterlockedExchangeAdd(v57, 0xFFFFFFFF) == 1 )
        RBRUSH::vFreeOrCacheRBrush(v57, 0LL);
      *(_QWORD *)(v54 + 1568) = 0LL;
    }
    v58 = v135[0];
    v59 = *(volatile signed __int32 **)(v135[0] + 1736LL);
    if ( v59 )
    {
      if ( _InterlockedExchangeAdd(v59, 0xFFFFFFFF) == 1 )
        RBRUSH::vFreeOrCacheRBrush(v59, 1LL);
      *(_QWORD *)(v58 + 1736) = 0LL;
    }
    v60 = *(_QWORD *)(v58 + 1712);
    if ( v60 )
    {
      v61 = (volatile signed __int32 *)(v60 - 16);
      if ( _InterlockedExchangeAdd(v61, 0xFFFFFFFF) == 1 )
        RBRUSH::vFreeOrCacheRBrush(v61, 0LL);
      *(_QWORD *)(v58 + 1712) = 0LL;
    }
    v62 = v135[0];
    v63 = *(volatile signed __int32 **)(v135[0] + 1880LL);
    if ( v63 )
    {
      if ( _InterlockedExchangeAdd(v63, 0xFFFFFFFF) == 1 )
        RBRUSH::vFreeOrCacheRBrush(v63, 1LL);
      *(_QWORD *)(v62 + 1880) = 0LL;
    }
    v64 = *(_QWORD *)(v62 + 1856);
    if ( v64 )
    {
      v65 = (volatile signed __int32 *)(v64 - 16);
      if ( _InterlockedExchangeAdd(v65, 0xFFFFFFFF) == 1 )
        RBRUSH::vFreeOrCacheRBrush(v65, 0LL);
      *(_QWORD *)(v62 + 1856) = 0LL;
    }
    v66 = v135[0];
    v67 = *(volatile signed __int32 **)(v135[0] + 2024LL);
    if ( v67 )
    {
      if ( _InterlockedExchangeAdd(v67, 0xFFFFFFFF) == 1 )
        RBRUSH::vFreeOrCacheRBrush(v67, 1LL);
      *(_QWORD *)(v66 + 2024) = 0LL;
    }
    v68 = *(_QWORD *)(v66 + 2000);
    if ( v68 )
    {
      v69 = (volatile signed __int32 *)(v68 - 16);
      if ( _InterlockedExchangeAdd(v69, 0xFFFFFFFF) == 1 )
        RBRUSH::vFreeOrCacheRBrush(v69, 0LL);
      *(_QWORD *)(v66 + 2000) = 0LL;
    }
    v70 = v135[0];
    v71 = *(struct HPATH__ **)(v135[0] + 168LL);
    if ( v71 )
    {
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v162, v71);
      if ( v163 && (v163[22] & 1) == 0 )
        DEC_SHARE_REF_CNT(v163);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v162);
      *(_QWORD *)(v70 + 168) = 0LL;
    }
    if ( (int)IsXDCOBJ_vCleanupColorTransformSupported_0() >= 0 )
      XDCOBJ_vCleanupColorTransformWrap_0();
    v73 = v135[0];
    v74 = *(_QWORD *)(v135[0] + 2464LL);
    if ( v74 )
    {
      do
      {
        v75 = v74;
        v74 = *(_QWORD *)(v74 + 8);
        EngAcquireSemaphore(ghsemPublicPFT);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
        v145 = *(_QWORD *)(*(_QWORD *)v75 + 128LL);
        --*(_DWORD *)(*(_QWORD *)v75 + 64LL);
        if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported_0() >= 0 )
          PFTOBJ_bUnloadWorkhorseWrap_0();
        Win32FreePool();
        v24 = 0LL;
      }
      while ( v74 );
      v19 = v144;
      v73 = v135[0];
    }
    v76 = *(_QWORD *)(v73 + 312);
    if ( v76 && v76 != v73 + 276 )
    {
      Win32FreePool();
      *(_QWORD *)(v135[0] + 312LL) = 0LL;
      v73 = v135[0];
    }
    v77 = 0LL;
    v78 = (unsigned __int16)*(_DWORD *)v73;
    if ( (unsigned int)v78 >= gcMaxHmgr )
      goto LABEL_230;
    v79 = ghsemHmgr;
    v80 = (unsigned int)v78;
    v81 = 24 * v78;
    v82 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v78;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion(v78, v76);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v79);
      LODWORD(v79) = (_DWORD)ghsemHmgr;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pqz(v78, v76, v72, (_DWORD)v79, 16, (__int64)L"ghsemHmgr");
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v157);
    _m_prefetchw(v82 + 8);
    v27 = (v82[15] & 0x20) == 0;
    v83 = *((_DWORD *)v82 + 2);
    v150 = v83;
    if ( !v27 )
    {
LABEL_205:
      KeLeaveCriticalRegion();
      v24 = 0LL;
      goto LABEL_206;
    }
    while ( (v82[15] & 0x40) == 0 )
    {
      if ( (v83 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
      }
      else
      {
        v151 = v83 | 1;
        if ( v83 == _InterlockedCompareExchange((volatile signed __int32 *)v82 + 2, v83 | 1, v83)
          && (v82[15] & 0x40) == 0 )
        {
          *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v80) = 0LL;
          v82[15] |= 0x40u;
          _m_prefetchw(v82 + 8);
          v150 = *((_DWORD *)v82 + 2) & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)v82 + 2, v150);
          v83 = v150;
          continue;
        }
      }
      _m_prefetchw(v82 + 8);
      v27 = (v82[15] & 0x20) == 0;
      v83 = *((_DWORD *)v82 + 2);
      v150 = v83;
      if ( !v27 )
        goto LABEL_205;
    }
    ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v80, 0LL);
    v90 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + v81;
    v136.m128i_i64[0] = *(_QWORD *)v82;
    v91 = *(_DWORD *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + v81 + 8);
    v92 = v91 & 0xFFFFFFFE;
    if ( (v91 & 0xFFFFFFFE) != 0 && v92 != -2147483630 )
    {
      GreAcquireHmgrSemaphore(v89, v88);
      if ( v92 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v93);
        if ( CurrentProcessWin32Process )
          --*(_DWORD *)(CurrentProcessWin32Process + 60);
      }
      else if ( PsLookupProcessByProcessId((HANDLE)v92, &Process) >= 0 )
      {
        ProcessWin32Process = PsGetProcessWin32Process(Process);
        if ( ProcessWin32Process )
          --*(_DWORD *)(ProcessWin32Process + 60);
        ObfDereferenceObject(Process);
      }
      GreReleaseHmgrSemaphore(v96, v95);
    }
    v24 = 0LL;
    --gcCurHmgr;
    *(_QWORD *)v90 = ghFreeHmgr;
    *((_WORD *)v82 + 6) += 256;
    v82[14] = 0;
    *((_QWORD *)v82 + 2) = 0LL;
    *((_DWORD *)v90 + 2) = v91 & 1;
    ghFreeHmgr = v80;
    if ( (v82[15] & 0x40) != 0 )
    {
      ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v80);
    }
    else
    {
      _m_prefetchw(v82 + 8);
      v150 = *((_DWORD *)v82 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v82 + 2, v150);
    }
    KeLeaveCriticalRegion();
    v77 = v136.m128i_i64[0];
LABEL_206:
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v86, &LockRelease, v72, ghsemHmgr, L"ghsemHmgr");
    v78 = (unsigned __int64)ghsemHmgr;
    if ( ghsemHmgr )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
      PsLeavePriorityRegion(v87);
    }
    if ( v77 )
    {
      if ( *(__int16 *)(v77 + 14) >= 0 )
      {
        Win32FreePool();
      }
      else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
      {
        Win32FreeToPagedLookasideListImpl_0();
      }
    }
LABEL_230:
    v135[0] = 0LL;
    if ( v138 )
    {
      if ( (*(_DWORD *)(v138 + 720) & 0x81) != 0 && (int)IsRFONTOBJ_dtHelperSupported_0() >= 0 )
        RFONTOBJ_dtHelperWrap_0();
      RFONTOBJ::vReleaseCache((RFONTOBJ *)&v138);
    }
    if ( v36 )
    {
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pz(v78, &LockRelease, v72, v36, L"hsem");
      ExReleaseResourceAndLeaveCriticalRegion(v36);
      PsLeavePriorityRegion(v98);
    }
    if ( v135[0] )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)v135);
      _InterlockedDecrement((volatile signed __int32 *)(v135[0] + 12LL));
    }
    v3 = v133;
  }
  while ( v165 < *((_DWORD *)v133 + 29) );
  v16 = 1;
LABEL_244:
  if ( v139 != *(_DWORD *)(*((_QWORD *)v3 + 10) + 308LL) )
  {
    *((_DWORD *)v3 + 66) |= 1u;
    v3 = v133;
  }
  if ( v140 )
  {
    DC::bMakeInfoDC(v3, 1);
    v3 = v133;
  }
  *((_DWORD *)v3 + 9) |= 0x10u;
  *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v3 + 15) |= 4u;
  v99 = v133;
  v100 = *((_QWORD *)v133 + 189);
  if ( (*((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v133 + 15) & 4) != 0 )
  {
    if ( !v100
      || (*(_DWORD *)(v100 + 84) != 1 ? (v101 = (*(_DWORD *)(*((_QWORD *)v133 + 189) + 80LL) > 0xA0u) + 2) : (v101 = 1),
          *(_DWORD *)(*((_QWORD *)v133 + 10) + 392LL) = v101,
          *(_DWORD *)(v100 + 84) == 1) )
    {
      v105 = (__m128i)rclEmpty;
    }
    else
    {
      v103 = *((_DWORD *)v99 + 356);
      v136 = *(__m128i *)(v100 + 88);
      v102 = v136;
      v136.m128i_i32[2] -= v103;
      v136.m128i_i32[0] = _mm_cvtsi128_si32(v102) - v103;
      v104 = *((_DWORD *)v99 + 357);
      v136.m128i_i32[1] -= v104;
      v136.m128i_i32[3] -= v104;
      v105 = v136;
    }
    *(__m128i *)(*((_QWORD *)v99 + 10) + 396LL) = v105;
    *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v99 + 15) &= ~4u;
    v99 = v133;
  }
  *(_DWORD *)(*((_QWORD *)v99 + 10) + 8LL) |= 0x12001Fu;
  v106 = v133;
  if ( *((_DWORD *)v133 + 8) == 1 )
  {
    v107 = *(_DWORD *)v133;
    *((_DWORD *)v133 + 9) |= 0x10u;
    v108 = (unsigned __int16)v107;
    *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v107 + 15) |= 4u;
    v109 = *((_QWORD *)v106 + 66);
    v110 = (_DWORD *)*((_QWORD *)v106 + 6);
    *(_QWORD *)&v137.left = 0LL;
    *(_QWORD *)&v137.right = v109;
    if ( *((_QWORD *)v106 + 64) )
    {
      v111 = ghsemDynamicModeChange;
      if ( ghsemDynamicModeChange )
      {
        ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
        v111 = ghsemDynamicModeChange;
      }
      v112 = (unsigned int)gbLockEtw;
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      {
        Template_pz(v108, &LockAcquireShared, (unsigned int)gbLockEtw, v111, L"ghsemDynamicModeChange");
        v111 = ghsemDynamicModeChange;
        v112 = (unsigned int)gbLockEtw;
      }
      if ( (v110[14] & 0x20000) != 0 )
      {
        v108 = *(unsigned int *)(*((_QWORD *)v106 + 64) + 112LL);
        if ( (int)v108 < 0 )
        {
          v137.left = v110[652];
          v137.right = v109 + v137.left;
          v137.top = v110[653];
          v137.bottom = HIDWORD(v109) + v137.top;
        }
      }
      if ( (_DWORD)v112 && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      {
        Template_pz(v108, &LockRelease, v112, v111, L"ghsemDynamicModeChange");
        v111 = ghsemDynamicModeChange;
      }
      if ( v111 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v111);
        PsLeavePriorityRegion(v113);
      }
    }
    v114 = (struct REGION *)*((_QWORD *)v106 + 189);
    if ( v114 && v114 != prgnDefault )
    {
      v146 = *((_QWORD *)v106 + 189);
      RGNOBJ::vSet((RGNOBJ *)&v146, &v137);
      goto LABEL_280;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v141);
    v115 = v141;
    if ( v141 )
    {
      RGNOBJ::vSet((RGNOBJ *)&v141, &v137);
      v27 = v142 == 1;
      *((_QWORD *)v106 + 189) = v115;
      if ( v27 )
        RGNOBJ::vDeleteRGNOBJ(&v141);
LABEL_280:
      v116 = *((_QWORD *)v106 + 189);
      v136.m128i_i32[2] = v109;
      *(_DWORD *)(v116 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
      v136.m128i_i64[0] = 0LL;
      v117 = *(_QWORD *)((char *)v106 + 916);
      v136.m128i_i32[3] = HIDWORD(v109);
      v118 = v136;
      *((_QWORD *)v106 + 176) = 0LL;
      *((__m128i *)v106 + 89) = v118;
      *((_QWORD *)v106 + 194) = v117;
      *((struct _RECTL *)v106 + 87) = v137;
    }
    else
    {
      v27 = v142 == 1;
      *((_QWORD *)v106 + 189) = prgnDefault;
      if ( v27 )
        RGNOBJ::vDeleteRGNOBJ(&v141);
    }
    v106 = v133;
  }
  v119 = *((_DWORD *)v106 + 9);
  v120 = *((_QWORD *)v106 + 64);
  if ( (v119 & 1) != 0
    || *((_DWORD *)v106 + 8) == 1
    && v120
    && ((v121 = *(_DWORD *)(v120 + 112), (v121 & 0x4000) != 0)
     || (v121 & 0x800000) != 0 && (*(_DWORD *)(v19 + 56) & 1) != 0) )
  {
    *((_DWORD *)v106 + 9) = v119 | 0x200;
    if ( (*(_DWORD *)(v120 + 112) & 0x200) != 0 )
      *((_DWORD *)v133 + 9) |= 0x8000u;
    else
      *((_DWORD *)v133 + 9) &= ~0x8000u;
  }
  else
  {
    *((_DWORD *)v106 + 9) = v119 & 0xFFFFFDFF;
  }
  v122 = v133;
  v123 = *((_DWORD *)v133 + 10);
  if ( (v123 & 1) != 0 )
    v124 = *((_DWORD *)v133 + 354);
  else
    v124 = *((_DWORD *)v133 + 352);
  *((_DWORD *)v133 + 388) = *((_DWORD *)v133 + 34) + v124;
  if ( (v123 & 1) != 0 )
    v125 = *((_DWORD *)v122 + 355);
  else
    v125 = *((_DWORD *)v122 + 353);
  v126 = (unsigned int)(*((_DWORD *)v122 + 35) + v125);
  *((_DWORD *)v122 + 389) = v126;
  if ( (*(_DWORD *)(v19 + 56) & 1) != 0 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v126, &LockRelease, v99, ghsemDCVisRgn, L"ghsemDCVisRgn");
    v127 = ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
      PsLeavePriorityRegion(v128);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v127, &LockRelease, v99, ghsemGreLock, L"ghsemGreLock");
    v129 = ghsemGreLock;
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
      PsLeavePriorityRegion(v130);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v129, &LockRelease, v99, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion(v131);
    }
  }
LABEL_315:
  if ( v133 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v133);
    _InterlockedDecrement((volatile signed __int32 *)v133 + 3);
  }
  return v16;
}
