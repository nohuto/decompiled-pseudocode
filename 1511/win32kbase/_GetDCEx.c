/*
 * XREFs of _GetDCEx @ 0x1C002EFC0
 * Callers:
 *     UserGetDesktopDC @ 0x1C0022378 (UserGetDesktopDC.c)
 *     NtUserGetDC @ 0x1C0042DC0 (NtUserGetDC.c)
 *     UserGetMonitorDC @ 0x1C0043940 (UserGetMonitorDC.c)
 *     _GetDC @ 0x1C0077E80 (_GetDC.c)
 * Callees:
 *     GreSelectFont_0 @ 0x1C0001010 (GreSelectFont_0.c)
 *     GreSelectRedirectionBitmap_0 @ 0x1C0001018 (GreSelectRedirectionBitmap_0.c)
 *     IsGreSelectRedirectionBitmapSupported_0 @ 0x1C0001030 (IsGreSelectRedirectionBitmapSupported_0.c)
 *     IsGreSelectFontSupported_0 @ 0x1C0001038 (IsGreSelectFontSupported_0.c)
 *     IsGreHintDCWndSupported_0 @ 0x1C0001040 (IsGreHintDCWndSupported_0.c)
 *     GreHintDCWnd_0 @ 0x1C0001048 (GreHintDCWnd_0.c)
 *     IsGetLayeredOrRedirectedParentSupported_0 @ 0x1C0002430 (IsGetLayeredOrRedirectedParentSupported_0.c)
 *     GetLayeredOrRedirectedParent_0 @ 0x1C0002438 (GetLayeredOrRedirectedParent_0.c)
 *     IsGetRedirectionBitmapSupported_0 @ 0x1C0002440 (IsGetRedirectionBitmapSupported_0.c)
 *     GetRedirectionBitmap_0 @ 0x1C0002448 (GetRedirectionBitmap_0.c)
 *     IsCalcVisRgnSupported_0 @ 0x1C0002450 (IsCalcVisRgnSupported_0.c)
 *     CalcVisRgn_0 @ 0x1C0002458 (CalcVisRgn_0.c)
 *     IsDeleteHrgnClipSupported_0 @ 0x1C0002470 (IsDeleteHrgnClipSupported_0.c)
 *     DeleteHrgnClip_0 @ 0x1C0002478 (DeleteHrgnClip_0.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported_0 @ 0x1C0002480 (IsFlushWEFCOMPOSITEDDCEBoundsSupported_0.c)
 *     FlushWEFCOMPOSITEDDCEBounds_0 @ 0x1C0002488 (FlushWEFCOMPOSITEDDCEBounds_0.c)
 *     IsSpbCheckDceSupported_0 @ 0x1C0002490 (IsSpbCheckDceSupported_0.c)
 *     SpbCheckDce_0 @ 0x1C0002498 (SpbCheckDce_0.c)
 *     CreateEmptyRgnPublic @ 0x1C0022340 (CreateEmptyRgnPublic.c)
 *     GreSelectVisRgn @ 0x1C0023950 (GreSelectVisRgn.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0023B18 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C0023BD0 (GreCreateRectRgnIndirect.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0024220 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     SetRectRgnIndirect @ 0x1C0026D20 (SetRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     ?GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z @ 0x1C002B770 (-GreValidateRgnInDCSurfBounds@@YAXPEAVDC@@PEAVSURFACE@@PEAVREGION@@W4_VALIDATE_REGION_CALLER@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     GreSetDCOwnerEx @ 0x1C0034DF0 (GreSetDCOwnerEx.c)
 *     ?bValid@PDEVOBJ@@QEAAHXZ @ 0x1C0038FE0 (-bValid@PDEVOBJ@@QEAAHXZ.c)
 *     GreUnlockVisRgn @ 0x1C00439F0 (GreUnlockVisRgn.c)
 *     GreOffsetRgn @ 0x1C00441E0 (GreOffsetRgn.c)
 *     CreateCacheDC @ 0x1C00443D0 (CreateCacheDC.c)
 *     GreLockVisRgn @ 0x1C0044600 (GreLockVisRgn.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00461F0 (--1EPALOBJ@@QEAA@XZ.c)
 *     GreIsRendering @ 0x1C0046D60 (GreIsRendering.c)
 *     HmgShareLock @ 0x1C005C9B0 (HmgShareLock.c)
 *     GreMarkUndeletableRgn @ 0x1C005D9E8 (GreMarkUndeletableRgn.c)
 *     DestroyCacheDC @ 0x1C006BD80 (DestroyCacheDC.c)
 *     GreGetStockObject @ 0x1C006C0A0 (GreGetStockObject.c)
 *     GreSetLayout @ 0x1C0075DC0 (GreSetLayout.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0088A5C (--1DCOBJA@@QEAA@XZ.c)
 *     ?vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C00A8C28 (-vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5C24 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
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
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rcx
  char v14; // al
  int v15; // r15d
  int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *v19; // rdi
  __int64 v20; // rbx
  int v21; // eax
  __int64 CurrentProcessWin32Process; // rax
  PERESOURCE v23; // rcx
  PERESOURCE v24; // rcx
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // rdx
  __int64 LayeredOrRedirectedParent_0; // rax
  __int64 v31; // rdi
  HRGN v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // ebx
  __int64 *v35; // r13
  __int64 *v36; // r12
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // r14
  _BYTE *SystemArgument2; // rbx
  bool v42; // zf
  signed __int32 v43; // eax
  int v44; // ebx
  int v45; // r15d
  __int64 v46; // r14
  __int64 v47; // rsi
  char *v48; // rbx
  signed __int32 v49; // eax
  __int64 *v50; // rsi
  __int64 *v51; // r12
  __int64 v52; // r15
  __int64 v53; // r14
  char *v54; // rbx
  signed __int32 v55; // eax
  int v56; // ebx
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  _DWORD *v61; // rdi
  __int64 v62; // rbx
  int v63; // edx
  __int64 v64; // rdx
  HSURF v65; // rdx
  __int64 v66; // rdi
  char *v67; // rbx
  signed __int32 v68; // eax
  __int64 v69; // rsi
  __int64 v70; // rdi
  unsigned int v71; // edi
  HRGN v72; // rbx
  HRGN v73; // rax
  __int64 v74; // rcx
  int v75; // r9d
  HRGN RectRgnIndirect; // rax
  __int64 v77; // rcx
  HRGN v78; // rax
  __int64 v79; // r14
  __m128i *v80; // rsi
  char *v81; // rbx
  signed __int32 v82; // eax
  __int64 v83; // rdx
  unsigned __int64 v84; // xmm1_8
  __int64 v85; // rdi
  char *v86; // rbx
  signed __int32 v87; // eax
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v94; // r14
  __int64 v95; // rsi
  char *v96; // rbx
  signed __int32 v97; // eax
  int v99; // eax
  _DWORD *v100; // rdi
  __int64 v101; // rbx
  __int64 v102; // rdx
  HSURF v103; // rdx
  __int64 v104; // rdi
  char *v105; // rbx
  signed __int32 v106; // eax
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rax
  __int64 v112; // rcx
  PERESOURCE v113; // rcx
  __int64 v114; // rcx
  PERESOURCE v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v119; // [rsp+38h] [rbp-C8h]
  __int64 v120; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v121; // [rsp+48h] [rbp-B8h]
  int v122; // [rsp+50h] [rbp-B0h]
  __int64 v123; // [rsp+58h] [rbp-A8h] BYREF
  HRGN v124; // [rsp+60h] [rbp-A0h]
  __int64 RedirectionBitmap_0; // [rsp+68h] [rbp-98h]
  _QWORD v126[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v127[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v128[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v129[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v130[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v131[3]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v132; // [rsp+DCh] [rbp-24h]
  int v133; // [rsp+E0h] [rbp-20h]
  unsigned int v134; // [rsp+F4h] [rbp-Ch]
  int v135; // [rsp+F8h] [rbp-8h]
  unsigned int v136; // [rsp+10Ch] [rbp+Ch]
  int v137; // [rsp+110h] [rbp+10h]
  unsigned int v138; // [rsp+124h] [rbp+24h]
  int v139; // [rsp+128h] [rbp+28h]
  unsigned int v140; // [rsp+13Ch] [rbp+3Ch]
  int v141; // [rsp+140h] [rbp+40h]
  unsigned int v142; // [rsp+154h] [rbp+54h]
  int v143; // [rsp+158h] [rbp+58h]
  __int64 v144; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v145; // [rsp+174h] [rbp+74h]
  int v146; // [rsp+178h] [rbp+78h]
  __int64 v147; // [rsp+180h] [rbp+80h]
  unsigned int v148; // [rsp+194h] [rbp+94h]
  int v149; // [rsp+198h] [rbp+98h]
  char v150[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v151[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  char v152[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v153[8]; // [rsp+1B8h] [rbp+B8h] BYREF
  char v154[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  char v155[8]; // [rsp+1C8h] [rbp+C8h] BYREF
  char v156[8]; // [rsp+1D0h] [rbp+D0h] BYREF
  char v157[16]; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v158; // [rsp+230h] [rbp+130h]
  HRGN EmptyRgnPublic; // [rsp+238h] [rbp+138h]
  unsigned int v160; // [rsp+240h] [rbp+140h]
  int v161; // [rsp+248h] [rbp+148h]

  v160 = a3;
  EmptyRgnPublic = a2;
  v3 = ghsemDynamicModeChange;
  v4 = a3;
  v121 = 0LL;
  v5 = a2;
  RedirectionBitmap_0 = 0LL;
  v161 = 0;
  v122 = 0;
  if ( ghsemDynamicModeChange )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    v3 = ghsemDynamicModeChange;
  }
  v6 = L"ghsemDynamicModeChange";
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(L"ghsemDynamicModeChange", &LockAcquireShared, a3, v3, L"ghsemDynamicModeChange");
  v7 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v6, a2);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
    LODWORD(v7) = (_DWORD)ghsemGreLock;
  }
  v8 = L"ghsemGreLock";
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((unsigned int)L"ghsemGreLock", (_DWORD)a2, a3, (_DWORD)v7, 2, (__int64)L"ghsemGreLock");
  v9 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v8, a2);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
    LODWORD(v9) = (_DWORD)ghsemDCVisRgn;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((unsigned int)L"ghsemDCVisRgn", (_DWORD)a2, a3, (_DWORD)v9, 3, (__int64)L"ghsemDCVisRgn");
  v10 = a1;
  if ( !a1 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 16LL);
    a1 = v10;
  }
  v11 = 0LL;
  v119 = v10;
  v12 = v10;
  v13 = v10;
  if ( v10 )
  {
    while ( 1 )
    {
      v14 = *(_BYTE *)(v13 + 55);
      if ( (v14 & 0x10) == 0 || (v14 & 0x20) != 0 && v13 != v10 )
        break;
      if ( (*(_WORD *)(v13 + 66) & 0x3FFF) != 0x29D )
      {
        v13 = *(_QWORD *)(v13 + 88);
        if ( v13 )
          continue;
      }
      goto LABEL_24;
    }
    v15 = 0;
  }
  else
  {
LABEL_24:
    v15 = 1;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 12) & 0x200) != 0 )
  {
    v16 = 1;
    GreLockVisRgn(*(_QWORD *)gpDispInfo);
    v19 = (__int64 *)(gpDispInfo + 64);
    v20 = *(_QWORD *)(gpDispInfo + 64);
    if ( !v20 )
      goto LABEL_37;
    do
    {
      v21 = *(_DWORD *)(v20 + 64);
      if ( v21 >= 0 )
      {
        if ( (v21 & 0x400000) != 0 )
          DestroyCacheDC(v19, *(_QWORD *)(v20 + 8));
      }
      else if ( *(_QWORD *)(v20 + 80) == PsGetCurrentProcessWin32Process(v17) )
      {
        v16 = 0;
      }
      if ( v20 == *v19 )
        v19 = (__int64 *)v20;
      v20 = *v19;
    }
    while ( *v19 );
    if ( v16 )
    {
LABEL_37:
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
      *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v17, &LockRelease, v18, ghsemDCVisRgn, L"ghsemDCVisRgn");
    v23 = ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
      ((void (*)(void))PsLeavePriorityRegion)();
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v23, &LockRelease, v18, ghsemGreLock, L"ghsemGreLock");
    v24 = ghsemGreLock;
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
      ((void (*)(void))PsLeavePriorityRegion)();
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v24, &LockRelease, v18, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      ((void (*)(void))PsLeavePriorityRegion)();
    }
    v12 = v119;
    v10 = a1;
  }
  if ( (v4 & 0x10000) != 0 )
  {
    v4 &= 0xFFFFFFC7;
    v160 = v4;
    if ( (v4 & 1) != 0 )
    {
      if ( (*(_BYTE *)(v10 + 55) & 4) != 0 )
        v4 |= 0x10u;
      goto LABEL_73;
    }
    v25 = *(_QWORD *)(v10 + 152);
    v26 = *(_BYTE *)(v25 + 84);
    if ( v26 < 0 )
    {
      v4 |= 0x20u;
      v160 = v4;
    }
    if ( (v4 & 2) == 0 && (v26 & 0x20) == 0 )
    {
      if ( (v26 & 0x40) != 0 )
      {
        v27 = *(_QWORD *)(v25 + 24);
        if ( v27 )
          v11 = *(_QWORD *)(v27 + 8);
      }
      else
      {
        v4 |= 2u;
        v160 = v4;
      }
    }
    v28 = *(_BYTE *)(v10 + 55);
    if ( (v28 & 2) != 0 )
    {
      v4 |= 8u;
      v160 = v4;
    }
    if ( (v28 & 4) != 0 )
    {
      v4 |= 0x10u;
      v160 = v4;
    }
    if ( (v28 & 0x20) != 0 )
    {
      v4 &= ~8u;
      v160 = v4;
      if ( *(_QWORD *)(v25 + 112) )
      {
LABEL_73:
        v4 |= 2u;
        v160 = v4;
      }
    }
  }
  if ( (v4 & 0x80000) != 0 )
  {
    v4 = v4 & 0xFFFFFFD5 | 2;
    v160 = v4;
  }
  if ( (int)IsGetLayeredOrRedirectedParentSupported_0() < 0 )
    goto LABEL_91;
  LayeredOrRedirectedParent_0 = GetLayeredOrRedirectedParent_0();
  v31 = LayeredOrRedirectedParent_0;
  if ( !LayeredOrRedirectedParent_0 || (*(_DWORD *)(LayeredOrRedirectedParent_0 + 48) & 0x20000000) == 0 )
    goto LABEL_91;
  if ( (int)IsGetRedirectionBitmapSupported_0() < 0 )
  {
    RedirectionBitmap_0 = 0LL;
  }
  else
  {
    RedirectionBitmap_0 = GetRedirectionBitmap_0();
    if ( RedirectionBitmap_0 )
      goto LABEL_84;
  }
  if ( (*(_BYTE *)(v31 + 50) & 0x20) != 0 )
  {
LABEL_84:
    v4 |= 0x4000u;
    v121 = v31;
    v160 = v4;
    if ( v10 == v31 && (v4 & 0x20) != 0 )
    {
      v4 = v4 & 0xFFFFFFDD | 2;
      v160 = v4;
    }
    if ( (unsigned __int64)v5 > 2 )
    {
      if ( (v4 & 0x40000) != 0 )
      {
        EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
        v32 = v5;
        v5 = EmptyRgnPublic;
        GreCombineRgn(EmptyRgnPublic, v32, 0LL, 5);
        v10 = a1;
        v4 &= ~0x40000u;
        v160 = v4;
      }
      GreOffsetRgn(v5);
    }
  }
LABEL_91:
  if ( (v4 & 0x20) != 0 )
  {
    v33 = *(_QWORD *)(v10 + 88);
    if ( !v33 )
      v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 16LL);
    v4 |= 2u;
    v160 = v4;
    if ( (v4 & 0x18) == 0 && ((*(_BYTE *)(v10 + 45) & 1) != 0 || (*(_BYTE *)(v33 + 55) & 2) == 0) )
    {
      v29 = *(unsigned __int8 *)(v33 + 55);
      if ( (((unsigned __int8)v29 ^ *(_BYTE *)(v10 + 55)) & 0x10) == 0 )
      {
        v4 &= 0xFFFFFFE7;
        v119 = v33;
        v160 = v4;
        v12 = v33;
        if ( (v29 & 4) != 0 )
        {
          v4 |= 0x10u;
          v160 = v4;
        }
      }
    }
  }
  if ( (v4 & 2) == 0 && (!v10 || *(_QWORD *)(v10 + 16) != W32GetThreadWin32Thread(KeGetCurrentThread())) )
  {
    v4 |= 2u;
    v160 = v4;
  }
  v34 = v4 & 0x8080441F;
  v158 = v4 & 0x8080441F;
  if ( (v4 & 2) == 0 )
  {
    v35 = (__int64 *)(gpDispInfo + 64);
    v36 = *(__int64 **)(gpDispInfo + 64);
    if ( !v36 )
      goto LABEL_342;
    while ( (v36[8] & 0x400002) != 0 || (unsigned int)GreIsRendering((HDC)v36[1]) || v36[2] != a1 && v36[1] != v11 )
    {
      v35 = v36;
      v36 = (__int64 *)*v36;
      if ( !v36 )
        goto LABEL_342;
    }
    if ( v36[7] && (v160 & 0xC0) != 0 && (int)IsDeleteHrgnClipSupported_0() >= 0 )
      DeleteHrgnClip_0();
    if ( (v36[8] & 0x4000) != 0 )
    {
      if ( (*(_BYTE *)(v36[4] + 51) & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported_0() >= 0 )
        FlushWEFCOMPOSITEDDCEBounds_0();
      if ( (int)IsGreSelectRedirectionBitmapSupported_0() >= 0 )
        GreSelectRedirectionBitmap_0();
    }
    v37 = a1;
    if ( v36[2] != a1
      || v36[4] != v121
      || v36[3] != v12
      || !v15
      || ((v160 ^ *((_DWORD *)v36 + 16)) & 0x4000) != 0
      || (v36[8] & 0x10000000) != 0 )
    {
      goto LABEL_207;
    }
    goto LABEL_163;
  }
  v147 = v15;
  while ( 2 )
  {
    v38 = gpDispInfo;
    v36 = *(__int64 **)(gpDispInfo + 64);
    v35 = (__int64 *)(gpDispInfo + 64);
    if ( !v36 )
      goto LABEL_177;
    do
    {
      if ( v36[3] != v12 || v36[4] != v121 || v36[11] )
        goto LABEL_175;
      v39 = v36[1];
      v130[0] = 0LL;
      v40 = 0LL;
      v130[1] = 0LL;
      if ( (unsigned __int16)v39 >= (unsigned int)gcMaxHmgr )
        goto LABEL_151;
      SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
      PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v153);
      _m_prefetchw(&SystemArgument2[24 * (unsigned __int16)v39 + 8]);
      v42 = (SystemArgument2[24 * (unsigned __int16)v39 + 15] & 0x20) == 0;
      v43 = *(_DWORD *)&SystemArgument2[24 * (unsigned __int16)v39 + 8];
      v140 = v43;
      if ( !v42 )
      {
LABEL_143:
        KeLeaveCriticalRegion();
        v130[0] = 0LL;
        goto LABEL_153;
      }
      while ( (SystemArgument2[24 * (unsigned __int16)v39 + 15] & 0x40) == 0 )
      {
        if ( (v43 & 1) != 0 )
        {
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_142:
          _m_prefetchw(&SystemArgument2[24 * (unsigned __int16)v39 + 8]);
          v42 = (SystemArgument2[24 * (unsigned __int16)v39 + 15] & 0x20) == 0;
          v43 = *(_DWORD *)&SystemArgument2[24 * (unsigned __int16)v39 + 8];
          v140 = v43;
          if ( !v42 )
            goto LABEL_143;
        }
        else
        {
          v141 = v43 | 1;
          if ( v43 != _InterlockedCompareExchange(
                        (volatile signed __int32 *)&SystemArgument2[24 * (unsigned __int16)v39 + 8],
                        v43 | 1,
                        v43)
            || (SystemArgument2[24 * (unsigned __int16)v39 + 15] & 0x40) != 0 )
          {
            goto LABEL_142;
          }
          *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + (unsigned __int16)v39) = 0LL;
          SystemArgument2[24 * (unsigned __int16)v39 + 15] |= 0x40u;
          _m_prefetchw(&SystemArgument2[24 * (unsigned __int16)v39 + 8]);
          v140 = *(_DWORD *)&SystemArgument2[24 * (unsigned __int16)v39 + 8] & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)&SystemArgument2[24 * (unsigned __int16)v39 + 8], v140);
          v43 = v140;
        }
      }
      ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v39, 0LL);
      if ( SystemArgument2[24 * (unsigned __int16)v39 + 14] == 1
        && *(_WORD *)&SystemArgument2[24 * (unsigned __int16)v39 + 12] == WORD1(v39) )
      {
        v40 = *(_QWORD *)&SystemArgument2[24 * (unsigned __int16)v39];
        ++*(_DWORD *)(v40 + 8);
      }
      if ( (SystemArgument2[24 * (unsigned __int16)v39 + 15] & 0x40) != 0 )
      {
        ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v39);
      }
      else
      {
        _m_prefetchw(&SystemArgument2[24 * (unsigned __int16)v39 + 8]);
        v140 = *(_DWORD *)&SystemArgument2[24 * (unsigned __int16)v39 + 8] & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)&SystemArgument2[24 * (unsigned __int16)v39 + 8], v140);
      }
      KeLeaveCriticalRegion();
      v34 = v158;
      v12 = v119;
LABEL_151:
      v130[0] = v40;
      if ( !v40 )
      {
LABEL_154:
        v12 = v119;
        if ( v34 != (v36[8] & 0x80C05C1F)
          || (*(_BYTE *)(v119 + 55) & 0x20) != 0 && v36[2] != v36[3]
          || v147 && (v36[8] & 0x10000000) != 0 )
        {
          goto LABEL_175;
        }
        *((_DWORD *)v36 + 16) |= 0x1000u;
        v37 = a1;
        if ( a1 != v36[2] )
        {
          if ( (int)IsSpbCheckDceSupported_0() >= 0 )
            SpbCheckDce_0();
          v36[2] = a1;
          ResetOrg(0LL, (struct tagDCE *)v36, 0);
        }
LABEL_163:
        v45 = 0;
        goto LABEL_164;
      }
      v44 = *(_DWORD *)(v40 + 40);
      DCOBJA::~DCOBJA((DCOBJA *)v130);
      if ( (v44 & 1) == 0 )
      {
LABEL_153:
        v34 = v158;
        goto LABEL_154;
      }
      v34 = v158;
LABEL_175:
      v35 = v36;
      v36 = (__int64 *)*v36;
    }
    while ( v36 );
    v38 = gpDispInfo;
LABEL_177:
    v50 = *(__int64 **)(v38 + 64);
    v35 = (__int64 *)(v38 + 64);
    v51 = 0LL;
    if ( !v50 )
    {
LABEL_203:
      v35 = v51;
      if ( v51 )
        goto LABEL_206;
      if ( !CreateCacheDC(a1, v160 & 0x4000 | 0x802, 0LL) )
        goto LABEL_342;
      v34 = v158;
      v12 = v119;
      continue;
    }
    break;
  }
  while ( 2 )
  {
    if ( (v50[8] & 0x400002) != 2 )
      goto LABEL_202;
    v52 = v50[1];
    v53 = 0LL;
    v129[0] = 0LL;
    v129[1] = 0LL;
    if ( (unsigned __int16)v52 >= (unsigned int)gcMaxHmgr )
      goto LABEL_196;
    v54 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v52;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v152);
    _m_prefetchw(v54 + 8);
    v42 = (v54[15] & 0x20) == 0;
    v55 = *((_DWORD *)v54 + 2);
    v132 = v55;
    if ( !v42 )
    {
LABEL_188:
      KeLeaveCriticalRegion();
      v129[0] = 0LL;
      break;
    }
    while ( (v54[15] & 0x40) == 0 )
    {
      if ( (v55 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
      }
      else
      {
        v133 = v55 | 1;
        if ( v55 == _InterlockedCompareExchange((volatile signed __int32 *)v54 + 2, v55 | 1, v55)
          && (v54[15] & 0x40) == 0 )
        {
          *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + (unsigned __int16)v52) = 0LL;
          v54[15] |= 0x40u;
          _m_prefetchw(v54 + 8);
          v132 = *((_DWORD *)v54 + 2) & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)v54 + 2, v132);
          v55 = v132;
          continue;
        }
      }
      _m_prefetchw(v54 + 8);
      v42 = (v54[15] & 0x20) == 0;
      v55 = *((_DWORD *)v54 + 2);
      v132 = v55;
      if ( !v42 )
        goto LABEL_188;
    }
    ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v52, 0LL);
    if ( v54[14] == 1 && *((_WORD *)v54 + 6) == WORD1(v52) )
    {
      v53 = *(_QWORD *)v54;
      ++*(_DWORD *)(*(_QWORD *)v54 + 8LL);
    }
    if ( (v54[15] & 0x40) != 0 )
    {
      ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v52);
    }
    else
    {
      _m_prefetchw(v54 + 8);
      v132 = *((_DWORD *)v54 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v54 + 2, v132);
    }
    KeLeaveCriticalRegion();
LABEL_196:
    v129[0] = v53;
    if ( v53 )
    {
      v56 = *(_DWORD *)(v53 + 40);
      DCOBJA::~DCOBJA((DCOBJA *)v129);
      if ( (v56 & 1) != 0 )
      {
LABEL_202:
        v35 = v50;
        v50 = (__int64 *)*v50;
        if ( !v50 )
          goto LABEL_203;
        continue;
      }
    }
    break;
  }
  if ( v50[11] )
    goto LABEL_202;
  v57 = *((_DWORD *)v50 + 16);
  if ( (v57 & 0x800) == 0 )
  {
    if ( (v57 & 0x1000) == 0 )
      v51 = v35;
    goto LABEL_202;
  }
LABEL_206:
  v36 = (__int64 *)*v35;
  v34 = v158;
  v12 = v119;
  v37 = a1;
  do
  {
LABEL_207:
    v42 = (v36[8] & 0x800) == 0;
    v122 = 1;
    if ( v42 && (int)IsSpbCheckDceSupported_0() >= 0 )
      SpbCheckDce_0();
    v58 = v36[1];
    LOBYTE(v29) = 1;
    *((_DWORD *)v36 + 16) = v34 | 0x1000;
    v131[1] = 0LL;
    v59 = HmgShareLock(v58, v29);
    v131[0] = v59;
    if ( v59 )
    {
      *(_DWORD *)(v59 + 36) &= ~0x100000u;
      GrepValidateVisRgn((struct DC *)v59, *(struct REGION **)(v59 + 1512));
      XDCOBJ::RestoreAttributes((XDCOBJ *)v131);
      HmgDecrementShareReferenceCount(v131[0]);
    }
    v124 = 0LL;
    if ( (int)IsCalcVisRgnSupported_0() < 0 || !(unsigned int)CalcVisRgn_0() )
      *((_DWORD *)v36 + 16) |= 0x10000000u;
    v60 = v121;
    v36[5] = 0LL;
    v36[6] = 0LL;
    v36[4] = v60;
    v36[2] = v37;
    v36[3] = v12;
    ResetOrg((unsigned __int64)v124, (struct tagDCE *)v36, 1);
    v45 = v161;
    if ( !v124 )
      v45 = 1;
    v161 = v45;
LABEL_164:
    ;
  }
  while ( (v36[8] & 0x8080441F) != v34 );
  if ( v36 != *(__int64 **)(gpDispInfo + 64) )
  {
    *v35 = *v36;
    *v36 = *(_QWORD *)(gpDispInfo + 64);
    *(_QWORD *)(gpDispInfo + 64) = v36;
  }
  v46 = v36[1];
  v47 = 0LL;
  v126[0] = 0LL;
  v126[1] = 0LL;
  if ( (unsigned __int16)v46 < (unsigned int)gcMaxHmgr )
  {
    v48 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v46;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v156);
    _m_prefetchw(v48 + 8);
    v42 = (v48[15] & 0x20) == 0;
    v49 = *((_DWORD *)v48 + 2);
    v134 = v49;
    if ( !v42 )
      goto LABEL_258;
    while ( 1 )
    {
      if ( (v48[15] & 0x40) != 0 )
      {
        ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v46, 0LL);
        if ( v48[14] == 1 && *((_WORD *)v48 + 6) == WORD1(v46) )
        {
          v47 = *(_QWORD *)v48;
          ++*(_DWORD *)(*(_QWORD *)v48 + 8LL);
        }
        if ( (v48[15] & 0x40) != 0 )
        {
          ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v46);
        }
        else
        {
          _m_prefetchw(v48 + 8);
          v134 = *((_DWORD *)v48 + 2) & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)v48 + 2, v134);
        }
        KeLeaveCriticalRegion();
        break;
      }
      if ( (v49 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
      }
      else
      {
        v135 = v49 | 1;
        if ( v49 == _InterlockedCompareExchange((volatile signed __int32 *)v48 + 2, v49 | 1, v49)
          && (v48[15] & 0x40) == 0 )
        {
          *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + (unsigned __int16)v46) = 0LL;
          v48[15] |= 0x40u;
          _m_prefetchw(v48 + 8);
          v134 = *((_DWORD *)v48 + 2) & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)v48 + 2, v134);
          v49 = v134;
          continue;
        }
      }
      _m_prefetchw(v48 + 8);
      v42 = (v48[15] & 0x20) == 0;
      v49 = *((_DWORD *)v48 + 2);
      v134 = v49;
      if ( !v42 )
        goto LABEL_258;
    }
  }
  v126[0] = v47;
  if ( v47 )
  {
    *(_DWORD *)(v47 + 36) &= ~0x100000u;
    v61 = *(_DWORD **)(v47 + 1512);
    if ( (*(_DWORD *)(v47 + 36) & 0x100000) != 0 )
    {
      v62 = *(_QWORD *)(v47 + 48);
      v144 = v62;
      if ( (unsigned int)PDEVOBJ::bValid((PDEVOBJ *)&v144) )
      {
        if ( v61 )
        {
          v120 = 0LL;
          if ( (v63 & 0x40000) != 0 )
          {
            v65 = *(HSURF *)(v47 + 2512);
            if ( v65 )
            {
              SURFREF::vLock((SURFREF *)&v120, v65);
              v64 = v120;
            }
            else
            {
              v64 = *(_QWORD *)(v62 + 2576);
            }
          }
          else
          {
            v64 = *(_QWORD *)(v47 + 512);
          }
          if ( v64 && ((*(_DWORD *)(v62 + 56) & 0x20000) == 0 || *(int *)(*(_QWORD *)(v47 + 512) + 112LL) >= 0) )
            GreValidateRgnInDCSurfBounds(v47, v64, v61);
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v120);
        }
      }
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)v126);
    v66 = (unsigned __int16)*(_DWORD *)v126[0];
    v67 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v66;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v154);
    _m_prefetchw(v67 + 8);
    v42 = (v67[15] & 0x20) == 0;
    v68 = *((_DWORD *)v67 + 2);
    v138 = v68;
    while ( v42 )
    {
LABEL_243:
      if ( (v67[15] & 0x40) != 0 )
      {
        v69 = 8 * v66;
        ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v66, 0LL);
        v70 = v126[0];
        if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v126[0] + 14) == 5
          && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
          && gpentHmgrAltStacks )
        {
          RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v126[0]);
        }
        --*(_DWORD *)(v70 + 8);
        if ( (v67[15] & 0x40) != 0 )
        {
          ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v69);
        }
        else
        {
          _m_prefetchw(v67 + 8);
          v138 = *((_DWORD *)v67 + 2) & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)v67 + 2, v138);
        }
        break;
      }
      if ( (v68 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
      }
      else
      {
        v139 = v68 | 1;
        if ( v68 == _InterlockedCompareExchange((volatile signed __int32 *)v67 + 2, v68 | 1, v68)
          && (v67[15] & 0x40) == 0 )
        {
          *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v66) = 0LL;
          v67[15] |= 0x40u;
          _m_prefetchw(v67 + 8);
          v138 = *((_DWORD *)v67 + 2) & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)v67 + 2, v138);
          v68 = v138;
          goto LABEL_243;
        }
      }
      _m_prefetchw(v67 + 8);
      v42 = (v67[15] & 0x20) == 0;
      v68 = *((_DWORD *)v67 + 2);
      v138 = v68;
    }
LABEL_258:
    KeLeaveCriticalRegion();
  }
  v71 = v160;
  if ( (v160 & 0x80u) == 0 )
  {
    if ( (v160 & 0x40) != 0 )
    {
      v72 = EmptyRgnPublic;
      if ( EmptyRgnPublic )
      {
        SetRectRgnIndirect(ghrgnGDC, (LONG *)&gZero);
        RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
        v77 = v36[1];
        v36[7] = (__int64)RectRgnIndirect;
        GreSelectVisRgn(v77, (__int64)RectRgnIndirect, 4u);
        v36[5] = (__int64)EmptyRgnPublic;
        if ( (v160 & 0x40000) != 0 )
          *((_DWORD *)v36 + 16) |= 0x40000u;
        *((_DWORD *)v36 + 16) |= 0x40u;
        if ( EmptyRgnPublic != (HRGN)1 )
        {
          v75 = 4;
          goto LABEL_273;
        }
        v36[6] = 1LL;
LABEL_276:
        *((_DWORD *)v36 + 16) &= ~0x2000u;
        GreSelectVisRgn(v36[1], (__int64)ghrgnGDC, 4u);
      }
    }
  }
  else
  {
    v72 = EmptyRgnPublic;
    if ( EmptyRgnPublic != (HRGN)1 )
    {
      SetRectRgnIndirect(ghrgnGDC, (LONG *)&gZero);
      v73 = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
      v74 = v36[1];
      v36[7] = (__int64)v73;
      GreSelectVisRgn(v74, (__int64)v73, 4u);
      v36[5] = (__int64)EmptyRgnPublic;
      if ( (v160 & 0x40000) != 0 )
        *((_DWORD *)v36 + 16) |= 0x40000u;
      *((_DWORD *)v36 + 16) |= 0x80u;
      if ( !EmptyRgnPublic )
      {
        v36[6] = 0LL;
        goto LABEL_276;
      }
      v75 = 1;
LABEL_273:
      GreCombineRgn(ghrgnGDC, (HRGN)v36[7], v72, v75);
      v78 = (HRGN)CreateEmptyRgnPublic();
      v36[6] = (__int64)v78;
      GreCombineRgn(v78, v72, 0LL, 5);
      if ( (unsigned __int64)v72 > 2 && (v36[8] & 0x40000) == 0 )
        GreMarkUndeletableRgn(v72);
      goto LABEL_276;
    }
  }
  if ( (v36[8] & 0x4000) != 0 )
  {
    if ( (int)IsGreSelectRedirectionBitmapSupported_0() >= 0 && !(unsigned int)GreSelectRedirectionBitmap_0() )
      v45 = 1;
    v79 = v36[1];
    v80 = 0LL;
    v127[0] = 0LL;
    v127[1] = 0LL;
    if ( (unsigned __int16)v79 < (unsigned int)gcMaxHmgr )
    {
      v81 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v79;
      PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v151);
      _m_prefetchw(v81 + 8);
      v42 = (v81[15] & 0x20) == 0;
      v82 = *((_DWORD *)v81 + 2);
      v142 = v82;
      if ( !v42 )
        goto LABEL_320;
      while ( 1 )
      {
        if ( (v81[15] & 0x40) != 0 )
        {
          ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v79, 0LL);
          if ( v81[14] == 1 && *((_WORD *)v81 + 6) == WORD1(v79) )
          {
            v80 = *(__m128i **)v81;
            ++*(_DWORD *)(*(_QWORD *)v81 + 8LL);
          }
          if ( (v81[15] & 0x40) != 0 )
          {
            ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v79);
          }
          else
          {
            _m_prefetchw(v81 + 8);
            v142 = *((_DWORD *)v81 + 2) & 0xFFFFFFFE;
            _InterlockedExchange((volatile __int32 *)v81 + 2, v142);
          }
          KeLeaveCriticalRegion();
          break;
        }
        if ( (v82 & 1) != 0 )
        {
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
        }
        else
        {
          v143 = v82 | 1;
          if ( v82 == _InterlockedCompareExchange((volatile signed __int32 *)v81 + 2, v82 | 1, v82)
            && (v81[15] & 0x40) == 0 )
          {
            *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + (unsigned __int16)v79) = 0LL;
            v81[15] |= 0x40u;
            _m_prefetchw(v81 + 8);
            v142 = *((_DWORD *)v81 + 2) & 0xFFFFFFFE;
            _InterlockedExchange((volatile __int32 *)v81 + 2, v142);
            v82 = v142;
            continue;
          }
        }
        _m_prefetchw(v81 + 8);
        v42 = (v81[15] & 0x20) == 0;
        v82 = *((_DWORD *)v81 + 2);
        v142 = v82;
        if ( !v42 )
          goto LABEL_320;
      }
    }
    v127[0] = v80;
    if ( v80 )
    {
      v80[2].m128i_i32[1] |= 0x40u;
      v83 = v80[92].m128i_i64[0];
      v84 = _mm_srli_si128(v80[92], 8).m128i_u64[0];
      if ( (_DWORD)v83 != (_DWORD)v84
        && HIDWORD(v83) != HIDWORD(v84)
        && (int)v83 < (int)v84
        && SHIDWORD(v83) < SHIDWORD(v84) )
      {
        v80[92].m128i_i32[0] = 0x7FFFFFFF;
        v80[92].m128i_i32[1] = 0x7FFFFFFF;
        v80[92].m128i_i32[2] = 0x80000000;
        v80[92].m128i_i32[3] = 0x80000000;
      }
      XDCOBJ::RestoreAttributes((XDCOBJ *)v127);
      v85 = (unsigned __int16)*(_DWORD *)v127[0];
      v86 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v85;
      PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v150);
      _m_prefetchw(v86 + 8);
      v42 = (v86[15] & 0x20) == 0;
      v87 = *((_DWORD *)v86 + 2);
      v145 = v87;
      while ( v42 )
      {
LABEL_305:
        if ( (v86[15] & 0x40) != 0 )
        {
          v88 = 8 * v85;
          ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v85, 0LL);
          v89 = v127[0];
          if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v127[0] + 14) == 5
            && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
            && gpentHmgrAltStacks )
          {
            RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v127[0]);
          }
          --*(_DWORD *)(v89 + 8);
          if ( (v86[15] & 0x40) != 0 )
          {
            ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v88);
          }
          else
          {
            _m_prefetchw(v86 + 8);
            v145 = *((_DWORD *)v86 + 2) & 0xFFFFFFFE;
            _InterlockedExchange((volatile __int32 *)v86 + 2, v145);
          }
          break;
        }
        if ( (v87 & 1) != 0 )
        {
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
        }
        else
        {
          v146 = v87 | 1;
          if ( v87 == _InterlockedCompareExchange((volatile signed __int32 *)v86 + 2, v87 | 1, v87)
            && (v86[15] & 0x40) == 0 )
          {
            *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v85) = 0LL;
            v86[15] |= 0x40u;
            _m_prefetchw(v86 + 8);
            v145 = *((_DWORD *)v86 + 2) & 0xFFFFFFFE;
            _InterlockedExchange((volatile __int32 *)v86 + 2, v145);
            v87 = v145;
            goto LABEL_305;
          }
        }
        _m_prefetchw(v86 + 8);
        v42 = (v86[15] & 0x20) == 0;
        v87 = *((_DWORD *)v86 + 2);
        v145 = v87;
      }
LABEL_320:
      KeLeaveCriticalRegion();
    }
    if ( v45 )
      GreSelectVisRgn(v36[1], 0LL, 1u);
    v71 = v160;
  }
  if ( (v36[8] & 2) == 0 )
  {
LABEL_331:
    if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 && (v71 & 0x40000000) == 0 )
      GreSetLayout((HDC)v36[1], -1, 1u);
    v94 = v36[1];
    v95 = 0LL;
    v128[0] = 0LL;
    v128[1] = 0LL;
    if ( (unsigned __int16)v94 < (unsigned int)gcMaxHmgr )
    {
      v96 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v94;
      PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v155);
      _m_prefetchw(v96 + 8);
      v42 = (v96[15] & 0x20) == 0;
      v97 = *((_DWORD *)v96 + 2);
      v148 = v97;
      if ( !v42 )
        goto LABEL_383;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (v96[15] & 0x40) != 0 )
          {
            ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v94, 0LL);
            if ( v96[14] == 1 && *((_WORD *)v96 + 6) == WORD1(v94) )
            {
              v95 = *(_QWORD *)v96;
              ++*(_DWORD *)(*(_QWORD *)v96 + 8LL);
            }
            if ( (v96[15] & 0x40) != 0 )
            {
              ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * (unsigned __int16)v94);
            }
            else
            {
              _m_prefetchw(v96 + 8);
              v148 = *((_DWORD *)v96 + 2) & 0xFFFFFFFE;
              _InterlockedExchange((volatile __int32 *)v96 + 2, v148);
            }
            KeLeaveCriticalRegion();
            goto LABEL_353;
          }
          if ( (v97 & 1) == 0 )
            break;
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_344:
          _m_prefetchw(v96 + 8);
          v42 = (v96[15] & 0x20) == 0;
          v97 = *((_DWORD *)v96 + 2);
          v148 = v97;
          if ( !v42 )
            goto LABEL_383;
        }
        v149 = v97 | 1;
        if ( v97 != _InterlockedCompareExchange((volatile signed __int32 *)v96 + 2, v97 | 1, v97)
          || (v96[15] & 0x40) != 0 )
        {
          goto LABEL_344;
        }
        *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + (unsigned __int16)v94) = 0LL;
        v96[15] |= 0x40u;
        _m_prefetchw(v96 + 8);
        v148 = *((_DWORD *)v96 + 2) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)v96 + 2, v148);
        v97 = v148;
      }
    }
LABEL_353:
    v128[0] = v95;
    if ( v95 )
    {
      *(_DWORD *)(v95 + 36) |= 0x100000u;
      v99 = *(_DWORD *)(v95 + 36);
      v100 = *(_DWORD **)(v95 + 1512);
      if ( (v99 & 0x100000) != 0 )
      {
        v101 = *(_QWORD *)(v95 + 48);
        if ( v101 )
        {
          if ( v100 )
          {
            v123 = 0LL;
            if ( (v99 & 0x40000) != 0 )
            {
              v103 = *(HSURF *)(v95 + 2512);
              if ( v103 )
              {
                SURFREF::vLock((SURFREF *)&v123, v103);
                v102 = v123;
              }
              else
              {
                v102 = *(_QWORD *)(v101 + 2576);
              }
            }
            else
            {
              v102 = *(_QWORD *)(v95 + 512);
            }
            if ( v102 && ((*(_DWORD *)(v101 + 56) & 0x20000) == 0 || *(int *)(*(_QWORD *)(v95 + 512) + 112LL) >= 0) )
              GreValidateRgnInDCSurfBounds(v95, v102, v100);
            EPALOBJ::~EPALOBJ((EPALOBJ *)&v123);
          }
        }
      }
      XDCOBJ::RestoreAttributes((XDCOBJ *)v128);
      v104 = (unsigned __int16)*(_DWORD *)v128[0];
      v105 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v104;
      PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v157);
      _m_prefetchw(v105 + 8);
      v42 = (v105[15] & 0x20) == 0;
      v106 = *((_DWORD *)v105 + 2);
      v136 = v106;
      if ( v42 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (v105[15] & 0x40) != 0 )
            {
              v107 = 8 * v104;
              ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v104, 0LL);
              v108 = v128[0];
              if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v128[0] + 14) == 5
                && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
                && gpentHmgrAltStacks )
              {
                RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v128[0]);
              }
              --*(_DWORD *)(v108 + 8);
              if ( (v105[15] & 0x40) != 0 )
              {
                ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v107);
              }
              else
              {
                _m_prefetchw(v105 + 8);
                v136 = *((_DWORD *)v105 + 2) & 0xFFFFFFFE;
                _InterlockedExchange((volatile __int32 *)v105 + 2, v136);
              }
              goto LABEL_383;
            }
            if ( (v106 & 1) == 0 )
              break;
            KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_374:
            _m_prefetchw(v105 + 8);
            v42 = (v105[15] & 0x20) == 0;
            v106 = *((_DWORD *)v105 + 2);
            v136 = v106;
            if ( !v42 )
              goto LABEL_383;
          }
          v137 = v106 | 1;
          if ( v106 != _InterlockedCompareExchange((volatile signed __int32 *)v105 + 2, v106 | 1, v106)
            || (v105[15] & 0x40) != 0 )
          {
            goto LABEL_374;
          }
          *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v104) = 0LL;
          v105[15] |= 0x40u;
          _m_prefetchw(v105 + 8);
          v136 = *((_DWORD *)v105 + 2) & 0xFFFFFFFE;
          _InterlockedExchange((volatile __int32 *)v105 + 2, v136);
          v106 = v136;
        }
      }
LABEL_383:
      KeLeaveCriticalRegion();
    }
    if ( (int)IsGreHintDCWndSupported_0() >= 0 )
      GreHintDCWnd_0();
    if ( v121 && (*(_BYTE *)(v121 + 50) & 8) != 0 && (int)IsGreHintDCWndSupported_0() >= 0 )
      GreHintDCWnd_0();
    if ( *((int *)v36 + 16) < 0 )
    {
      v111 = PsGetCurrentProcessWin32Process(v109);
      *(_DWORD *)(v111 + 12) |= 0x200u;
      v36[9] = 0LL;
      v36[10] = PsGetCurrentProcessWin32Process(v112);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v109, &LockRelease, v110, ghsemDCVisRgn, L"ghsemDCVisRgn");
    v113 = ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
      PsLeavePriorityRegion(v114);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v113, &LockRelease, v110, ghsemGreLock, L"ghsemGreLock");
    v115 = ghsemGreLock;
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
      PsLeavePriorityRegion(v116);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v115, &LockRelease, v110, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion(v117);
    }
    return v36[1];
  }
  if ( (unsigned int)GreSetDCOwnerEx(v36[1], 2147483650LL, 0LL, 1LL) )
  {
    v92 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v90, v91);
    if ( ThreadWin32Thread )
      v92 = *ThreadWin32Thread;
    v36[9] = v92;
    v36[10] = 0LL;
    --gnDCECount;
    if ( v122 && (int)IsGreSelectFontSupported_0() >= 0 )
    {
      GreGetStockObject(13LL);
      GreSelectFont_0();
    }
    goto LABEL_331;
  }
  *((_DWORD *)v36 + 16) &= ~0x1000u;
  DestroyCacheDC(gpDispInfo + 64, 0LL);
LABEL_342:
  GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
  return 0LL;
}
