/*
 * XREFs of _GetDCEx @ 0x1C00212B0
 * Callers:
 *     UserGetDesktopDC @ 0x1C001CBFC (UserGetDesktopDC.c)
 *     NtUserGetDC @ 0x1C00210B0 (NtUserGetDC.c)
 *     UserGetMonitorDC @ 0x1C0054ECC (UserGetMonitorDC.c)
 *     _GetDC @ 0x1C007C640 (_GetDC.c)
 * Callees:
 *     GreSelectFont_0 @ 0x1C0001010 (GreSelectFont_0.c)
 *     GreSelectRedirectionBitmap_0 @ 0x1C0001018 (GreSelectRedirectionBitmap_0.c)
 *     IsGreSelectRedirectionBitmapSupported_0 @ 0x1C0001030 (IsGreSelectRedirectionBitmapSupported_0.c)
 *     IsGreSelectFontSupported_0 @ 0x1C0001038 (IsGreSelectFontSupported_0.c)
 *     IsGreHintDCWndSupported_0 @ 0x1C0001040 (IsGreHintDCWndSupported_0.c)
 *     GreHintDCWnd_0 @ 0x1C0001048 (GreHintDCWnd_0.c)
 *     IsGetLayeredOrRedirectedParentSupported_0 @ 0x1C0002408 (IsGetLayeredOrRedirectedParentSupported_0.c)
 *     GetLayeredOrRedirectedParent_0 @ 0x1C0002410 (GetLayeredOrRedirectedParent_0.c)
 *     IsGetRedirectionBitmapSupported_0 @ 0x1C0002418 (IsGetRedirectionBitmapSupported_0.c)
 *     GetRedirectionBitmap_0 @ 0x1C0002420 (GetRedirectionBitmap_0.c)
 *     IsCalcVisRgnSupported_0 @ 0x1C0002428 (IsCalcVisRgnSupported_0.c)
 *     CalcVisRgn_0 @ 0x1C0002430 (CalcVisRgn_0.c)
 *     IsDeleteHrgnClipSupported_0 @ 0x1C0002448 (IsDeleteHrgnClipSupported_0.c)
 *     DeleteHrgnClip_0 @ 0x1C0002450 (DeleteHrgnClip_0.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported_0 @ 0x1C0002458 (IsFlushWEFCOMPOSITEDDCEBoundsSupported_0.c)
 *     FlushWEFCOMPOSITEDDCEBounds_0 @ 0x1C0002460 (FlushWEFCOMPOSITEDDCEBounds_0.c)
 *     IsSpbCheckDceSupported_0 @ 0x1C0002468 (IsSpbCheckDceSupported_0.c)
 *     SpbCheckDce_0 @ 0x1C0002470 (SpbCheckDce_0.c)
 *     CreateCacheDC @ 0x1C0020830 (CreateCacheDC.c)
 *     GreValidateVisrgn @ 0x1C00209DC (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     GreLockVisRgn @ 0x1C0025520 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00255C0 (GreUnlockVisRgn.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0027218 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00272C0 (--1DCOBJA@@QEAA@XZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0028CB0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     SetRectRgnIndirect @ 0x1C002F110 (SetRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C0034480 (GreCreateRectRgnIndirect.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0034760 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreGetStockObject @ 0x1C0035660 (GreGetStockObject.c)
 *     GreOffsetRgn @ 0x1C0036A90 (GreOffsetRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     GreSelectVisRgnShared @ 0x1C00382B0 (GreSelectVisRgnShared.c)
 *     GreIsRendering @ 0x1C0039210 (GreIsRendering.c)
 *     CreateEmptyRgnPublic @ 0x1C0057880 (CreateEmptyRgnPublic.c)
 *     DestroyCacheDC @ 0x1C005A3A0 (DestroyCacheDC.c)
 *     GreMarkUndeletableRgn @ 0x1C005B628 (GreMarkUndeletableRgn.c)
 *     GreSetLayout @ 0x1C0079D30 (GreSetLayout.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00BD700 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00BD78C (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00C06FC (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00C1980 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C00C53B8 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00CB930 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     Template_pqz @ 0x1C00CC378 (Template_pqz.c)
 *     Template_pz @ 0x1C00CC434 (Template_pz.c)
 */

