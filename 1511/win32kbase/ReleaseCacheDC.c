/*
 * XREFs of ReleaseCacheDC @ 0x1C0034430
 * Callers:
 *     _ReleaseDC @ 0x1C0035A80 (_ReleaseDC.c)
 *     UserReleaseDC @ 0x1C0042CF0 (UserReleaseDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C005E4F0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GreSelectRedirectionBitmap_0 @ 0x1C0001018 (GreSelectRedirectionBitmap_0.c)
 *     IsGreSelectRedirectionBitmapSupported_0 @ 0x1C0001030 (IsGreSelectRedirectionBitmapSupported_0.c)
 *     IsGreHintDCWndSupported_0 @ 0x1C0001040 (IsGreHintDCWndSupported_0.c)
 *     GreHintDCWnd_0 @ 0x1C0001048 (GreHintDCWnd_0.c)
 *     IsDeleteHrgnClipSupported_0 @ 0x1C0002470 (IsDeleteHrgnClipSupported_0.c)
 *     DeleteHrgnClip_0 @ 0x1C0002478 (DeleteHrgnClip_0.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported_0 @ 0x1C0002480 (IsFlushWEFCOMPOSITEDDCEBoundsSupported_0.c)
 *     FlushWEFCOMPOSITEDDCEBounds_0 @ 0x1C0002488 (FlushWEFCOMPOSITEDDCEBounds_0.c)
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C002B770 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0030F10 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0031910 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     GreSetDCOwnerEx @ 0x1C0034DF0 (GreSetDCOwnerEx.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     GreUnlockVisRgn @ 0x1C00439F0 (GreUnlockVisRgn.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00461F0 (--1EPALOBJ@@QEAA@XZ.c)
 *     DestroyCacheDC @ 0x1C006BD80 (DestroyCacheDC.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0088810 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C00A8C28 (-vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5C24 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  PERESOURCE v5; // rcx
  struct _ERESOURCE *v6; // rdi
  struct _ERESOURCE *v7; // rdi
  __int64 *v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  DC *v15; // rdi
  __int64 v16; // r12
  int v17; // eax
  char *v18; // rbx
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  signed __int32 v22; // eax
  unsigned int v23; // edx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v25; // ax
  int v26; // ebx
  __int64 v27; // r14
  __int64 v28; // rsi
  char *v29; // rbx
  bool v30; // zf
  signed __int32 v31; // eax
  int v32; // eax
  _DWORD *v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rdx
  HSURF v36; // rdx
  _BYTE *SystemArgument2; // rbx
  __int64 v38; // rsi
  __int64 v39; // rdi
  signed __int32 v40; // eax
  __int64 v41; // r14
  __int64 v42; // rsi
  int v43; // eax
  PERESOURCE v44; // rcx
  __int64 v45; // rcx
  PERESOURCE v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  DC *v49; // [rsp+30h] [rbp-59h] BYREF
  int v50; // [rsp+38h] [rbp-51h]
  int v51; // [rsp+3Ch] [rbp-4Dh]
  _QWORD v52[3]; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v53; // [rsp+5Ch] [rbp-2Dh]
  int v54; // [rsp+60h] [rbp-29h]
  unsigned int v55; // [rsp+74h] [rbp-15h]
  int v56; // [rsp+78h] [rbp-11h]
  unsigned int v57; // [rsp+8Ch] [rbp+3h]
  int v58; // [rsp+90h] [rbp+7h]
  _BYTE v59[8]; // [rsp+98h] [rbp+Fh] BYREF
  _BYTE v60[64]; // [rsp+A0h] [rbp+17h] BYREF
  int v61; // [rsp+F8h] [rbp+6Fh]
  __int64 v62; // [rsp+100h] [rbp+77h] BYREF
  int v63; // [rsp+108h] [rbp+7Fh] BYREF

  v61 = a2;
  v4 = a2;
  v5 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v5, &LockAcquireShared, a3, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  v6 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v5, a2);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((_DWORD)v5, a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v7 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v5, a2);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((_DWORD)v5, a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  v8 = (__int64 *)gpDispInfo;
  v9 = *(_QWORD *)(gpDispInfo + 64);
  v10 = gpDispInfo + 64;
  if ( !v9 )
  {
LABEL_19:
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
    UserSetLastError(1425LL);
    return 2LL;
  }
  while ( *(_QWORD *)(v9 + 8) != a1 )
  {
    v10 = v9;
    v9 = *(_QWORD *)v9;
    if ( !v9 )
      goto LABEL_19;
  }
  v12 = *(unsigned int *)(v9 + 64);
  if ( (int)v12 < 0 )
  {
    v13 = DestroyCacheDC(v10, *(_QWORD *)(v9 + 8));
    v14 = *(_QWORD *)gpDispInfo;
    if ( v13 )
    {
      GreUnlockVisRgn(v14);
      return 1LL;
    }
    goto LABEL_151;
  }
  if ( (v12 & 0x401800) != 0x1000 )
  {
LABEL_150:
    v14 = *v8;
LABEL_151:
    GreUnlockVisRgn(v14);
    return 2LL;
  }
  if ( (v12 & 0x4000) != 0
    && (*(_BYTE *)(*(_QWORD *)(v9 + 32) + 51LL) & 2) != 0
    && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported_0() >= 0 )
  {
    FlushWEFCOMPOSITEDDCEBounds_0();
  }
  if ( (*(_DWORD *)(v9 + 64) & 2) == 0 )
    goto LABEL_124;
  v15 = 0LL;
  if ( (int)IsGreHintDCWndSupported_0() >= 0 )
    GreHintDCWnd_0();
  v16 = *(_QWORD *)(v9 + 8);
  v17 = 0;
  v49 = 0LL;
  v50 = 0;
  v51 = 0;
  if ( (unsigned __int16)v16 < (unsigned int)gcMaxHmgr )
  {
    v18 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v16;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v63);
    if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v20 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
      v21 = *(_QWORD *)(v20 + 72);
    else
      v21 = 0LL;
LABEL_37:
    _m_prefetchw(v18 + 8);
    v22 = *((_DWORD *)v18 + 2);
    v23 = v22 & 0xFFFFFFFE;
    v57 = v22;
    if ( (v22 & 0xFFFFFFFE) != (v63 & 0xFFFFFFFC) && v23 && (!v21 || v23 != *(_DWORD *)(v21 + 8))
      || (v18[15] & 0x20) != 0 )
    {
      KeLeaveCriticalRegion();
      v49 = 0LL;
LABEL_146:
      if ( !v15 )
        goto LABEL_149;
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v49);
LABEL_148:
      _InterlockedDecrement((volatile signed __int32 *)v49 + 3);
      goto LABEL_149;
    }
    while ( (v18[15] & 0x40) == 0 )
    {
      if ( (v22 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
        goto LABEL_37;
      }
      v58 = v22 | 1;
      if ( v22 != _InterlockedCompareExchange((volatile signed __int32 *)v18 + 2, v22 | 1, v22) || (v18[15] & 0x40) != 0 )
        goto LABEL_37;
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + (unsigned __int16)v16) = 0LL;
      v18[15] |= 0x40u;
      _m_prefetchw(v18 + 8);
      v57 = *((_DWORD *)v18 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v18 + 2, v57);
      v22 = v57;
    }
    ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v16, 0LL);
    if ( v18[14] == 1 && *((_WORD *)v18 + 6) == WORD1(v16) )
    {
      CurrentThread = KeGetCurrentThread();
      v15 = *(DC **)v18;
      v25 = *(_WORD *)(*(_QWORD *)v18 + 12LL);
      if ( !v25 || *((struct _KTHREAD **)v15 + 2) == CurrentThread )
      {
        *((_QWORD *)v15 + 2) = CurrentThread;
        *((_WORD *)v15 + 6) = v25 + 1;
      }
      else
      {
        v15 = 0LL;
      }
    }
    if ( (v18[15] & 0x40) != 0 )
    {
      ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v16);
    }
    else
    {
      _m_prefetchw(v18 + 8);
      v57 = *((_DWORD *)v18 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v18 + 2, v57);
    }
    KeLeaveCriticalRegion();
    v17 = v51;
  }
  v49 = v15;
  if ( !v15 )
    goto LABEL_149;
  if ( v17 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v15 + 6) + 56LL) & 0x8000) == 0 )
    {
LABEL_64:
      _InterlockedDecrement((volatile signed __int32 *)v15 + 3);
      GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
      return 2LL;
    }
    v26 = *((_DWORD *)v15 + 626);
    if ( v26 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v15 = v49;
      goto LABEL_64;
    }
  }
  if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v49) )
    goto LABEL_148;
  if ( !v49 )
  {
LABEL_149:
    v8 = (__int64 *)gpDispInfo;
    goto LABEL_150;
  }
  if ( !(unsigned int)XDCOBJ::bCleanDC(&v49, 0) )
  {
    v15 = v49;
    goto LABEL_146;
  }
  DCOBJ::~DCOBJ((DCOBJ *)&v49);
  if ( !(unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v9 + 8), 2147483666LL, 0LL, 1LL) )
    goto LABEL_149;
  v27 = *(_QWORD *)(v9 + 8);
  *(_DWORD *)(v9 + 64) &= ~0x1000u;
  v28 = 0LL;
  *(_QWORD *)(v9 + 72) = 0LL;
  *(_QWORD *)(v9 + 80) = 0LL;
  v52[0] = 0LL;
  v52[1] = 0LL;
  if ( (unsigned __int16)v27 >= (unsigned int)gcMaxHmgr )
    goto LABEL_86;
  v29 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v27;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v60);
  _m_prefetchw(v29 + 8);
  v30 = (v29[15] & 0x20) == 0;
  v31 = *((_DWORD *)v29 + 2);
  v53 = v31;
  if ( !v30 )
    goto LABEL_116;
  while ( (v29[15] & 0x40) == 0 )
  {
    if ( (v31 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_77:
      _m_prefetchw(v29 + 8);
      v30 = (v29[15] & 0x20) == 0;
      v31 = *((_DWORD *)v29 + 2);
      v53 = v31;
      if ( !v30 )
        goto LABEL_116;
    }
    else
    {
      v54 = v31 | 1;
      if ( v31 != _InterlockedCompareExchange((volatile signed __int32 *)v29 + 2, v31 | 1, v31) || (v29[15] & 0x40) != 0 )
        goto LABEL_77;
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + (unsigned __int16)v27) = 0LL;
      v29[15] |= 0x40u;
      _m_prefetchw(v29 + 8);
      v53 = *((_DWORD *)v29 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v29 + 2, v53);
      v31 = v53;
    }
  }
  ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v27, 0LL);
  if ( v29[14] == 1 && *((_WORD *)v29 + 6) == WORD1(v27) )
  {
    v28 = *(_QWORD *)v29;
    ++*(_DWORD *)(*(_QWORD *)v29 + 8LL);
  }
  if ( (v29[15] & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v27);
  }
  else
  {
    _m_prefetchw(v29 + 8);
    v53 = *((_DWORD *)v29 + 2) & 0xFFFFFFFE;
    _InterlockedExchange((volatile __int32 *)v29 + 2, v53);
  }
  KeLeaveCriticalRegion();
LABEL_86:
  v52[0] = v28;
  if ( v28 )
  {
    *(_DWORD *)(v28 + 36) &= ~0x100000u;
    v32 = *(_DWORD *)(v28 + 36);
    v33 = *(_DWORD **)(v28 + 1512);
    if ( (v32 & 0x100000) != 0 )
    {
      v34 = *(_QWORD *)(v28 + 48);
      if ( v34 )
      {
        if ( v33 )
        {
          v62 = 0LL;
          if ( (v32 & 0x40000) != 0 )
          {
            v36 = *(HSURF *)(v28 + 2512);
            if ( v36 )
            {
              SURFREF::vLock((SURFREF *)&v62, v36);
              v35 = v62;
            }
            else
            {
              v35 = *(_QWORD *)(v34 + 2576);
            }
          }
          else
          {
            v35 = *(_QWORD *)(v28 + 512);
          }
          if ( v35 && ((*(_DWORD *)(v34 + 56) & 0x20000) == 0 || *(int *)(*(_QWORD *)(v28 + 512) + 112LL) >= 0) )
            GreValidateRgnInDCSurfBounds(v28, v35, v33);
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v62);
        }
      }
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)v52);
    SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
    v38 = (unsigned __int16)*(_DWORD *)v52[0];
    v39 = 3 * v38;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v59);
    _m_prefetchw(&SystemArgument2[24 * v38 + 8]);
    v30 = (SystemArgument2[24 * v38 + 15] & 0x20) == 0;
    v40 = *(_DWORD *)&SystemArgument2[24 * v38 + 8];
    v55 = v40;
    while ( v30 )
    {
LABEL_101:
      if ( (SystemArgument2[24 * v38 + 15] & 0x40) != 0 )
      {
        v41 = 8 * v38;
        ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v38, 0LL);
        v42 = v52[0];
        if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v52[0] + 14) == 5
          && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
          && gpentHmgrAltStacks )
        {
          RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v52[0]);
        }
        --*(_DWORD *)(v42 + 8);
        if ( (SystemArgument2[8 * v39 + 15] & 0x40) != 0 )
        {
          ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v41);
        }
        else
        {
          _m_prefetchw(&SystemArgument2[8 * v39 + 8]);
          v55 = *(_DWORD *)&SystemArgument2[8 * v39 + 8] & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)&SystemArgument2[8 * v39 + 8], v55);
        }
        break;
      }
      if ( (v40 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
      }
      else
      {
        v56 = v40 | 1;
        if ( v40 == _InterlockedCompareExchange((volatile signed __int32 *)&SystemArgument2[24 * v38 + 8], v40 | 1, v40)
          && (SystemArgument2[24 * v38 + 15] & 0x40) == 0 )
        {
          *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v38) = 0LL;
          SystemArgument2[24 * v38 + 15] |= 0x40u;
          _m_prefetchw(&SystemArgument2[24 * v38 + 8]);
          v55 = *(_DWORD *)&SystemArgument2[24 * v38 + 8] & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)&SystemArgument2[24 * v38 + 8], v55);
          v40 = v55;
          goto LABEL_101;
        }
      }
      _m_prefetchw(&SystemArgument2[24 * v38 + 8]);
      v30 = (SystemArgument2[24 * v38 + 15] & 0x20) == 0;
      v40 = *(_DWORD *)&SystemArgument2[24 * v38 + 8];
      v55 = v40;
    }
LABEL_116:
    KeLeaveCriticalRegion();
  }
  if ( (*(_DWORD *)(v9 + 64) & 0x4000) != 0 && (int)IsGreSelectRedirectionBitmapSupported_0() >= 0 )
    GreSelectRedirectionBitmap_0();
  if ( ++gnDCECount > 32 && (unsigned int)DestroyCacheDC(v10, *(_QWORD *)(v9 + 8)) )
  {
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
    return 1LL;
  }
  v4 = v61;
LABEL_124:
  v43 = *(_DWORD *)(v9 + 64);
  if ( (v43 & 0xC0) != 0 && ((v43 & 2) != 0 || v4) && (int)IsDeleteHrgnClipSupported_0() >= 0 )
    DeleteHrgnClip_0();
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v8, &LockRelease, v12, ghsemDCVisRgn, L"ghsemDCVisRgn");
  v44 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v45);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v44, &LockRelease, v12, ghsemGreLock, L"ghsemGreLock");
  v46 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion(v47);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v46, &LockRelease, v12, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v48);
  }
  return 0LL;
}
