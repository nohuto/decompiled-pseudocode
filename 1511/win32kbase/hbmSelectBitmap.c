/*
 * XREFs of hbmSelectBitmap @ 0x1C002DCA0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0030F10 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     CleanupGDI @ 0x1C0069388 (CleanupGDI.c)
 *     GreSelectBitmap @ 0x1C0071CF0 (GreSelectBitmap.c)
 * Callees:
 *     IsvMirrorIncludeNotifySupported_0 @ 0x1C00015E0 (IsvMirrorIncludeNotifySupported_0.c)
 *     vMirrorIncludeNotifyWrap_0 @ 0x1C00015E8 (vMirrorIncludeNotifyWrap_0.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029EE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C002B590 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C002C830 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0031910 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00461F0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C0046200 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 *     GreMakeBitmapNonStock @ 0x1C005DB10 (GreMakeBitmapNonStock.c)
 *     INC_SHARE_REF_CNT @ 0x1C006DCD0 (INC_SHARE_REF_CNT.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C006E360 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     GreGetObjectOwner @ 0x1C0074F00 (GreGetObjectOwner.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B4B80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00B5B74 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5C24 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

__int64 __fastcall hbmSelectBitmap(__int64 a1, __int64 a2, int a3, int a4)
{
  int v6; // r15d
  __int64 v7; // r14
  int v8; // eax
  DC *v9; // rdi
  char *v10; // rbx
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v12; // rax
  __int64 v13; // r15
  signed __int32 v14; // eax
  unsigned int v15; // edx
  __int64 v16; // r12
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v18; // ax
  int v19; // ebx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  char *v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  signed __int32 v28; // eax
  unsigned int v29; // edx
  struct _ERESOURCE *v30; // r15
  struct _ERESOURCE *v31; // rbx
  DC *v32; // rbx
  int v33; // esi
  __int64 v34; // r13
  bool v35; // dl
  __int64 v36; // rdi
  struct SURFACE *v37; // r12
  __int64 v38; // rbx
  __int64 v39; // rdi
  char *v40; // rbx
  bool v41; // zf
  signed __int32 v42; // eax
  __int64 v43; // rdi
  __int16 v44; // ax
  int v45; // eax
  int v46; // ecx
  unsigned int v47; // ecx
  __int64 v48; // rdi
  char *v49; // rbx
  signed __int32 v50; // eax
  __int64 v51; // rdi
  __int64 v52; // rdi
  char *v53; // rbx
  signed __int32 v54; // eax
  __int64 v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // r8
  DC *v58; // r12
  int v59; // eax
  __int64 v60; // rcx
  unsigned __int64 v61; // rdi
  _DWORD *v62; // rbx
  struct _RECTL v63; // xmm6
  struct _ERESOURCE *v64; // rdx
  __int64 v65; // r8
  int v66; // eax
  LONG top; // ebx
  LONG bottom; // r13d
  LONG v69; // r10d
  __int64 v70; // rax
  LONG right; // r9d
  int *v72; // r8
  int v73; // ecx
  _DWORD *v74; // r8
  char *v75; // r8
  _DWORD *v76; // r8
  __int16 *v77; // rbx
  DC *v78; // rbx
  __int64 v79; // rdx
  DC *v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  __m128i v83; // xmm0
  int v84; // eax
  _BYTE *SystemArgument2; // rbx
  __int64 v86; // rsi
  __int64 v87; // rdi
  signed __int32 v88; // eax
  __int64 v89; // rsi
  DC *v90; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v91; // [rsp+38h] [rbp-C8h]
  __int64 v92; // [rsp+40h] [rbp-C0h]
  struct _RECTL v93; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v94; // [rsp+60h] [rbp-A0h]
  __m128i v95; // [rsp+68h] [rbp-98h]
  __int64 v96; // [rsp+78h] [rbp-88h]
  unsigned int v97; // [rsp+80h] [rbp-80h]
  unsigned int v98; // [rsp+84h] [rbp-7Ch]
  __int16 *v99; // [rsp+88h] [rbp-78h] BYREF
  int v100; // [rsp+90h] [rbp-70h]
  __int64 v101; // [rsp+98h] [rbp-68h] BYREF
  __int128 v102; // [rsp+A0h] [rbp-60h]
  unsigned int v103; // [rsp+BCh] [rbp-44h]
  int v104; // [rsp+C0h] [rbp-40h]
  __int64 v105; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v106; // [rsp+DCh] [rbp-24h]
  int v107; // [rsp+E0h] [rbp-20h]
  int v108; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v109[5]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v110; // [rsp+104h] [rbp+4h]
  int v111; // [rsp+108h] [rbp+8h]
  unsigned int v112; // [rsp+11Ch] [rbp+1Ch]
  int v113; // [rsp+120h] [rbp+20h]
  unsigned int v114; // [rsp+134h] [rbp+34h]
  int v115; // [rsp+138h] [rbp+38h]
  unsigned int v116; // [rsp+14Ch] [rbp+4Ch]
  int v117; // [rsp+150h] [rbp+50h]
  _BYTE v118[8]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v119[8]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v120[8]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v121[16]; // [rsp+170h] [rbp+70h] BYREF
  LONG left; // [rsp+1E0h] [rbp+E0h]

  v6 = a2;
  v92 = 0LL;
  v96 = 0LL;
  v7 = 0LL;
  v90 = 0LL;
  v8 = 0;
  v91 = 0LL;
  v9 = 0LL;
  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr )
  {
    v10 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v108);
    if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v12 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
      v13 = *(_QWORD *)(v12 + 72);
    else
      v13 = 0LL;
LABEL_6:
    _m_prefetchw(v10 + 8);
    v14 = *((_DWORD *)v10 + 2);
    v15 = v14 & 0xFFFFFFFE;
    v116 = v14;
    if ( (v14 & 0xFFFFFFFE) != (v108 & 0xFFFFFFFC) && v15 && (!v13 || v15 != *(_DWORD *)(v13 + 8))
      || (v10[15] & 0x20) != 0 )
    {
      KeLeaveCriticalRegion();
      v90 = 0LL;
      v16 = 0LL;
      goto LABEL_278;
    }
    while ( (v10[15] & 0x40) == 0 )
    {
      if ( (v14 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
        goto LABEL_6;
      }
      v117 = v14 | 1;
      if ( v14 != _InterlockedCompareExchange((volatile signed __int32 *)v10 + 2, v14 | 1, v14) || (v10[15] & 0x40) != 0 )
        goto LABEL_6;
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + (unsigned __int16)a1) = 0LL;
      v10[15] |= 0x40u;
      _m_prefetchw(v10 + 8);
      v116 = *((_DWORD *)v10 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v10 + 2, v116);
      v14 = v116;
    }
    ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)a1, 0LL);
    if ( v10[14] == 1 && *((_WORD *)v10 + 6) == WORD1(a1) )
    {
      CurrentThread = KeGetCurrentThread();
      v9 = *(DC **)v10;
      v18 = *(_WORD *)(*(_QWORD *)v10 + 12LL);
      if ( !v18 || *((struct _KTHREAD **)v9 + 2) == CurrentThread )
      {
        *((_QWORD *)v9 + 2) = CurrentThread;
        *((_WORD *)v9 + 6) = v18 + 1;
      }
      else
      {
        v9 = 0LL;
      }
    }
    if ( (v10[15] & 0x40) != 0 )
    {
      ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)a1);
    }
    else
    {
      _m_prefetchw(v10 + 8);
      v116 = *((_DWORD *)v10 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v10 + 2, v116);
    }
    KeLeaveCriticalRegion();
    v8 = HIDWORD(v91);
    v6 = a2;
  }
  v90 = v9;
  if ( !v9 )
    return 0LL;
  if ( v8 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v9 + 6) + 56LL) & 0x8000) == 0 )
    {
LABEL_33:
      _InterlockedDecrement((volatile signed __int32 *)v9 + 3);
      return 0LL;
    }
    v19 = *((_DWORD *)v9 + 626);
    if ( v19 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v9 = v90;
      goto LABEL_33;
    }
  }
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v90) )
  {
    _InterlockedDecrement((volatile signed __int32 *)v90 + 3);
    return 0LL;
  }
  if ( !v90 )
    return 0LL;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  v23 = (__int64)L"ghsemDynamicModeChange";
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(L"ghsemDynamicModeChange", &LockAcquireShared, v22, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  if ( (unsigned __int16)v6 < (unsigned int)gcMaxHmgr )
  {
    v24 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v6;
    v25 = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v109);
    if ( v25 && (v26 = *v25) != 0 )
      v27 = *(_QWORD *)(v26 + 72);
    else
      v27 = 0LL;
LABEL_48:
    _m_prefetchw(v24 + 8);
    v28 = *((_DWORD *)v24 + 2);
    v29 = v28 & 0xFFFFFFFE;
    v114 = v28;
    if ( (v28 & 0xFFFFFFFE) != (v109[0] & 0xFFFFFFFC) && v29 && (!v27 || v29 != *(_DWORD *)(v27 + 8))
      || (v24[15] & 0x20) != 0 )
    {
      KeLeaveCriticalRegion();
      v16 = 0LL;
      goto LABEL_273;
    }
    while ( (v24[15] & 0x40) == 0 )
    {
      if ( (v28 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
        goto LABEL_48;
      }
      v115 = v28 | 1;
      if ( v28 != _InterlockedCompareExchange((volatile signed __int32 *)v24 + 2, v28 | 1, v28) || (v24[15] & 0x40) != 0 )
        goto LABEL_48;
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + (unsigned __int16)v6) = 0LL;
      v24[15] |= 0x40u;
      _m_prefetchw(v24 + 8);
      v114 = *((_DWORD *)v24 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v24 + 2, v114);
      v28 = v114;
    }
    ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v6, 0LL);
    if ( v24[14] == 5 && *((_WORD *)v24 + 6) == HIWORD(v6) )
    {
      v7 = *(_QWORD *)v24;
      ++*(_DWORD *)(*(_QWORD *)v24 + 8LL);
    }
    if ( (v24[15] & 0x40) != 0 )
    {
      ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v6);
    }
    else
    {
      _m_prefetchw(v24 + 8);
      v114 = *((_DWORD *)v24 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v24 + 2, v114);
    }
    KeLeaveCriticalRegion();
  }
  if ( !v7 )
  {
    v16 = v92;
    goto LABEL_273;
  }
  v30 = ghsemGreLock;
  if ( a4 == 1 )
  {
    if ( ghsemGreLock )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v30);
  }
  else if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v23, v21);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v30);
  }
  v31 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(v23, v21);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v31);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz(v23, v21, v22, (_DWORD)ghsemHmgr, 16, (__int64)L"ghsemHmgr");
  v32 = v90;
  v94 = 1;
  v33 = 1;
  v34 = *((_QWORD *)v90 + 6);
  v35 = (unsigned int)GreGetObjectOwner(a1, 1LL) == 0;
  if ( *((_DWORD *)v32 + 8) != 1 )
    goto LABEL_260;
  v23 = 512LL;
  if ( !*(_DWORD *)(v7 + 160) || (*(_DWORD *)v7 & 0x800000) != 0 && (*(_WORD *)(v7 + 102) & 0x200) != 0 )
    goto LABEL_85;
  v23 = *(_QWORD *)v90;
  if ( *(_QWORD *)(v7 + 152) != *(_QWORD *)v90 )
  {
LABEL_260:
    v16 = v92;
    goto LABEL_262;
  }
  v23 = 512LL;
LABEL_85:
  v36 = *(_QWORD *)(v7 + 120);
  if ( (*(_WORD *)(v7 + 100) || *(_QWORD *)(v7 + 24)) && *(_QWORD *)(v7 + 48) != v34 )
    goto LABEL_261;
  if ( !v36 )
  {
    if ( *(_DWORD *)(v7 + 96) == *(_DWORD *)(v34 + 2132) )
    {
      if ( (*(_DWORD *)(v34 + 2196) & 0x100) != 0 )
        v36 = 0LL;
      else
        v36 = *(_QWORD *)(v34 + 1832);
      goto LABEL_93;
    }
LABEL_261:
    v16 = v92;
    goto LABEL_262;
  }
LABEL_93:
  if ( !v35 && (*(_DWORD *)(v7 + 112) & 0x800) != 0 )
    goto LABEL_261;
  v37 = (struct SURFACE *)*((_QWORD *)v90 + 64);
  if ( !v37 )
    v37 = SURFACE::pdibDefault;
  if ( ((*((_DWORD *)v37 + 28) & 0x4000000) == 0
     || (*(_DWORD *)(v7 + 112) & 0x4000000) == 0
     || (*((_DWORD *)v37 + 29) & 0x200) != 0)
    && !a4
    && !a3 )
  {
    goto LABEL_261;
  }
  v97 = *(_DWORD *)(*((_QWORD *)v90 + 10) + 312LL);
  v98 = v97 & 7;
  if ( (v97 & 7) != 0 )
    DC::dwSetLayout(v90, -1, 0);
  if ( *(_QWORD *)(v7 + 120) != v36 )
  {
    *(_DWORD *)(v7 + 112) |= 0x8000000u;
    *(_QWORD *)(v7 + 120) = v36;
    if ( v36 )
      INC_SHARE_REF_CNT(v36);
  }
  if ( (*((_DWORD *)v37 + 28) & 0x1000000) != 0 )
    v96 = *(_QWORD *)v37;
  v38 = *((_QWORD *)v37 + 4);
  v92 = v38;
  if ( a2 == v38 )
  {
    v16 = v38;
    goto LABEL_256;
  }
  if ( (struct SURFACE *)v7 == SURFACE::pdibDefault )
  {
    v33 = 0;
    *((_QWORD *)v90 + 64) = 0LL;
  }
  else
  {
    *((_QWORD *)v90 + 64) = v7;
    if ( (*(_DWORD *)v7 & 0x800000) != 0 && (*(_WORD *)(v7 + 102) & 0x200) != 0
      || !*(_WORD *)(v7 + 100) && *(_DWORD *)(v7 + 208) )
    {
      *((_DWORD *)v90 + 9) |= 0x10000u;
    }
    else
    {
      *((_DWORD *)v90 + 9) &= ~0x10000u;
    }
    v33 = 0;
  }
  *((_QWORD *)v90 + 66) = *(_QWORD *)(v7 + 56);
  *(_DWORD *)(*((_QWORD *)v90 + 10) + 8LL) |= 0xFu;
  if ( v37 != SURFACE::pdibDefault )
  {
    if ( (*((_DWORD *)v37 + 28) & 0x10) != 0 && (int)IsvMirrorIncludeNotifySupported_0() >= 0 )
      vMirrorIncludeNotifyWrap_0();
    v39 = (unsigned __int16)*(_DWORD *)v37;
    v40 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v39;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v121);
    _m_prefetchw(v40 + 8);
    v41 = (v40[15] & 0x20) == 0;
    v42 = *((_DWORD *)v40 + 2);
    v103 = v42;
    if ( v41 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (v40[15] & 0x40) != 0 )
          {
            v43 = 8 * v39;
            ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v43, 0LL);
            if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v37 + 14) == 5
              && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
              && gpentHmgrAltStacks )
            {
              RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v37);
            }
            --*((_DWORD *)v37 + 2);
            if ( (v40[15] & 0x40) != 0 )
            {
              ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v43);
            }
            else
            {
              _m_prefetchw(v40 + 8);
              v103 = *((_DWORD *)v40 + 2) & 0xFFFFFFFE;
              _InterlockedExchange((volatile __int32 *)v40 + 2, v103);
            }
            goto LABEL_139;
          }
          if ( (v42 & 1) == 0 )
            break;
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_130:
          _m_prefetchw(v40 + 8);
          v41 = (v40[15] & 0x20) == 0;
          v42 = *((_DWORD *)v40 + 2);
          v103 = v42;
          if ( !v41 )
            goto LABEL_139;
        }
        v104 = v42 | 1;
        if ( v42 != _InterlockedCompareExchange((volatile signed __int32 *)v40 + 2, v42 | 1, v42)
          || (v40[15] & 0x40) != 0 )
        {
          goto LABEL_130;
        }
        *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v39) = 0LL;
        v40[15] |= 0x40u;
        _m_prefetchw(v40 + 8);
        v103 = *((_DWORD *)v40 + 2) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)v40 + 2, v103);
        v42 = v103;
      }
    }
LABEL_139:
    KeLeaveCriticalRegion();
    v41 = (*((_DWORD *)v37 + 40))-- == 1;
    if ( v41 )
    {
      if ( (*(_QWORD *)v37 & 0x800000LL) != 0 )
      {
        v44 = *((_WORD *)v37 + 51);
        if ( (v44 & 0x400) != 0 )
        {
          *((_WORD *)v37 + 51) = v44 & 0xFBFF;
          GreMakeBitmapNonStock();
        }
      }
      *((_QWORD *)v37 + 19) = 0LL;
    }
    if ( !*((_DWORD *)v37 + 40) )
    {
      if ( v96 )
        v96 = *(_QWORD *)v37;
      if ( (*((_DWORD *)v37 + 28) & 0x8000000) != 0 )
      {
        v105 = *((_QWORD *)v37 + 15);
        *((_QWORD *)v37 + 15) = 0LL;
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v105);
      }
      *((_DWORD *)v37 + 28) &= ~0x8000000u;
    }
  }
  if ( (int)IsvMirrorIncludeNotifySupported_0() >= 0 )
    vMirrorIncludeNotifyWrap_0();
  v45 = *(_DWORD *)(v7 + 112);
  if ( (v45 & 0x4000) != 0 || (v45 & 0x800010) != 0 && (*(_DWORD *)(v34 + 56) & 1) != 0 )
    *((_DWORD *)v90 + 9) |= 0x200u;
  else
    *((_DWORD *)v90 + 9) &= ~0x200u;
  v46 = *((_DWORD *)v90 + 9);
  if ( (v46 & 0x200) != 0 && (*(_DWORD *)(v7 + 112) & 0x200) != 0 )
    v47 = v46 | 0x8000;
  else
    v47 = v46 & 0xFFFF7FFF;
  *((_DWORD *)v90 + 9) = v47;
  if ( (struct SURFACE *)v7 == SURFACE::pdibDefault )
    goto LABEL_181;
  v48 = (unsigned __int16)*(_DWORD *)v7;
  v49 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v48;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v118);
  _m_prefetchw(v49 + 8);
  v41 = (v49[15] & 0x20) == 0;
  v50 = *((_DWORD *)v49 + 2);
  v106 = v50;
  if ( !v41 )
    goto LABEL_178;
  while ( (v49[15] & 0x40) == 0 )
  {
    if ( (v50 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_169:
      _m_prefetchw(v49 + 8);
      v41 = (v49[15] & 0x20) == 0;
      v50 = *((_DWORD *)v49 + 2);
      v106 = v50;
      if ( !v41 )
        goto LABEL_178;
    }
    else
    {
      v107 = v50 | 1;
      if ( v50 != _InterlockedCompareExchange((volatile signed __int32 *)v49 + 2, v50 | 1, v50) || (v49[15] & 0x40) != 0 )
        goto LABEL_169;
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v48) = 0LL;
      v49[15] |= 0x40u;
      _m_prefetchw(v49 + 8);
      v106 = *((_DWORD *)v49 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v49 + 2, v106);
      v50 = v106;
    }
  }
  v51 = 8 * v48;
  ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v51, 0LL);
  if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v7 + 14) == 5
    && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
    && gpentHmgrAltStacks )
  {
    RECALTLOCKSTACKBACKTRACE(
      (unsigned __int16)*(_DWORD *)v7,
      *((struct _BASEOBJECT **)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)*(_DWORD *)v7));
  }
  ++*(_DWORD *)(v7 + 8);
  if ( (v49[15] & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v51);
  }
  else
  {
    _m_prefetchw(v49 + 8);
    v106 = *((_DWORD *)v49 + 2) & 0xFFFFFFFE;
    _InterlockedExchange((volatile __int32 *)v49 + 2, v106);
  }
LABEL_178:
  KeLeaveCriticalRegion();
  ++*(_DWORD *)(v7 + 160);
  if ( (*(_DWORD *)v7 & 0x800000) == 0 || (*(_WORD *)(v7 + 102) & 0x200) == 0 )
  {
    *(_QWORD *)(v7 + 152) = *(_QWORD *)v90;
    *(_QWORD *)(v7 + 48) = *((_QWORD *)v90 + 6);
  }
LABEL_181:
  if ( *(_WORD *)(v7 + 100) || !*(_QWORD *)(v7 + 184) )
    *(_DWORD *)(*((_QWORD *)v90 + 10) + 8LL) &= ~0x4000u;
  else
    *(_DWORD *)(*((_QWORD *)v90 + 10) + 8LL) |= 0x4000u;
  if ( *(_WORD *)(v7 + 100) || !*(_QWORD *)(v7 + 184) )
    *(_QWORD *)(*((_QWORD *)v90 + 10) + 128LL) = 0LL;
  else
    *(_QWORD *)(*((_QWORD *)v90 + 10) + 128LL) = *(_QWORD *)(v7 + 200);
  v52 = (unsigned __int16)*(_DWORD *)v7;
  v53 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v52;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v120);
  _m_prefetchw(v53 + 8);
  v41 = (v53[15] & 0x20) == 0;
  v54 = *((_DWORD *)v53 + 2);
  v112 = v54;
  if ( !v41 )
    goto LABEL_205;
  while ( (v53[15] & 0x40) == 0 )
  {
    if ( (v54 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
    }
    else
    {
      v113 = v54 | 1;
      if ( v54 == _InterlockedCompareExchange((volatile signed __int32 *)v53 + 2, v54 | 1, v54) && (v53[15] & 0x40) == 0 )
      {
        *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v52) = 0LL;
        v53[15] |= 0x40u;
        _m_prefetchw(v53 + 8);
        v112 = *((_DWORD *)v53 + 2) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)v53 + 2, v112);
        v54 = v112;
        continue;
      }
    }
    _m_prefetchw(v53 + 8);
    v41 = (v53[15] & 0x20) == 0;
    v54 = *((_DWORD *)v53 + 2);
    v112 = v54;
    if ( !v41 )
      goto LABEL_205;
  }
  v55 = 8 * v52;
  ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v55, 0LL);
  if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v7 + 14) == 5
    && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
    && gpentHmgrAltStacks )
  {
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v7);
  }
  --*(_DWORD *)(v7 + 8);
  if ( (v53[15] & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v55);
  }
  else
  {
    _m_prefetchw(v53 + 8);
    v112 = *((_DWORD *)v53 + 2) & 0xFFFFFFFE;
    _InterlockedExchange((volatile __int32 *)v53 + 2, v112);
  }
LABEL_205:
  KeLeaveCriticalRegion();
  v7 = 0LL;
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v56, &LockRelease, v57, ghsemHmgr, L"ghsemHmgr");
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion();
  }
  v58 = v90;
  *(_QWORD *)&v93.left = 0LL;
  v59 = *(_DWORD *)v90;
  *((_DWORD *)v90 + 9) |= 0x10u;
  v60 = (unsigned __int16)v59;
  *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v59 + 15) |= 4u;
  v61 = *((_QWORD *)v58 + 66);
  v62 = (_DWORD *)*((_QWORD *)v58 + 6);
  *(_QWORD *)&v93.right = v61;
  v63 = v93;
  v95.m128i_i64[0] = HIDWORD(v61);
  if ( *((_QWORD *)v58 + 64) )
  {
    v64 = ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
    {
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
      v64 = ghsemDynamicModeChange;
    }
    v65 = (unsigned int)gbLockEtw;
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    {
      Template_pz(v60, &LockAcquireShared, (unsigned int)gbLockEtw, v64, L"ghsemDynamicModeChange");
      v64 = ghsemDynamicModeChange;
      v65 = (unsigned int)gbLockEtw;
    }
    if ( (v62[14] & 0x20000) != 0 && (v60 = *(unsigned int *)(*((_QWORD *)v58 + 64) + 112LL), (int)v60 < 0) )
    {
      v60 = (unsigned int)v62[652];
      v66 = v62[653];
      v93.right += v60;
      top = v66 + v93.top;
      bottom = v66 + v93.bottom;
      v93.left = v60;
      v93.bottom += v66;
      v93.top += v66;
      v63 = v93;
      left = v60;
    }
    else
    {
      bottom = v93.bottom;
      top = v93.top;
      left = v93.left;
    }
    if ( (_DWORD)v65 && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    {
      Template_pz(v60, &LockRelease, v65, v64, L"ghsemDynamicModeChange");
      v64 = ghsemDynamicModeChange;
    }
    if ( v64 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v64);
      PsLeavePriorityRegion();
    }
    v69 = left;
  }
  else
  {
    bottom = v93.bottom;
    top = v93.top;
    v69 = v93.left;
  }
  v70 = *((_QWORD *)v58 + 189);
  if ( !v70 || (struct REGION *)v70 == prgnDefault )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v99);
    v77 = v99;
    if ( v99 )
    {
      RGNOBJ::vSet((RGNOBJ *)&v99, &v93);
      v41 = v100 == 1;
      *((_QWORD *)v58 + 189) = v77;
      if ( v41 )
        RGNOBJ::vDeleteRGNOBJ(&v99);
      goto LABEL_248;
    }
    v41 = v100 == 1;
    *((_QWORD *)v58 + 189) = prgnDefault;
    if ( v41 )
      RGNOBJ::vDeleteRGNOBJ(&v99);
  }
  else
  {
    right = v93.right;
    if ( v69 == v93.right || top == bottom )
    {
      v75 = (char *)(v70 + 104);
      *(_DWORD *)(v70 + 80) = 120;
      *(_QWORD *)(v70 + 84) = 1LL;
      *(_QWORD *)(v70 + 92) = 0LL;
      *(_DWORD *)(v70 + 100) = 0;
      *(_DWORD *)(v70 + 108) = 0x80000000;
    }
    else
    {
      v41 = *(_DWORD *)(v70 + 80) == 160;
      v72 = (int *)(v70 + 104);
      *(struct _RECTL *)(v70 + 88) = v63;
      if ( v41 )
      {
        v73 = *v72;
        *(_DWORD *)(v70 + 112) = top;
        v74 = (int *)((char *)v72 + (unsigned int)(4 * v73 + 16));
        v74[1] = top;
        v74[2] = bottom;
        v74[3] = v69;
        v74[4] = right;
        v75 = (char *)v74 + (unsigned int)(4 * *v74 + 16);
        *((_DWORD *)v75 + 1) = bottom;
        goto LABEL_236;
      }
      *(_DWORD *)(v70 + 80) = 160;
      *(_DWORD *)(v70 + 84) = 3;
      *v72 = 0;
      *(_DWORD *)(v70 + 108) = 0x80000000;
      *(_DWORD *)(v70 + 112) = top;
      *(_DWORD *)(v70 + 116) = 0;
      v76 = (int *)((char *)v72 + (unsigned int)(4 * *v72 + 16));
      *v76 = 2;
      v76[1] = top;
      v76[2] = bottom;
      v76[3] = v69;
      v76[4] = right;
      v76[5] = 2;
      v75 = (char *)v76 + (unsigned int)(4 * *v76 + 16);
      *((_DWORD *)v75 + 1) = bottom;
    }
    *(_DWORD *)v75 = 0;
    *((_QWORD *)v75 + 1) = 0x7FFFFFFFLL;
LABEL_236:
    *(_QWORD *)(v70 + 40) = &v75[4 * *(_DWORD *)v75 + 16];
LABEL_248:
    v81 = *((_QWORD *)v58 + 189);
    DWORD2(v102) = v61;
    *(_DWORD *)(v81 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
    *(_QWORD *)&v102 = 0LL;
    *((_QWORD *)v58 + 176) = 0LL;
    HIDWORD(v102) = v95.m128i_i32[0];
    v82 = *(_QWORD *)((char *)v58 + 916);
    *((_OWORD *)v58 + 89) = v102;
    *((_QWORD *)v58 + 194) = v82;
    *((struct _RECTL *)v58 + 87) = v93;
  }
  v78 = v90;
  v22 = *((_QWORD *)v90 + 189);
  v23 = (unsigned __int16)*(_DWORD *)v90;
  v79 = 3 * v23;
  if ( (*((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v23 + 15) & 4) != 0 )
  {
    if ( v22 )
    {
      if ( *(_DWORD *)(v22 + 84) != 1 )
        v94 = (*(_DWORD *)(*((_QWORD *)v90 + 189) + 80LL) > 0xA0u) + 2;
      v80 = v90;
      v23 = v94;
      *(_DWORD *)(*((_QWORD *)v90 + 10) + 392LL) = v94;
      if ( *(_DWORD *)(v22 + 84) == 1 )
      {
        *(_OWORD *)(*((_QWORD *)v80 + 10) + 396LL) = rclEmpty;
      }
      else
      {
        v23 = *((unsigned int *)v78 + 356);
        v95 = *(__m128i *)(v22 + 88);
        v83 = v95;
        v95.m128i_i32[2] -= v23;
        v95.m128i_i32[0] = _mm_cvtsi128_si32(v83) - v23;
        v84 = *((_DWORD *)v78 + 357);
        v95.m128i_i32[1] -= v84;
        v95.m128i_i32[3] -= v84;
        *(__m128i *)(*((_QWORD *)v80 + 10) + 396LL) = v95;
      }
    }
    else
    {
      v23 = *((_QWORD *)v90 + 10);
      *(_OWORD *)(v23 + 396) = rclEmpty;
    }
    v79 = (unsigned __int16)*(_DWORD *)v78;
    v22 = 3 * v79;
    *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v79 + 15) &= ~4u;
  }
  if ( v96 )
  {
    LOBYTE(v79) = 5;
    v101 = HmgShareLockCheck(v96, v79);
    SURFREF::bDeleteSurface(&v101, 0LL);
    v16 = qword_1C0103E98;
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v101);
  }
  else
  {
    v16 = v92;
  }
LABEL_256:
  if ( v98 )
    DC::dwSetLayout(v90, -1, v97);
  if ( v33 )
  {
LABEL_262:
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v23, &LockRelease, v22, ghsemHmgr, L"ghsemHmgr");
    v23 = (__int64)ghsemHmgr;
    if ( ghsemHmgr )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
      PsLeavePriorityRegion();
    }
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v23, &LockRelease, v22, v30, L"hsem");
  if ( v30 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v30);
    PsLeavePriorityRegion();
  }
LABEL_273:
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v23, &LockRelease, v22, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
LABEL_278:
  if ( v90 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v90);
    _InterlockedDecrement((volatile signed __int32 *)v90 + 3);
  }
  if ( !v7 )
    return v16;
  SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
  v86 = (unsigned __int16)*(_DWORD *)v7;
  v87 = 3 * v86;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v119);
  _m_prefetchw(&SystemArgument2[24 * v86 + 8]);
  v41 = (SystemArgument2[24 * v86 + 15] & 0x20) == 0;
  v88 = *(_DWORD *)&SystemArgument2[24 * v86 + 8];
  v110 = v88;
  if ( !v41 )
    goto LABEL_297;
  while ( (SystemArgument2[24 * v86 + 15] & 0x40) == 0 )
  {
    if ( (v88 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
    }
    else
    {
      v111 = v88 | 1;
      if ( v88 == _InterlockedCompareExchange((volatile signed __int32 *)&SystemArgument2[24 * v86 + 8], v88 | 1, v88)
        && (SystemArgument2[24 * v86 + 15] & 0x40) == 0 )
      {
        *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v86) = 0LL;
        SystemArgument2[24 * v86 + 15] |= 0x40u;
        _m_prefetchw(&SystemArgument2[24 * v86 + 8]);
        v110 = *(_DWORD *)&SystemArgument2[24 * v86 + 8] & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)&SystemArgument2[24 * v86 + 8], v110);
        v88 = v110;
        continue;
      }
    }
    _m_prefetchw(&SystemArgument2[24 * v86 + 8]);
    v41 = (SystemArgument2[24 * v86 + 15] & 0x20) == 0;
    v88 = *(_DWORD *)&SystemArgument2[24 * v86 + 8];
    v110 = v88;
    if ( !v41 )
    {
      KeLeaveCriticalRegion();
      return v16;
    }
  }
  v89 = 8 * v86;
  ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v89, 0LL);
  if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v7 + 14) == 5
    && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
    && gpentHmgrAltStacks )
  {
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v7);
  }
  --*(_DWORD *)(v7 + 8);
  if ( (SystemArgument2[8 * v87 + 15] & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v89);
    KeLeaveCriticalRegion();
    return v16;
  }
  _m_prefetchw(&SystemArgument2[8 * v87 + 8]);
  v110 = *(_DWORD *)&SystemArgument2[8 * v87 + 8] & 0xFFFFFFFE;
  _InterlockedExchange((volatile __int32 *)&SystemArgument2[8 * v87 + 8], v110);
LABEL_297:
  KeLeaveCriticalRegion();
  return v16;
}
