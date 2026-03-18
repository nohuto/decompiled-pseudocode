/*
 * XREFs of xxxCreateWindowEx @ 0x1C004C640
 * Callers:
 *     NtUserCreateWindowEx @ 0x1C0072500 (NtUserCreateWindowEx.c)
 *     xxxCreateDefaultImeWindow @ 0x1C008F8CC (xxxCreateDefaultImeWindow.c)
 *     xxxCreateWindowStation @ 0x1C00D6334 (xxxCreateWindowStation.c)
 *     xxxCsDdeInitialize @ 0x1C01089B8 (xxxCsDdeInitialize.c)
 *     xxxCreateDesktopEx @ 0x1C0121340 (xxxCreateDesktopEx.c)
 *     xxxAddShadow @ 0x1C012F41C (xxxAddShadow.c)
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     xxxNextWindow @ 0x1C0201554 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 * Callees:
 *     HasMessageRootWindow @ 0x1C000B940 (HasMessageRootWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C004C410 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ValidateNewParent @ 0x1C004FA4C (ValidateNewParent.c)
 *     IsTopLevelParent @ 0x1C004FB24 (IsTopLevelParent.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     GetStyleWindow @ 0x1C0054CF0 (GetStyleWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     UnlinkWindow @ 0x1C0055CCC (UnlinkWindow.c)
 *     CalcWindowFullScreen @ 0x1C0055DBC (CalcWindowFullScreen.c)
 *     _GetWindowCompositionInfo @ 0x1C0055F24 (_GetWindowCompositionInfo.c)
 *     LinkWindow @ 0x1C00564E4 (LinkWindow.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     ValidateParentDepth @ 0x1C0056948 (ValidateParentDepth.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxCallCtfHook @ 0x1C00575D0 (xxxCallCtfHook.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxUpdateInputHangInfo @ 0x1C005ADE0 (xxxUpdateInputHangInfo.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     DereferenceClass @ 0x1C0068330 (DereferenceClass.c)
 *     xxxCheckFullScreen @ 0x1C006899C (xxxCheckFullScreen.c)
 *     DwmAsyncOwnerChange @ 0x1C0068E08 (DwmAsyncOwnerChange.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     GetRedirectionBitmap @ 0x1C006BF60 (GetRedirectionBitmap.c)
 *     xxxInheritWindowMonitor @ 0x1C006CD18 (xxxInheritWindowMonitor.c)
 *     GetInheritedMonitor @ 0x1C006E21C (GetInheritedMonitor.c)
 *     GetThreadDesktopWindow @ 0x1C006E690 (GetThreadDesktopWindow.c)
 *     DwmChildRectChange @ 0x1C006EE8C (DwmChildRectChange.c)
 *     xxxLoadUserApiHook @ 0x1C0070720 (xxxLoadUserApiHook.c)
 *     GetAppCompatFlags2 @ 0x1C00722A8 (GetAppCompatFlags2.c)
 *     NeedsWindowEdge @ 0x1C00722D8 (NeedsWindowEdge.c)
 *     xxxAdjustSize @ 0x1C0072CC4 (xxxAdjustSize.c)
 *     SetTiledRect @ 0x1C0073CCC (SetTiledRect.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00747C4 (zzzSetWindowCompositionCloak.c)
 *     ConstrainWindowSIZERECT @ 0x1C00754F8 (ConstrainWindowSIZERECT.c)
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0075940 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     PWInsertAfter @ 0x1C0076E20 (PWInsertAfter.c)
 *     _MonitorFromWindow @ 0x1C0077FC0 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C00780C0 (_MonitorFromRect.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     SetRedirectedWindow @ 0x1C0079E60 (SetRedirectedWindow.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     IsDesktopWindow @ 0x1C007AA1C (IsDesktopWindow.c)
 *     GetMessageWindow @ 0x1C007AA6C (GetMessageWindow.c)
 *     xxxSetLayeredWindow @ 0x1C007D4C8 (xxxSetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C0080178 (DwmAsyncChildStyleChange.c)
 *     xxxClientLoadMenu @ 0x1C00807C4 (xxxClientLoadMenu.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     CheckGrantedAccess @ 0x1C00858B4 (CheckGrantedAccess.c)
 *     IsImmersiveAppIORestricted @ 0x1C0086DD0 (IsImmersiveAppIORestricted.c)
 *     IsValidBandForProcess @ 0x1C0086DF0 (IsValidBandForProcess.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C008A368 (SetWindowSubtreeCoreWindowStatus.c)
 *     zzzAttachThreadInput @ 0x1C008AE54 (zzzAttachThreadInput.c)
 *     xxxCreateDefaultImeWindow @ 0x1C008F8CC (xxxCreateDefaultImeWindow.c)
 *     GetNonChildAncestor @ 0x1C00905C8 (GetNonChildAncestor.c)
 *     RtlInitLargeAnsiString @ 0x1C00907B4 (RtlInitLargeAnsiString.c)
 *     RecreateRedirectionBitmap @ 0x1C009AB98 (RecreateRedirectionBitmap.c)
 *     CalcForegroundInsertAfter @ 0x1C00C79CC (CalcForegroundInsertAfter.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C00C9468 (SetMinimize.c)
 *     xxxGetSystemMenu @ 0x1C00CA20C (xxxGetSystemMenu.c)
 *     LockWndMenu @ 0x1C00CBF10 (LockWndMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00CC1E8 (RtlInitUnicodeStringOrId.c)
 *     DwmAsyncChildCreate @ 0x1C00D2B44 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C00D2C50 (DwmGetClassStyle.c)
 *     xxxSendSizeMessage @ 0x1C00EC168 (xxxSendSizeMessage.c)
 *     RECTFromSIZERECT @ 0x1C00EE3AC (RECTFromSIZERECT.c)
 *     UpdateWindowDPITransform @ 0x1C00F17E0 (UpdateWindowDPITransform.c)
 *     ClassLock @ 0x1C00F1844 (ClassLock.c)
 *     ReferenceClass @ 0x1C00F3070 (ReferenceClass.c)
 *     GetAppCompatFlags @ 0x1C00F4660 (GetAppCompatFlags.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00F4720 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     xxxCreateClassSmIcon @ 0x1C00F631C (xxxCreateClassSmIcon.c)
 *     ValidateOwnerDepth @ 0x1C00F9BC4 (ValidateOwnerDepth.c)
 *     IsValidBand @ 0x1C00FC920 (IsValidBand.c)
 *     RegisterIconTitleClass @ 0x1C0119CBC (RegisterIconTitleClass.c)
 *     GetClassPtr @ 0x1C011D590 (GetClassPtr.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RegisterDefaultClass @ 0x1C011E2D8 (RegisterDefaultClass.c)
 *     MapClientNeuterToClientPfn @ 0x1C011E4C4 (MapClientNeuterToClientPfn.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     GetTopMostInsertAfter @ 0x1C01C55BC (GetTopMostInsertAfter.c)
 *     xxxForceUpdateProcessDpiAwareness @ 0x1C01E6C34 (xxxForceUpdateProcessDpiAwareness.c)
 *     ClassUnlock @ 0x1C01E86C4 (ClassUnlock.c)
 *     ?SetRole@CoreWindowProp@@SAJPEAUtagWND@@W4COREWINDOWROLE@@@Z @ 0x1C0226730 (-SetRole@CoreWindowProp@@SAJPEAUtagWND@@W4COREWINDOWROLE@@@Z.c)
 *     _W32ExceptionHandler @ 0x1C02D94EC (_W32ExceptionHandler.c)
 */