__int64 __fastcall GetDCEx(__int64 a1, HRGN a2, unsigned int a3)
{
  int v3; // r15d
  unsigned int v4; // r13d
  HRGN v5; // r12
  const wchar_t *v6; // rcx
  struct _ERESOURCE *v7; // rbx
  const wchar_t *v8; // rcx
  struct _ERESOURCE *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rcx
  char v14; // al
  int v15; // esi
  __int64 *v16; // rdi
  __int64 v17; // rbx
  int v18; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rax
  char v23; // al
  __int64 LayeredOrRedirectedParent_0; // rax
  __int64 v25; // rdi
  HRGN v26; // rdx
  __int64 v27; // rcx
  unsigned __int8 v28; // dl
  unsigned int v29; // r12d
  _QWORD *v30; // rdi
  struct tagDCE *v31; // rbx
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rdi
  _QWORD *v36; // r14
  unsigned int v37; // esi
  __int64 v38; // rbx
  unsigned int v39; // edx
  signed int v40; // ecx
  __int64 v41; // rbx
  char v42; // r15
  _QWORD *v43; // rax
  __int64 v44; // r12
  __int64 v45; // r13
  PVOID v46; // r14
  __int64 v47; // r9
  unsigned int v48; // edx
  signed int v49; // ecx
  __int64 v50; // r9
  unsigned __int16 *v51; // rsi
  bool v52; // zf
  int v53; // eax
  unsigned int v54; // edi
  unsigned int v55; // ebx
  __int64 v56; // r8
  unsigned int v57; // edx
  signed int v58; // ecx
  __int64 v59; // r9
  struct DC *v60; // rax
  unsigned int v61; // edi
  unsigned int v62; // ebx
  __int64 v63; // r8
  unsigned int v64; // edx
  signed int v65; // ecx
  __int64 v66; // r9
  _DWORD *v67; // rdx
  int v68; // eax
  __int64 v69; // rdi
  unsigned int v70; // ebx
  __int64 v71; // r8
  unsigned int v72; // edx
  signed int v73; // ecx
  __int64 v74; // r10
  int v75; // ebx
  __int64 v76; // rdi
  struct tagDCE **v77; // r12
  struct tagDCE **v78; // rsi
  __int64 v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // rax
  int v82; // ebx
  __int64 v83; // rbx
  __int64 v84; // rdi
  _QWORD *DeferredContext; // r14
  unsigned int v86; // esi
  int v87; // eax
  HDC v88; // rcx
  int v89; // eax
  __int64 v90; // rbx
  unsigned int v91; // edx
  signed int v92; // ecx
  __int64 v93; // rbx
  char v94; // r12
  _QWORD *v95; // rax
  __int64 v96; // r15
  __int64 v97; // r13
  PVOID v98; // rsi
  __int64 v99; // r9
  unsigned int v100; // edx
  signed int v101; // ecx
  __int64 v102; // r9
  unsigned __int16 *v103; // r14
  int v104; // eax
  unsigned int v105; // edi
  unsigned int v106; // ebx
  __int64 v107; // r8
  unsigned int v108; // edx
  signed int v109; // ecx
  __int64 v110; // r9
  struct DC *v111; // rax
  unsigned int v112; // edi
  unsigned int v113; // ebx
  __int64 v114; // r8
  unsigned int v115; // edx
  signed int v116; // ecx
  __int64 v117; // r9
  _DWORD *v118; // rdx
  int v119; // eax
  __int64 v120; // rdi
  unsigned int v121; // ebx
  __int64 v122; // r8
  unsigned int v123; // edx
  signed int v124; // ecx
  __int64 v125; // r10
  bool v126; // bl
  unsigned int v127; // esi
  HRGN v128; // rbx
  __int64 v129; // rax
  struct tagDCE *v130; // rdi
  HDC v131; // rcx
  int v132; // r9d
  HRGN v133; // rax
  __int64 RectRgnIndirect; // rax
  HDC v135; // rcx
  int v136; // eax
  int v137; // ecx
  unsigned int v138; // ebx
  __int64 v139; // r15
  __int64 v140; // rdi
  _QWORD *v141; // r14
  unsigned int v142; // esi
  __int64 v143; // rbx
  unsigned int v144; // edx
  signed int v145; // ecx
  __int64 v146; // rbx
  char v147; // r13
  __int64 v148; // r12
  _QWORD *v149; // rax
  PVOID v150; // rsi
  __int64 v151; // r9
  unsigned int v152; // edx
  signed int v153; // ecx
  __int64 v154; // r9
  unsigned __int16 *v155; // r14
  int v156; // eax
  unsigned int v157; // edi
  unsigned int v158; // ebx
  __int64 v159; // r8
  unsigned int v160; // edx
  signed int v161; // ecx
  __int64 v162; // r9
  unsigned int v163; // edi
  unsigned int v164; // ebx
  __int64 v165; // r8
  unsigned int v166; // edx
  signed int v167; // ecx
  __int64 v168; // r9
  _DWORD *v169; // rdx
  int v170; // eax
  __int64 v171; // rdi
  unsigned int v172; // ebx
  __int64 v173; // r8
  unsigned int v174; // edx
  signed int v175; // ecx
  __int64 v176; // r10
  __int64 v177; // rdx
  unsigned __int64 v178; // xmm1_8
  __int64 v179; // rdi
  _QWORD *v180; // r14
  unsigned int v181; // esi
  __int64 v182; // rbx
  unsigned int v183; // edx
  signed int v184; // ecx
  __int64 v185; // rbx
  char v186; // r12
  _QWORD *v187; // rax
  __int64 v188; // r15
  __int64 v189; // r13
  _QWORD *v190; // rsi
  __int64 v191; // r9
  unsigned int v192; // edx
  signed int v193; // ecx
  __int64 v194; // r9
  unsigned __int16 *v195; // rbx
  int v196; // eax
  _DWORD *v197; // rdi
  unsigned int v198; // edx
  PVOID v199; // rsi
  unsigned int v200; // edi
  unsigned int v201; // ebx
  __int64 v202; // r8
  unsigned int v203; // edx
  signed int v204; // ecx
  __int64 v205; // r9
  _DWORD *v206; // rdx
  int v207; // eax
  __int64 v208; // rdi
  unsigned int v209; // ebx
  __int64 v210; // r8
  unsigned int v211; // edx
  signed int v212; // ecx
  __int64 v213; // r10
  __int64 v214; // rbx
  __int64 *ThreadWin32Thread; // rax
  unsigned int v217; // ebx
  struct DC *v218; // r15
  __int64 v219; // rdi
  unsigned int v220; // esi
  _QWORD *v221; // r14
  __int64 v222; // rbx
  unsigned int v223; // edx
  signed int v224; // ecx
  __int64 v225; // rbx
  char v226; // r13
  __int64 v227; // r12
  _QWORD *v228; // rax
  PVOID v229; // rsi
  __int64 v230; // r9
  unsigned int v231; // edx
  signed int v232; // ecx
  __int64 v233; // r9
  unsigned __int16 *v234; // r14
  int v235; // eax
  unsigned int v236; // edi
  unsigned int v237; // ebx
  __int64 v238; // r8
  unsigned int v239; // edx
  signed int v240; // ecx
  __int64 v241; // r9
  unsigned int v242; // edi
  unsigned int v243; // ebx
  __int64 v244; // r8
  unsigned int v245; // edx
  signed int v246; // ecx
  __int64 v247; // r9
  _DWORD *v248; // rdx
  int v249; // eax
  __int64 v250; // rdi
  unsigned int v251; // ebx
  __int64 v252; // r8
  unsigned int v253; // edx
  signed int v254; // ecx
  __int64 v255; // r10
  bool v256; // bl
  __int64 v257; // rcx
  __int64 v258; // rax
  PERESOURCE v259; // rcx
  PERESOURCE v260; // rcx
  struct tagDCE *v261; // [rsp+30h] [rbp-D0h]
  struct DC *v262; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v263; // [rsp+40h] [rbp-C0h]
  __int64 v264; // [rsp+48h] [rbp-B8h]
  __int64 v265; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v266; // [rsp+58h] [rbp-A8h] BYREF
  int v267; // [rsp+60h] [rbp-A0h]
  __int64 v268; // [rsp+68h] [rbp-98h]
  unsigned __int64 v269; // [rsp+70h] [rbp-90h]
  HRGN v270; // [rsp+78h] [rbp-88h]
  __int64 RedirectionBitmap_0; // [rsp+80h] [rbp-80h]
  __int64 v272; // [rsp+88h] [rbp-78h]
  __int64 v273; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 *v274; // [rsp+98h] [rbp-68h] BYREF
  int v275; // [rsp+A0h] [rbp-60h]
  int v276; // [rsp+A4h] [rbp-5Ch]
  unsigned __int16 *v277; // [rsp+B0h] [rbp-50h] BYREF
  int v278; // [rsp+B8h] [rbp-48h]
  int v279; // [rsp+BCh] [rbp-44h]
  unsigned __int16 *v280; // [rsp+C8h] [rbp-38h] BYREF
  int v281; // [rsp+D0h] [rbp-30h]
  int v282; // [rsp+D4h] [rbp-2Ch]
  unsigned __int16 *v283; // [rsp+E0h] [rbp-20h] BYREF
  int v284; // [rsp+E8h] [rbp-18h]
  int v285; // [rsp+ECh] [rbp-14h]
  unsigned __int16 *v286; // [rsp+F8h] [rbp-8h] BYREF
  int v287; // [rsp+100h] [rbp+0h]
  int v288; // [rsp+104h] [rbp+4h]
  _QWORD v289[2]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v290[32]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v291; // [rsp+140h] [rbp+40h]
  char v292[8]; // [rsp+148h] [rbp+48h] BYREF
  char v293[8]; // [rsp+150h] [rbp+50h] BYREF
  struct DC *v294[2]; // [rsp+158h] [rbp+58h] BYREF
  char v295[32]; // [rsp+168h] [rbp+68h] BYREF
  struct DC *v296[2]; // [rsp+188h] [rbp+88h] BYREF
  char v297[32]; // [rsp+198h] [rbp+98h] BYREF
  _QWORD v298[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v299[32]; // [rsp+1C8h] [rbp+C8h] BYREF
  _QWORD v300[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  _BYTE v301[32]; // [rsp+1F8h] [rbp+F8h] BYREF
  char v302[8]; // [rsp+218h] [rbp+118h] BYREF
  struct _RECTL v303; // [rsp+220h] [rbp+120h] BYREF
  struct _RECTL v304; // [rsp+230h] [rbp+130h] BYREF
  char v305[8]; // [rsp+240h] [rbp+140h] BYREF
  char v306[8]; // [rsp+248h] [rbp+148h] BYREF
  char v307[8]; // [rsp+250h] [rbp+150h] BYREF
  char v308[72]; // [rsp+258h] [rbp+158h] BYREF
  int v309; // [rsp+2B0h] [rbp+1B0h]
  __int64 v310; // [rsp+2B0h] [rbp+1B0h]
  HRGN EmptyRgnPublic; // [rsp+2B8h] [rbp+1B8h]
  unsigned int v312; // [rsp+2C0h] [rbp+1C0h]
  _DWORD *v313; // [rsp+2C8h] [rbp+1C8h] BYREF

  v312 = a3;
  EmptyRgnPublic = a2;
  v3 = 0;
  v263 = a1;
  v4 = a3;
  v268 = 0LL;
  v5 = a2;
  RedirectionBitmap_0 = 0LL;
  v309 = 0;
  v267 = 0;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  v6 = L"ghsemDynamicModeChange";
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(L"ghsemDynamicModeChange", &LockAcquireShared);
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
  v10 = v263;
  if ( !v263 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 16LL);
    v263 = v10;
  }
  v264 = v10;
  v11 = 0LL;
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
  }
  else
  {
LABEL_24:
    v3 = 1;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 12) & 0x200) != 0 )
  {
    v15 = 1;
    GreLockVisRgn(*(_QWORD *)gpDispInfo);
    v16 = (__int64 *)(gpDispInfo + 64);
    v17 = *(_QWORD *)(gpDispInfo + 64);
    if ( !v17 )
      goto LABEL_36;
    do
    {
      v18 = *(_DWORD *)(v17 + 64);
      if ( v18 >= 0 )
      {
        if ( (v18 & 0x400000) != 0 )
          DestroyCacheDC(v16, *(_QWORD *)(v17 + 8));
      }
      else if ( *(_QWORD *)(v17 + 80) == PsGetCurrentProcessWin32Process() )
      {
        v15 = 0;
      }
      if ( v17 == *v16 )
        v16 = (__int64 *)v17;
      v17 = *v16;
    }
    while ( *v16 );
    if ( v15 )
    {
LABEL_36:
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
    }
    GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
    v12 = v264;
    v10 = v263;
  }
  if ( (v4 & 0x10000) != 0 )
  {
    v4 &= 0xFFFFFFC7;
    v312 = v4;
    if ( (v4 & 1) != 0 )
    {
      if ( (*(_BYTE *)(v10 + 55) & 4) != 0 )
        v4 |= 0x10u;
      goto LABEL_57;
    }
    v20 = *(_QWORD *)(v10 + 152);
    v21 = *(_BYTE *)(v20 + 84);
    if ( v21 < 0 )
    {
      v4 |= 0x20u;
      v312 = v4;
    }
    if ( (v4 & 2) == 0 && (v21 & 0x20) == 0 )
    {
      if ( (v21 & 0x40) != 0 )
      {
        v22 = *(_QWORD *)(v20 + 24);
        if ( v22 )
          v11 = *(_QWORD *)(v22 + 8);
      }
      else
      {
        v4 |= 2u;
        v312 = v4;
      }
    }
    v23 = *(_BYTE *)(v10 + 55);
    if ( (v23 & 2) != 0 )
    {
      v4 |= 8u;
      v312 = v4;
    }
    if ( (v23 & 4) != 0 )
    {
      v4 |= 0x10u;
      v312 = v4;
    }
    if ( (v23 & 0x20) != 0 )
    {
      v4 &= ~8u;
      v312 = v4;
      if ( *(_QWORD *)(v20 + 112) )
      {
LABEL_57:
        v4 |= 2u;
        v312 = v4;
      }
    }
  }
  if ( (v4 & 0x80000) != 0 )
  {
    v4 = v4 & 0xFFFFFFD5 | 2;
    v312 = v4;
  }
  if ( (int)IsGetLayeredOrRedirectedParentSupported_0() < 0 )
    goto LABEL_75;
  LayeredOrRedirectedParent_0 = GetLayeredOrRedirectedParent_0();
  v25 = LayeredOrRedirectedParent_0;
  if ( !LayeredOrRedirectedParent_0 || (*(_DWORD *)(LayeredOrRedirectedParent_0 + 48) & 0x20000000) == 0 )
    goto LABEL_75;
  if ( (int)IsGetRedirectionBitmapSupported_0() < 0 )
  {
    RedirectionBitmap_0 = 0LL;
  }
  else
  {
    RedirectionBitmap_0 = GetRedirectionBitmap_0();
    if ( RedirectionBitmap_0 )
      goto LABEL_68;
  }
  if ( (*(_BYTE *)(v25 + 50) & 0x20) != 0 )
  {
LABEL_68:
    v4 |= 0x4000u;
    v268 = v25;
    v312 = v4;
    if ( v10 == v25 && (v4 & 0x20) != 0 )
    {
      v4 = v4 & 0xFFFFFFDD | 2;
      v312 = v4;
    }
    if ( (unsigned __int64)v5 > 2 )
    {
      if ( (v4 & 0x40000) != 0 )
      {
        EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
        v26 = v5;
        v5 = EmptyRgnPublic;
        GreCombineRgn(EmptyRgnPublic, v26, 0LL, 5);
        v10 = v263;
        v4 &= ~0x40000u;
        v312 = v4;
      }
      GreOffsetRgn(v5);
    }
  }
