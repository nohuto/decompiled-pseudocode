/*
 * XREFs of ReleaseCacheDC @ 0x1C00357B0
 * Callers:
 *     UserReleaseDC @ 0x1C00118A0 (UserReleaseDC.c)
 *     _ReleaseDC @ 0x1C0035790 (_ReleaseDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C0052BD0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GreSelectRedirectionBitmap_0 @ 0x1C0001018 (GreSelectRedirectionBitmap_0.c)
 *     IsGreSelectRedirectionBitmapSupported_0 @ 0x1C0001030 (IsGreSelectRedirectionBitmapSupported_0.c)
 *     IsGreHintDCWndSupported_0 @ 0x1C0001040 (IsGreHintDCWndSupported_0.c)
 *     GreHintDCWnd_0 @ 0x1C0001048 (GreHintDCWnd_0.c)
 *     IsDeleteHrgnClipSupported_0 @ 0x1C0002440 (IsDeleteHrgnClipSupported_0.c)
 *     DeleteHrgnClip_0 @ 0x1C0002448 (DeleteHrgnClip_0.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported_0 @ 0x1C0002450 (IsFlushWEFCOMPOSITEDDCEBoundsSupported_0.c)
 *     FlushWEFCOMPOSITEDDCEBounds_0 @ 0x1C0002458 (FlushWEFCOMPOSITEDDCEBounds_0.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0035640 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     GreUnlockVisRgn @ 0x1C0038810 (GreUnlockVisRgn.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C003985C (--1DCOBJA@@QEAA@XZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003B190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     DestroyCacheDC @ 0x1C005B4A0 (DestroyCacheDC.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00AF5E0 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00B3D94 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00B3DB8 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C00B7804 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00BE150 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     Template_pqz @ 0x1C00BEC08 (Template_pqz.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, int a2, __int64 a3)
{
  PERESOURCE v5; // rcx
  struct _ERESOURCE *v6; // rdi
  struct _ERESOURCE *v7; // rdi
  __int64 *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rdx
  int v13; // edx
  int v14; // eax
  __int64 v15; // rcx
  struct DC *v16; // rsi
  __int64 v17; // r12
  __int64 v18; // rbx
  bool v19; // zf
  signed __int32 v20; // eax
  bool v21; // bl
  int v22; // eax
  PERESOURCE v23; // rcx
  __int64 v24; // rcx
  PERESOURCE v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  const wchar_t *v28; // [rsp+20h] [rbp-89h]
  _BYTE v29[8]; // [rsp+30h] [rbp-79h] BYREF
  struct DC *v30[2]; // [rsp+38h] [rbp-71h] BYREF
  _BYTE v31[44]; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v32; // [rsp+74h] [rbp-35h]
  int v33; // [rsp+78h] [rbp-31h]
  struct _RECTL v34; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v35[8]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v36[13]; // [rsp+98h] [rbp-11h] BYREF
  __int64 v37; // [rsp+120h] [rbp+77h] BYREF
  char v38; // [rsp+128h] [rbp+7Fh] BYREF

  v5 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
  {
    v28 = L"ghsemDynamicModeChange";
    Template_pz(v5, &LockAcquireShared, a3, ghsemDynamicModeChange);
  }
  v6 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v5);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((_DWORD)v5, a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v7 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v5);
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
    UserSetLastError(1425LL, v11);
    return 2LL;
  }
  while ( *(_QWORD *)(v9 + 8) != a1 )
  {
    v10 = v9;
    v9 = *(_QWORD *)v9;
    if ( !v9 )
      goto LABEL_19;
  }
  v13 = *(_DWORD *)(v9 + 64);
  if ( v13 < 0 )
  {
    v14 = DestroyCacheDC(v10, *(_QWORD *)(v9 + 8));
    v15 = *(_QWORD *)gpDispInfo;
    if ( v14 )
    {
      GreUnlockVisRgn(v15);
      return 1LL;
    }
    goto LABEL_87;
  }
  if ( (v13 & 0x401800) != 0x1000 )
  {
LABEL_86:
    v15 = *v8;
LABEL_87:
    GreUnlockVisRgn(v15);
    return 2LL;
  }
  if ( (v13 & 0x4000) != 0
    && (*(_BYTE *)(*(_QWORD *)(v9 + 32) + 51LL) & 2) != 0
    && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported_0() >= 0 )
  {
    FlushWEFCOMPOSITEDDCEBounds_0();
  }
  if ( (*(_DWORD *)(v9 + 64) & 2) == 0 )
    goto LABEL_63;
  v16 = 0LL;
  if ( (int)IsGreHintDCWndSupported_0() >= 0 )
  {
    LODWORD(v28) = 0;
    GreHintDCWnd_0();
  }
  DCOBJ::DCOBJ((DCOBJ *)v36, *(HDC *)(v9 + 8));
  if ( !v36[0] || !(unsigned int)XDCOBJ::bCleanDC((XDCOBJ *)v36, 0) )
  {
    DCOBJ::~DCOBJ((DCOBJ *)v36);
    goto LABEL_85;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v36);
  if ( !(unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v9 + 8), 2147483666LL, 0LL, 1LL, v28) )
  {
LABEL_85:
    v8 = (__int64 *)gpDispInfo;
    goto LABEL_86;
  }
  *(_DWORD *)(v9 + 64) &= ~0x1000u;
  v17 = *(_QWORD *)(v9 + 8);
  *(_QWORD *)(v9 + 72) = 0LL;
  *(_QWORD *)(v9 + 80) = 0LL;
  v30[0] = 0LL;
  v30[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v31);
  if ( (unsigned __int16)v17 >= (unsigned int)gcMaxHmgr )
    goto LABEL_52;
  v18 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v17;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v35);
  _m_prefetchw((const void *)(v18 + 8));
  v19 = (*(_BYTE *)(v18 + 15) & 0x20) == 0;
  v20 = *(_DWORD *)(v18 + 8);
  v32 = v20;
  if ( !v19 )
  {
LABEL_44:
    KeLeaveCriticalRegion();
    v30[0] = 0LL;
    goto LABEL_57;
  }
  while ( (*(_BYTE *)(v18 + 15) & 0x40) == 0 )
  {
    if ( (v20 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_43:
      _m_prefetchw((const void *)(v18 + 8));
      v19 = (*(_BYTE *)(v18 + 15) & 0x20) == 0;
      v20 = *(_DWORD *)(v18 + 8);
      v32 = v20;
      if ( !v19 )
        goto LABEL_44;
    }
    else
    {
      v33 = v20 | 1;
      if ( v20 != _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 8), v20 | 1, v20)
        || (*(_BYTE *)(v18 + 15) & 0x40) != 0 )
      {
        goto LABEL_43;
      }
      *((_QWORD *)gpentPushLock + (unsigned __int16)v17) = 0LL;
      *(_BYTE *)(v18 + 15) |= 0x40u;
      _m_prefetchw((const void *)(v18 + 8));
      v32 = *(_DWORD *)(v18 + 8) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)(v18 + 8), v32);
      v20 = v32;
    }
  }
  ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * (unsigned __int16)v17, 0LL);
  if ( *(_BYTE *)(v18 + 14) == 1 && *(_WORD *)(v18 + 12) == WORD1(v17) )
  {
    v16 = *(struct DC **)v18;
    ++*(_DWORD *)(*(_QWORD *)v18 + 8LL);
  }
  if ( (*(_BYTE *)(v18 + 15) & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * (unsigned __int16)v17, 0LL);
  }
  else
  {
    _m_prefetchw((const void *)(v18 + 8));
    v32 = *(_DWORD *)(v18 + 8) & 0xFFFFFFFE;
    _InterlockedExchange((volatile __int32 *)(v18 + 8), v32);
  }
  KeLeaveCriticalRegion();
LABEL_52:
  v30[0] = v16;
  if ( v16 )
  {
    *((_DWORD *)v16 + 9) &= ~0x100000u;
    AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v38, v30[0]);
    v21 = GrepValidateVisRgn(v30[0], *((struct REGION **)v30[0] + 192), (struct ERECTL *)&v34);
    AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v38);
    if ( !v21 )
    {
      AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)v29, v30[0]);
      v37 = *((_QWORD *)v30[0] + 192);
      if ( HmgLockResultBase<DRVOBJ>::operator bool(&v37) )
        RGNOBJ::vSet((RGNOBJ *)&v37, &v34);
      AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v29);
    }
  }
LABEL_57:
  DCOBJA::~DCOBJA((DCOBJA *)v30);
  if ( (*(_DWORD *)(v9 + 64) & 0x4000) != 0 && (int)IsGreSelectRedirectionBitmapSupported_0() >= 0 )
    GreSelectRedirectionBitmap_0();
  if ( ++gnDCECount > 32 && (unsigned int)DestroyCacheDC(v10, *(_QWORD *)(v9 + 8)) )
  {
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
    return 1LL;
  }
LABEL_63:
  v22 = *(_DWORD *)(v9 + 64);
  if ( (v22 & 0xC0) != 0 && ((v22 & 2) != 0 || a2) && (int)IsDeleteHrgnClipSupported_0() >= 0 )
    DeleteHrgnClip_0();
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v8, &LockRelease, a3, ghsemDCVisRgn);
  v23 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v24);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v23, &LockRelease, a3, ghsemGreLock);
  v25 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion(v26);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v25, &LockRelease, a3, ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v27);
  }
  return 0LL;
}
