/*
 * XREFs of _GetDCEx @ 0x1C0036B60
 * Callers:
 *     _GetDC @ 0x1C0015140 (_GetDC.c)
 *     NtUserGetDC @ 0x1C0033CE0 (NtUserGetDC.c)
 *     UserGetDesktopDC @ 0x1C0044A2C (UserGetDesktopDC.c)
 *     UserGetMonitorDC @ 0x1C0053DE0 (UserGetMonitorDC.c)
 * Callees:
 *     GreSelectFont_0 @ 0x1C0001010 (GreSelectFont_0.c)
 *     GreSelectRedirectionBitmap_0 @ 0x1C0001018 (GreSelectRedirectionBitmap_0.c)
 *     IsGreSelectRedirectionBitmapSupported_0 @ 0x1C0001030 (IsGreSelectRedirectionBitmapSupported_0.c)
 *     IsGreSelectFontSupported_0 @ 0x1C0001038 (IsGreSelectFontSupported_0.c)
 *     IsGreHintDCWndSupported_0 @ 0x1C0001040 (IsGreHintDCWndSupported_0.c)
 *     GreHintDCWnd_0 @ 0x1C0001048 (GreHintDCWnd_0.c)
 *     IsGetLayeredOrRedirectedParentSupported_0 @ 0x1C0002400 (IsGetLayeredOrRedirectedParentSupported_0.c)
 *     GetLayeredOrRedirectedParent_0 @ 0x1C0002408 (GetLayeredOrRedirectedParent_0.c)
 *     IsGetRedirectionBitmapSupported_0 @ 0x1C0002410 (IsGetRedirectionBitmapSupported_0.c)
 *     GetRedirectionBitmap_0 @ 0x1C0002418 (GetRedirectionBitmap_0.c)
 *     IsCalcVisRgnSupported_0 @ 0x1C0002420 (IsCalcVisRgnSupported_0.c)
 *     CalcVisRgn_0 @ 0x1C0002428 (CalcVisRgn_0.c)
 *     IsDeleteHrgnClipSupported_0 @ 0x1C0002440 (IsDeleteHrgnClipSupported_0.c)
 *     DeleteHrgnClip_0 @ 0x1C0002448 (DeleteHrgnClip_0.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported_0 @ 0x1C0002450 (IsFlushWEFCOMPOSITEDDCEBoundsSupported_0.c)
 *     FlushWEFCOMPOSITEDDCEBounds_0 @ 0x1C0002458 (FlushWEFCOMPOSITEDDCEBounds_0.c)
 *     IsSpbCheckDceSupported_0 @ 0x1C0002460 (IsSpbCheckDceSupported_0.c)
 *     SpbCheckDce_0 @ 0x1C0002468 (SpbCheckDce_0.c)
 *     HmgShareLock @ 0x1C0004350 (HmgShareLock.c)
 *     HmgMarkUndeletable @ 0x1C000F910 (HmgMarkUndeletable.c)
 *     GreSetLayout @ 0x1C0012430 (GreSetLayout.c)
 *     GreGetStockObject @ 0x1C00332C0 (GreGetStockObject.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0035640 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     GreUnlockVisRgn @ 0x1C0038810 (GreUnlockVisRgn.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C003985C (--1DCOBJA@@QEAA@XZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C003BB20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     SetRectRgnIndirect @ 0x1C0041D40 (SetRectRgnIndirect.c)
 *     GreCreateRectRgnIndirect @ 0x1C0042990 (GreCreateRectRgnIndirect.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00433D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSelectVisRgn @ 0x1C0044570 (GreSelectVisRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C0045250 (CreateEmptyRgnPublic.c)
 *     GreIsRendering @ 0x1C00546A0 (GreIsRendering.c)
 *     GreOffsetRgn @ 0x1C0054700 (GreOffsetRgn.c)
 *     CreateCacheDC @ 0x1C0054910 (CreateCacheDC.c)
 *     DestroyCacheDC @ 0x1C005B4A0 (DestroyCacheDC.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00AF5E0 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B3150 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00B3D94 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00B3DB8 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C00B7804 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00BE150 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     GreMarkUndeletableRgn @ 0x1C00BE4A8 (GreMarkUndeletableRgn.c)
 *     Template_pqz @ 0x1C00BEC08 (Template_pqz.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

__int64 __fastcall GetDCEx(__int64 a1, HRGN a2, __int64 a3)
{
  PERESOURCE v3; // r9
  unsigned int v4; // r12d
  HRGN v5; // r13
  const wchar_t *v6; // rcx
  struct _ERESOURCE *v7; // rbx
  const wchar_t *v8; // rcx
  struct _ERESOURCE *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rcx
  char v16; // al
  int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  PERESOURCE v21; // r9
  int v22; // esi
  struct _ERESOURCE *v23; // rbx
  struct _ERESOURCE *v24; // rbx
  __int64 *v25; // rdi
  __int64 v26; // rbx
  int v27; // eax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE v29; // rcx
  __int64 v30; // rcx
  PERESOURCE v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  char v35; // al
  __int64 v36; // rax
  char v37; // al
  __int64 LayeredOrRedirectedParent_0; // rax
  __int64 v39; // rdi
  HRGN v40; // rdx
  __int64 v41; // rcx
  unsigned __int8 v42; // dl
  unsigned int v43; // edi
  __int64 *v44; // r13
  __int64 *v45; // r12
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // r14
  __int64 v50; // rbx
  bool v51; // zf
  signed __int32 v52; // eax
  __int64 *v53; // r14
  __int64 *v54; // r12
  __int64 v55; // r15
  __int64 v56; // rsi
  __int64 v57; // rbx
  signed __int32 v58; // eax
  int v59; // ebx
  int v60; // eax
  int v61; // ebx
  __int64 v62; // r14
  struct DC *v63; // rsi
  __int64 v64; // rbx
  signed __int32 v65; // eax
  __int64 v66; // rbx
  struct DC *v67; // rax
  bool v68; // bl
  bool v69; // bl
  unsigned int v70; // edi
  __int64 v71; // rax
  __int64 v72; // rcx
  HRGN v73; // rax
  __int64 RectRgnIndirect; // rax
  __int64 v75; // rcx
  HRGN v76; // rax
  int v77; // r13d
  __int64 v78; // r14
  __int64 v79; // rsi
  __int64 v80; // rbx
  signed __int32 v81; // eax
  __int64 v82; // rdx
  unsigned __int64 v83; // xmm1_8
  _DWORD *v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // rbx
  signed __int32 v87; // eax
  __int64 v88; // rdi
  __int64 v89; // rbx
  __int64 *v90; // rax
  __int64 v91; // r14
  struct DC *v92; // rsi
  __int64 v93; // rbx
  signed __int32 v94; // eax
  bool v96; // bl
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  PERESOURCE v106; // rcx
  __int64 v107; // rcx
  PERESOURCE v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rcx
  const wchar_t *v111; // [rsp+20h] [rbp-E0h]
  const wchar_t *v112; // [rsp+20h] [rbp-E0h]
  __int64 v113; // [rsp+20h] [rbp-E0h]
  __int64 v114; // [rsp+28h] [rbp-D8h]
  __int64 v115; // [rsp+28h] [rbp-D8h]
  __int64 v116; // [rsp+28h] [rbp-D8h]
  __int64 v118; // [rsp+38h] [rbp-C8h]
  int v119; // [rsp+40h] [rbp-C0h]
  __int64 v120; // [rsp+48h] [rbp-B8h]
  __int64 v121; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v122; // [rsp+68h] [rbp-98h] BYREF
  __int64 v123; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v124[2]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v125[32]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v126[20]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v127; // [rsp+BCh] [rbp-44h]
  int v128; // [rsp+C0h] [rbp-40h]
  _BYTE v129[20]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v130; // [rsp+DCh] [rbp-24h]
  int v131; // [rsp+E0h] [rbp-20h]
  char v132[8]; // [rsp+E8h] [rbp-18h] BYREF
  char v133[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v134[20]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v135; // [rsp+10Ch] [rbp+Ch]
  int v136; // [rsp+110h] [rbp+10h]
  unsigned int v137; // [rsp+124h] [rbp+24h]
  int v138; // [rsp+128h] [rbp+28h]
  unsigned int v139; // [rsp+13Ch] [rbp+3Ch]
  int v140; // [rsp+140h] [rbp+40h]
  __int64 v141; // [rsp+148h] [rbp+48h]
  struct DC *v142[2]; // [rsp+150h] [rbp+50h] BYREF
  char v143[32]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v144[20]; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v145; // [rsp+194h] [rbp+94h]
  int v146; // [rsp+198h] [rbp+98h]
  struct DC *v147[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v148[32]; // [rsp+1B0h] [rbp+B0h] BYREF
  struct DC *v149[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  char v150[32]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v151[2]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v152[32]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v153[2]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v154[32]; // [rsp+240h] [rbp+140h] BYREF
  char v155[8]; // [rsp+260h] [rbp+160h] BYREF
  struct _RECTL v156; // [rsp+268h] [rbp+168h] BYREF
  char v157[8]; // [rsp+278h] [rbp+178h] BYREF
  struct _RECTL v158; // [rsp+280h] [rbp+180h] BYREF
  char v159[8]; // [rsp+290h] [rbp+190h] BYREF
  char v160[8]; // [rsp+298h] [rbp+198h] BYREF
  char v161[8]; // [rsp+2A0h] [rbp+1A0h] BYREF
  struct _RECTL v162; // [rsp+2A8h] [rbp+1A8h] BYREF
  char v163[16]; // [rsp+2B8h] [rbp+1B8h] BYREF
  unsigned int v164; // [rsp+310h] [rbp+210h]
  HRGN EmptyRgnPublic; // [rsp+318h] [rbp+218h]
  unsigned int v166; // [rsp+320h] [rbp+220h]
  int v167; // [rsp+328h] [rbp+228h]

  v166 = a3;
  EmptyRgnPublic = a2;
  v3 = ghsemDynamicModeChange;
  v4 = a3;
  v120 = 0LL;
  v5 = a2;
  v167 = 0;
  v119 = 0;
  if ( ghsemDynamicModeChange )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    v3 = ghsemDynamicModeChange;
  }
  v6 = L"ghsemDynamicModeChange";
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
  {
    v111 = L"ghsemDynamicModeChange";
    Template_pz(L"ghsemDynamicModeChange", &LockAcquireShared, a3, v3);
  }
  v7 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v6);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
    LODWORD(v7) = (_DWORD)ghsemGreLock;
  }
  v8 = L"ghsemGreLock";
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((unsigned int)L"ghsemGreLock", (_DWORD)a2, a3, (_DWORD)v7, 2, (__int64)L"ghsemGreLock");
  v9 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v8);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
    LODWORD(v9) = (_DWORD)ghsemDCVisRgn;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((unsigned int)L"ghsemDCVisRgn", (_DWORD)a2, a3, (_DWORD)v9, 3, (__int64)L"ghsemDCVisRgn");
  v10 = a1;
  if ( !a1 )
  {
    v11 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 416) + 8LL) + 16LL);
    a1 = v10;
  }
  v13 = 0LL;
  v118 = v10;
  v14 = v10;
  v15 = v10;
  if ( v10 )
  {
    while ( 1 )
    {
      v16 = *(_BYTE *)(v15 + 55);
      if ( (v16 & 0x10) == 0 || (v16 & 0x20) != 0 && v15 != v10 )
        break;
      if ( (*(_WORD *)(v15 + 66) & 0x3FFF) != 0x29D )
      {
        v15 = *(_QWORD *)(v15 + 88);
        if ( v15 )
          continue;
      }
      goto LABEL_26;
    }
    v17 = 0;
  }
  else
  {
LABEL_26:
    v17 = 1;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15, 1LL, a3, v3, v111, v114) + 12) & 0x200) != 0 )
  {
    v21 = ghsemDynamicModeChange;
    v22 = 1;
    if ( ghsemDynamicModeChange )
    {
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
      v21 = ghsemDynamicModeChange;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    {
      v112 = L"ghsemDynamicModeChange";
      Template_pz(v19, &LockAcquireShared, v20, v21);
    }
    v23 = ghsemGreLock;
    if ( ghsemGreLock )
    {
      PsEnterPriorityRegion(v19);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v23);
      LODWORD(v23) = (_DWORD)ghsemGreLock;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pqz(v19, v18, v20, (_DWORD)v23, 2, (__int64)L"ghsemGreLock");
    v24 = ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      PsEnterPriorityRegion(v19);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v24);
      LODWORD(v24) = (_DWORD)ghsemDCVisRgn;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pqz(v19, v18, v20, (_DWORD)v24, 3, (__int64)L"ghsemDCVisRgn");
    v25 = (__int64 *)(gpDispInfo + 64);
    v26 = *(_QWORD *)(gpDispInfo + 64);
    if ( !v26 )
      goto LABEL_54;
    do
    {
      v27 = *(_DWORD *)(v26 + 64);
      if ( v27 >= 0 )
      {
        if ( (v27 & 0x400000) != 0 )
          DestroyCacheDC(v25, *(_QWORD *)(v26 + 8));
      }
      else if ( *(_QWORD *)(v26 + 80) == PsGetCurrentProcessWin32Process(v19, v18, v20, v21, v112, v115) )
      {
        v22 = 0;
      }
      if ( v26 == *v25 )
        v25 = (__int64 *)v26;
      v26 = *v25;
    }
    while ( *v25 );
    if ( v22 )
    {
LABEL_54:
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19, v18, v20, v21, v112, v115);
      *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    {
      v112 = L"ghsemDCVisRgn";
      Template_pz(v19, &LockRelease, v20, ghsemDCVisRgn);
    }
    v29 = ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
      PsLeavePriorityRegion(v30);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    {
      v112 = L"ghsemGreLock";
      Template_pz(v29, &LockRelease, v20, ghsemGreLock);
    }
    v31 = ghsemGreLock;
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
      PsLeavePriorityRegion(v32);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    {
      v112 = L"ghsemDynamicModeChange";
      Template_pz(v31, &LockRelease, v20, ghsemDynamicModeChange);
    }
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion(v33);
    }
    v14 = v118;
    v10 = a1;
  }
  if ( (v4 & 0x10000) == 0 )
    goto LABEL_91;
  v4 &= 0xFFFFFFC7;
  v166 = v4;
  if ( (v4 & 1) != 0 )
  {
    if ( (*(_BYTE *)(v10 + 55) & 4) != 0 )
      v4 |= 0x10u;
  }
  else
  {
    v34 = *(_QWORD *)(v10 + 152);
    v35 = *(_BYTE *)(v34 + 84);
    if ( v35 < 0 )
    {
      v4 |= 0x20u;
      v166 = v4;
    }
    if ( (v4 & 2) == 0 && (v35 & 0x20) == 0 )
    {
      if ( (v35 & 0x40) != 0 )
      {
        v36 = *(_QWORD *)(v34 + 24);
        if ( v36 )
          v13 = *(_QWORD *)(v36 + 8);
      }
      else
      {
        v4 |= 2u;
        v166 = v4;
      }
    }
    v37 = *(_BYTE *)(v10 + 55);
    if ( (v37 & 2) != 0 )
    {
      v4 |= 8u;
      v166 = v4;
    }
    if ( (v37 & 4) != 0 )
    {
      v4 |= 0x10u;
      v166 = v4;
    }
    if ( (v37 & 0x20) == 0 )
      goto LABEL_91;
    v4 &= ~8u;
    v166 = v4;
    if ( !*(_QWORD *)(v34 + 112) )
      goto LABEL_91;
  }
  v4 |= 2u;
  v166 = v4;
LABEL_91:
  if ( (v4 & 0x80000) != 0 )
  {
    v4 = v4 & 0xFFFFFFD5 | 2;
    v166 = v4;
  }
  if ( (int)IsGetLayeredOrRedirectedParentSupported_0() >= 0 )
  {
    LayeredOrRedirectedParent_0 = GetLayeredOrRedirectedParent_0();
    v39 = LayeredOrRedirectedParent_0;
    if ( LayeredOrRedirectedParent_0 )
    {
      if ( (*(_DWORD *)(LayeredOrRedirectedParent_0 + 48) & 0x20000000) != 0
        && ((int)IsGetRedirectionBitmapSupported_0() >= 0 && GetRedirectionBitmap_0()
         || (*(_BYTE *)(v39 + 50) & 0x20) != 0) )
      {
        v4 |= 0x4000u;
        v120 = v39;
        v166 = v4;
        if ( v10 == v39 && (v4 & 0x20) != 0 )
        {
          v4 = v4 & 0xFFFFFFDD | 2;
          v166 = v4;
        }
        if ( (unsigned __int64)v5 > 2 )
        {
          if ( (v4 & 0x40000) != 0 )
          {
            EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
            v40 = v5;
            v5 = EmptyRgnPublic;
            GreCombineRgn(EmptyRgnPublic, v40, 0LL);
            v10 = a1;
            v4 &= ~0x40000u;
            v166 = v4;
          }
          GreOffsetRgn(v5);
        }
      }
    }
  }
  if ( (v4 & 0x20) != 0 )
  {
    v41 = *(_QWORD *)(v10 + 88);
    if ( !v41 )
      v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 416) + 8LL) + 16LL);
    v4 |= 2u;
    v166 = v4;
    if ( (v4 & 0x18) == 0 && ((*(_BYTE *)(v10 + 45) & 1) != 0 || (*(_BYTE *)(v41 + 55) & 2) == 0) )
    {
      v42 = *(_BYTE *)(v41 + 55);
      if ( ((v42 ^ *(_BYTE *)(v10 + 55)) & 0x10) == 0 )
      {
        v4 &= 0xFFFFFFE7;
        v118 = v41;
        v166 = v4;
        v14 = v41;
        if ( (v42 & 4) != 0 )
        {
          v4 |= 0x10u;
          v166 = v4;
        }
      }
    }
  }
  if ( (v4 & 2) == 0 && (!v10 || *(_QWORD *)(v10 + 16) != W32GetThreadWin32Thread(KeGetCurrentThread())) )
  {
    v4 |= 2u;
    v166 = v4;
  }
  v43 = v4 & 0x8080441F;
  v164 = v4 & 0x8080441F;
  if ( (v4 & 2) == 0 )
  {
    v44 = (__int64 *)(gpDispInfo + 64);
    v45 = *(__int64 **)(gpDispInfo + 64);
    if ( !v45 )
      goto LABEL_338;
    while ( (v45[8] & 0x400002) != 0 || (unsigned int)GreIsRendering((HDC)v45[1]) || v45[2] != v10 && v45[1] != v13 )
    {
      v44 = v45;
      v45 = (__int64 *)*v45;
      if ( !v45 )
        goto LABEL_338;
    }
    if ( v45[7] && (v166 & 0xC0) != 0 && (int)IsDeleteHrgnClipSupported_0() >= 0 )
      DeleteHrgnClip_0();
    if ( (v45[8] & 0x4000) != 0 )
    {
      if ( (*(_BYTE *)(v45[4] + 51) & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported_0() >= 0 )
        FlushWEFCOMPOSITEDDCEBounds_0();
      if ( (int)IsGreSelectRedirectionBitmapSupported_0() >= 0 )
        GreSelectRedirectionBitmap_0();
    }
    v46 = a1;
    if ( v45[2] == a1
      && v45[4] == v120
      && v45[3] == v14
      && v17
      && ((v166 ^ *((_DWORD *)v45 + 16)) & 0x4000) == 0
      && (v45[8] & 0x10000000) == 0 )
    {
      goto LABEL_212;
    }
    goto LABEL_223;
  }
  v141 = v17;
  while ( 2 )
  {
    v47 = gpDispInfo;
    v45 = *(__int64 **)(gpDispInfo + 64);
    v44 = (__int64 *)(gpDispInfo + 64);
    if ( v45 )
    {
      while ( 1 )
      {
        if ( v45[3] != v14 || v45[4] != v120 || v45[11] )
          goto LABEL_165;
        v48 = v45[1];
        v153[0] = 0LL;
        v153[1] = 0LL;
        UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v154);
        v49 = 0LL;
        if ( (unsigned __int16)v48 >= (unsigned int)gcMaxHmgr )
          goto LABEL_183;
        v50 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
        PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v159);
        _m_prefetchw((const void *)(v50 + 24LL * (unsigned __int16)v48 + 8));
        v51 = (*(_BYTE *)(v50 + 24LL * (unsigned __int16)v48 + 15) & 0x20) == 0;
        v52 = *(_DWORD *)(v50 + 24LL * (unsigned __int16)v48 + 8);
        v137 = v52;
        if ( !v51 )
        {
LABEL_158:
          KeLeaveCriticalRegion();
          v153[0] = 0LL;
          goto LABEL_159;
        }
        while ( (*(_BYTE *)(v50 + 24LL * (unsigned __int16)v48 + 15) & 0x40) == 0 )
        {
          if ( (v52 & 1) != 0 )
          {
            KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_157:
            _m_prefetchw((const void *)(v50 + 24LL * (unsigned __int16)v48 + 8));
            v51 = (*(_BYTE *)(v50 + 24LL * (unsigned __int16)v48 + 15) & 0x20) == 0;
            v52 = *(_DWORD *)(v50 + 24LL * (unsigned __int16)v48 + 8);
            v137 = v52;
            if ( !v51 )
              goto LABEL_158;
          }
          else
          {
            v138 = v52 | 1;
            if ( v52 != _InterlockedCompareExchange(
                          (volatile signed __int32 *)(v50 + 24LL * (unsigned __int16)v48 + 8),
                          v52 | 1,
                          v52)
              || (*(_BYTE *)(v50 + 24LL * (unsigned __int16)v48 + 15) & 0x40) != 0 )
            {
              goto LABEL_157;
            }
            *((_QWORD *)gpentPushLock + (unsigned __int16)v48) = 0LL;
            *(_BYTE *)(v50 + 24LL * (unsigned __int16)v48 + 15) |= 0x40u;
            _m_prefetchw((const void *)(v50 + 24LL * (unsigned __int16)v48 + 8));
            v137 = *(_DWORD *)(v50 + 24LL * (unsigned __int16)v48 + 8) & 0xFFFFFFFE;
            _InterlockedExchange((volatile __int32 *)(v50 + 24LL * (unsigned __int16)v48 + 8), v137);
            v52 = v137;
          }
        }
        ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * (unsigned __int16)v48, 0LL);
        if ( *(_BYTE *)(v50 + 24LL * (unsigned __int16)v48 + 14) == 1
          && *(_WORD *)(v50 + 24LL * (unsigned __int16)v48 + 12) == WORD1(v48) )
        {
          v49 = *(_QWORD *)(v50 + 24LL * (unsigned __int16)v48);
          ++*(_DWORD *)(v49 + 8);
        }
        if ( (*(_BYTE *)(v50 + 24LL * (unsigned __int16)v48 + 15) & 0x40) != 0 )
        {
          ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * (unsigned __int16)v48, 0LL);
        }
        else
        {
          _m_prefetchw((const void *)(v50 + 24LL * (unsigned __int16)v48 + 8));
          v137 = *(_DWORD *)(v50 + 24LL * (unsigned __int16)v48 + 8) & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)(v50 + 24LL * (unsigned __int16)v48 + 8), v137);
        }
        KeLeaveCriticalRegion();
        v43 = v164;
        v14 = v118;
LABEL_183:
        v153[0] = v49;
        if ( v49 )
        {
          v59 = *(_DWORD *)(v49 + 40);
          DCOBJA::~DCOBJA((DCOBJA *)v153);
          if ( (v59 & 1) == 0 )
            goto LABEL_160;
          goto LABEL_165;
        }
LABEL_159:
        UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v154);
        v43 = v164;
LABEL_160:
        v14 = v118;
        if ( v43 == (v45[8] & 0x80C05C1F)
          && ((*(_BYTE *)(v118 + 55) & 0x20) == 0 || v45[2] == v45[3])
          && (!v141 || (v45[8] & 0x10000000) == 0) )
        {
          *((_DWORD *)v45 + 16) |= 0x1000u;
          v46 = a1;
          if ( a1 != v45[2] )
          {
            if ( (int)IsSpbCheckDceSupported_0() >= 0 )
              SpbCheckDce_0();
            v45[2] = a1;
            ResetOrg(0LL, (struct tagDCE *)v45, 0);
          }
          goto LABEL_212;
        }
LABEL_165:
        v44 = v45;
        v45 = (__int64 *)*v45;
        if ( !v45 )
        {
          v47 = gpDispInfo;
          break;
        }
      }
    }
    v53 = *(__int64 **)(v47 + 64);
    v44 = (__int64 *)(v47 + 64);
    v54 = 0LL;
    if ( !v53 )
      goto LABEL_195;
    do
    {
      if ( (v53[8] & 0x400002) != 2 )
        goto LABEL_194;
      v55 = v53[1];
      v151[0] = 0LL;
      v151[1] = 0LL;
      UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v152);
      v56 = 0LL;
      if ( (unsigned __int16)v55 >= (unsigned int)gcMaxHmgr )
        goto LABEL_205;
      v57 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v55;
      PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v157);
      _m_prefetchw((const void *)(v57 + 8));
      v51 = (*(_BYTE *)(v57 + 15) & 0x20) == 0;
      v58 = *(_DWORD *)(v57 + 8);
      v145 = v58;
      if ( !v51 )
      {
LABEL_188:
        KeLeaveCriticalRegion();
        v151[0] = 0LL;
LABEL_189:
        UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v152);
        goto LABEL_190;
      }
      while ( (*(_BYTE *)(v57 + 15) & 0x40) == 0 )
      {
        if ( (v58 & 1) != 0 )
        {
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_187:
          _m_prefetchw((const void *)(v57 + 8));
          v51 = (*(_BYTE *)(v57 + 15) & 0x20) == 0;
          v58 = *(_DWORD *)(v57 + 8);
          v145 = v58;
          if ( !v51 )
            goto LABEL_188;
        }
        else
        {
          v146 = v58 | 1;
          if ( v58 != _InterlockedCompareExchange((volatile signed __int32 *)(v57 + 8), v58 | 1, v58)
            || (*(_BYTE *)(v57 + 15) & 0x40) != 0 )
          {
            goto LABEL_187;
          }
          *((_QWORD *)gpentPushLock + (unsigned __int16)v55) = 0LL;
          *(_BYTE *)(v57 + 15) |= 0x40u;
          _m_prefetchw((const void *)(v57 + 8));
          v145 = *(_DWORD *)(v57 + 8) & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)(v57 + 8), v145);
          v58 = v145;
        }
      }
      ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * (unsigned __int16)v55, 0LL);
      if ( *(_BYTE *)(v57 + 14) == 1 && *(_WORD *)(v57 + 12) == WORD1(v55) )
      {
        v56 = *(_QWORD *)v57;
        ++*(_DWORD *)(*(_QWORD *)v57 + 8LL);
      }
      if ( (*(_BYTE *)(v57 + 15) & 0x40) != 0 )
      {
        ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * (unsigned __int16)v55, 0LL);
      }
      else
      {
        _m_prefetchw((const void *)(v57 + 8));
        v145 = *(_DWORD *)(v57 + 8) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)(v57 + 8), v145);
      }
      KeLeaveCriticalRegion();
LABEL_205:
      v151[0] = v56;
      if ( !v56 )
        goto LABEL_189;
      v61 = *(_DWORD *)(v56 + 40);
      DCOBJA::~DCOBJA((DCOBJA *)v151);
      if ( (v61 & 1) != 0 )
        goto LABEL_194;
LABEL_190:
      if ( v53[11] )
        goto LABEL_194;
      v60 = *((_DWORD *)v53 + 16);
      if ( (v60 & 0x800) != 0 )
        goto LABEL_222;
      if ( (v60 & 0x1000) == 0 )
        v54 = v44;
LABEL_194:
      v44 = v53;
      v53 = (__int64 *)*v53;
    }
    while ( v53 );
LABEL_195:
    v44 = v54;
    if ( !v54 )
    {
      if ( !CreateCacheDC(a1, v166 & 0x4000 | 0x802, 0LL) )
        goto LABEL_338;
      v43 = v164;
      v14 = v118;
      continue;
    }
    break;
  }
LABEL_222:
  v45 = (__int64 *)*v44;
  v43 = v164;
  v14 = v118;
  v46 = a1;
  do
  {
LABEL_223:
    v119 = 1;
    if ( (v45[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported_0() >= 0 )
      SpbCheckDce_0();
    v66 = v45[1];
    v149[0] = 0LL;
    *((_DWORD *)v45 + 16) = v43 | 0x1000;
    v149[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v150);
    v67 = (struct DC *)HmgShareLock(v66, 1);
    v149[0] = v67;
    if ( v67 )
    {
      *((_DWORD *)v67 + 9) &= ~0x100000u;
      AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v144, v149[0]);
      v68 = GrepValidateVisRgn(v149[0], *((struct REGION **)v149[0] + 192), (struct ERECTL *)&v158);
      AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v144);
      if ( !v68 )
      {
        AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)v129, v149[0]);
        v123 = *((_QWORD *)v149[0] + 192);
        if ( HmgLockResultBase<DRVOBJ>::operator bool(&v123) )
          RGNOBJ::vSet((RGNOBJ *)&v123, &v158);
        AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v129);
      }
    }
    DCOBJA::~DCOBJA((DCOBJA *)v149);
    if ( (int)IsCalcVisRgnSupported_0() < 0 || !(unsigned int)CalcVisRgn_0() )
      *((_DWORD *)v45 + 16) |= 0x10000000u;
    v45[4] = v120;
    v45[2] = v46;
    v45[3] = v14;
    v45[5] = 0LL;
    v45[6] = 0LL;
    ResetOrg(0LL, (struct tagDCE *)v45, 1);
    v167 = 1;
LABEL_212:
    ;
  }
  while ( (v45[8] & 0x8080441F) != v43 );
  if ( v45 != *(__int64 **)(gpDispInfo + 64) )
  {
    *v44 = *v45;
    *v45 = *(_QWORD *)(gpDispInfo + 64);
    *(_QWORD *)(gpDispInfo + 64) = v45;
  }
  v62 = v45[1];
  v147[0] = 0LL;
  v147[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v148);
  v63 = 0LL;
  if ( (unsigned __int16)v62 >= (unsigned int)gcMaxHmgr )
  {
LABEL_245:
    v147[0] = v63;
    if ( v63 )
    {
      *((_DWORD *)v63 + 9) &= ~0x100000u;
      AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v132, v147[0]);
      v69 = GrepValidateVisRgn(v147[0], *((struct REGION **)v147[0] + 192), (struct ERECTL *)&v162);
      AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v132);
      if ( !v69 )
      {
        AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)v126, v147[0]);
        v121 = *((_QWORD *)v147[0] + 192);
        if ( HmgLockResultBase<DRVOBJ>::operator bool(&v121) )
          RGNOBJ::vSet((RGNOBJ *)&v121, &v162);
        AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v126);
      }
    }
  }
  else
  {
    v64 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v62;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v155);
    _m_prefetchw((const void *)(v64 + 8));
    v51 = (*(_BYTE *)(v64 + 15) & 0x20) == 0;
    v65 = *(_DWORD *)(v64 + 8);
    v127 = v65;
    if ( v51 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(v64 + 15) & 0x40) != 0 )
          {
            ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * (unsigned __int16)v62, 0LL);
            if ( *(_BYTE *)(v64 + 14) == 1 && *(_WORD *)(v64 + 12) == WORD1(v62) )
            {
              v63 = *(struct DC **)v64;
              ++*(_DWORD *)(*(_QWORD *)v64 + 8LL);
            }
            if ( (*(_BYTE *)(v64 + 15) & 0x40) != 0 )
            {
              ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * (unsigned __int16)v62, 0LL);
            }
            else
            {
              _m_prefetchw((const void *)(v64 + 8));
              v127 = *(_DWORD *)(v64 + 8) & 0xFFFFFFFE;
              _InterlockedExchange((volatile __int32 *)(v64 + 8), v127);
            }
            KeLeaveCriticalRegion();
            goto LABEL_245;
          }
          if ( (v65 & 1) == 0 )
            break;
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_236:
          _m_prefetchw((const void *)(v64 + 8));
          v51 = (*(_BYTE *)(v64 + 15) & 0x20) == 0;
          v65 = *(_DWORD *)(v64 + 8);
          v127 = v65;
          if ( !v51 )
            goto LABEL_237;
        }
        v128 = v65 | 1;
        if ( v65 != _InterlockedCompareExchange((volatile signed __int32 *)(v64 + 8), v65 | 1, v65)
          || (*(_BYTE *)(v64 + 15) & 0x40) != 0 )
        {
          goto LABEL_236;
        }
        *((_QWORD *)gpentPushLock + (unsigned __int16)v62) = 0LL;
        *(_BYTE *)(v64 + 15) |= 0x40u;
        _m_prefetchw((const void *)(v64 + 8));
        v127 = *(_DWORD *)(v64 + 8) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)(v64 + 8), v127);
        v65 = v127;
      }
    }
LABEL_237:
    KeLeaveCriticalRegion();
    v147[0] = 0LL;
  }
  DCOBJA::~DCOBJA((DCOBJA *)v147);
  v70 = v166;
  if ( (v166 & 0x80u) == 0 )
  {
    if ( (v166 & 0x40) == 0 || !EmptyRgnPublic )
      goto LABEL_270;
    SetRectRgnIndirect(ghrgnGDC);
    RectRgnIndirect = GreCreateRectRgnIndirect((ERECTL *)&gZero);
    v75 = v45[1];
    v45[7] = RectRgnIndirect;
    GreSelectVisRgn(v75, RectRgnIndirect, 4LL);
    v45[5] = (__int64)EmptyRgnPublic;
    if ( (v166 & 0x40000) != 0 )
      *((_DWORD *)v45 + 16) |= 0x40000u;
    *((_DWORD *)v45 + 16) |= 0x40u;
    if ( EmptyRgnPublic == (HRGN)1 )
    {
      v45[6] = 1LL;
    }
    else
    {
      GreCombineRgn(ghrgnGDC, (HRGN)v45[7], EmptyRgnPublic);
      v76 = (HRGN)CreateEmptyRgnPublic();
      v45[6] = (__int64)v76;
      GreCombineRgn(v76, EmptyRgnPublic, 0LL);
      if ( (unsigned __int64)EmptyRgnPublic > 2 && (v45[8] & 0x40000) == 0 )
        GreMarkUndeletableRgn(EmptyRgnPublic);
    }
    goto LABEL_259;
  }
  if ( EmptyRgnPublic != (HRGN)1 )
  {
    SetRectRgnIndirect(ghrgnGDC);
    v71 = GreCreateRectRgnIndirect((ERECTL *)&gZero);
    v72 = v45[1];
    v45[7] = v71;
    GreSelectVisRgn(v72, v71, 4LL);
    v45[5] = (__int64)EmptyRgnPublic;
    if ( (v166 & 0x40000) != 0 )
      *((_DWORD *)v45 + 16) |= 0x40000u;
    *((_DWORD *)v45 + 16) |= 0x80u;
    if ( EmptyRgnPublic )
    {
      GreCombineRgn(ghrgnGDC, (HRGN)v45[7], EmptyRgnPublic);
      v73 = (HRGN)CreateEmptyRgnPublic();
      v45[6] = (__int64)v73;
      GreCombineRgn(v73, EmptyRgnPublic, 0LL);
      if ( (unsigned __int64)EmptyRgnPublic > 2 && (v45[8] & 0x40000) == 0 )
      {
        PsGetCurrentProcessId();
        HmgMarkUndeletable((int)EmptyRgnPublic, 4);
      }
    }
    else
    {
      v45[6] = 0LL;
    }
LABEL_259:
    *((_DWORD *)v45 + 16) &= ~0x2000u;
    GreSelectVisRgn(v45[1], ghrgnGDC, 4LL);
  }
LABEL_270:
  if ( (v45[8] & 0x4000) == 0 )
    goto LABEL_320;
  if ( (int)IsGreSelectRedirectionBitmapSupported_0() < 0 )
  {
    v77 = v167;
  }
  else
  {
    v77 = v167;
    if ( !(unsigned int)GreSelectRedirectionBitmap_0() )
      v77 = 1;
  }
  v78 = v45[1];
  v124[0] = 0LL;
  v124[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v125);
  v79 = 0LL;
  if ( (unsigned __int16)v78 >= (unsigned int)gcMaxHmgr )
  {
LABEL_293:
    v124[0] = v79;
    if ( !v79 )
      goto LABEL_317;
    *(_DWORD *)(v79 + 36) |= 0x40u;
    v79 = v124[0];
    v82 = *(_QWORD *)(v124[0] + 1472LL);
    v83 = _mm_srli_si128(*(__m128i *)(v124[0] + 1472LL), 8).m128i_u64[0];
    if ( (_DWORD)v82 != (_DWORD)v83
      && HIDWORD(v82) != HIDWORD(v83)
      && (int)v82 < (int)v83
      && SHIDWORD(v82) < SHIDWORD(v83) )
    {
      *(_DWORD *)(v124[0] + 1472LL) = 0x7FFFFFFF;
      *(_DWORD *)(v124[0] + 1476LL) = 0x7FFFFFFF;
      *(_DWORD *)(v124[0] + 1480LL) = 0x80000000;
      *(_DWORD *)(v124[0] + 1484LL) = 0x80000000;
      v79 = v124[0];
    }
  }
  else
  {
    v80 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v78;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v161);
    _m_prefetchw((const void *)(v80 + 8));
    v51 = (*(_BYTE *)(v80 + 15) & 0x20) == 0;
    v81 = *(_DWORD *)(v80 + 8);
    v130 = v81;
    if ( v51 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(v80 + 15) & 0x40) != 0 )
          {
            ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * (unsigned __int16)v78, 0LL);
            if ( *(_BYTE *)(v80 + 14) == 1 && *(_WORD *)(v80 + 12) == WORD1(v78) )
            {
              v79 = *(_QWORD *)v80;
              ++*(_DWORD *)(*(_QWORD *)v80 + 8LL);
            }
            if ( (*(_BYTE *)(v80 + 15) & 0x40) != 0 )
            {
              ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * (unsigned __int16)v78, 0LL);
            }
            else
            {
              _m_prefetchw((const void *)(v80 + 8));
              v130 = *(_DWORD *)(v80 + 8) & 0xFFFFFFFE;
              _InterlockedExchange((volatile __int32 *)(v80 + 8), v130);
            }
            KeLeaveCriticalRegion();
            goto LABEL_293;
          }
          if ( (v81 & 1) == 0 )
            break;
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_284:
          _m_prefetchw((const void *)(v80 + 8));
          v51 = (*(_BYTE *)(v80 + 15) & 0x20) == 0;
          v81 = *(_DWORD *)(v80 + 8);
          v130 = v81;
          if ( !v51 )
            goto LABEL_285;
        }
        v131 = v81 | 1;
        if ( v81 != _InterlockedCompareExchange((volatile signed __int32 *)(v80 + 8), v81 | 1, v81)
          || (*(_BYTE *)(v80 + 15) & 0x40) != 0 )
        {
          goto LABEL_284;
        }
        *((_QWORD *)gpentPushLock + (unsigned __int16)v78) = 0LL;
        *(_BYTE *)(v80 + 15) |= 0x40u;
        _m_prefetchw((const void *)(v80 + 8));
        v130 = *(_DWORD *)(v80 + 8) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)(v80 + 8), v130);
        v81 = v130;
      }
    }
LABEL_285:
    KeLeaveCriticalRegion();
    v124[0] = 0LL;
  }
  if ( !v79 )
    goto LABEL_317;
  XDCOBJ::RestoreAttributes((XDCOBJ *)v124);
  v84 = (_DWORD *)v124[0];
  v85 = (unsigned __int16)*(_DWORD *)v124[0];
  v86 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v85;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v163);
  _m_prefetchw((const void *)(v86 + 8));
  v51 = (*(_BYTE *)(v86 + 15) & 0x20) == 0;
  v87 = *(_DWORD *)(v86 + 8);
  v135 = v87;
  if ( !v51 )
    goto LABEL_316;
  while ( (*(_BYTE *)(v86 + 15) & 0x40) == 0 )
  {
    if ( (v87 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_307:
      _m_prefetchw((const void *)(v86 + 8));
      v51 = (*(_BYTE *)(v86 + 15) & 0x20) == 0;
      v87 = *(_DWORD *)(v86 + 8);
      v135 = v87;
      if ( !v51 )
        goto LABEL_316;
    }
    else
    {
      v136 = v87 | 1;
      if ( v87 != _InterlockedCompareExchange((volatile signed __int32 *)(v86 + 8), v87 | 1, v87)
        || (*(_BYTE *)(v86 + 15) & 0x40) != 0 )
      {
        goto LABEL_307;
      }
      *((_QWORD *)gpentPushLock + v85) = 0LL;
      *(_BYTE *)(v86 + 15) |= 0x40u;
      _m_prefetchw((const void *)(v86 + 8));
      v135 = *(_DWORD *)(v86 + 8) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)(v86 + 8), v135);
      v87 = v135;
    }
  }
  v88 = 8 * v85;
  ExAcquirePushLockExclusiveEx((char *)gpentPushLock + v88, 0LL);
  if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)*v84 + 14) == 5
    && *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1)
    && gpentHmgrAltStacks )
  {
    RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*v84);
  }
  --v84[2];
  if ( (*(_BYTE *)(v86 + 15) & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)gpentPushLock + v88, 0LL);
  }
  else
  {
    _m_prefetchw((const void *)(v86 + 8));
    v135 = *(_DWORD *)(v86 + 8) & 0xFFFFFFFE;
    _InterlockedExchange((volatile __int32 *)(v86 + 8), v135);
  }
LABEL_316:
  KeLeaveCriticalRegion();
LABEL_317:
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v125);
  if ( v77 )
    GreSelectVisRgn(v45[1], 0LL, 1LL);
  v70 = v166;
LABEL_320:
  if ( (v45[8] & 2) == 0 )
  {
LABEL_327:
    if ( (*(_BYTE *)(v46 + 50) & 0x40) != 0 && (v70 & 0x40000000) == 0 )
      GreSetLayout((HDC)v45[1], -1, 1u);
    v91 = v45[1];
    v142[0] = 0LL;
    v142[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v143);
    v92 = 0LL;
    if ( (unsigned __int16)v91 >= (unsigned int)gcMaxHmgr )
    {
LABEL_349:
      v142[0] = v92;
      if ( v92 )
      {
        *((_DWORD *)v92 + 9) |= 0x100000u;
        AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v133, v142[0]);
        v96 = GrepValidateVisRgn(v142[0], *((struct REGION **)v142[0] + 192), (struct ERECTL *)&v156);
        AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v133);
        if ( !v96 )
        {
          AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)v134, v142[0]);
          v122 = *((_QWORD *)v142[0] + 192);
          if ( HmgLockResultBase<DRVOBJ>::operator bool(&v122) )
            RGNOBJ::vSet((RGNOBJ *)&v122, &v156);
          AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v134);
        }
      }
    }
    else
    {
      v93 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v91;
      PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v160);
      _m_prefetchw((const void *)(v93 + 8));
      v51 = (*(_BYTE *)(v93 + 15) & 0x20) == 0;
      v94 = *(_DWORD *)(v93 + 8);
      v139 = v94;
      if ( v51 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (*(_BYTE *)(v93 + 15) & 0x40) != 0 )
            {
              ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * (unsigned __int16)v91, 0LL);
              if ( *(_BYTE *)(v93 + 14) == 1 && *(_WORD *)(v93 + 12) == WORD1(v91) )
              {
                v92 = *(struct DC **)v93;
                ++*(_DWORD *)(*(_QWORD *)v93 + 8LL);
              }
              if ( (*(_BYTE *)(v93 + 15) & 0x40) != 0 )
              {
                ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * (unsigned __int16)v91, 0LL);
              }
              else
              {
                _m_prefetchw((const void *)(v93 + 8));
                v139 = *(_DWORD *)(v93 + 8) & 0xFFFFFFFE;
                _InterlockedExchange((volatile __int32 *)(v93 + 8), v139);
              }
              KeLeaveCriticalRegion();
              goto LABEL_349;
            }
            if ( (v94 & 1) == 0 )
              break;
            KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_340:
            _m_prefetchw((const void *)(v93 + 8));
            v51 = (*(_BYTE *)(v93 + 15) & 0x20) == 0;
            v94 = *(_DWORD *)(v93 + 8);
            v139 = v94;
            if ( !v51 )
              goto LABEL_341;
          }
          v140 = v94 | 1;
          if ( v94 != _InterlockedCompareExchange((volatile signed __int32 *)(v93 + 8), v94 | 1, v94)
            || (*(_BYTE *)(v93 + 15) & 0x40) != 0 )
          {
            goto LABEL_340;
          }
          *((_QWORD *)gpentPushLock + (unsigned __int16)v91) = 0LL;
          *(_BYTE *)(v93 + 15) |= 0x40u;
          _m_prefetchw((const void *)(v93 + 8));
          v139 = *(_DWORD *)(v93 + 8) & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)(v93 + 8), v139);
          v94 = v139;
        }
      }
LABEL_341:
      KeLeaveCriticalRegion();
      v142[0] = 0LL;
    }
    DCOBJA::~DCOBJA((DCOBJA *)v142);
    if ( (int)IsGreHintDCWndSupported_0() >= 0 )
    {
      LODWORD(v112) = 0;
      GreHintDCWnd_0();
    }
    if ( v120 && (*(_BYTE *)(v120 + 50) & 8) != 0 && (int)IsGreHintDCWndSupported_0() >= 0 )
    {
      LODWORD(v112) = (*(_WORD *)(v120 + 66) & 0x3FFF) == 669;
      GreHintDCWnd_0();
    }
    if ( *((int *)v45 + 16) < 0 )
    {
      v101 = PsGetCurrentProcessWin32Process(v98, v97, v99, v100, v112, v115);
      *(_DWORD *)(v101 + 12) |= 0x200u;
      v45[9] = 0LL;
      v45[10] = PsGetCurrentProcessWin32Process(v103, v102, v104, v105, v113, v116);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v98, &LockRelease, v99, ghsemDCVisRgn);
    v106 = ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
      PsLeavePriorityRegion(v107);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v106, &LockRelease, v99, ghsemGreLock);
    v108 = ghsemGreLock;
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
      PsLeavePriorityRegion(v109);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v108, &LockRelease, v99, ghsemDynamicModeChange);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion(v110);
    }
    return v45[1];
  }
  if ( (unsigned int)GreSetDCOwnerEx(v45[1], 0x80000002, 0, 1) )
  {
    v89 = 0LL;
    v90 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v90 )
      v89 = *v90;
    v45[9] = v89;
    v45[10] = 0LL;
    --gnDCECount;
    if ( v119 && (int)IsGreSelectFontSupported_0() >= 0 )
    {
      GreGetStockObject(13LL);
      GreSelectFont_0();
    }
    goto LABEL_327;
  }
  *((_DWORD *)v45 + 16) &= ~0x1000u;
  DestroyCacheDC(gpDispInfo + 64, 0LL);
LABEL_338:
  GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
  return 0LL;
}