LABEL_75:
  if ( (v4 & 0x20) != 0 )
  {
    v27 = *(_QWORD *)(v10 + 88);
    if ( !v27 )
      v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 16LL);
    v4 |= 2u;
    v312 = v4;
    if ( (v4 & 0x18) == 0 && ((*(_BYTE *)(v10 + 45) & 1) != 0 || (*(_BYTE *)(v27 + 55) & 2) == 0) )
    {
      v28 = *(_BYTE *)(v27 + 55);
      if ( ((v28 ^ *(_BYTE *)(v10 + 55)) & 0x10) == 0 )
      {
        v4 &= 0xFFFFFFE7;
        v264 = v27;
        v312 = v4;
        v12 = v27;
        if ( (v28 & 4) != 0 )
        {
          v4 |= 0x10u;
          v312 = v4;
        }
      }
    }
  }
  if ( (v4 & 2) == 0 && (!v10 || *(_QWORD *)(v10 + 16) != W32GetThreadWin32Thread(KeGetCurrentThread())) )
  {
    v4 |= 2u;
    v312 = v4;
  }
  v29 = v4 & 0x8080441F;
  LODWORD(v313) = v4 & 0x8080441F;
  if ( (v4 & 2) == 0 )
  {
    v30 = (_QWORD *)(gpDispInfo + 64);
    v31 = *(struct tagDCE **)(gpDispInfo + 64);
    v261 = v31;
    if ( !v31 )
      goto LABEL_541;
    while ( (*((_DWORD *)v31 + 16) & 0x400002) != 0
         || (unsigned int)GreIsRendering(*((HDC *)v31 + 1))
         || *((_QWORD *)v31 + 2) != v263 && *((_QWORD *)v31 + 1) != v11 )
    {
      v30 = v31;
      v31 = *(struct tagDCE **)v31;
      v261 = v31;
      if ( !v31 )
        goto LABEL_541;
    }
    if ( *((_QWORD *)v31 + 7) && (v4 & 0xC0) != 0 && (int)IsDeleteHrgnClipSupported_0() >= 0 )
      DeleteHrgnClip_0();
    if ( (*((_DWORD *)v31 + 16) & 0x4000) != 0 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v31 + 4) + 51LL) & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported_0() >= 0 )
        FlushWEFCOMPOSITEDDCEBounds_0();
      if ( (int)IsGreSelectRedirectionBitmapSupported_0() >= 0 )
        GreSelectRedirectionBitmap_0();
    }
    v32 = v263;
    if ( *((_QWORD *)v31 + 2) == v263
      && *((_QWORD *)v31 + 4) == v268
      && *((_QWORD *)v31 + 3) == v12
      && v3
      && ((v4 ^ *((_DWORD *)v31 + 16)) & 0x4000) == 0
      && (*((_DWORD *)v31 + 16) & 0x10000000) == 0 )
    {
      goto LABEL_226;
    }
    do
    {
LABEL_242:
      v52 = (*((_DWORD *)v31 + 16) & 0x800) == 0;
      v267 = 1;
      if ( v52 && (int)IsSpbCheckDceSupported_0() >= 0 )
        SpbCheckDce_0();
      v88 = (HDC)*((_QWORD *)v31 + 1);
      *((_DWORD *)v31 + 16) = v29 | 0x1000;
      GreValidateVisrgn(v88, 0);
      v270 = 0LL;
      if ( (int)IsCalcVisRgnSupported_0() < 0 || !(unsigned int)CalcVisRgn_0() )
        *((_DWORD *)v31 + 16) |= 0x10000000u;
      *((_QWORD *)v31 + 4) = v268;
      *((_QWORD *)v31 + 2) = v32;
      *((_QWORD *)v31 + 3) = v12;
      *((_QWORD *)v31 + 5) = 0LL;
      *((_QWORD *)v31 + 6) = 0LL;
      ResetOrg(v270, v31, 1);
      v89 = v309;
      if ( !v270 )
        v89 = 1;
      v309 = v89;
LABEL_226:
      ;
    }
    while ( (*((_DWORD *)v31 + 16) & 0x8080441F) != v29 );
    if ( v31 != *(struct tagDCE **)(gpDispInfo + 64) )
    {
      *v30 = *(_QWORD *)v31;
      *(_QWORD *)v31 = *(_QWORD *)(gpDispInfo + 64);
      *(_QWORD *)(gpDispInfo + 64) = v31;
    }
    v83 = *((_QWORD *)v31 + 1);
    v272 = v83;
    v294[0] = 0LL;
    v294[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v295);
    v262 = 0LL;
    v277 = 0LL;
    v84 = (unsigned __int16)v83 | ((unsigned int)v83 >> 8) & 0xFF0000;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v305);
    DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
    v86 = v84;
    v278 = 1;
    if ( (unsigned int)v84 >= 0x10000 )
    {
      if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                    (unsigned __int16)v84,
                                    1)
             + 13) == WORD1(v84) )
          v86 = (unsigned __int16)v83;
      }
      else
      {
        v86 = (unsigned __int16)v83;
      }
    }
    v90 = DeferredContext[2];
    v91 = *(_DWORD *)(v90 + 2056);
    if ( v86 >= v91 + ((*(unsigned __int16 *)(v90 + 2) - 1) << 16) )
      goto LABEL_339;
    if ( v86 >= v91 )
    {
      v92 = ((v86 - v91) >> 16) + 1;
      if ( (v86 - v91) >> 16 == -2 )
        goto LABEL_339;
    }
    else
    {
      v92 = 0;
    }
    v93 = *(_QWORD *)(v90 + 8LL * v92 + 8);
    if ( v92 )
      v86 = v86 - ((v92 - 1) << 16) - v91;
    v94 = 0;
    if ( v86 < *(_DWORD *)(v93 + 20) )
    {
      v95 = *(_QWORD **)(v93 + 24);
      v96 = 16LL * (unsigned __int8)v86;
      v313 = (_DWORD *)(8 * ((unsigned __int64)v86 >> 8));
      v97 = v96 + *(_QWORD *)((char *)v313 + *v95);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v97, 0LL);
      if ( v86 < *(_DWORD *)(v93 + 20) && *(_QWORD *)(*(_QWORD *)((char *)v313 + **(_QWORD **)(v93 + 24)) + v96 + 8) )
      {
        v94 = 1;
        *(_DWORD *)(*(_QWORD *)v93 + 24LL * v86 + 8) |= 1u;
      }
      else
      {
        ExReleasePushLockExclusiveEx(v97, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v94 )
      {
        v98 = WPP_MAIN_CB.Dpc.DeferredContext;
        if ( (unsigned int)v84 >= 0x10000 )
        {
          if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                        (unsigned __int16)v84,
                                        1)
                 + 13) == WORD1(v84) )
              v84 = (unsigned __int16)v84;
          }
          else
          {
            v84 = (unsigned __int16)v84;
          }
        }
        v99 = *((_QWORD *)v98 + 2);
        v100 = *(_DWORD *)(v99 + 2056);
        if ( (unsigned int)v84 < v100 + ((*(unsigned __int16 *)(v99 + 2) - 1) << 16) )
        {
          if ( (unsigned int)v84 < v100 )
          {
            v101 = 0;
LABEL_274:
            v102 = *(_QWORD *)(v99 + 8LL * v101 + 8);
            if ( v101 )
              v84 = (_DWORD)v84 - ((v101 - 1) << 16) - v100;
            v103 = 0LL;
            if ( (unsigned int)v84 < *(_DWORD *)(v102 + 20)
              && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v102 + 24) + 8 * ((unsigned __int64)(unsigned int)v84 >> 8))
                           + 16LL * (unsigned __int8)v84
                           + 8) )
            {
              v103 = (unsigned __int16 *)(*(_QWORD *)v102 + 24 * v84);
            }
LABEL_280:
            v277 = v103;
            _m_prefetchw(v103 + 4);
            v52 = (*((_BYTE *)v103 + 15) & 0x20) == 0;
            v279 = *((_DWORD *)v103 + 2);
            if ( v52 )
            {
              v104 = v278;
            }
            else
            {
              HANDLELOCK::vUnlock((HANDLELOCK *)&v277);
              v104 = v278;
              if ( !v278 )
              {
LABEL_334:
                v294[0] = v262;
                if ( v262 )
                {
                  *((_DWORD *)v262 + 9) &= ~0x100000u;
                  AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v273, v294[0]);
                  v126 = GrepValidateVisRgn(v294[0], *((struct REGION **)v294[0] + 192), (struct ERECTL *)&v303);
                  AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v273);
                  if ( !v126 )
                  {
                    AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)&v266, v294[0]);
                    v313 = (_DWORD *)*((_QWORD *)v294[0] + 192);
                    if ( (unsigned int)HmgLockResultBase<DRVOBJ>::operator bool(&v313) )
                      RGNOBJ::vSet((RGNOBJ *)&v313, &v303);
                    AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)&v266);
                  }
                }
LABEL_340:
                DCOBJA::~DCOBJA((DCOBJA *)v294);
                v127 = v312;
                if ( (v312 & 0x80u) == 0 )
                {
                  if ( (v312 & 0x40) != 0 )
                  {
                    v128 = EmptyRgnPublic;
                    if ( EmptyRgnPublic )
                    {
                      SetRectRgnIndirect(ghrgnGDC);
                      RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
                      v130 = v261;
                      v135 = (HDC)*((_QWORD *)v261 + 1);
                      *((_QWORD *)v261 + 7) = RectRgnIndirect;
                      GreSelectVisRgnShared(v135);
                      *((_QWORD *)v261 + 5) = EmptyRgnPublic;
                      if ( (v312 & 0x40000) != 0 )
                        *((_DWORD *)v261 + 16) |= 0x40000u;
                      *((_DWORD *)v261 + 16) |= 0x40u;
                      if ( EmptyRgnPublic == (HRGN)1 )
                      {
                        *((_QWORD *)v261 + 6) = 1LL;
                        goto LABEL_350;
                      }
                      v132 = 4;
LABEL_347:
                      GreCombineRgn(ghrgnGDC, *((HRGN *)v130 + 7), v128, v132);
                      v133 = (HRGN)CreateEmptyRgnPublic();
                      *((_QWORD *)v130 + 6) = v133;
                      GreCombineRgn(v133, v128, 0LL, 5);
                      if ( (unsigned __int64)v128 > 2 && (*((_DWORD *)v130 + 16) & 0x40000) == 0 )
                        GreMarkUndeletableRgn(v128);
                      goto LABEL_350;
                    }
                  }
                }
                else
                {
                  v128 = EmptyRgnPublic;
                  if ( EmptyRgnPublic != (HRGN)1 )
                  {
                    SetRectRgnIndirect(ghrgnGDC);
                    v129 = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
                    v130 = v261;
                    v131 = (HDC)*((_QWORD *)v261 + 1);
                    *((_QWORD *)v261 + 7) = v129;
                    GreSelectVisRgnShared(v131);
                    *((_QWORD *)v261 + 5) = EmptyRgnPublic;
                    if ( (v312 & 0x40000) != 0 )
                      *((_DWORD *)v261 + 16) |= 0x40000u;
                    *((_DWORD *)v261 + 16) |= 0x80u;
                    if ( !EmptyRgnPublic )
                    {
                      *((_QWORD *)v261 + 6) = 0LL;
LABEL_350:
                      *((_DWORD *)v130 + 16) &= ~0x2000u;
                      GreSelectVisRgnShared(*((HDC *)v130 + 1));
                      goto LABEL_359;
                    }
                    v132 = 1;
                    goto LABEL_347;
                  }
                }
                v130 = v261;