__int64 __fastcall xxxCreateWindowEx(
        int a1,
        unsigned __int64 a2,
        __int64 a3,
        _OWORD *a4,
        unsigned int a5,
        signed int a6,
        signed int a7,
        int a8,
        int a9,
        __int64 a10,
        _QWORD *a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        char a16,
        __int64 a17)
{
  __int64 v19; // r12
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // r13d
  __int64 v24; // rcx
  __int64 v25; // rdi
  unsigned int v26; // ebx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r9
  int v30; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v32; // r14
  _DWORD **ClassPtr; // rax
  _DWORD *v34; // rdi
  __int64 v35; // r8
  int v36; // r10d
  unsigned int v37; // r10d
  _QWORD *v38; // r14
  unsigned int v39; // ecx
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 *v42; // rax
  __int64 v43; // rax
  int v44; // eax
  int v45; // ecx
  struct tagWND *ThreadDesktopWindow; // r13
  BOOL v47; // edi
  int v48; // edx
  int v49; // eax
  bool v50; // zf
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  __int64 InheritedMonitor; // r12
  __int64 v55; // rax
  __int64 MessageWindow; // rax
  __int64 v57; // rbx
  int ClassStyle; // edi
  void *v59; // rax
  unsigned __int16 v60; // bx
  struct tagCLS *v61; // rdi
  __int64 v62; // r12
  int AppCompatFlags; // eax
  char v64; // bl
  __int64 v65; // r8
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned int v70; // ebx
  unsigned int v71; // edi
  int v72; // r9d
  int v73; // r10d
  char v74; // al
  _QWORD *v75; // rdx
  int v76; // edx
  __int64 v77; // r12
  __int64 v78; // rdi
  __int64 v79; // rax
  _DWORD *v80; // rcx
  __int16 v81; // ax
  int v82; // eax
  __int64 v83; // rcx
  __int64 v84; // rax
  int v85; // ebx
  __int64 v86; // rcx
  __int64 v87; // rax
  int v88; // edi
  signed int *v89; // rax
  signed int *v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  int v95; // ecx
  _DWORD *v96; // rcx
  int v97; // eax
  _QWORD *v98; // rcx
  _QWORD *Menu; // rax
  __int64 v100; // rcx
  char v101; // bl
  __int64 NonChildAncestor; // rbx
  _QWORD *v103; // rdi
  __int64 v104; // rdx
  unsigned int v105; // eax
  int v106; // ecx
  __int64 KernelEvent; // rax
  __int64 v108; // rdi
  struct tagWND **v109; // r12
  __int64 v110; // rdx
  struct tagCLS *v111; // rbx
  unsigned int v112; // eax
  NTSTATUS v113; // eax
  int v114; // eax
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // rax
  __int64 v118; // r8
  int v119; // eax
  int v120; // eax
  _DWORD *v121; // rdi
  int v122; // eax
  __int64 v123; // rcx
  char v124; // al
  unsigned int v125; // ebx
  __int64 CacheDC; // rax
  int v127; // ebx
  __int64 v128; // rcx
  __int64 SystemMenu; // rbx
  __int64 v130; // rdx
  __int64 v131; // rcx
  _QWORD *v132; // rbx
  __int64 DefaultImeWindow; // rax
  __int64 v134; // rdx
  __int64 v135; // rdx
  __int64 v136; // rcx
  int v137; // ecx
  __int64 v138; // r9
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rax
  unsigned __int64 v142; // rbx
  __int64 v143; // rcx
  __int64 v144; // rdx
  __int64 v145; // rcx
  int v146; // eax
  __int64 TopMostInsertAfter; // rax
  int v148; // edx
  int v149; // ecx
  struct tagCLS *v150; // rbx
  void *v151; // rax
  void *v152; // rax
  __int64 v153; // rdx
  char v154; // al
  struct tagWND *v155; // rcx
  __int64 v156; // r9
  unsigned __int64 v157; // r8
  struct tagWND *v158; // rcx
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rdx
  __int64 v164; // rcx
  wchar_t *v166; // rcx
  unsigned int v167; // [rsp+58h] [rbp-2D0h]
  unsigned __int16 Atom; // [rsp+5Ch] [rbp-2CCh]
  int v169; // [rsp+60h] [rbp-2C8h]
  int v170; // [rsp+60h] [rbp-2C8h]
  unsigned __int64 v171; // [rsp+68h] [rbp-2C0h] BYREF
  int v172; // [rsp+70h] [rbp-2B8h] BYREF
  int v173; // [rsp+74h] [rbp-2B4h] BYREF
  int v174; // [rsp+78h] [rbp-2B0h]
  __int16 v175; // [rsp+80h] [rbp-2A8h]
  struct tagCLS *v176; // [rsp+88h] [rbp-2A0h]
  struct tagWND *v177; // [rsp+90h] [rbp-298h]
  __int64 v178; // [rsp+98h] [rbp-290h]
  int v179; // [rsp+A0h] [rbp-288h]
  int v180; // [rsp+A4h] [rbp-284h]
  int v181; // [rsp+A8h] [rbp-280h]
  int v182; // [rsp+ACh] [rbp-27Ch]
  int v183; // [rsp+B0h] [rbp-278h]
  int WindowCloakState; // [rsp+B4h] [rbp-274h]
  int v185; // [rsp+B8h] [rbp-270h]
  int v186; // [rsp+BCh] [rbp-26Ch]
  int v187; // [rsp+C0h] [rbp-268h]
  _QWORD *v188; // [rsp+C8h] [rbp-260h]
  BOOL v189; // [rsp+D0h] [rbp-258h]
  __int64 v190; // [rsp+D8h] [rbp-250h]
  __int64 v191; // [rsp+E0h] [rbp-248h] BYREF
  __int64 v192; // [rsp+E8h] [rbp-240h]
  wchar_t *Str1; // [rsp+F8h] [rbp-230h]
  int v194; // [rsp+100h] [rbp-228h]
  int v195; // [rsp+108h] [rbp-220h]
  int v196; // [rsp+10Ch] [rbp-21Ch]
  _OWORD *v197; // [rsp+110h] [rbp-218h]
  struct tagCLS *v198; // [rsp+118h] [rbp-210h]
  __int64 v199; // [rsp+120h] [rbp-208h]
  __int64 v200; // [rsp+128h] [rbp-200h]
  _QWORD *v201; // [rsp+130h] [rbp-1F8h]
  __int64 v202; // [rsp+138h] [rbp-1F0h]
  _OWORD *v203; // [rsp+140h] [rbp-1E8h] BYREF
  struct tagWND *v204; // [rsp+148h] [rbp-1E0h]
  _OWORD v205[7]; // [rsp+150h] [rbp-1D8h] BYREF
  char v206[8]; // [rsp+1C0h] [rbp-168h] BYREF
  int v207; // [rsp+1C8h] [rbp-160h]
  _QWORD v208[3]; // [rsp+1D0h] [rbp-158h] BYREF
  int v209; // [rsp+1E8h] [rbp-140h]
  _BYTE v210[24]; // [rsp+1F0h] [rbp-138h] BYREF
  _QWORD v211[3]; // [rsp+208h] [rbp-120h] BYREF
  _QWORD v212[3]; // [rsp+220h] [rbp-108h] BYREF
  _QWORD v213[3]; // [rsp+238h] [rbp-F0h] BYREF
  _QWORD v214[3]; // [rsp+250h] [rbp-D8h] BYREF
  _QWORD v215[3]; // [rsp+268h] [rbp-C0h] BYREF
  _QWORD v216[4]; // [rsp+280h] [rbp-A8h] BYREF
  _BYTE v217[40]; // [rsp+2A0h] [rbp-88h] BYREF
  __int128 v218; // [rsp+2C8h] [rbp-60h] BYREF
  __int64 v219; // [rsp+2D8h] [rbp-50h] BYREF
  int v220; // [rsp+2E0h] [rbp-48h]
  int v221; // [rsp+2E4h] [rbp-44h]

  v197 = a4;
  v192 = a3;
  Str1 = (wchar_t *)a2;
  v167 = a1;
  v174 = a1;
  v171 = a2;
  v219 = a3;
  v203 = a4;
  v19 = a10;
  v177 = (struct tagWND *)a10;
  v188 = a11;
  v191 = (__int64)a11;
  v190 = a12;
  v199 = a13;
  v187 = 0;
  v195 = 0;
  v185 = 0;
  v182 = 0;
  v218 = 0LL;
  v181 = 5;
  v196 = 5;
  v202 = 0LL;
  v20 = gptiCurrent;
  v208[2] = gptiCurrent;
  v183 = 0;
  v21 = 0LL;
  v180 = 0;
  v175 = 0;
  v22 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL);
  v169 = v22 & 0x2000;
  v186 = v169;
  WindowCloakState = 0;
  v23 = 0;
  v179 = 0;
  if ( (v22 & 0x10000000) == 0 )
  {
    if ( !(unsigned int)RegisterIconTitleClass() )
    {
LABEL_3:
      v24 = 87LL;
LABEL_529:
      UserSetLastError(v24);
      return 0LL;
    }
    v20 = gptiCurrent;
  }
  if ( a1 < 0 )
  {
    v180 = 800;
    v175 = 800;
    v167 = a1 & 0x7FFFFFFF;
    v174 = a1 & 0x7FFFFFFF;
  }
  v25 = *(_QWORD *)(v20 + 408);
  v200 = v25;
  v208[0] = v25;
  if ( a10 && *(_QWORD *)(a10 + 24) != v25 )
    goto LABEL_3;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*(_QWORD *)(v20 + 376)) )
    {
LABEL_11:
      v24 = 5LL;
      goto LABEL_529;
    }
    v23 = 1;
    v179 = 1;
    v20 = gptiCurrent;
  }
  if ( (a16 & 2) != 0 && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(v20 + 376)) )
    goto LABEL_11;
  v26 = a14;
  if ( !a14 )
    goto LABEL_24;
  if ( !(unsigned int)IsValidBand(a14, v21, v20) || a14 == 15 )
    goto LABEL_3;
  v27 = gptiCurrent;
  if ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 376LL) + 776LL) & 0x30) == 0x10
    && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 776LL) & 0x200) == 0
    && a14 == 1 )
  {
    if ( !gfEnableModernOnDesktop )
      goto LABEL_3;
    if ( !v23 )
    {
      if ( !(unsigned int)HasMessageRootWindow(a10) )
        goto LABEL_3;
LABEL_24:
      v27 = gptiCurrent;
    }
  }
  v189 = (HIWORD(a5) & 0xC000) == 0x4000;
  LODWORD(v178) = v189;
  v194 = v189;
  if ( (HIWORD(a5) & 0xC000) != 0x4000 )
  {
    if ( (unsigned int)ShouldSetNoOwner(*(_QWORD *)(v27 + 376), a10) )
      v19 = 0LL;
    v177 = (struct tagWND *)v19;
  }
  if ( !v19 || (unsigned int)IsDesktopWindow(v19) )
  {
    if ( !a14 )
    {
      if ( (unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 376LL)) )
      {
        v23 = 1;
        v179 = 1;
        v26 = 15;
      }
      else if ( (*(_DWORD *)(v28 + 776) & 2) != 0 && (v167 & 8) != 0 )
      {
        v26 = 2;
      }
      else
      {
        v26 = 1;
      }
      goto LABEL_43;
    }
  }
  else
  {
    v23 = *(_BYTE *)(v19 + 290) & 0x40;
    v179 = v23;
    if ( a14 )
    {
      if ( a14 != *(_DWORD *)(v19 + 304) )
        goto LABEL_3;
    }
    else
    {
      v26 = *(_DWORD *)(v19 + 304);
    }
  }
  v29 = gptiCurrent;
