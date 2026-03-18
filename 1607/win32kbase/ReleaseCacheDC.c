/*
 * XREFs of ReleaseCacheDC @ 0x1C0024AF0
 * Callers:
 *     UserReleaseDC @ 0x1C00206D0 (UserReleaseDC.c)
 *     _ReleaseDC @ 0x1C0021290 (_ReleaseDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C0058B60 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GreSelectRedirectionBitmap_0 @ 0x1C0001018 (GreSelectRedirectionBitmap_0.c)
 *     IsGreSelectRedirectionBitmapSupported_0 @ 0x1C0001030 (IsGreSelectRedirectionBitmapSupported_0.c)
 *     IsGreHintDCWndSupported_0 @ 0x1C0001040 (IsGreHintDCWndSupported_0.c)
 *     GreHintDCWnd_0 @ 0x1C0001048 (GreHintDCWnd_0.c)
 *     IsDeleteHrgnClipSupported_0 @ 0x1C0002448 (IsDeleteHrgnClipSupported_0.c)
 *     DeleteHrgnClip_0 @ 0x1C0002450 (DeleteHrgnClip_0.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported_0 @ 0x1C0002458 (IsFlushWEFCOMPOSITEDDCEBoundsSupported_0.c)
 *     FlushWEFCOMPOSITEDDCEBounds_0 @ 0x1C0002460 (FlushWEFCOMPOSITEDDCEBounds_0.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     GreUnlockVisRgn @ 0x1C00255C0 (GreUnlockVisRgn.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0027218 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00272C0 (--1DCOBJA@@QEAA@XZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0027340 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     DestroyCacheDC @ 0x1C005A3A0 (DestroyCacheDC.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C00BCF30 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00BD350 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C00BD410 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00BD700 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00BD78C (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00C1980 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C00C53B8 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00CB930 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     Template_pqz @ 0x1C00CC378 (Template_pqz.c)
 *     Template_pz @ 0x1C00CC434 (Template_pz.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, int a2, int a3)
{
  int v4; // esi
  HSEMAPHORE v5; // rcx
  struct _ERESOURCE *v6; // rdi
  struct _ERESOURCE *v7; // rdi
  __int64 *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  int v12; // edx
  int v13; // eax
  __int64 v14; // rcx
  signed int v15; // r14d
  HDC v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rsi
  _QWORD *DeferredContext; // r13
  unsigned int v20; // r15d
  __int64 v21; // rbx
  unsigned int v22; // edx
  signed int v23; // ecx
  __int64 v24; // rbx
  char v25; // r12
  _QWORD *v26; // rax
  PVOID v27; // r15
  __int64 v28; // r9
  unsigned int v29; // edx
  signed int v30; // ecx
  __int64 v31; // r9
  unsigned __int16 *v32; // r12
  bool v33; // zf
  int v34; // eax
  unsigned int v35; // esi
  unsigned int v36; // ebx
  __int64 v37; // r8
  unsigned int v38; // edx
  signed int v39; // ecx
  __int64 v40; // r9
  struct DC *v41; // rax
  unsigned int v42; // esi
  unsigned int v43; // ebx
  __int64 v44; // r8
  unsigned int v45; // edx
  signed int v46; // ecx
  __int64 v47; // r9
  _DWORD *v48; // rdx
  int v49; // eax
  __int64 v50; // rsi
  unsigned int v51; // ebx
  __int64 v52; // rdx
  unsigned int v53; // ecx
  __int64 v54; // r10
  bool v55; // bl
  int v56; // eax
  PERESOURCE v57; // rcx
  __int64 v58; // rcx
  PERESOURCE v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  struct DC *v62; // [rsp+30h] [rbp-59h] BYREF
  __int64 v63; // [rsp+38h] [rbp-51h]
  _BYTE v64[32]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v65; // [rsp+60h] [rbp-29h]
  unsigned __int16 *v66; // [rsp+68h] [rbp-21h] BYREF
  int v67; // [rsp+70h] [rbp-19h]
  int v68; // [rsp+74h] [rbp-15h]
  unsigned __int64 v69; // [rsp+80h] [rbp-9h]
  __int64 v70; // [rsp+88h] [rbp-1h]
  __int64 v71; // [rsp+90h] [rbp+7h]
  struct _RECTL v72; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v74; // [rsp+100h] [rbp+77h] BYREF
  struct DC *v75; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = a2;
  v5 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v5, &LockAcquireShared);
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
  v65 = gpDispInfo + 64;
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
    v65 = v10;
    if ( !v9 )
      goto LABEL_19;
  }
  v12 = *(_DWORD *)(v9 + 64);
  if ( v12 < 0 )
  {
    v13 = DestroyCacheDC(v10, *(_QWORD *)(v9 + 8));
    v14 = *(_QWORD *)gpDispInfo;
    if ( v13 )
    {
      GreUnlockVisRgn(v14);
      return 1LL;
    }
    goto LABEL_157;
  }
  if ( (v12 & 0x401800) != 0x1000 )
  {
LABEL_156:
    v14 = *v8;
LABEL_157:
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
    goto LABEL_133;
  v15 = 0;
  if ( (int)IsGreHintDCWndSupported_0() >= 0 )
    GreHintDCWnd_0();
  v16 = *(HDC *)(v9 + 8);
  v62 = 0LL;
  v63 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v64);
  XDCOBJ::vLock((XDCOBJ *)&v62, v16);
  if ( !v62 || !(unsigned int)XDCOBJ::bCleanDC((XDCOBJ *)&v62, 0) )
  {
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v62);
    UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v64);
    goto LABEL_155;
  }
  DCOBJ::~DCOBJ((DCOBJ *)&v62);
  if ( !(unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v9 + 8), 0x80000012, 0, 1) )
  {
LABEL_155:
    v8 = (__int64 *)gpDispInfo;
    goto LABEL_156;
  }
  v17 = *(_QWORD *)(v9 + 8);
  *(_DWORD *)(v9 + 64) &= ~0x1000u;
  v71 = v17;
  *(_QWORD *)(v9 + 72) = 0LL;
  *(_QWORD *)(v9 + 80) = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v64);
  v75 = 0LL;
  v66 = 0LL;
  v18 = (unsigned __int16)v17 | ((unsigned int)v17 >> 8) & 0xFF0000;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v72);
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v20 = v18;
  v67 = 1;
  if ( (unsigned int)v18 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v18,
                                  1)
           + 13) == WORD1(v18) )
        v20 = (unsigned __int16)v17;
    }
    else
    {
      v20 = (unsigned __int16)v17;
    }
  }
  v21 = DeferredContext[2];
  v22 = *(_DWORD *)(v21 + 2056);
  if ( v20 >= v22 + ((*(unsigned __int16 *)(v21 + 2) - 1) << 16) )
    goto LABEL_125;
  if ( v20 >= v22 )
  {
    v23 = ((v20 - v22) >> 16) + 1;
    if ( (v20 - v22) >> 16 == -2 )
      goto LABEL_125;
  }
  else
  {
    v23 = 0;
  }
  v24 = *(_QWORD *)(v21 + 8LL * v23 + 8);
  if ( v23 )
    v20 = v20 - ((v23 - 1) << 16) - v22;
  v25 = 0;
  if ( v20 < *(_DWORD *)(v24 + 20) )
  {
    v70 = 16LL * (unsigned __int8)v20;
    v26 = *(_QWORD **)(v24 + 24);
    v69 = 8 * ((unsigned __int64)v20 >> 8);
    v74 = v70 + *(_QWORD *)(*v26 + v69);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v74, 0LL);
    if ( v20 < *(_DWORD *)(v24 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v24 + 24) + v69) + v70 + 8) )
    {
      v25 = 1;
      *(_DWORD *)(*(_QWORD *)v24 + 24LL * v20 + 8) |= 1u;
    }
    else
    {
      ExReleasePushLockExclusiveEx(v74, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v25 )
    {
      v27 = WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (unsigned int)v18 >= 0x10000 )
      {
        if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                      (unsigned __int16)v18,
                                      1)
               + 13) == WORD1(v18) )
            v18 = (unsigned __int16)v18;
        }
        else
        {
          v18 = (unsigned __int16)v18;
        }
      }
      v28 = *((_QWORD *)v27 + 2);
      v29 = *(_DWORD *)(v28 + 2056);
      if ( (unsigned int)v18 < v29 + ((*(unsigned __int16 *)(v28 + 2) - 1) << 16) )
      {
        if ( (unsigned int)v18 < v29 )
        {
          v30 = 0;
LABEL_61:
          v31 = *(_QWORD *)(v28 + 8LL * v30 + 8);
          if ( v30 )
            v18 = (_DWORD)v18 - ((v30 - 1) << 16) - v29;
          v32 = 0LL;
          if ( (unsigned int)v18 < *(_DWORD *)(v31 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v31 + 24) + 8 * ((unsigned __int64)(unsigned int)v18 >> 8))
                         + 16LL * (unsigned __int8)v18
                         + 8) )
          {
            v32 = (unsigned __int16 *)(*(_QWORD *)v31 + 24 * v18);
          }
LABEL_67:
          v66 = v32;
          _m_prefetchw(v32 + 4);
          v33 = (*((_BYTE *)v32 + 15) & 0x20) == 0;
          v68 = *((_DWORD *)v32 + 2);
          if ( v33 )
          {
            v34 = v67;
          }
          else
          {
            HANDLELOCK::vUnlock((HANDLELOCK *)&v66);
            v34 = v67;
            if ( !v67 )
            {
LABEL_120:
              v62 = v75;
              if ( v75 )
              {
                *((_DWORD *)v75 + 9) &= ~0x100000u;
                AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v74, v62);
                v55 = GrepValidateVisRgn(v62, *((struct REGION **)v62 + 192), (struct ERECTL *)&v72);
                AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v74);
                if ( !v55 )
                {
                  AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)&v75, v62);
                  v74 = *((_QWORD *)v62 + 192);
                  if ( (unsigned int)HmgLockResultBase<DRVOBJ>::operator bool(&v74) )
                    RGNOBJ::vSet((RGNOBJ *)&v74, &v72);
                  AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v75);
                }
              }
              goto LABEL_126;
            }
            v27 = WPP_MAIN_CB.Dpc.DeferredContext;
            v32 = v66;
          }
          if ( !v32 )
          {
            if ( v34 )
              HANDLELOCK::vUnlock((HANDLELOCK *)&v66);
            goto LABEL_120;
          }
          if ( *((_BYTE *)v32 + 14) != 1 || v32[6] != WORD1(v71) )
          {
LABEL_89:
            v42 = *(_DWORD *)v32 & 0xFFFFFF;
            if ( v42 >= 0x10000 )
            {
              if ( *(_DWORD *)v27 > 0x10000u )
              {
                v43 = *v32;
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)v27 + 2),
                                            v43,
                                            1)
                     + 13) == HIWORD(v42) )
                  v42 = v43;
              }
              else
              {
                v42 = *v32;
              }
            }
            v44 = *((_QWORD *)v27 + 2);
            v45 = *(_DWORD *)(v44 + 2056);
            if ( v42 >= v45 + ((*(unsigned __int16 *)(v44 + 2) - 1) << 16) )
              goto LABEL_102;
            if ( v42 >= v45 )
            {
              v46 = ((v42 - v45) >> 16) + 1;
              if ( (v42 - v45) >> 16 == -2 )
                goto LABEL_102;
            }
            else
            {
              v46 = 0;
            }
            v47 = *(_QWORD *)(v44 + 8LL * v46 + 8);
            if ( v46 )
              v42 = v42 - ((v46 - 1) << 16) - v45;
            if ( v42 < *(_DWORD *)(v47 + 20) )
            {
              v48 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v47 + 24) + 8 * ((unsigned __int64)v42 >> 8))
                               + 16LL * (unsigned __int8)v42
                               + 8);
LABEL_103:
              v49 = (unsigned __int16)*v48;
              v50 = v49 | (*v48 >> 8) & 0xFF0000u;
              if ( (unsigned int)v50 >= 0x10000 )
              {
                if ( *(_DWORD *)v27 > 0x10000u )
                {
                  v51 = (unsigned __int16)v49;
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)v27 + 2),
                                              (unsigned __int16)v49,
                                              1)
                       + 13) == WORD1(v50) )
                    v50 = v51;
                }
                else
                {
                  v50 = (unsigned __int16)v49;
                }
                if ( (unsigned int)v50 >= 0x10000 && *(_DWORD *)v27 > 0x10000u )
                  GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v27 + 2), (unsigned __int16)v50, 1);
              }
              v52 = *((_QWORD *)v27 + 2);
              v53 = *(_DWORD *)(v52 + 2056);
              if ( (unsigned int)v50 < v53 + ((*(unsigned __int16 *)(v52 + 2) - 1) << 16) )
              {
                if ( (unsigned int)v50 < v53
                  || (v15 = (((unsigned int)v50 - v53) >> 16) + 1, ((unsigned int)v50 - v53) >> 16 != -2) )
                {
                  v54 = *(_QWORD *)(v52 + 8LL * v15 + 8);
                  if ( v15 )
                    v50 = (_DWORD)v50 - ((v15 - 1) << 16) - v53;
                  *(_DWORD *)(*(_QWORD *)v54 + 24 * v50 + 8) &= ~1u;
                  ExReleasePushLockExclusiveEx(
                    *(_QWORD *)(**(_QWORD **)(v54 + 24) + 8 * ((unsigned __int64)(unsigned int)v50 >> 8))
                  + 16LL * (unsigned __int8)v50,
                    0LL);
                  KeLeaveCriticalRegion();
                }
              }
              KeLeaveCriticalRegion();
              goto LABEL_120;
            }
LABEL_102:
            v48 = 0LL;
            goto LABEL_103;
          }
          v35 = *(_DWORD *)v32 & 0xFFFFFF;
          if ( v35 >= 0x10000 )
          {
            if ( *(_DWORD *)v27 > 0x10000u )
            {
              v36 = *v32;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)v27 + 2),
                                          v36,
                                          1)
                   + 13) == HIWORD(v35) )
                v35 = v36;
            }
            else
            {
              v35 = *v32;
            }
          }
          v37 = *((_QWORD *)v27 + 2);
          v38 = *(_DWORD *)(v37 + 2056);
          if ( v35 >= v38 + ((*(unsigned __int16 *)(v37 + 2) - 1) << 16) )
            goto LABEL_87;
          if ( v35 >= v38 )
          {
            v39 = ((v35 - v38) >> 16) + 1;
            if ( (v35 - v38) >> 16 == -2 )
              goto LABEL_87;
          }
          else
          {
            v39 = 0;
          }
          v40 = *(_QWORD *)(v37 + 8LL * v39 + 8);
          if ( v39 )
            v35 = v35 - ((v39 - 1) << 16) - v38;
          if ( v35 < *(_DWORD *)(v40 + 20) )
          {
            v41 = *(struct DC **)(*(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * ((unsigned __int64)v35 >> 8))
                                + 16LL * (unsigned __int8)v35
                                + 8);
LABEL_88:
            ++*((_DWORD *)v41 + 2);
            v27 = WPP_MAIN_CB.Dpc.DeferredContext;
            v75 = v41;
            goto LABEL_89;
          }
LABEL_87:
          v41 = 0LL;
          goto LABEL_88;
        }
        v30 = (((unsigned int)v18 - v29) >> 16) + 1;
        if ( ((unsigned int)v18 - v29) >> 16 != -2 )
          goto LABEL_61;
      }
      v32 = 0LL;
      goto LABEL_67;
    }
  }
LABEL_125:
  KeLeaveCriticalRegion();
  v62 = 0LL;
LABEL_126:
  DCOBJA::~DCOBJA((DCOBJA *)&v62);
  if ( (*(_DWORD *)(v9 + 64) & 0x4000) != 0 && (int)IsGreSelectRedirectionBitmapSupported_0() >= 0 )
    GreSelectRedirectionBitmap_0();
  if ( ++gnDCECount > 32 && (unsigned int)DestroyCacheDC(v65, *(_QWORD *)(v9 + 8)) )
  {
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
    return 1LL;
  }
  v4 = a2;
LABEL_133:
  v56 = *(_DWORD *)(v9 + 64);
  if ( (v56 & 0xC0) != 0 && ((v56 & 2) != 0 || v4) && (int)IsDeleteHrgnClipSupported_0() >= 0 )
    DeleteHrgnClip_0();
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v8, &LockRelease);
  v57 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v58);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v57, &LockRelease);
  v59 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion(v60);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v59, &LockRelease);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDynamicModeChange);
    PsLeavePriorityRegion(v61);
  }
  return 0LL;
}