LABEL_359:
                if ( (*((_DWORD *)v130 + 16) & 0x4000) == 0 )
                  goto LABEL_533;
                if ( (int)IsGreSelectRedirectionBitmapSupported_0() >= 0 )
                {
                  v136 = GreSelectRedirectionBitmap_0();
                  v137 = v309;
                  if ( !v136 )
                    v137 = 1;
                  v309 = v137;
                }
                v273 = *((_QWORD *)v130 + 1);
                v138 = v273;
                v289[0] = 0LL;
                v289[1] = 0LL;
                UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v290);
                v280 = 0LL;
                v139 = 0LL;
                v140 = (unsigned __int16)v138 | (v138 >> 8) & 0xFF0000;
                PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v306);
                v141 = WPP_MAIN_CB.Dpc.DeferredContext;
                v142 = v140;
                v281 = 1;
                if ( (unsigned int)v140 >= 0x10000 )
                {
                  if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
                  {
                    if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                                (unsigned __int16)v140,
                                                1)
                         + 13) == WORD1(v140) )
                      v142 = (unsigned __int16)v138;
                  }
                  else
                  {
                    v142 = (unsigned __int16)v138;
                  }
                }
                v143 = v141[2];
                v144 = *(_DWORD *)(v143 + 2056);
                if ( v142 >= v144 + ((*(unsigned __int16 *)(v143 + 2) - 1) << 16) )
                  goto LABEL_455;
                if ( v142 >= v144 )
                {
                  v145 = ((v142 - v144) >> 16) + 1;
                  if ( (v142 - v144) >> 16 == -2 )
                    goto LABEL_455;
                }
                else
                {
                  v145 = 0;
                }
                v146 = *(_QWORD *)(v143 + 8LL * v145 + 8);
                if ( v145 )
                  v142 = v142 - ((v145 - 1) << 16) - v144;
                v147 = 0;
                if ( v142 < *(_DWORD *)(v146 + 20) )
                {
                  v148 = 16LL * (unsigned __int8)v142;
                  v149 = *(_QWORD **)(v146 + 24);
                  v266 = 8 * ((unsigned __int64)v142 >> 8);
                  v313 = (_DWORD *)(v148 + *(_QWORD *)(*v149 + v266));
                  KeEnterCriticalRegion();
                  ExAcquirePushLockExclusiveEx(v313, 0LL);
                  if ( v142 < *(_DWORD *)(v146 + 20)
                    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v146 + 24) + v266) + v148 + 8) )
                  {
                    v147 = 1;
                    *(_DWORD *)(*(_QWORD *)v146 + 24LL * v142 + 8) |= 1u;
                  }
                  else
                  {
                    ExReleasePushLockExclusiveEx(v313, 0LL);
                    KeLeaveCriticalRegion();
                  }
                  if ( v147 )
                  {
                    v150 = WPP_MAIN_CB.Dpc.DeferredContext;
                    if ( (unsigned int)v140 >= 0x10000 )
                    {
                      if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
                      {
                        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                    *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                                    (unsigned __int16)v140,
                                                    1)
                             + 13) == WORD1(v140) )
                          v140 = (unsigned __int16)v140;
                      }
                      else
                      {
                        v140 = (unsigned __int16)v140;
                      }
                    }
                    v151 = *((_QWORD *)v150 + 2);
                    v152 = *(_DWORD *)(v151 + 2056);
                    if ( (unsigned int)v140 < v152 + ((*(unsigned __int16 *)(v151 + 2) - 1) << 16) )
                    {
                      if ( (unsigned int)v140 < v152 )
                      {
                        v153 = 0;
LABEL_390:
                        v154 = *(_QWORD *)(v151 + 8LL * v153 + 8);
                        if ( v153 )
                          v140 = (_DWORD)v140 - ((v153 - 1) << 16) - v152;
                        v155 = 0LL;
                        if ( (unsigned int)v140 < *(_DWORD *)(v154 + 20)
                          && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v154 + 24)
                                                   + 8 * ((unsigned __int64)(unsigned int)v140 >> 8))
                                       + 16LL * (unsigned __int8)v140
                                       + 8) )
                        {
                          v155 = (unsigned __int16 *)(*(_QWORD *)v154 + 24 * v140);
                        }
LABEL_396:
                        v280 = v155;
                        _m_prefetchw(v155 + 4);
                        v52 = (*((_BYTE *)v155 + 15) & 0x20) == 0;
                        v282 = *((_DWORD *)v155 + 2);
                        if ( v52 )
                        {
                          v156 = v281;
                        }
                        else
                        {
                          HANDLELOCK::vUnlock((HANDLELOCK *)&v280);
                          v156 = v281;
                          if ( !v281 )
                          {
LABEL_449:
                            v289[0] = v139;
                            if ( !v139 )
                              goto LABEL_528;
                            *(_DWORD *)(v139 + 36) |= 0x40u;
                            v139 = v289[0];
                            v177 = *(_QWORD *)(v289[0] + 1472LL);
                            v178 = _mm_srli_si128(*(__m128i *)(v289[0] + 1472LL), 8).m128i_u64[0];
                            if ( (_DWORD)v177 != (_DWORD)v178
                              && HIDWORD(v177) != HIDWORD(v178)
                              && (int)v177 < (int)v178
                              && SHIDWORD(v177) < SHIDWORD(v178) )
                            {
                              *(_DWORD *)(v289[0] + 1472LL) = 0x7FFFFFFF;
                              *(_DWORD *)(v289[0] + 1476LL) = 0x7FFFFFFF;
                              *(_DWORD *)(v289[0] + 1480LL) = 0x80000000;
                              *(_DWORD *)(v289[0] + 1484LL) = 0x80000000;
                              v139 = v289[0];
                            }
LABEL_456:
                            if ( !v139 )
                              goto LABEL_528;
                            XDCOBJ::RestoreAttributes((XDCOBJ *)v289);
                            v313 = (_DWORD *)v289[0];
                            v283 = 0LL;
                            v179 = (unsigned __int16)*(_DWORD *)v289[0] | (*(_DWORD *)v289[0] >> 8) & 0xFF0000u;
                            PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v307);
                            v180 = WPP_MAIN_CB.Dpc.DeferredContext;
                            v181 = v179;
                            v284 = 1;
                            if ( (unsigned int)v179 >= 0x10000 )
                            {
                              if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
                              {
                                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                            *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext
                                                            + 2),
                                                            (unsigned __int16)v179,
                                                            1)
                                     + 13) == WORD1(v179) )
                                  v181 = (unsigned __int16)v179;
                              }
                              else
                              {
                                v181 = (unsigned __int16)v179;
                              }
                            }
                            v182 = v180[2];
                            v183 = *(_DWORD *)(v182 + 2056);
                            if ( v181 >= v183 + ((*(unsigned __int16 *)(v182 + 2) - 1) << 16) )
                              goto LABEL_527;
                            if ( v181 >= v183 )
                            {
                              v184 = ((v181 - v183) >> 16) + 1;
                              if ( (v181 - v183) >> 16 == -2 )
                                goto LABEL_527;
                            }
                            else
                            {
                              v184 = 0;
                            }
                            v185 = *(_QWORD *)(v182 + 8LL * v184 + 8);
                            if ( v184 )
                              v181 = v181 - ((v184 - 1) << 16) - v183;
                            v186 = 0;
                            if ( v181 >= *(_DWORD *)(v185 + 20) )
                              goto LABEL_527;
                            v187 = *(_QWORD **)(v185 + 24);
                            v188 = 16LL * (unsigned __int8)v181;
                            v266 = 8 * ((unsigned __int64)v181 >> 8);
                            v189 = v188 + *(_QWORD *)(*v187 + v266);
                            KeEnterCriticalRegion();
                            ExAcquirePushLockExclusiveEx(v189, 0LL);
                            if ( v181 < *(_DWORD *)(v185 + 20)
                              && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v185 + 24) + v266) + v188 + 8) )
                            {
                              v186 = 1;
                              *(_DWORD *)(*(_QWORD *)v185 + 24LL * v181 + 8) |= 1u;
                            }
                            else
                            {
                              ExReleasePushLockExclusiveEx(v189, 0LL);
                              KeLeaveCriticalRegion();
                            }
                            if ( !v186 )
                              goto LABEL_527;
                            v190 = WPP_MAIN_CB.Dpc.DeferredContext;
                            if ( (unsigned int)v179 >= 0x10000 )
                            {
                              if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
                              {
                                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                            *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext
                                                            + 2),
                                                            (unsigned __int16)v179,
                                                            1)
                                     + 13) == WORD1(v179) )
                                  v179 = (unsigned __int16)v179;
                              }
                              else
                              {
                                v179 = (unsigned __int16)v179;
                              }
                            }
                            v191 = v190[2];
                            v192 = *(_DWORD *)(v191 + 2056);
                            if ( (unsigned int)v179 < v192 + ((*(unsigned __int16 *)(v191 + 2) - 1) << 16) )
                            {
                              if ( (unsigned int)v179 < v192 )
                              {
                                v193 = 0;
LABEL_483:
                                v194 = *(_QWORD *)(v191 + 8LL * v193 + 8);
                                if ( v193 )
                                  v179 = (_DWORD)v179 - ((v193 - 1) << 16) - v192;
                                v195 = 0LL;
                                if ( (unsigned int)v179 < *(_DWORD *)(v194 + 20)
                                  && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v194 + 24)
                                                           + 8 * ((unsigned __int64)(unsigned int)v179 >> 8))
                                               + 16LL * (unsigned __int8)v179
                                               + 8) )
                                {
                                  v195 = (unsigned __int16 *)(*(_QWORD *)v194 + 24 * v179);
                                }
                                goto LABEL_489;
                              }
                              v193 = (((unsigned int)v179 - v192) >> 16) + 1;
                              if ( ((unsigned int)v179 - v192) >> 16 != -2 )
                                goto LABEL_483;
                            }
                            v195 = 0LL;
LABEL_489:
                            v283 = v195;
                            _m_prefetchw(v195 + 4);
                            v52 = (*((_BYTE *)v195 + 15) & 0x20) == 0;
                            v285 = *((_DWORD *)v195 + 2);
                            if ( v52 )
                            {
                              v196 = v284;
LABEL_493:
                              if ( !v195 )
                              {
                                if ( v196 )
                                  HANDLELOCK::vUnlock((HANDLELOCK *)&v283);
                                goto LABEL_528;
                              }
                              v197 = v313;
                              if ( *((_BYTE *)v195 + 14) == 5
                                && HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2)
                                && gpentHmgrAltStacks )
                              {
                                v198 = (unsigned __int16)*v313 | (*v313 >> 8) & 0xFF0000;
                                RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)v198 | (v198 >> 8) & 0xFF0000);
                              }
                              --v197[2];
                              v199 = WPP_MAIN_CB.Dpc.DeferredContext;
                              v200 = *(_DWORD *)v195 & 0xFFFFFF;
                              if ( v200 >= 0x10000 )
                              {
                                if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
                                {
                                  v201 = *v195;
                                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                              *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext
                                                              + 2),
                                                              (unsigned __int16)v200,
                                                              1)
                                       + 13) == HIWORD(v200) )
                                    v200 = v201;
                                }
                                else
                                {
                                  v200 = *v195;
                                }
                              }
                              v202 = *((_QWORD *)v199 + 2);
                              v203 = *(_DWORD *)(v202 + 2056);
                              if ( v200 >= v203 + ((*(unsigned __int16 *)(v202 + 2) - 1) << 16) )
                                goto LABEL_511;
                              if ( v200 >= v203 )
                              {
                                v204 = ((v200 - v203) >> 16) + 1;
                                if ( (v200 - v203) >> 16 == -2 )
                                  goto LABEL_511;
                              }
                              else
                              {
                                v204 = 0;
                              }
                              v205 = *(_QWORD *)(v202 + 8LL * v204 + 8);
                              if ( v204 )
                                v200 = v200 - ((v204 - 1) << 16) - v203;
                              if ( v200 < *(_DWORD *)(v205 + 20) )
                              {
                                v206 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v205 + 24)
                                                              + 8 * ((unsigned __int64)v200 >> 8))
                                                  + 16LL * (unsigned __int8)v200
                                                  + 8);