LABEL_43:
  if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(v29 + 376), v26, v19) )
    goto LABEL_11;
  v30 = v167;
  if ( (v167 & 0x400000) == 0 )
  {
    if ( v19 )
    {
      if ( (HIWORD(a5) & 0xC000) == 0x4000 && (*(_BYTE *)(v19 + 50) & 0x50) == 0x40 )
      {
        v30 = v167 | 0x400000;
        v167 = v30;
        v174 = v30;
      }
    }
    else if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 || (_WORD)a2 != 0x8002 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v167);
      v30 = v167;
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 780) & 1) != 0 )
      {
        v30 = v167 | 0x400000;
        v167 = v30;
        v174 = v30;
      }
    }
  }
  if ( (v30 & 0x2200000) == 0x2200000 )
    goto LABEL_3;
  v32 = gptiCurrent;
  if ( *(_QWORD *)(gptiCurrent + 512LL)
    && !(unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 768LL), 2LL) )
  {
    return 0LL;
  }
  if ( (HIWORD(a5) & 0xC000) != 0x4000 )
    goto LABEL_60;
  if ( !v177 )
  {
    v24 = 1406LL;
    goto LABEL_529;
  }
  if ( !(unsigned int)ValidateParentDepth(0LL, v177) )
    goto LABEL_3;
  while ( 1 )
  {
LABEL_60:
    if ( (v192 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v206);
      if ( (int)RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, *(const unsigned __int16 **)(v192 + 8)) < 0 )
      {
        Atom = 0;
        v169 = 1;
        v186 = 1;
      }
      else
      {
        Atom = UserFindAtom(&gawchAtomScratch);
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v206);
    }
    else
    {
      Atom = v192;
    }
    if ( Atom )
    {
      ClassPtr = (_DWORD **)GetClassPtr(Atom, *(_QWORD *)(v32 + 376), v190);
      if ( ClassPtr )
        break;
    }