LABEL_512:
                                v207 = (unsigned __int16)*v206;
                                v208 = v207 | (*v206 >> 8) & 0xFF0000u;
                                if ( (unsigned int)v208 >= 0x10000 )
                                {
                                  if ( *(_DWORD *)v199 > 0x10000u )
                                  {
                                    v209 = (unsigned __int16)v207;
                                    if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                                *((GdiHandleEntryDirectory **)v199 + 2),
                                                                (unsigned __int16)v207,
                                                                1)
                                         + 13) == WORD1(v208) )
                                      v208 = v209;
                                  }
                                  else
                                  {
                                    v208 = (unsigned __int16)v207;
                                  }
                                  if ( (unsigned int)v208 >= 0x10000 && *(_DWORD *)v199 > 0x10000u )
                                    GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)v199 + 2),
                                      (unsigned __int16)v208,
                                      1);
                                }
                                v210 = *((_QWORD *)v199 + 2);
                                v211 = *(_DWORD *)(v210 + 2056);
                                if ( (unsigned int)v208 >= v211 + ((*(unsigned __int16 *)(v210 + 2) - 1) << 16) )
                                  goto LABEL_527;
                                if ( (unsigned int)v208 < v211 )
                                {
                                  v212 = 0;
LABEL_524:
                                  v213 = *(_QWORD *)(v210 + 8LL * v212 + 8);
                                  if ( v212 )
                                    v208 = (_DWORD)v208 - ((v212 - 1) << 16) - v211;
                                  *(_DWORD *)(*(_QWORD *)v213 + 24 * v208 + 8) &= ~1u;
                                  ExReleasePushLockExclusiveEx(
                                    *(_QWORD *)(**(_QWORD **)(v213 + 24)
                                              + 8 * ((unsigned __int64)(unsigned int)v208 >> 8))
                                  + 16LL * (unsigned __int8)v208,
                                    0LL);
                                  KeLeaveCriticalRegion();
                                  goto LABEL_527;
                                }
                                v212 = (((unsigned int)v208 - v211) >> 16) + 1;
                                if ( ((unsigned int)v208 - v211) >> 16 != -2 )
                                  goto LABEL_524;
LABEL_527:
                                KeLeaveCriticalRegion();
                                goto LABEL_528;
                              }
LABEL_511:
                              v206 = 0LL;
                              goto LABEL_512;
                            }
                            HANDLELOCK::vUnlock((HANDLELOCK *)&v283);
                            v196 = v284;
                            if ( v284 )
                            {
                              v195 = v283;
                              goto LABEL_493;
                            }
LABEL_528:
                            UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v290);
                            v130 = v261;
                            if ( v309 )
                              GreSelectVisRgnShared(*((HDC *)v261 + 1));
                            v127 = v312;
LABEL_533:
                            if ( (*((_DWORD *)v130 + 16) & 2) != 0 )
                            {
                              if ( !(unsigned int)GreSetDCOwnerEx(*((_QWORD *)v130 + 1), 2147483650LL, 0LL, 1LL) )
                              {
                                *((_DWORD *)v130 + 16) &= ~0x1000u;
                                DestroyCacheDC(gpDispInfo + 64, 0LL);
                                goto LABEL_541;
                              }
                              v214 = 0LL;
                              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                              if ( ThreadWin32Thread )
                                v214 = *ThreadWin32Thread;
                              *((_QWORD *)v130 + 9) = v214;
                              *((_QWORD *)v130 + 10) = 0LL;
                              --gnDCECount;
                              if ( v267 && (int)IsGreSelectFontSupported_0() >= 0 )
                              {
                                GreGetStockObject(13LL);
                                GreSelectFont_0();
                              }
                            }
                            if ( (*(_BYTE *)(v263 + 50) & 0x40) != 0 && (v127 & 0x40000000) == 0 )
                              GreSetLayout(*((HDC *)v130 + 1), -1, 1u);
                            v266 = *((_QWORD *)v130 + 1);
                            v217 = v266;
                            v296[0] = 0LL;
                            v296[1] = 0LL;
                            UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v297);
                            v286 = 0LL;
                            v218 = 0LL;
                            v219 = (unsigned __int16)v217 | (v217 >> 8) & 0xFF0000;
                            PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v302);
                            v287 = 1;
                            v220 = v219;
                            v221 = WPP_MAIN_CB.Dpc.DeferredContext;
                            if ( (unsigned int)v219 >= 0x10000 )
                            {
                              if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
                              {
                                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                            *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext
                                                            + 2),
                                                            (unsigned __int16)v219,
                                                            1)
                                     + 13) == WORD1(v219) )
                                  v220 = (unsigned __int16)v217;
                              }
                              else
                              {
                                v220 = (unsigned __int16)v217;
                              }
                            }
                            v222 = v221[2];
                            v223 = *(_DWORD *)(v222 + 2056);
                            if ( v220 >= v223 + ((*(unsigned __int16 *)(v222 + 2) - 1) << 16) )
                              goto LABEL_636;
                            if ( v220 >= v223 )
                            {
                              v224 = ((v220 - v223) >> 16) + 1;
                              if ( (v220 - v223) >> 16 == -2 )
                                goto LABEL_636;
                            }
                            else
                            {
                              v224 = 0;
                            }
                            v225 = *(_QWORD *)(v222 + 8LL * v224 + 8);
                            if ( v224 )
                              v220 = v220 - ((v224 - 1) << 16) - v223;
                            v226 = 0;
                            if ( v220 < *(_DWORD *)(v225 + 20) )
                            {
                              v227 = 16LL * (unsigned __int8)v220;
                              v228 = *(_QWORD **)(v225 + 24);
                              v313 = (_DWORD *)(8 * ((unsigned __int64)v220 >> 8));
                              v310 = v227 + *(_QWORD *)((char *)v313 + *v228);
                              KeEnterCriticalRegion();
                              ExAcquirePushLockExclusiveEx(v310, 0LL);
                              if ( v220 < *(_DWORD *)(v225 + 20)
                                && *(_QWORD *)(*(_QWORD *)((char *)v313 + **(_QWORD **)(v225 + 24)) + v227 + 8) )
                              {
                                v226 = 1;
                                *(_DWORD *)(*(_QWORD *)v225 + 24LL * v220 + 8) |= 1u;
                              }
                              else
                              {
                                ExReleasePushLockExclusiveEx(v310, 0LL);
                                KeLeaveCriticalRegion();
                              }
                              if ( v226 )
                              {
                                v229 = WPP_MAIN_CB.Dpc.DeferredContext;
                                if ( (unsigned int)v219 >= 0x10000 )
                                {
                                  if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
                                  {
                                    if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                                *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext
                                                                + 2),
                                                                (unsigned __int16)v219,
                                                                1)
                                         + 13) == WORD1(v219) )
                                      v219 = (unsigned __int16)v219;
                                  }
                                  else
                                  {
                                    v219 = (unsigned __int16)v219;
                                  }
                                }
                                v230 = *((_QWORD *)v229 + 2);
                                v231 = *(_DWORD *)(v230 + 2056);
                                if ( (unsigned int)v219 < v231 + ((*(unsigned __int16 *)(v230 + 2) - 1) << 16) )
                                {
                                  if ( (unsigned int)v219 < v231 )
                                  {
                                    v232 = 0;
LABEL_571:
                                    v233 = *(_QWORD *)(v230 + 8LL * v232 + 8);
                                    if ( v232 )
                                      v219 = (_DWORD)v219 - ((v232 - 1) << 16) - v231;
                                    v234 = 0LL;
                                    if ( (unsigned int)v219 < *(_DWORD *)(v233 + 20)
                                      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v233 + 24)
                                                               + 8 * ((unsigned __int64)(unsigned int)v219 >> 8))
                                                   + 16LL * (unsigned __int8)v219
                                                   + 8) )
                                    {
                                      v234 = (unsigned __int16 *)(*(_QWORD *)v233 + 24 * v219);
                                    }
LABEL_577:
                                    v286 = v234;
                                    _m_prefetchw(v234 + 4);
                                    v52 = (*((_BYTE *)v234 + 15) & 0x20) == 0;
                                    v288 = *((_DWORD *)v234 + 2);
                                    if ( v52 )
                                    {
                                      v235 = 1;
                                    }
                                    else
                                    {
                                      HANDLELOCK::vUnlock((HANDLELOCK *)&v286);
                                      v235 = v287;
                                      if ( !v287 )
                                      {
LABEL_631:
                                        v296[0] = v218;
                                        if ( v218 )
                                        {
                                          *((_DWORD *)v218 + 9) |= 0x100000u;
                                          AcquireDcVisRgnShared::AcquireDcVisRgnShared(
                                            (AcquireDcVisRgnShared *)v292,
                                            v296[0]);
                                          v256 = GrepValidateVisRgn(
                                                   v296[0],
                                                   *((struct REGION **)v296[0] + 192),
                                                   (struct ERECTL *)&v304);
                                          AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v292);
                                          if ( !v256 )
                                          {
                                            AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive(
                                              (AcquireDcVisRgnExclusive *)v293,
                                              v296[0]);
                                            v262 = (struct DC *)*((_QWORD *)v296[0] + 192);
                                            if ( (unsigned int)HmgLockResultBase<DRVOBJ>::operator bool(&v262) )
                                              RGNOBJ::vSet((RGNOBJ *)&v262, &v304);
                                            AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v293);
                                          }
                                        }
                                        goto LABEL_637;
                                      }
                                      v229 = WPP_MAIN_CB.Dpc.DeferredContext;
                                      v234 = v286;
                                    }
                                    if ( !v234 )
                                    {
                                      if ( v235 )
                                        HANDLELOCK::vUnlock((HANDLELOCK *)&v286);
                                      goto LABEL_631;
                                    }
                                    if ( *((_BYTE *)v234 + 14) != 1 || v234[6] != WORD1(v266) )
                                    {
LABEL_599:
                                      v242 = *(_DWORD *)v234 & 0xFFFFFF;
                                      if ( v242 >= 0x10000 )
                                      {
                                        if ( *(_DWORD *)v229 > 0x10000u )
                                        {
                                          v243 = *v234;
                                          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                                      *((GdiHandleEntryDirectory **)v229 + 2),
                                                                      v243,
                                                                      1)
                                               + 13) == HIWORD(v242) )
                                            v242 = v243;
                                        }
                                        else
                                        {
                                          v242 = *v234;
                                        }
                                      }
                                      v244 = *((_QWORD *)v229 + 2);
                                      v245 = *(_DWORD *)(v244 + 2056);
                                      if ( v242 >= v245 + ((*(unsigned __int16 *)(v244 + 2) - 1) << 16) )
                                        goto LABEL_612;
                                      if ( v242 >= v245 )
                                      {
                                        v246 = ((v242 - v245) >> 16) + 1;
                                        if ( (v242 - v245) >> 16 == -2 )
                                          goto LABEL_612;
                                      }
                                      else
                                      {
                                        v246 = 0;
                                      }
                                      v247 = *(_QWORD *)(v244 + 8LL * v246 + 8);
                                      if ( v246 )
                                        v242 = v242 - ((v246 - 1) << 16) - v245;
                                      if ( v242 < *(_DWORD *)(v247 + 20) )
                                      {
                                        v248 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v247 + 24)
                                                                      + 8 * ((unsigned __int64)v242 >> 8))
                                                          + 16LL * (unsigned __int8)v242
                                                          + 8);
                                        goto LABEL_613;
                                      }
LABEL_612:
                                      v248 = 0LL;
LABEL_613:
                                      v249 = (unsigned __int16)*v248;
                                      v250 = v249 | (*v248 >> 8) & 0xFF0000u;
                                      if ( (unsigned int)v250 >= 0x10000 )
                                      {
                                        if ( *(_DWORD *)v229 > 0x10000u )
                                        {
                                          v251 = (unsigned __int16)v249;
                                          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                                      *((GdiHandleEntryDirectory **)v229 + 2),
                                                                      (unsigned __int16)v249,
                                                                      1)
                                               + 13) == WORD1(v250) )
                                            v250 = v251;
                                        }
                                        else
                                        {
                                          v250 = (unsigned __int16)v249;
                                        }
                                        if ( (unsigned int)v250 >= 0x10000 && *(_DWORD *)v229 > 0x10000u )
                                          GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)v229 + 2),
                                            (unsigned __int16)v250,
                                            1);
                                      }
                                      v252 = *((_QWORD *)v229 + 2);
                                      v253 = *(_DWORD *)(v252 + 2056);
                                      if ( (unsigned int)v250 >= v253 + ((*(unsigned __int16 *)(v252 + 2) - 1) << 16) )
                                        goto LABEL_628;
                                      if ( (unsigned int)v250 >= v253 )
                                      {
                                        v254 = (((unsigned int)v250 - v253) >> 16) + 1;
                                        if ( ((unsigned int)v250 - v253) >> 16 == -2 )
                                        {
LABEL_628:
                                          KeLeaveCriticalRegion();
                                          goto LABEL_631;
                                        }
                                      }
                                      else
                                      {
                                        v254 = 0;
                                      }
                                      v255 = *(_QWORD *)(v252 + 8LL * v254 + 8);
                                      if ( v254 )
                                        v250 = (_DWORD)v250 - ((v254 - 1) << 16) - v253;
                                      *(_DWORD *)(*(_QWORD *)v255 + 24 * v250 + 8) &= ~1u;
                                      ExReleasePushLockExclusiveEx(
                                        *(_QWORD *)(**(_QWORD **)(v255 + 24)
                                                  + 8 * ((unsigned __int64)(unsigned int)v250 >> 8))
                                      + 16LL * (unsigned __int8)v250,
                                        0LL);
                                      KeLeaveCriticalRegion();
                                      goto LABEL_628;
                                    }
                                    v236 = *(_DWORD *)v234 & 0xFFFFFF;
                                    if ( v236 >= 0x10000 )
                                    {
                                      if ( *(_DWORD *)v229 > 0x10000u )
                                      {
                                        v237 = *v234;
                                        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                                    *((GdiHandleEntryDirectory **)v229 + 2),
                                                                    v237,
                                                                    1)
                                             + 13) == HIWORD(v236) )
                                          v236 = v237;
                                      }
                                      else
                                      {
                                        v236 = *v234;
                                      }
                                    }
                                    v238 = *((_QWORD *)v229 + 2);
                                    v239 = *(_DWORD *)(v238 + 2056);
                                    if ( v236 >= v239 + ((*(unsigned __int16 *)(v238 + 2) - 1) << 16) )
                                      goto LABEL_597;
                                    if ( v236 >= v239 )
                                    {
                                      v240 = ((v236 - v239) >> 16) + 1;
                                      if ( (v236 - v239) >> 16 == -2 )
                                        goto LABEL_597;
                                    }
                                    else
                                    {
                                      v240 = 0;
                                    }
                                    v241 = *(_QWORD *)(v238 + 8LL * v240 + 8);
                                    if ( v240 )
                                      v236 = v236 - ((v240 - 1) << 16) - v239;
                                    if ( v236 < *(_DWORD *)(v241 + 20) )
                                    {
                                      v218 = *(struct DC **)(*(_QWORD *)(**(_QWORD **)(v241 + 24)
                                                                       + 8 * ((unsigned __int64)v236 >> 8))
                                                           + 16LL * (unsigned __int8)v236
                                                           + 8);
LABEL_598:
                                      ++*((_DWORD *)v218 + 2);
                                      v229 = WPP_MAIN_CB.Dpc.DeferredContext;
                                      goto LABEL_599;
                                    }
LABEL_597:
                                    v218 = 0LL;
                                    goto LABEL_598;
                                  }
                                  v232 = (((unsigned int)v219 - v231) >> 16) + 1;
                                  if ( ((unsigned int)v219 - v231) >> 16 != -2 )
                                    goto LABEL_571;
                                }
                                v234 = 0LL;
                                goto LABEL_577;
                              }
                            }
LABEL_636:
                            KeLeaveCriticalRegion();
                            v296[0] = 0LL;
LABEL_637:
                            DCOBJA::~DCOBJA((DCOBJA *)v296);
                            if ( (int)IsGreHintDCWndSupported_0() >= 0 )
                              GreHintDCWnd_0();
                            if ( v268 && (*(_BYTE *)(v268 + 50) & 8) != 0 && (int)IsGreHintDCWndSupported_0() >= 0 )
                              GreHintDCWnd_0();
                            if ( *((int *)v261 + 16) < 0 )
                            {
                              v258 = PsGetCurrentProcessWin32Process();
                              *(_DWORD *)(v258 + 12) |= 0x200u;
                              *((_QWORD *)v261 + 9) = 0LL;
                              *((_QWORD *)v261 + 10) = PsGetCurrentProcessWin32Process();
                            }
                            if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                              Template_pz(v257, &LockRelease);
                            v259 = ghsemDCVisRgn;
                            if ( ghsemDCVisRgn )
                            {
                              ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
                              PsLeavePriorityRegion();
                            }
                            if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                              Template_pz(v259, &LockRelease);
                            v260 = ghsemGreLock;
                            if ( ghsemGreLock )
                            {
                              ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
                              PsLeavePriorityRegion();
                            }
                            if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                              Template_pz(v260, &LockRelease);
                            if ( ghsemDynamicModeChange )
                            {
                              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDynamicModeChange);
                              PsLeavePriorityRegion();
                            }
                            return *((_QWORD *)v261 + 1);
                          }
                          v150 = WPP_MAIN_CB.Dpc.DeferredContext;
                          v155 = v280;
                        }
                        if ( !v155 )
                        {
                          if ( v156 )
                            HANDLELOCK::vUnlock((HANDLELOCK *)&v280);
                          goto LABEL_449;
                        }
                        if ( *((_BYTE *)v155 + 14) != 1 || v155[6] != WORD1(v273) )
                        {
LABEL_417:
                          v163 = *(_DWORD *)v155 & 0xFFFFFF;
                          if ( v163 >= 0x10000 )
                          {
                            if ( *(_DWORD *)v150 > 0x10000u )
                            {
                              v164 = *v155;
                              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                          *((GdiHandleEntryDirectory **)v150 + 2),
                                                          v164,
                                                          1)
                                   + 13) == HIWORD(v163) )
                                v163 = v164;
                            }
                            else
                            {
                              v163 = *v155;
                            }
                          }
                          v165 = *((_QWORD *)v150 + 2);
                          v166 = *(_DWORD *)(v165 + 2056);
                          if ( v163 >= v166 + ((*(unsigned __int16 *)(v165 + 2) - 1) << 16) )
                            goto LABEL_430;
                          if ( v163 >= v166 )
                          {
                            v167 = ((v163 - v166) >> 16) + 1;
                            if ( (v163 - v166) >> 16 == -2 )
                              goto LABEL_430;
                          }
                          else
                          {
                            v167 = 0;
                          }
                          v168 = *(_QWORD *)(v165 + 8LL * v167 + 8);
                          if ( v167 )
                            v163 = v163 - ((v167 - 1) << 16) - v166;
                          if ( v163 < *(_DWORD *)(v168 + 20) )
                          {
                            v169 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v168 + 24) + 8 * ((unsigned __int64)v163 >> 8))
                                              + 16LL * (unsigned __int8)v163
                                              + 8);
                            goto LABEL_431;
                          }
LABEL_430:
                          v169 = 0LL;