LABEL_521:
    if ( v169
      || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) & 0x2000) != 0
      || (((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0
        ? (v166 = Str1)
        : (v166 = (wchar_t *)*((_QWORD *)Str1 + 1)),
          !(unsigned int)RegisterDefaultClass(v166)) )
    {
      v24 = 1407LL;
      goto LABEL_529;
    }
    v169 = 1;
    v186 = 1;
    v32 = gptiCurrent;
  }
  v34 = *ClassPtr;
  if ( (unsigned int)NeedsWindowEdge(a5, v167, a15 >= 0x400u) )
    v37 = v36 | 0x100;
  else
    v37 = v36 & 0xFFFFFEFF;
  v174 = v37;
  v167 = v37;
  if ( v34[25] >= 0xFFFFFE88 )
    goto LABEL_3;
  v207 = v34[25] + 376;
  LOBYTE(v35) = 1;
  v38 = (_QWORD *)HMAllocObject(v32, v200, v35);
  v201 = v38;
  if ( !v38 )
    return 0LL;
  v39 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 776LL);
  if ( (v39 & 0x4000) != 0 )
    *((_DWORD *)v38 + 86) = 2;
  else
    *((_DWORD *)v38 + 86) = (v39 >> 13) & 1;
  *((_DWORD *)v38 + 91) = 0;
  v38[19] = v34;
  *((_DWORD *)v38 + 13) = a5 & 0xEFFFFFFF;
  *((_DWORD *)v38 + 12) = v167 & 0xFDF7FFFF;
  *((_DWORD *)v38 + 58) = v34[25];
  if ( !(unsigned int)ReferenceClass(v34) )
  {
LABEL_77:
    HMFreeObject(v38);
    goto LABEL_521;
  }
  v40 = v38[19];
  v176 = (struct tagCLS *)v40;
  v198 = (struct tagCLS *)v40;
  if ( !(unsigned int)ClassLock(v40, v210) )
  {
    DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 376LL));
    goto LABEL_77;
  }
  v41 = gptiCurrent;
  *((_DWORD *)v38 + 72) ^= (*((_DWORD *)v38 + 72) ^ (((*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 776LL) & 0x6000) == 0) << 7)) & 0x80;
  v38[33] = a17;
  if ( *(_WORD *)(v40 + 10) == *(_WORD *)(gpsi + 852LL) )
  {
    v38[31] = 0LL;
  }
  else
  {
    v42 = *(__int64 **)(gptiCurrent + 704LL);
    if ( v42 )
      v43 = *v42;
    else
      v43 = 0LL;
    v38[31] = v43;
  }
  *((_DWORD *)v38 + 76) = v26;
  if ( v26 == 1 )
    v44 = 0;
  else
    v44 = IsTopLevelParent(v177);
  if ( v44 )
    *((_DWORD *)v38 + 12) |= 8u;
  if ( v23 )
    *((_BYTE *)v38 + 290) |= 0x40u;
  ++*(_DWORD *)(v41 + 772);
  memset(v205, 0, sizeof(v205));
  DWORD2(v205[4]) = v167;
  *((_QWORD *)&v205[0] + 1) = v190;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (_WORD)v180 )
    {
      *(_QWORD *)&v205[4] = *(_QWORD *)(v40 + 144);
      if ( (*(_QWORD *)&v205[4] & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString(&v205[6]);
    }
    else
    {
      *(_QWORD *)&v205[4] = *((_QWORD *)Str1 + 1);
      v205[6] = *(_OWORD *)Str1;
    }
  }
  else
  {
    *(_QWORD *)&v205[4] = Str1;
  }
  if ( v197 )
  {
    *((_QWORD *)&v205[3] + 1) = *((_QWORD *)v197 + 1);
    v205[5] = *v197;
  }
  LODWORD(v205[3]) = a5;
  v45 = a6;
  *((_QWORD *)&v205[2] + 1) = __PAIR64__(a6, a7);
  *(_QWORD *)&v205[2] = __PAIR64__(a8, a9);
  ThreadDesktopWindow = v177;
  if ( v177 )
    *((_QWORD *)&v205[1] + 1) = *(_QWORD *)v177;
  else
    *((_QWORD *)&v205[1] + 1) = 0LL;
  v47 = v189;
  if ( v189 )
  {
    *(_QWORD *)&v205[1] = v188;
    *((_DWORD *)v38 + 12) |= *((_DWORD *)v177 + 12) & 0xC4000000;
  }
  else if ( v188 )
  {
    *(_QWORD *)&v205[1] = *v188;
  }
  else
  {
    *(_QWORD *)&v205[1] = 0LL;
  }
  *(_QWORD *)&v205[0] = v199;
  v211[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v211;
  v211[1] = v38;
  ++*((_DWORD *)v38 + 2);
  if ( a6 == 0x80000000 || a6 == 0x8000 )
    v45 = 0;
  LODWORD(v219) = v45;
  if ( a7 == 0x80000000 || (v48 = a7, a7 == 0x8000) )
    v48 = 0;
  HIDWORD(v219) = v48;
  if ( a8 == 0x80000000 || (v49 = 0, a8 == 0x8000) )
    v49 = 1;
  v50 = v45 + v49 == 0;
  v51 = a8;
  if ( !v50 )
    v51 = 0;
  v220 = v51;
  if ( a9 == 0x80000000 || (v52 = 0, a9 == 0x8000) )
    v52 = 1;
  v53 = a9;
  if ( v48 + v52 )
    v53 = 0;
  v221 = v53;
  InheritedMonitor = GetInheritedMonitor((struct tagWND *)v38);
  v178 = InheritedMonitor;
  if ( !InheritedMonitor && ThreadDesktopWindow )
  {
    InheritedMonitor = ValidateHmonitorNoRip(*((_QWORD *)ThreadDesktopWindow + 44));
    v178 = InheritedMonitor;
  }
  if ( InheritedMonitor
    || (InheritedMonitor = MonitorFromRect(&v219, 2LL), v178 = InheritedMonitor, v55 = 0LL, InheritedMonitor) )
  {
    v55 = *(_QWORD *)InheritedMonitor;
  }
  v38[44] = v55;
  *((_WORD *)v38 + 180) = *(_WORD *)(InheritedMonitor + 152);
  *((_DWORD *)v38 + 72) |= 0x8000000u;
  if ( v38[3] )
  {
    MessageWindow = GetMessageWindow(v38);
    HMAssignmentLock(v38 + 11, MessageWindow);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v38) )
  {
    if ( !v47
      && (!ThreadDesktopWindow || ThreadDesktopWindow != *(struct tagWND **)(*((_QWORD *)ThreadDesktopWindow + 3) + 96LL)) )
    {
      GetThreadDesktopWindow(0LL);
    }
    memset(v217, 0, sizeof(v217));
    GetWindowCompositionInfo(v38, v217);
    v57 = v38[3];
    ClassStyle = DwmGetClassStyle(v38);
    v59 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildCreate(
      v59,
      *((_DWORD *)v38 + 12),
      *((_DWORD *)v38 + 72),
      ClassStyle,
      (__int64)v217,
      *(_QWORD *)(v57 + 40),
      (__int64)&v219);
  }
  v38[7] = v190;
  v60 = v180;
  v61 = v176;
  v38[18] = MapClientNeuterToClientPfn(v176, 0LL, (unsigned __int16)v180);
  SetOrClrWF((*((_BYTE *)v61 + 34) & 1) != 0, v38, 516LL, 1LL);
  if ( *((_QWORD *)v61 + 14) && !*((_QWORD *)v61 + 19) )
    xxxCreateClassSmIcon(v61);
  SetOrClrWF(1LL, v38, v60, 1LL);
  if ( (*((_BYTE *)v61 + 34) & 2) != 0
    || v60
    && (Atom == *(_WORD *)(gpsi + 852LL)
     || Atom == *(_WORD *)(gpsi + 862LL)
     || Atom == *(_WORD *)(gpsi + 866LL)
     || Atom == *(_WORD *)(gpsi + 888LL)
     || Atom == *(_WORD *)(gpsi + 854LL)
     || Atom == *(_WORD *)(gpsi + 858LL)
     || Atom == *(_WORD *)(gpsi + 864LL)
     || Atom == *(_WORD *)(gpsi + 882LL)
     || Atom == *(_WORD *)(gpsi + 856LL)) )
  {
    SetOrClrWF(1LL, v38, 520LL, 1LL);
  }
  v62 = gptiCurrent;
  AppCompatFlags = GetAppCompatFlags(gptiCurrent);
  v64 = AppCompatFlags;
  if ( (AppCompatFlags & 0x8000000) != 0 )
  {
    SetOrClrWF(1LL, v38, 1032LL, 1LL);
    v167 &= 0x3Fu;
    DWORD2(v205[4]) = BYTE8(v205[4]) & 0x3F;
  }
  *((_WORD *)v38 + 32) = 0;
  if ( a15 < 0x30Au )
  {
    if ( (v64 & 0x40) != 0 )
    {
      v65 = 1600LL;
LABEL_162:
      SetOrClrWF(1LL, v38, v65, 1LL);
    }
  }
  else
  {
    SetOrClrWF(1LL, v38, 1281LL, 1LL);
    if ( a15 >= 0x400u )
    {
      SetOrClrWF(1LL, v38, 1282LL, 1LL);
      if ( a15 >= 0x500u )
      {
        v65 = 1284LL;
        goto LABEL_162;
      }
    }
  }
  v66 = a15;
  if ( a15 <= *(_WORD *)(gptiCurrent + 556LL) )
    v66 = *(_DWORD *)(gptiCurrent + 556LL);
  *((_DWORD *)v38 + 77) = v66;
  if ( (GetAppCompatFlags2(39168LL) & 0x10000000) != 0 )
    SetOrClrWF(1LL, v38, 2688LL, 1LL);
  if ( gihmodUserApiHook >= 0 )
    xxxLoadUserApiHook();
  if ( (unsigned int)WantImeWindow(ThreadDesktopWindow, (struct tagWND *)v38) )
    xxxCallCtfHook(5LL, 3LL, *v38);
  v67 = *(_QWORD *)(gptiCurrent + 416LL);
  v68 = (unsigned int)(*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(v67 + 24));
  if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(v67 + 24)) & 0x40) != 0 )
  {
    v203 = v205;
    v204 = 0LL;
    if ( !(unsigned int)xxxCallHook(3LL, *v38, &v203) )
    {
      v70 = HIDWORD(v205[2]);
      a6 = HIDWORD(v205[2]);
      v71 = DWORD2(v205[2]);
      a7 = DWORD2(v205[2]);
      v72 = DWORD1(v205[2]);
      a8 = DWORD1(v205[2]);
      v73 = v205[2];
      a9 = v205[2];
      v177 = v204;
      goto LABEL_175;
    }
    goto LABEL_432;
  }
  v177 = 0LL;
  v70 = a6;
  v71 = a7;
  v72 = a8;
  v73 = a9;
LABEL_175:
  v74 = *((_BYTE *)v38 + 55) & 0xC0;
  if ( v74 == 64 )
  {
    v69 = 1LL;
    v170 = 1;
    if ( !ThreadDesktopWindow )
      goto LABEL_432;
  }
  else
  {
    LODWORD(v69) = 0;
    v170 = 0;
  }
  v75 = v188;
  if ( (_DWORD)v69 != v194 )
    v75 = 0LL;
  v188 = v75;
  if ( v74 )
  {
    v68 = 0LL;
    if ( v70 == 0x80000000 || v70 == 0x8000 )
    {
      v70 = 0;
      a6 = 0;
      v71 = 0;
      a7 = 0;
    }
    if ( v72 == 0x80000000 || v72 == 0x8000 )
    {
      v72 = 0;
      a8 = 0;
      v73 = 0;
      a9 = 0;
    }
  }
  else
  {
    v68 = 1LL;
  }
  v171 = __PAIR64__(v71, v70);
  v172 = v72;
  v173 = v73;
  if ( (_DWORD)v69 )
  {
    if ( ThreadDesktopWindow != (struct tagWND *)GetDesktopWindow(v38, v68) )
    {
      LODWORD(v171) = v70 + *((_DWORD *)ThreadDesktopWindow + 32);
      HIDWORD(v171) = v71 + *((_DWORD *)ThreadDesktopWindow + 33);
    }
    v177 = (struct tagWND *)1;
  }
  if ( (_DWORD)v68 )
  {
    SetOrClrWF(1LL, v38, 3844LL, 1LL);
    v187 = 192;
    if ( (*((_BYTE *)v38 + 45) & 2) != 0 )
      SetOrClrWF(1LL, v38, 2305LL, 1LL);
    SetOrClrWF(1LL, v38, 16LL, 1LL);
    if ( (v70 == 0x80000000 || v70 == 0x8000) && HIDWORD(v171) != 0x80000000 )
    {
      v76 = v181;
      if ( HIDWORD(v171) != 0x8000 )
        v76 = HIDWORD(v171);
      v181 = v76;
    }
    v77 = 0LL;
    v178 = 0LL;
    if ( v70 == 0x80000000 || v70 == 0x8000 || a8 == 0x80000000 || a8 == 0x8000 )
    {
      v78 = gptiCurrent;
      if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 664LL) )
      {
        v79 = ValidateHmonitor();
        goto LABEL_208;
      }
      if ( ThreadDesktopWindow )
      {
        v79 = MonitorFromWindow(ThreadDesktopWindow, 2LL);
LABEL_208:
        v77 = v79;
        v178 = v79;
      }
    }
    else
    {
      v78 = gptiCurrent;
    }
    if ( !v77 )
    {
      v77 = *(_QWORD *)(GetDispInfo() + 88);
      v178 = v77;
    }
    SetTiledRect(v38, &v218, v77);
    if ( v70 == 0x80000000 || v70 == 0x8000 )
    {
      v80 = *(_DWORD **)(v78 + 376);
      if ( (v80[192] & 4) != 0 )
      {
        v182 = 1;
        v70 = v80[188];
        HIDWORD(v171) = v80[189];
        a7 = HIDWORD(v171);
      }
      else
      {
        v70 = v218;
        v80 = (_DWORD *)DWORD1(v218);
        a7 = DWORD1(v218);
        HIDWORD(v171) = DWORD1(v218);
      }
      LODWORD(v171) = v70;
      a6 = v70;
      v82 = 1;
    }
    else
    {
      v81 = *(_WORD *)(v77 + 154);
      if ( v81 )
        *(_WORD *)(v77 + 154) = v81 - 1;
      v82 = v185;
    }
    if ( a8 == 0x80000000 || a8 == 0x8000 )
    {
      v62 = gptiCurrent;
      v96 = *(_DWORD **)(gptiCurrent + 376LL);
      if ( (v96[192] & 2) != 0 )
      {
        v182 = 1;
        v172 = v96[190];
        v97 = v96[191];
      }
      else
      {
        v172 = DWORD2(v218) - v70;
        v97 = HIDWORD(v218) - a7;
      }
      v173 = v97;
    }
    else
    {
      if ( v82 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v83) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
            ? (v83 = 0LL)
            : (v83 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                               + 244LL) & 1),
              !(_DWORD)v83) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v83) + 776) & 0x2000) == 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
              ? (v83 = 0LL)
              : (v83 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                 + 244LL) & 1),
                v84 = v77 + 60,
                !(_DWORD)v83) )
          {
            v84 = v77 + 28;
          }
        }
        else
        {
          v84 = v77 + 44;
        }
        v85 = a8 + v171 - *(_DWORD *)(v84 + 8);
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v83) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
            ? (v86 = 0LL)
            : (v86 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                               + 244LL) & 1),
              !(_DWORD)v86) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x2000) == 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
              ? (v86 = 0LL)
              : (v86 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                 + 244LL) & 1),
                v87 = v77 + 60,
                !(_DWORD)v86) )
          {
            v87 = v77 + 28;
          }
        }
        else
        {
          v87 = v77 + 44;
        }
        v88 = a9 + HIDWORD(v171) - *(_DWORD *)(v87 + 12);
        if ( v85 > 0 )
        {
          a6 -= v85;
          LODWORD(v171) = a6;
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
              ? (v86 = 0LL)
              : (v86 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                 + 244LL) & 1),
                !(_DWORD)v86) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x2000) == 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                ? (v86 = 0LL)
                : (v86 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                   + 244LL) & 1),
                  v89 = (signed int *)(v77 + 60),
                  !(_DWORD)v86) )
            {
              v89 = (signed int *)(v77 + 28);
            }
          }
          else
          {
            v89 = (signed int *)(v77 + 44);
          }
          if ( a6 < *v89 )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                ? (v86 = 0LL)
                : (v86 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                   + 244LL) & 1),
                  !(_DWORD)v86) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x2000) == 0
                || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                  ? (v86 = 0LL)
                  : (v86 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                     + 244LL) & 1),
                    v90 = (signed int *)(v77 + 60),
                    !(_DWORD)v86) )
              {
                v90 = (signed int *)(v77 + 28);
              }
            }
            else
            {
              v90 = (signed int *)(v77 + 44);
            }
            a6 = *v90;
            LODWORD(v171) = *v90;
          }
        }
        if ( v88 > 0 )
        {
          a7 -= v88;
          HIDWORD(v171) = a7;
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v86) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v91) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
              ? (v91 = 0LL)
              : (v91 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                 + 244LL) & 1),
                !(_DWORD)v91) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v91) + 776) & 0x2000) == 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                ? (v91 = 0LL)
                : (v91 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                   + 244LL) & 1),
                  v92 = v77 + 60,
                  !(_DWORD)v91) )
            {
              v92 = v77 + 28;
            }
          }
          else
          {
            v92 = v77 + 44;
          }
          if ( a7 < *(_DWORD *)(v92 + 4) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v91) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v93) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                ? (v93 = 0LL)
                : (v93 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                   + 244LL) & 1),
                  !(_DWORD)v93) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v93) + 776) & 0x2000) == 0
                || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                  ? (v95 = 0)
                  : (v95 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                     + 244LL) & 1),
                    v94 = v77 + 60,
                    !v95) )
              {
                v94 = v77 + 28;
              }
            }
            else
            {
              v94 = v77 + 44;
            }
            a7 = *(_DWORD *)(v94 + 4);
            HIDWORD(v171) = a7;
          }
        }
      }
      v62 = gptiCurrent;
    }
  }
  if ( v182 )
    *(_DWORD *)(*(_QWORD *)(v62 + 376) + 768LL) &= 0xFFFFFFF9;
  if ( (((*((_BYTE *)v38 + 55) & 0xC0) + 0x80) & 0xBF) == 0 )
    SetOrClrWF(1LL, v38, 3844LL, 1LL);
  *((_WORD *)v38 + 27) |= v187;
  v69 = (__int64)v188;
  if ( !v188 && !v170 && *((_QWORD *)v176 + 17) )
  {
    v98 = v38;
    if ( v38[11] )
      v98 = (_QWORD *)v38[11];
    zzzLockDisplayAreaAndInvalidateDCCache(v98, 16LL);
    RtlInitUnicodeStringOrId(v208, *((_QWORD *)v176 + 17));
    Menu = (_QWORD *)xxxClientLoadMenu(*((_QWORD *)v176 + 13), v208);
    v69 = (__int64)Menu;
    if ( Menu )
      *(_QWORD *)&v205[1] = *Menu;
    else
      *(_QWORD *)&v205[1] = 0LL;
  }
  if ( (*((_BYTE *)v38 + 55) & 0xC0) == 0x40 )
    v38[24] = v69;
  else
    LockWndMenu(v38, v38 + 24, v69);
  if ( (*((_BYTE *)v38 + 55) & 0xC0) == 0x40 )
  {
    if ( !ThreadDesktopWindow )
      goto LABEL_432;
    if ( (a16 & 2) != 0 )
    {
LABEL_333:
      v100 = 87LL;
LABEL_334:
      UserSetLastError(v100);
      goto LABEL_432;
    }
  }
  else
  {
    v101 = a16;
    if ( (a16 & 4) != 0 )
      CoreWindowProp::SetRole(v38, 1LL);
    HMAssignmentLock(v38 + 30, v38);
    if ( (unsigned int)IsTopLevelParent(ThreadDesktopWindow) )
    {
      v103 = v38 + 13;
      HMAssignmentLock(v38 + 13, 0LL);
    }
    else
    {
      NonChildAncestor = GetNonChildAncestor();
      if ( !(unsigned int)ValidateOwnerDepth(v38, NonChildAncestor) )
        goto LABEL_333;
      if ( NonChildAncestor )
      {
        *((_DWORD *)v38 + 76) = *(_DWORD *)(NonChildAncestor + 304);
        SetOrClrWF(*(_BYTE *)(NonChildAncestor + 290) & 0x40, v38, 64064LL, 1LL);
        WindowCloakState = GetWindowCloakState(NonChildAncestor);
      }
      v103 = v38 + 13;
      HMAssignmentLock(v38 + 13, NonChildAncestor);
      if ( v38[13] && ((*(_BYTE *)(v38[13] + 48LL) & 8) != 0 || *((_DWORD *)v38 + 76) != 1) )
        SetOrClrWF(1LL, v38, 2056LL, 1LL);
      if ( Atom != *(_WORD *)(gpsi + 882LL) )
      {
        if ( *v103 )
        {
          v104 = *(_QWORD *)(*v103 + 16LL);
          if ( v104 != v62 )
            zzzAttachThreadInput(v62, v104, 1LL);
        }
      }
      v101 = a16;
    }
    if ( !*v103 )
    {
      if ( (v105 = *((_DWORD *)v38 + 76), v105 <= 0xF) && (v106 = 44800, _bittest(&v106, v105))
        || (*((_BYTE *)v38 + 290) & 0x40) != 0 )
      {
        WindowCloakState = 2;
      }
    }
    if ( !ThreadDesktopWindow || ThreadDesktopWindow != *(struct tagWND **)(*((_QWORD *)ThreadDesktopWindow + 3) + 96LL) )
    {
      ThreadDesktopWindow = (struct tagWND *)GetThreadDesktopWindow(0LL);
      v215[0] = *(_QWORD *)(v62 + 368);
      *(_QWORD *)(v62 + 368) = v215;
      v215[1] = ThreadDesktopWindow;
      if ( ThreadDesktopWindow )
        ++*((_DWORD *)ThreadDesktopWindow + 2);
      v183 = 1;
    }
    if ( (v101 & 2) != 0 )
    {
      if ( *(_QWORD *)(v62 + 1224) )
        goto LABEL_333;
      SetOrClrWF(1LL, v38, 64128LL, 1LL);
      *(_DWORD *)(v62 + 1072) |= 0x40000u;
      *(_DWORD *)(*(_QWORD *)(v62 + 384) + 332LL) |= 0x2000000u;
      if ( !*(_QWORD *)(v62 + 1216) )
      {
        KernelEvent = CreateKernelEvent(1LL, 0LL);
        *(_QWORD *)(v62 + 1216) = KernelEvent;
        if ( !KernelEvent )
          goto LABEL_432;
      }
      HMAssignmentLock(v62 + 1224, v38);
    }
  }
  if ( (v38[36] & 8) != 0 )
  {
    v108 = v38[11];
    UnlinkWindow(v38, v108);
  }
  else
  {
    v108 = v202;
  }
  if ( !(unsigned int)IsTopLevelParent(ThreadDesktopWindow) )
  {
    *((_DWORD *)v38 + 76) = *((_DWORD *)ThreadDesktopWindow + 76);
    SetOrClrWF(*((_BYTE *)ThreadDesktopWindow + 290) & 0x40, v38, 64064LL, 1LL);
  }
  if ( ThreadDesktopWindow && !(unsigned int)ValidateNewParent(v38, ThreadDesktopWindow) )
    goto LABEL_432;
  v109 = (struct tagWND **)(v38 + 11);
  HMAssignmentLock(v38 + 11, ThreadDesktopWindow);
  if ( ThreadDesktopWindow )
    v110 = (unsigned int)-__CFSHR__(*((_DWORD *)ThreadDesktopWindow + 72), 27);
  else
    v110 = 0LL;
  SetWindowSubtreeCoreWindowStatus(v38, v110);
  if ( *((_DWORD *)v38 + 86) != 2 )
    UpdateWindowDPITransform(v38, v178);
  v111 = v176;
  if ( (*((_BYTE *)v38 + 45) & 1) == 0
    && (*((_DWORD *)v176 + 21) & 0x80u) != 0
    && (*((_BYTE *)ThreadDesktopWindow + 55) & 2) == 0 )
  {
    SetOrClrWF(0LL, v38, 3846LL, 1LL);
  }
  v112 = WindowCloakState;
  if ( (WindowCloakState & 2) == 0 )
    *((_BYTE *)v38 + 290) |= 0x20u;
  if ( v112 )
  {
    v113 = zzzSetWindowCompositionCloak(v38, 0LL, v112);
    if ( v113 < 0 )
    {
      v100 = RtlNtStatusToDosError(v113);
      goto LABEL_334;
    }
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v191);
  if ( v108 )
    zzzLockDisplayAreaAndInvalidateDCCache(v108, 16LL);
  if ( ThreadDesktopWindow )
    zzzLockDisplayAreaAndInvalidateDCCache(ThreadDesktopWindow, 16LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v191);
  if ( (*((_BYTE *)v38 + 55) & 0xC0) == 0x40 )
  {
    v114 = IsTopLevelWindow(v38);
    v115 = gptiCurrent;
    if ( !v114 )
    {
      v116 = *((_QWORD *)ThreadDesktopWindow + 2);
      if ( gptiCurrent != v116 )
      {
        zzzAttachThreadInput(gptiCurrent, v116, 1LL);
        if ( *v109 )
        {
          v117 = GetMessageWindow(v38);
          if ( v118 != v117 && *(_DWORD *)(v118 + 344) != *((_DWORD *)v38 + 86) )
            xxxForceUpdateProcessDpiAwareness();
        }
        goto LABEL_398;
      }
    }
  }
  else
  {
LABEL_398:
    v115 = gptiCurrent;
  }
  if ( v192 != (unsigned __int16)gatomMessage && v192 != 32769 && v192 != 32774 && !*(_DWORD *)(v115 + 772) )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v115 + 400) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    xxxUpdateInputHangInfo(0LL, 1LL);
  }
  xxxAdjustSize(v38, &v172, &v173, v115);
  ConstrainWindowSIZERECT(&v171);
  if ( v38[3] && (*((_BYTE *)v38 + 55) & 0x40) == 0 && *((char *)v38 + 48) >= 0 )
    xxxCheckFullScreen(v38, &v171);
  v119 = v172;
  if ( v172 < 0 )
    v119 = 0;
  v172 = v119;
  v120 = v173;
  if ( v173 < 0 )
    v120 = 0;
  v173 = v120;
  v121 = v38 + 14;
  RECTFromSIZERECT(v38 + 14, &v171);
  if ( (*((_BYTE *)v38 + 51) & 0x20) != 0 && GetRedirectionBitmap(v38) )
  {
    GreLockVisRgn(*gpDispInfo);
    v122 = RecreateRedirectionBitmap((struct tagWND *)v38, 0, 0LL);
    v123 = *gpDispInfo;
    if ( v122 < 0 )
    {
LABEL_415:
      GreUnlockVisRgn(v123);
      goto LABEL_432;
    }
    GreUnlockVisRgn(v123);
  }
  v124 = *((_BYTE *)v111 + 84);
  if ( (v124 & 0x20) != 0 || (v124 & 0x40) != 0 && !*((_QWORD *)v111 + 3) )
  {
    v125 = 0x8000;
    if ( GetStyleWindow(v38, 2848LL) )
      v125 = 49152;
    GreLockVisRgn(*gpDispInfo);
    CacheDC = CreateCacheDC(v38, v125, 0LL);
    v123 = *gpDispInfo;
    if ( !CacheDC )
      goto LABEL_415;
    GreUnlockVisRgn(v123);
  }
  if ( (v167 & 0x80000) != 0 && (*((_BYTE *)v38 + 50) & 8) == 0 && (int)xxxSetLayeredWindow((struct tagWND *)v38) < 0 )
    goto LABEL_432;
  if ( (v167 & 0x2000000) != 0 && !GetStyleWindow(*v109, 2818LL) )
  {
    SetOrClrWF(1LL, v38, 2818LL, 1LL);
    if ( (int)SetRedirectedWindow((struct tagWND *)v38) < 0 )
    {
      SetOrClrWF(0LL, v38, 2818LL, 1LL);
      goto LABEL_432;
    }
  }
  *((_QWORD *)&v205[2] + 1) = __PAIR64__(a6, a7);
  *(_QWORD *)&v205[2] = __PAIR64__(a8, a9);
  if ( !xxxSendMessage(v38, 129LL, 0LL, v205) )
  {
LABEL_432:
    v127 = *((_BYTE *)v38 + 55) & 0x10;
    if ( v183 )
      ThreadUnlock1(v69, v68);
    SetOrClrWF(1LL, v38, 1152LL, 1LL);
    SetOrClrWF(1LL, v38, 896LL, 1LL);
    if ( v127 )
      SetVisible(v38, 0LL);
    v128 = v38[11];
    if ( v128 )
    {
      if ( v127 )
        zzzLockDisplayAreaAndInvalidateDCCache(v128, 16LL);
      if ( (*((_BYTE *)v38 + 55) & 0xC0) == 0x40
        && !(unsigned int)IsTopLevelWindow(v38)
        && gptiCurrent != *((_QWORD *)ThreadDesktopWindow + 2) )
      {
        zzzAttachThreadInput(v38[2], *(_QWORD *)(v38[11] + 16LL), 0LL);
      }
      UnlinkWindow(v38, v38[11]);
    }
    ClassUnlock(v176);
    xxxFreeWindow((struct tagWND *)v38);
    return 0LL;
  }
  if ( (*(_BYTE *)(v38[19] + 85LL) & 2) != 0 )
  {
    SystemMenu = xxxGetSystemMenu(v38, 0LL);
    if ( SystemMenu )
    {
      v212[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v212;
      v212[1] = SystemMenu;
      ++*(_DWORD *)(SystemMenu + 8);
      xxxRemoveDeleteMenuHelper((struct tagMENU *)SystemMenu, 5u, 0x400u, 1);
      xxxRemoveDeleteMenuHelper((struct tagMENU *)SystemMenu, 5u, 0x400u, 1);
      ThreadUnlock1(v131, v130);
    }
  }
  if ( (*((_BYTE *)v38 + 42) & 2) != 0 && (!*((_QWORD *)&v205[5] + 1) || LODWORD(v205[5]) || v38[28]) )
  {
    *((_QWORD *)&v205[3] + 1) = v38[28];
    v205[5] = *(_OWORD *)(v38 + 27);
  }
  if ( (*gpsi & 4) != 0 )
  {
    v132 = (_QWORD *)(gptiCurrent + 696LL);
    if ( !*(_QWORD *)(gptiCurrent + 696LL) )
    {
      if ( (unsigned int)WantImeWindow(ThreadDesktopWindow, (struct tagWND *)v38) )
      {
        DefaultImeWindow = xxxCreateDefaultImeWindow(v38, Atom, v190);
        HMAssignmentLock(v132, DefaultImeWindow);
        v134 = *v132;
        if ( *v132 )
        {
          v213[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v213;
          v213[1] = v134;
          ++*(_DWORD *)(v134 + 8);
          xxxSendMessage(*v132, 647LL, 33LL, 0LL);
          ThreadUnlock1(v136, v135);
        }
        v137 = (**(unsigned __int8 **)(gptiCurrent + 432LL) >> 6) & 1;
        v209 = v137;
        v138 = *v132;
        if ( *v132 && v137 )
        {
          v214[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v214;
          v214[1] = v138;
          if ( v138 )
            ++*(_DWORD *)(v138 + 8);
          xxxSendMessage(*v132, 647LL, 25LL, *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 40LL));
          **(_QWORD **)(gptiCurrent + 432LL) &= ~0x40uLL;
          ThreadUnlock1(v140, v139);
        }
      }
    }
  }
  if ( !ThreadDesktopWindow || (v38[36] & 8) != 0 && *v109 != ThreadDesktopWindow )
  {
LABEL_487:
    if ( (*((_BYTE *)v38 + 55) & 0xC0) == 0x40 && (*((_BYTE *)ThreadDesktopWindow + 50) & 0x40) != 0 )
    {
      v148 = *((_DWORD *)v38 + 30) - *v121;
      v149 = *((_DWORD *)ThreadDesktopWindow + 32) + *((_DWORD *)ThreadDesktopWindow + 34) - *v121;
      *((_DWORD *)v38 + 30) = v149;
      *v121 = v149 - v148;
    }
    v218 = *(_OWORD *)v121;
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((struct tagWND *)v38, 0x83u, 0LL, (__int64)&v218, 0, 0, 0LL, 1, 0);
    *((_OWORD *)v38 + 8) = v218;
    if ( xxxSendMessage(v38, 1LL, 0LL, v205) == -1 )
      goto LABEL_491;
    SetOrClrWF(1LL, v38, 1920LL, 1LL);
    if ( (unsigned int)IsWindowDesktopComposed(v38) )
    {
      v151 = (void *)ReferenceDwmApiPort();
      DwmAsyncChildStyleChange(v151);
      DwmChildRectChange(v38);
      v152 = (void *)ReferenceDwmApiPort();
      DwmAsyncOwnerChange(v152);
    }
    xxxWindowEvent(0x8000, (_DWORD)v38, 0, 0, 0);
    if ( (v38[5] & 0x10) == 0 )
    {
      xxxSendSizeMessage(v38, 0LL);
      if ( ThreadDesktopWindow && (struct tagWND *)GetDesktopWindow(v38, v153) != ThreadDesktopWindow )
      {
        LODWORD(v218) = v218 - *((_DWORD *)ThreadDesktopWindow + 32);
        DWORD1(v218) -= *((_DWORD *)ThreadDesktopWindow + 33);
      }
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(
        (struct tagWND *)v38,
        3u,
        0LL,
        (unsigned __int16)v218 | (WORD2(v218) << 16),
        0,
        0,
        0LL,
        1,
        0);
    }
    v154 = *((_BYTE *)v38 + 55);
    if ( (v154 & 0x20) != 0 )
    {
      SetMinimize(v38, 0LL);
    }
    else
    {
      if ( (v154 & 1) == 0 )
        goto LABEL_508;
      SetOrClrWF(0LL, v38, 3841LL, 1LL);
    }
    xxxMinMaximizeEx((struct tagWND *)v38, 0LL);
LABEL_508:
    CalcWindowFullScreen(v38);
    if ( (*((_BYTE *)v38 + 55) & 0xC0) == 0x40 && (v38[6] & 4) == 0 )
    {
      v155 = *v109;
      if ( *v109 )
      {
        v216[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v216;
        v216[1] = v155;
        ++*((_DWORD *)v155 + 2);
        v156 = *v38;
        v157 = (*((unsigned __int16 *)v38 + 96) << 16) | 1;
        v158 = *v109;
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v158, 0x210u, v157, v156, 0, 0, 0LL, 1, 0);
        ThreadUnlock1(v160, v159);
      }
    }
    xxxInheritWindowMonitor((struct tagWND *)v38);
    if ( (a5 & 0x10000000) != 0 )
      xxxShowWindowEx((struct tagWND *)v38);
    if ( (*((_BYTE *)v38 + 55) & 0xC0) == 0 || (*((_BYTE *)v38 + 50) & 4) != 0 )
    {
      v162 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 376LL) + 660LL);
      if ( (_DWORD)v162 )
      {
        xxxSendMessage(v38, 50LL, (unsigned int)v162, 0LL);
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 660LL) = 0;
      }
    }
    if ( v183 )
      ThreadUnlock1(v162, v161);
    PopW32ThreadLock(v210);
    ClassUnlockWorker(v176);
    return ThreadUnlock1(v164, v163);
  }
  v141 = PWInsertAfter(v177);
  v142 = v141;
  if ( (unsigned __int64)(v141 - 2) <= 0xFFFFFFFFFFFFFFFBuLL && *(struct tagWND **)(v141 + 88) != *v109 )
    v142 = v170 != 0;
  v143 = v38[13];
  if ( v143 )
  {
    *((_DWORD *)v38 + 76) = *(_DWORD *)(v143 + 304);
    SetOrClrWF(*(_BYTE *)(v143 + 290) & 0x40, v38, 64064LL, 1LL);
  }
  if ( (unsigned int)ValidateNewParent(v38, ThreadDesktopWindow) )
  {
    UnlinkWindow(v38, *v109);
    if ( (*((_BYTE *)v38 + 55) & 0xC0) != 0x40
      && ThreadDesktopWindow != *(struct tagWND **)(*((_QWORD *)ThreadDesktopWindow + 3) + 96LL) )
    {
      if ( (v38[6] & 8) != 0 )
      {
        if ( gHardErrorHandler )
        {
          TopMostInsertAfter = GetTopMostInsertAfter(v38);
          if ( TopMostInsertAfter )
            v142 = TopMostInsertAfter;
        }
      }
      else
      {
        if ( !v142 )
          goto LABEL_481;
        v146 = 0;
        if ( v142 >= 0xFFFFFFFFFFFFFFFEuLL || v142 == 1 )
          v146 = 1;
        if ( !v146 && (*(_BYTE *)(v142 + 48) & 8) != 0 )
LABEL_481:
          v142 = CalcForegroundInsertAfter(v38);
      }
    }
    if ( v142 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LinkWindow((struct tagWND *)v38);
      zzzLockDisplayAreaAndInvalidateDCCache(ThreadDesktopWindow, 16LL);
      goto LABEL_487;
    }
  }
LABEL_491:
  v150 = v176;
  if ( v183 )
    ThreadUnlock1(v145, v144);
  if ( ThreadUnlock1(v145, v144) )
    xxxDestroyWindow(v38);
  ClassUnlock(v150);
  return 0LL;
}