LABEL_431:
                          v170 = (unsigned __int16)*v169;
                          v171 = v170 | (*v169 >> 8) & 0xFF0000u;
                          if ( (unsigned int)v171 >= 0x10000 )
                          {
                            if ( *(_DWORD *)v150 > 0x10000u )
                            {
                              v172 = (unsigned __int16)v170;
                              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                          *((GdiHandleEntryDirectory **)v150 + 2),
                                                          (unsigned __int16)v170,
                                                          1)
                                   + 13) == WORD1(v171) )
                                v171 = v172;
                            }
                            else
                            {
                              v171 = (unsigned __int16)v170;
                            }
                            if ( (unsigned int)v171 >= 0x10000 && *(_DWORD *)v150 > 0x10000u )
                              GdiHandleEntryDirectory::GetEntry(
                                *((GdiHandleEntryDirectory **)v150 + 2),
                                (unsigned __int16)v171,
                                1);
                          }
                          v173 = *((_QWORD *)v150 + 2);
                          v174 = *(_DWORD *)(v173 + 2056);
                          if ( (unsigned int)v171 >= v174 + ((*(unsigned __int16 *)(v173 + 2) - 1) << 16) )
                            goto LABEL_446;
                          if ( (unsigned int)v171 >= v174 )
                          {
                            v175 = (((unsigned int)v171 - v174) >> 16) + 1;
                            if ( ((unsigned int)v171 - v174) >> 16 == -2 )
                            {
LABEL_446:
                              KeLeaveCriticalRegion();
                              goto LABEL_449;
                            }
                          }
                          else
                          {
                            v175 = 0;
                          }
                          v176 = *(_QWORD *)(v173 + 8LL * v175 + 8);
                          if ( v175 )
                            v171 = (_DWORD)v171 - ((v175 - 1) << 16) - v174;
                          *(_DWORD *)(*(_QWORD *)v176 + 24 * v171 + 8) &= ~1u;
                          ExReleasePushLockExclusiveEx(
                            *(_QWORD *)(**(_QWORD **)(v176 + 24) + 8 * ((unsigned __int64)(unsigned int)v171 >> 8))
                          + 16LL * (unsigned __int8)v171,
                            0LL);
                          KeLeaveCriticalRegion();
                          goto LABEL_446;
                        }
                        v157 = *(_DWORD *)v155 & 0xFFFFFF;
                        if ( v157 >= 0x10000 )
                        {
                          if ( *(_DWORD *)v150 > 0x10000u )
                          {
                            v158 = *v155;
                            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                                        *((GdiHandleEntryDirectory **)v150 + 2),
                                                        v158,
                                                        1)
                                 + 13) == HIWORD(v157) )
                              v157 = v158;
                          }
                          else
                          {
                            v157 = *v155;
                          }
                        }
                        v159 = *((_QWORD *)v150 + 2);
                        v160 = *(_DWORD *)(v159 + 2056);
                        if ( v157 < v160 + ((*(unsigned __int16 *)(v159 + 2) - 1) << 16) )
                        {
                          if ( v157 < v160 )
                          {
                            v161 = 0;
LABEL_412:
                            v162 = *(_QWORD *)(v159 + 8LL * v161 + 8);
                            if ( v161 )
                              v157 = v157 - ((v161 - 1) << 16) - v160;
                            if ( v157 < *(_DWORD *)(v162 + 20) )
                              v139 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v162 + 24) + 8
                                                                                      * ((unsigned __int64)v157 >> 8))
                                               + 16LL * (unsigned __int8)v157
                                               + 8);
                            goto LABEL_416;
                          }
                          v161 = ((v157 - v160) >> 16) + 1;
                          if ( (v157 - v160) >> 16 != -2 )
                            goto LABEL_412;
                        }
LABEL_416:
                        ++*(_DWORD *)(v139 + 8);
                        v150 = WPP_MAIN_CB.Dpc.DeferredContext;
                        goto LABEL_417;
                      }
                      v153 = (((unsigned int)v140 - v152) >> 16) + 1;
                      if ( ((unsigned int)v140 - v152) >> 16 != -2 )
                        goto LABEL_390;
                    }
                    v155 = 0LL;
                    goto LABEL_396;
                  }
                }
LABEL_455:
                KeLeaveCriticalRegion();
                v289[0] = 0LL;
                goto LABEL_456;
              }
              v98 = WPP_MAIN_CB.Dpc.DeferredContext;
              v103 = v277;
            }
            if ( !v103 )
            {
              if ( v104 )
                HANDLELOCK::vUnlock((HANDLELOCK *)&v277);
              goto LABEL_334;
            }
            if ( *((_BYTE *)v103 + 14) != 1 || v103[6] != WORD1(v272) )
            {
LABEL_302:
              v112 = *(_DWORD *)v103 & 0xFFFFFF;
              if ( v112 >= 0x10000 )
              {
                if ( *(_DWORD *)v98 > 0x10000u )
                {
                  v113 = *v103;
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)v98 + 2),
                                              v113,
                                              1)
                       + 13) == HIWORD(v112) )
                    v112 = v113;
                }
                else
                {
                  v112 = *v103;
                }
              }
              v114 = *((_QWORD *)v98 + 2);
              v115 = *(_DWORD *)(v114 + 2056);
              if ( v112 >= v115 + ((*(unsigned __int16 *)(v114 + 2) - 1) << 16) )
                goto LABEL_315;
              if ( v112 >= v115 )
              {
                v116 = ((v112 - v115) >> 16) + 1;
                if ( (v112 - v115) >> 16 == -2 )
                  goto LABEL_315;
              }
              else
              {
                v116 = 0;
              }
              v117 = *(_QWORD *)(v114 + 8LL * v116 + 8);
              if ( v116 )
                v112 = v112 - ((v116 - 1) << 16) - v115;
              if ( v112 < *(_DWORD *)(v117 + 20) )
              {
                v118 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v117 + 24) + 8 * ((unsigned __int64)v112 >> 8))
                                  + 16LL * (unsigned __int8)v112
                                  + 8);
                goto LABEL_316;
              }
LABEL_315:
              v118 = 0LL;
LABEL_316:
              v119 = (unsigned __int16)*v118;
              v120 = v119 | (*v118 >> 8) & 0xFF0000u;
              if ( (unsigned int)v120 >= 0x10000 )
              {
                if ( *(_DWORD *)v98 > 0x10000u )
                {
                  v121 = (unsigned __int16)v119;
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)v98 + 2),
                                              (unsigned __int16)v119,
                                              1)
                       + 13) == WORD1(v120) )
                    v120 = v121;
                }
                else
                {
                  v120 = (unsigned __int16)v119;
                }
                if ( (unsigned int)v120 >= 0x10000 && *(_DWORD *)v98 > 0x10000u )
                  GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v98 + 2), (unsigned __int16)v120, 1);
              }
              v122 = *((_QWORD *)v98 + 2);
              v123 = *(_DWORD *)(v122 + 2056);
              if ( (unsigned int)v120 >= v123 + ((*(unsigned __int16 *)(v122 + 2) - 1) << 16) )
                goto LABEL_331;
              if ( (unsigned int)v120 >= v123 )
              {
                v124 = (((unsigned int)v120 - v123) >> 16) + 1;
                if ( ((unsigned int)v120 - v123) >> 16 == -2 )
                {
LABEL_331:
                  KeLeaveCriticalRegion();
                  goto LABEL_334;
                }
              }
              else
              {
                v124 = 0;
              }
              v125 = *(_QWORD *)(v122 + 8LL * v124 + 8);
              if ( v124 )
                v120 = (_DWORD)v120 - ((v124 - 1) << 16) - v123;
              *(_DWORD *)(*(_QWORD *)v125 + 24 * v120 + 8) &= ~1u;
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(**(_QWORD **)(v125 + 24) + 8 * ((unsigned __int64)(unsigned int)v120 >> 8))
              + 16LL * (unsigned __int8)v120,
                0LL);
              KeLeaveCriticalRegion();
              goto LABEL_331;
            }
            v105 = *(_DWORD *)v103 & 0xFFFFFF;
            if ( v105 >= 0x10000 )
            {
              if ( *(_DWORD *)v98 > 0x10000u )
              {
                v106 = *v103;
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)v98 + 2),
                                            v106,
                                            1)
                     + 13) == HIWORD(v105) )
                  v105 = v106;
              }
              else
              {
                v105 = *v103;
              }
            }
            v107 = *((_QWORD *)v98 + 2);
            v108 = *(_DWORD *)(v107 + 2056);
            if ( v105 >= v108 + ((*(unsigned __int16 *)(v107 + 2) - 1) << 16) )
              goto LABEL_300;
            if ( v105 >= v108 )
            {
              v109 = ((v105 - v108) >> 16) + 1;
              if ( (v105 - v108) >> 16 == -2 )
                goto LABEL_300;
            }
            else
            {
              v109 = 0;
            }
            v110 = *(_QWORD *)(v107 + 8LL * v109 + 8);
            if ( v109 )
              v105 = v105 - ((v109 - 1) << 16) - v108;
            if ( v105 < *(_DWORD *)(v110 + 20) )
            {
              v111 = *(struct DC **)(*(_QWORD *)(**(_QWORD **)(v110 + 24) + 8 * ((unsigned __int64)v105 >> 8))
                                   + 16LL * (unsigned __int8)v105
                                   + 8);
LABEL_301:
              ++*((_DWORD *)v111 + 2);
              v98 = WPP_MAIN_CB.Dpc.DeferredContext;
              v262 = v111;
              goto LABEL_302;
            }
LABEL_300:
            v111 = 0LL;
            goto LABEL_301;
          }
          v101 = (((unsigned int)v84 - v100) >> 16) + 1;
          if ( ((unsigned int)v84 - v100) >> 16 != -2 )
            goto LABEL_274;
        }
        v103 = 0LL;
        goto LABEL_280;
      }
    }
LABEL_339:
    KeLeaveCriticalRegion();
    v294[0] = v262;
    goto LABEL_340;
  }
  v272 = v3;
  while ( 2 )
  {
    v33 = gpDispInfo;
    v31 = *(struct tagDCE **)(gpDispInfo + 64);
    v265 = gpDispInfo + 64;
    v261 = v31;
    if ( !v31 )
      goto LABEL_209;
    do
    {
      if ( *((_QWORD *)v31 + 3) != v12 || *((_QWORD *)v31 + 4) != v268 || *((_QWORD *)v31 + 11) )
        goto LABEL_207;
      v34 = *((_QWORD *)v31 + 1);
      v291 = v34;
      v298[0] = 0LL;
      v298[1] = 0LL;
      UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v299);
      v262 = 0LL;
      v274 = 0LL;
      v35 = (unsigned __int16)v34 | ((unsigned int)v34 >> 8) & 0xFF0000;
      PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v308);
      v36 = WPP_MAIN_CB.Dpc.DeferredContext;
      v37 = v35;
      v275 = 1;
      if ( (unsigned int)v35 >= 0x10000 )
      {
        if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                      (unsigned __int16)v35,
                                      1)
               + 13) == WORD1(v35) )
            v37 = (unsigned __int16)v34;
        }
        else
        {
          v37 = (unsigned __int16)v34;
        }
      }
      v38 = v36[2];
      v39 = *(_DWORD *)(v38 + 2056);
      if ( v37 >= v39 + ((*(unsigned __int16 *)(v38 + 2) - 1) << 16) )
        goto LABEL_214;
      if ( v37 >= v39 )
      {
        v40 = ((v37 - v39) >> 16) + 1;
        if ( (v37 - v39) >> 16 == -2 )
          goto LABEL_214;
      }
      else
      {
        v40 = 0;
      }
      v41 = *(_QWORD *)(v38 + 8LL * v40 + 8);
      if ( v40 )
        v37 = v37 - ((v40 - 1) << 16) - v39;
      v42 = 0;
      if ( v37 >= *(_DWORD *)(v41 + 20) )
        goto LABEL_214;
      v43 = *(_QWORD **)(v41 + 24);
      v44 = 16LL * (unsigned __int8)v37;
      v269 = 8 * ((unsigned __int64)v37 >> 8);
      v45 = v44 + *(_QWORD *)(*v43 + v269);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v45, 0LL);
      if ( v37 < *(_DWORD *)(v41 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v41 + 24) + v269) + v44 + 8) )
      {
        v42 = 1;
        *(_DWORD *)(*(_QWORD *)v41 + 24LL * v37 + 8) |= 1u;
      }
      else
      {
        ExReleasePushLockExclusiveEx(v45, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( !v42 )
      {
LABEL_214:
        KeLeaveCriticalRegion();
        v298[0] = v262;
        goto LABEL_215;
      }
      v46 = WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (unsigned int)v35 >= 0x10000 )
      {
        if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                      (unsigned __int16)v35,
                                      1)
               + 13) == WORD1(v35) )
            v35 = (unsigned __int16)v35;
        }
        else
        {
          v35 = (unsigned __int16)v35;
        }
      }
      v47 = *((_QWORD *)v46 + 2);
      v48 = *(_DWORD *)(v47 + 2056);
      if ( (unsigned int)v35 >= v48 + ((*(unsigned __int16 *)(v47 + 2) - 1) << 16) )
      {
LABEL_149:
        v51 = 0LL;
        goto LABEL_150;
      }
      if ( (unsigned int)v35 >= v48 )
      {
        v49 = (((unsigned int)v35 - v48) >> 16) + 1;
        if ( ((unsigned int)v35 - v48) >> 16 == -2 )
          goto LABEL_149;
      }
      else
      {
        v49 = 0;
      }
      v50 = *(_QWORD *)(v47 + 8LL * v49 + 8);
      if ( v49 )
        v35 = (_DWORD)v35 - ((v49 - 1) << 16) - v48;
      v51 = 0LL;
      if ( (unsigned int)v35 < *(_DWORD *)(v50 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v50 + 24) + 8 * ((unsigned __int64)(unsigned int)v35 >> 8))
                     + 16LL * (unsigned __int8)v35
                     + 8) )
      {
        v51 = (unsigned __int16 *)(*(_QWORD *)v50 + 24 * v35);
      }
LABEL_150:
      v274 = v51;
      _m_prefetchw(v51 + 4);
      v52 = (*((_BYTE *)v51 + 15) & 0x20) == 0;
      v276 = *((_DWORD *)v51 + 2);
      if ( v52 )
      {
        v53 = v275;
      }
      else
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v274);
        v53 = v275;
        if ( !v275 )
          goto LABEL_204;
        v46 = WPP_MAIN_CB.Dpc.DeferredContext;
        v51 = v274;
      }
      if ( v51 )
      {
        if ( *((_BYTE *)v51 + 14) != 1 || v51[6] != WORD1(v291) )
        {
LABEL_172:
          v61 = *(_DWORD *)v51 & 0xFFFFFF;
          if ( v61 >= 0x10000 )
          {
            if ( *(_DWORD *)v46 > 0x10000u )
            {
              v62 = *v51;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)v46 + 2),
                                          v62,
                                          1)
                   + 13) == HIWORD(v61) )
                v61 = v62;
            }
            else
            {
              v61 = *v51;
            }
          }
          v63 = *((_QWORD *)v46 + 2);
          v64 = *(_DWORD *)(v63 + 2056);
          if ( v61 >= v64 + ((*(unsigned __int16 *)(v63 + 2) - 1) << 16) )
            goto LABEL_185;
          if ( v61 >= v64 )
          {
            v65 = ((v61 - v64) >> 16) + 1;
            if ( (v61 - v64) >> 16 == -2 )
              goto LABEL_185;
          }
          else
          {
            v65 = 0;
          }
          v66 = *(_QWORD *)(v63 + 8LL * v65 + 8);
          if ( v65 )
            v61 = v61 - ((v65 - 1) << 16) - v64;
          if ( v61 < *(_DWORD *)(v66 + 20) )
          {
            v67 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v66 + 24) + 8 * ((unsigned __int64)v61 >> 8))
                             + 16LL * (unsigned __int8)v61
                             + 8);
            goto LABEL_186;
          }
LABEL_185:
          v67 = 0LL;
LABEL_186:
          v68 = (unsigned __int16)*v67;
          v69 = v68 | (*v67 >> 8) & 0xFF0000u;
          if ( (unsigned int)v69 >= 0x10000 )
          {
            if ( *(_DWORD *)v46 > 0x10000u )
            {
              v70 = (unsigned __int16)v68;
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)v46 + 2),
                                          (unsigned __int16)v68,
                                          1)
                   + 13) == WORD1(v69) )
                v69 = v70;
            }
            else
            {
              v69 = (unsigned __int16)v68;
            }
            if ( (unsigned int)v69 >= 0x10000 && *(_DWORD *)v46 > 0x10000u )
              GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v46 + 2), (unsigned __int16)v69, 1);
          }
          v71 = *((_QWORD *)v46 + 2);
          v72 = *(_DWORD *)(v71 + 2056);
          if ( (unsigned int)v69 >= v72 + ((*(unsigned __int16 *)(v71 + 2) - 1) << 16) )
            goto LABEL_201;
          if ( (unsigned int)v69 >= v72 )
          {
            v73 = (((unsigned int)v69 - v72) >> 16) + 1;
            if ( ((unsigned int)v69 - v72) >> 16 == -2 )
            {
LABEL_201:
              KeLeaveCriticalRegion();
              goto LABEL_204;
            }
          }
          else
          {
            v73 = 0;
          }
          v74 = *(_QWORD *)(v71 + 8LL * v73 + 8);
          if ( v73 )
            v69 = (_DWORD)v69 - ((v73 - 1) << 16) - v72;
          *(_DWORD *)(*(_QWORD *)v74 + 24 * v69 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v74 + 24) + 8 * ((unsigned __int64)(unsigned int)v69 >> 8))
          + 16LL * (unsigned __int8)v69,
            0LL);
          KeLeaveCriticalRegion();
          goto LABEL_201;
        }
        v54 = *(_DWORD *)v51 & 0xFFFFFF;
        if ( v54 >= 0x10000 )
        {
          if ( *(_DWORD *)v46 > 0x10000u )
          {
            v55 = *v51;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v46 + 2), v55, 1)
                 + 13) == HIWORD(v54) )
              v54 = v55;
          }
          else
          {
            v54 = *v51;
          }
        }
        v56 = *((_QWORD *)v46 + 2);
        v57 = *(_DWORD *)(v56 + 2056);
        if ( v54 >= v57 + ((*(unsigned __int16 *)(v56 + 2) - 1) << 16) )
          goto LABEL_170;
        if ( v54 >= v57 )
        {
          v58 = ((v54 - v57) >> 16) + 1;
          if ( (v54 - v57) >> 16 == -2 )
            goto LABEL_170;
        }
        else
        {
          v58 = 0;
        }
        v59 = *(_QWORD *)(v56 + 8LL * v58 + 8);
        if ( v58 )
          v54 = v54 - ((v58 - 1) << 16) - v57;
        if ( v54 < *(_DWORD *)(v59 + 20) )
        {
          v60 = *(struct DC **)(*(_QWORD *)(**(_QWORD **)(v59 + 24) + 8 * ((unsigned __int64)v54 >> 8))
                              + 16LL * (unsigned __int8)v54
                              + 8);
LABEL_171:
          ++*((_DWORD *)v60 + 2);
          v46 = WPP_MAIN_CB.Dpc.DeferredContext;
          v262 = v60;
          goto LABEL_172;
        }
LABEL_170:
        v60 = 0LL;
        goto LABEL_171;
      }
      if ( v53 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v274);
LABEL_204:
      v298[0] = v262;
      if ( v262 )
      {
        v75 = *((_DWORD *)v262 + 10);
        DCOBJA::~DCOBJA((DCOBJA *)v298);
        if ( (v75 & 1) != 0 )
        {
          v31 = v261;
          v12 = v264;
          goto LABEL_207;
        }
        goto LABEL_216;
      }
LABEL_215:
      UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v299);
LABEL_216:
      v31 = v261;
      v29 = (unsigned int)v313;
      v12 = v264;
      if ( (_DWORD)v313 == (*((_DWORD *)v261 + 16) & 0x80C05C1F)
        && ((*(_BYTE *)(v264 + 55) & 0x20) == 0 || *((_QWORD *)v261 + 2) == *((_QWORD *)v261 + 3))
        && (!v272 || (*((_DWORD *)v261 + 16) & 0x10000000) == 0) )
      {
        *((_DWORD *)v261 + 16) |= 0x1000u;
        v32 = v263;
        if ( v263 != *((_QWORD *)v261 + 2) )
        {
          if ( (int)IsSpbCheckDceSupported_0() >= 0 )
            SpbCheckDce_0();
          *((_QWORD *)v261 + 2) = v263;
          ResetOrg(0LL, v261, 0);
        }
        v30 = (_QWORD *)v265;
        goto LABEL_226;
      }
LABEL_207:
      v265 = (__int64)v31;
      v31 = *(struct tagDCE **)v31;
      v261 = v31;
    }
    while ( v31 );
    v33 = gpDispInfo;
    LOWORD(v4) = v312;
LABEL_209:
    v76 = *(_QWORD *)(v33 + 64);
    v77 = (struct tagDCE **)(v33 + 64);
    v265 = v33 + 64;
    v78 = 0LL;
    if ( v76 )
    {
      while ( 2 )
      {
        if ( (*(_DWORD *)(v76 + 64) & 0x400002) == 2 )
        {
          v79 = *(_QWORD *)(v76 + 8);
          v300[0] = 0LL;
          v300[1] = 0LL;
          UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v301);
          LOBYTE(v80) = 1;
          v81 = HmgShareLock(v79, v80);
          v300[0] = v81;
          if ( v81 )
          {
            v82 = *(_DWORD *)(v81 + 40);
            DCOBJA::~DCOBJA((DCOBJA *)v300);
            if ( (v82 & 1) == 0 )
              goto LABEL_233;
          }
          else
          {
            UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v301);
LABEL_233:
            if ( !*(_QWORD *)(v76 + 88) )
            {
              v87 = *(_DWORD *)(v76 + 64);
              if ( (v87 & 0x800) != 0 )
                goto LABEL_241;
              if ( (v87 & 0x1000) == 0 )
                v78 = v77;
            }
          }
        }
        v77 = (struct tagDCE **)v76;
        v265 = v76;
        v76 = *(_QWORD *)v76;
        if ( !v76 )
          break;
        continue;
      }
    }
    v265 = (__int64)v78;
    v77 = v78;
    if ( v78 )
    {
LABEL_241:
      v31 = *v77;
      v30 = (_QWORD *)v265;
      v12 = v264;
      v29 = (unsigned int)v313;
      v32 = v263;
      v261 = v31;
      goto LABEL_242;
    }
    if ( CreateCacheDC(v263, v4 & 0x4000 | 0x802, 0LL) )
    {
      v12 = v264;
      continue;
    }
    break;
  }
LABEL_541:
  GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
  return 0LL;
}
