/*
 * XREFs of xxxCreateWindowEx @ 0x1C0072880
 * Callers:
 *     NtUserCreateWindowEx @ 0x1C006C220 (NtUserCreateWindowEx.c)
 *     xxxCreateDefaultImeWindow @ 0x1C009D254 (xxxCreateDefaultImeWindow.c)
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C00EA280 (xxxCreateWindowStation.c)
 *     xxxCsDdeInitialize @ 0x1C012B4E8 (xxxCsDdeInitialize.c)
 *     xxxAddShadow @ 0x1C0138D4C (xxxAddShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     xxxNextWindow @ 0x1C01F8858 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 * Callees:
 *     HasMessageRootWindow @ 0x1C000D06C (HasMessageRootWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GetRedirectionBitmap @ 0x1C0053B30 (GetRedirectionBitmap.c)
 *     DwmAsyncOwnerChange @ 0x1C00541C4 (DwmAsyncOwnerChange.c)
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     DereferenceClass @ 0x1C0055990 (DereferenceClass.c)
 *     xxxCheckFullScreen @ 0x1C0056A5C (xxxCheckFullScreen.c)
 *     SetRedirectedWindow @ 0x1C00620F4 (SetRedirectedWindow.c)
 *     UnlinkWindow @ 0x1C0063380 (UnlinkWindow.c)
 *     IsDesktopWindow @ 0x1C0063530 (IsDesktopWindow.c)
 *     GetMessageWindow @ 0x1C0063580 (GetMessageWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00650AC (xxxSetLayeredWindow.c)
 *     _DestroyMenu @ 0x1C006AE40 (_DestroyMenu.c)
 *     DwmChildRectChange @ 0x1C006C824 (DwmChildRectChange.c)
 *     NeedsWindowEdge @ 0x1C006F638 (NeedsWindowEdge.c)
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     xxxLoadUserApiHook @ 0x1C006F6E0 (xxxLoadUserApiHook.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C006F768 (SetWindowSubtreeCoreWindowStatus.c)
 *     xxxAdjustSize @ 0x1C006F84C (xxxAdjustSize.c)
 *     ConstrainWindowSIZERECT @ 0x1C006F920 (ConstrainWindowSIZERECT.c)
 *     RECTFromSIZERECT @ 0x1C006F9A8 (RECTFromSIZERECT.c)
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C006FA70 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     GetInheritedMonitor @ 0x1C0070E64 (GetInheritedMonitor.c)
 *     xxxInheritWindowMonitor @ 0x1C00712C4 (xxxInheritWindowMonitor.c)
 *     CheckGrantedAccess @ 0x1C007163C (CheckGrantedAccess.c)
 *     IsValidBandForProcess @ 0x1C0071658 (IsValidBandForProcess.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     GetClassPtr @ 0x1C00720F0 (GetClassPtr.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C0072364 (ShouldUseLogPixelsForWindowMetrics.c)
 *     CalcWindowFullScreen @ 0x1C00723E0 (CalcWindowFullScreen.c)
 *     _GetWindowCompositionInfo @ 0x1C007251C (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C0072620 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ValidateNewParent @ 0x1C0075C7C (ValidateNewParent.c)
 *     IsTopLevelParent @ 0x1C0075D54 (IsTopLevelParent.c)
 *     ValidateParentDepth @ 0x1C0075E28 (ValidateParentDepth.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     LinkWindow @ 0x1C007B12C (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxCallCtfHook @ 0x1C007F1EC (xxxCallCtfHook.c)
 *     xxxUpdateInputHangInfo @ 0x1C0082870 (xxxUpdateInputHangInfo.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00912C8 (RtlInitUnicodeStringOrId.c)
 *     DwmAsyncChildCreate @ 0x1C009397C (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C0093A88 (DwmGetClassStyle.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00965BC (DwmAsyncChildStyleChange.c)
 *     xxxCreateDefaultImeWindow @ 0x1C009D254 (xxxCreateDefaultImeWindow.c)
 *     RegisterIconTitleClass @ 0x1C009E254 (RegisterIconTitleClass.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     ClassLock @ 0x1C009F300 (ClassLock.c)
 *     RegisterDefaultClass @ 0x1C009FA7C (RegisterDefaultClass.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     MapClientNeuterToClientPfn @ 0x1C00A1F54 (MapClientNeuterToClientPfn.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00A5D80 (zzzSetWindowCompositionCloak.c)
 *     PWInsertAfter @ 0x1C00A6AA8 (PWInsertAfter.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     CalcForegroundInsertAfter @ 0x1C00A8A68 (CalcForegroundInsertAfter.c)
 *     GetNonChildAncestor @ 0x1C00A8D2C (GetNonChildAncestor.c)
 *     xxxClientLoadMenu @ 0x1C00A99D4 (xxxClientLoadMenu.c)
 *     xxxCreateClassSmIcon @ 0x1C00AB5D8 (xxxCreateClassSmIcon.c)
 *     _MonitorFromWindow @ 0x1C00AFFA0 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C00B2954 (SetMinimize.c)
 *     xxxGetSystemMenu @ 0x1C00BB39C (xxxGetSystemMenu.c)
 *     LockWndMenu @ 0x1C00BB48C (LockWndMenu.c)
 *     RecreateRedirectionBitmap @ 0x1C00D7E4C (RecreateRedirectionBitmap.c)
 *     zzzAttachThreadInput @ 0x1C00DC6D4 (zzzAttachThreadInput.c)
 *     IsImmersiveAppIORestricted @ 0x1C00DEF54 (IsImmersiveAppIORestricted.c)
 *     SetTiledRect @ 0x1C0104F70 (SetTiledRect.c)
 *     GetThreadDesktopWindow @ 0x1C01066F8 (GetThreadDesktopWindow.c)
 *     xxxSendSizeMessage @ 0x1C010B400 (xxxSendSizeMessage.c)
 *     UpdateWindowDPITransform @ 0x1C0111C18 (UpdateWindowDPITransform.c)
 *     ReferenceClass @ 0x1C0112A60 (ReferenceClass.c)
 *     GetAppCompatFlags @ 0x1C01140E0 (GetAppCompatFlags.c)
 *     ValidateOwnerDepth @ 0x1C011D580 (ValidateOwnerDepth.c)
 *     IsValidBand @ 0x1C011DE24 (IsValidBand.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0121D44 (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     RtlInitLargeAnsiString @ 0x1C01239C4 (RtlInitLargeAnsiString.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     _W32ExceptionHandler @ 0x1C01BF6B8 (_W32ExceptionHandler.c)
 *     GetTopMostInsertAfter @ 0x1C01C4724 (GetTopMostInsertAfter.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01DD3C0 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     ClassUnlock @ 0x1C01DEF3C (ClassUnlock.c)
 *     ?SetRole@CoreWindowProp@@SAJPEAUtagWND@@W4COREWINDOWROLE@@@Z @ 0x1C022644C (-SetRole@CoreWindowProp@@SAJPEAUtagWND@@W4COREWINDOWROLE@@@Z.c)
 */

_DWORD *__fastcall xxxCreateWindowEx(
        int a1,
        wchar_t *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        signed int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        struct tagMENU *a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        char a16,
        __int64 a17)
{
  wchar_t *v17; // rdi
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r14
  int v25; // ebx
  __int64 v26; // rcx
  int v27; // ecx
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v29; // rdi
  __int64 v30; // r13
  _DWORD **ClassPtr; // rax
  _DWORD *v32; // r13
  __int64 v33; // r8
  int v34; // r10d
  unsigned int v35; // r10d
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // r14
  __int64 v41; // r9
  struct tagWND *v42; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v44; // rax
  int CurrentThreadDpiAwarenessContext; // eax
  __int64 v46; // r13
  __int64 *v47; // rax
  __int64 v48; // rax
  __int64 ThreadDesktopWindow; // r13
  int v50; // eax
  int v51; // edx
  int v52; // eax
  int v53; // ecx
  bool v54; // zf
  int v55; // ecx
  int v56; // eax
  int v57; // ecx
  __int64 InheritedMonitor; // r12
  __int64 v59; // rax
  __int64 MessageWindow; // rax
  __int64 v61; // rbx
  int ClassStyle; // edi
  void *v63; // rax
  unsigned __int16 v64; // bx
  struct tagCLS *v65; // rdi
  __int64 v66; // r12
  int AppCompatFlags; // eax
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  char v71; // bl
  __int64 v72; // r8
  int v73; // eax
  __int64 v74; // rax
  unsigned __int64 Menu; // rdx
  __int64 v76; // rcx
  int v77; // ebx
  int v78; // edi
  int v79; // r9d
  int v80; // r10d
  char v81; // al
  struct tagMENU *v82; // rdx
  int v83; // edx
  __int64 v84; // rcx
  int v85; // edx
  __int64 v86; // r12
  __int64 v87; // rax
  __int64 v88; // rdx
  __int16 v89; // ax
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // r9
  __int64 v96; // rax
  __int64 v97; // r9
  __int64 v98; // r9
  int v99; // ebx
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // r9
  __int64 v104; // rax
  __int64 v105; // r9
  __int64 v106; // r9
  int v107; // edi
  __int64 v108; // r9
  __int64 v109; // r9
  signed int *v110; // rax
  __int64 v111; // r9
  __int64 v112; // r9
  __int64 v113; // r9
  __int64 v114; // r9
  signed int *v115; // rax
  __int64 v116; // r9
  __int64 v117; // r9
  int v118; // ebx
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // r9
  __int64 v123; // rax
  __int64 v124; // r9
  __int64 v125; // r9
  __int64 v126; // rdx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // r9
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rdx
  __int64 v135; // r8
  __int64 v136; // r9
  int v137; // eax
  _QWORD *v138; // rcx
  __int64 v139; // rcx
  char v140; // bl
  __int64 NonChildAncestor; // rbx
  _QWORD *v142; // rdi
  __int64 v143; // rdx
  unsigned int v144; // eax
  int v145; // ecx
  __int64 KernelEvent; // rax
  __int64 v147; // rdi
  __int64 *v148; // r12
  unsigned int v149; // edx
  struct tagCLS *v150; // rbx
  unsigned int v151; // eax
  NTSTATUS v152; // eax
  __int64 v153; // r9
  __int64 v154; // rdx
  __int64 v155; // rax
  struct tagWND *v156; // rcx
  __int64 v157; // r8
  int v158; // eax
  int v159; // eax
  _DWORD *v160; // rdi
  __int64 v161; // r9
  int v162; // eax
  __int64 v163; // rcx
  char v164; // al
  unsigned int v165; // ebx
  __int64 CacheDC; // rax
  int v167; // ebx
  __int64 v168; // rcx
  __int64 v169; // rdx
  __int64 v170; // r8
  __int64 SystemMenu; // rbx
  __int64 v172; // rdx
  __int64 v173; // rcx
  _QWORD *v174; // rbx
  __int64 DefaultImeWindow; // rax
  __int64 v176; // rdx
  __int64 v177; // rdx
  __int64 v178; // rcx
  int v179; // ecx
  __int64 v180; // r9
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // rax
  unsigned __int64 v184; // rbx
  __int64 v185; // rcx
  __int64 v186; // rdx
  __int64 v187; // rcx
  int v188; // eax
  __int64 TopMostInsertAfter; // rax
  int v190; // edx
  int v191; // ecx
  struct tagCLS *v192; // rbx
  void *v193; // rax
  __int64 *v194; // rbx
  __int64 v195; // rbx
  void *v196; // rax
  char v197; // al
  __int64 v198; // rcx
  __int64 v199; // r9
  unsigned __int64 v200; // r8
  struct tagWND *v201; // rcx
  __int64 v202; // rdx
  __int64 v203; // rcx
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // r8
  __int64 v207; // r9
  __int64 v208; // rdx
  __int64 v209; // rdx
  __int64 v210; // rcx
  _DWORD *result; // rax
  wchar_t *v212; // rcx
  unsigned __int16 Atom; // [rsp+58h] [rbp-2E0h]
  unsigned int v214; // [rsp+5Ch] [rbp-2DCh]
  struct tagWND *v215; // [rsp+60h] [rbp-2D8h]
  struct tagWND *v216; // [rsp+60h] [rbp-2D8h]
  unsigned int v217; // [rsp+68h] [rbp-2D0h]
  int v218; // [rsp+6Ch] [rbp-2CCh]
  int v219; // [rsp+70h] [rbp-2C8h] BYREF
  int v220; // [rsp+74h] [rbp-2C4h]
  int v221; // [rsp+78h] [rbp-2C0h] BYREF
  int v222; // [rsp+7Ch] [rbp-2BCh] BYREF
  int v223; // [rsp+80h] [rbp-2B8h]
  __int16 v224; // [rsp+88h] [rbp-2B0h]
  struct tagCLS *v225; // [rsp+90h] [rbp-2A8h]
  wchar_t *Str1; // [rsp+98h] [rbp-2A0h]
  int v227; // [rsp+A0h] [rbp-298h]
  int v228; // [rsp+A4h] [rbp-294h]
  int WindowCloakState; // [rsp+A8h] [rbp-290h]
  int v230; // [rsp+ACh] [rbp-28Ch]
  int v231; // [rsp+B0h] [rbp-288h]
  int v232; // [rsp+B4h] [rbp-284h]
  int v233; // [rsp+B8h] [rbp-280h]
  int v234; // [rsp+BCh] [rbp-27Ch]
  struct tagMENU *v235; // [rsp+C0h] [rbp-278h]
  __int64 v236; // [rsp+C8h] [rbp-270h]
  __int64 v237; // [rsp+D0h] [rbp-268h]
  int v238; // [rsp+D8h] [rbp-260h]
  int v239; // [rsp+E0h] [rbp-258h]
  BOOL v240; // [rsp+E8h] [rbp-250h]
  int v241; // [rsp+ECh] [rbp-24Ch]
  __int64 v242; // [rsp+F0h] [rbp-248h]
  __int64 v243; // [rsp+F8h] [rbp-240h]
  __int64 v244; // [rsp+100h] [rbp-238h]
  __int64 v245; // [rsp+108h] [rbp-230h]
  struct tagCLS *v246; // [rsp+110h] [rbp-228h]
  __int64 v247; // [rsp+118h] [rbp-220h]
  _OWORD v248[7]; // [rsp+120h] [rbp-218h] BYREF
  int v249; // [rsp+190h] [rbp-1A8h]
  __int64 v250; // [rsp+198h] [rbp-1A0h]
  __int64 v251; // [rsp+1A0h] [rbp-198h]
  __int64 v252; // [rsp+1A8h] [rbp-190h]
  wchar_t *v253; // [rsp+1B0h] [rbp-188h]
  __int64 v254; // [rsp+1B8h] [rbp-180h]
  __int64 v255; // [rsp+1C0h] [rbp-178h]
  char v256[8]; // [rsp+1C8h] [rbp-170h] BYREF
  char v257[8]; // [rsp+1D0h] [rbp-168h] BYREF
  int v258; // [rsp+1D8h] [rbp-160h]
  _OWORD *v259; // [rsp+1E0h] [rbp-158h] BYREF
  wchar_t *v260; // [rsp+1E8h] [rbp-150h]
  _QWORD v261[3]; // [rsp+1F0h] [rbp-148h] BYREF
  _QWORD v262[3]; // [rsp+208h] [rbp-130h] BYREF
  _BYTE v263[16]; // [rsp+220h] [rbp-118h] BYREF
  _QWORD v264[3]; // [rsp+230h] [rbp-108h] BYREF
  _QWORD v265[3]; // [rsp+248h] [rbp-F0h] BYREF
  _QWORD v266[3]; // [rsp+260h] [rbp-D8h] BYREF
  _QWORD v267[3]; // [rsp+278h] [rbp-C0h] BYREF
  _QWORD v268[4]; // [rsp+290h] [rbp-A8h] BYREF
  __int64 v269[5]; // [rsp+2B0h] [rbp-88h] BYREF
  __int64 v270[2]; // [rsp+2D8h] [rbp-60h] BYREF
  _DWORD v271[4]; // [rsp+2E8h] [rbp-50h] BYREF

  v243 = a4;
  v237 = a3;
  v17 = a2;
  Str1 = a2;
  v214 = a1;
  v223 = a1;
  v253 = a2;
  v252 = a3;
  v254 = a4;
  v19 = a10;
  v215 = (struct tagWND *)a10;
  v235 = a11;
  v255 = (__int64)a11;
  v236 = a12;
  v244 = a13;
  v234 = 0;
  v238 = 0;
  v233 = 0;
  v228 = 0;
  v270[0] = 0LL;
  v270[1] = 0LL;
  v230 = 5;
  v239 = 5;
  v245 = 0LL;
  v250 = gptiCurrent;
  v231 = 0;
  v20 = 0LL;
  v227 = 0;
  v224 = 0;
  v21 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL);
  v232 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) & 0x2000;
  WindowCloakState = 0;
  v22 = 0LL;
  v217 = 0;
  if ( (v21 & 0x10000000) == 0 )
  {
    if ( !(unsigned int)RegisterIconTitleClass(v21, 0LL, a3, 0LL) )
    {
LABEL_3:
      v23 = 87LL;
LABEL_537:
      UserSetLastError(v23);
      return 0LL;
    }
    v22 = 0LL;
  }
  if ( a1 < 0 )
  {
    v227 = 800;
    v224 = 800;
    v214 = a1 & 0x7FFFFFFF;
    v223 = a1 & 0x7FFFFFFF;
  }
  v24 = *(_QWORD *)(gptiCurrent + 408LL);
  v242 = v24;
  v251 = v24;
  if ( a10 && *(_QWORD *)(a10 + 24) != v24 )
    goto LABEL_3;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 376LL), v20, a3, 0LL) )
    {
LABEL_11:
      v23 = 5LL;
      goto LABEL_537;
    }
    v22 = 1LL;
    v217 = 1;
  }
  if ( (a16 & 2) != 0 )
  {
    if ( !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 376LL)) )
      goto LABEL_11;
    v22 = v217;
  }
  v25 = a14;
  if ( a14
    && (!(unsigned int)IsValidBand(a14, v20, a3, v22)
     || a14 == 15
     || (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 376LL) + 768LL) & 0x30) == 0x10
     && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 768LL) & 0x200) == 0
     && a14 == 1
     && (!gfEnableModernOnDesktop || !(_DWORD)v22 && !(unsigned int)HasMessageRootWindow(a10))) )
  {
    goto LABEL_3;
  }
  v240 = (HIWORD(a5) & 0xC000) == 0x4000;
  v241 = v240;
  if ( (HIWORD(a5) & 0xC000) != 0x4000 )
  {
    if ( (unsigned int)ShouldSetNoOwner(*(_QWORD *)(gptiCurrent + 376LL), a10, a3, v22) )
      v19 = 0LL;
    v215 = (struct tagWND *)v19;
  }
  if ( !v19 || (unsigned int)IsDesktopWindow(v19) )
  {
    if ( a14 )
      goto LABEL_42;
    if ( !(unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 376LL), v20, a3, v22) )
    {
      if ( (*(_DWORD *)(v26 + 768) & 2) == 0 || (v25 = 2, (v214 & 8) == 0) )
        v25 = 1;
      goto LABEL_42;
    }
    v217 = 1;
    v25 = 15;
  }
  else
  {
    v217 = *(_BYTE *)(v19 + 290) & 0x40;
    if ( a14 )
    {
      if ( a14 != *(_DWORD *)(v19 + 304) )
        goto LABEL_3;
      v17 = Str1;
      goto LABEL_42;
    }
    v25 = *(_DWORD *)(v19 + 304);
  }
  v17 = Str1;
LABEL_42:
  if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(gptiCurrent + 376LL), v25, v19) )
    goto LABEL_11;
  v27 = v214;
  if ( (v214 & 0x400000) == 0 )
  {
    if ( v19 )
    {
      if ( (HIWORD(a5) & 0xC000) == 0x4000 && (*(_BYTE *)(v19 + 50) & 0x50) == 0x40 )
      {
        v27 = v214 | 0x400000;
        v214 = v27;
        v223 = v27;
      }
    }
    else if ( ((unsigned __int64)v17 & 0xFFFFFFFFFFFF0000uLL) != 0 || (_WORD)v17 != 0x8002 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v214, 0x400000LL);
      v27 = v214;
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 772) & 1) != 0 )
      {
        v27 = v214 | 0x400000;
        v214 = v27;
        v223 = v27;
      }
    }
  }
  if ( (v27 & 0x2200000) == 0x2200000 )
    goto LABEL_3;
  if ( *(_QWORD *)(gptiCurrent + 512LL) && !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 776LL), 2u) )
    return 0LL;
  v29 = v215;
  if ( (HIWORD(a5) & 0xC000) == 0x4000 )
  {
    if ( !v215 )
    {
      v23 = 1406LL;
      goto LABEL_537;
    }
    if ( !(unsigned int)ValidateParentDepth(0LL, v215) )
      goto LABEL_3;
  }
  v30 = gptiCurrent;
  while ( 1 )
  {
    if ( (v237 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v256);
      if ( (int)RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, *(const unsigned __int16 **)(v237 + 8)) < 0 )
      {
        Atom = 0;
        v232 = 1;
      }
      else
      {
        Atom = UserFindAtom(&gawchAtomScratch);
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v256);
    }
    else
    {
      Atom = v237;
    }
    if ( Atom )
    {
      ClassPtr = (_DWORD **)GetClassPtr(Atom, *(_QWORD *)(v30 + 376), v236);
      if ( ClassPtr )
        break;
    }
LABEL_529:
    if ( v232
      || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) & 0x2000) != 0
      || (((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0
        ? (v212 = Str1)
        : (v212 = (wchar_t *)*((_QWORD *)Str1 + 1)),
          !(unsigned int)RegisterDefaultClass(v212)) )
    {
      v23 = 1407LL;
      goto LABEL_537;
    }
    v232 = 1;
    v24 = v242;
    v29 = v215;
  }
  v32 = *ClassPtr;
  if ( (unsigned int)NeedsWindowEdge(a5, v214, a15 >= 0x400u) )
    v35 = v34 | 0x100;
  else
    v35 = v34 & 0xFFFFFEFF;
  v223 = v35;
  v214 = v35;
  if ( v32[25] >= 0xFFFFFE98 )
    goto LABEL_3;
  v249 = v32[25] + 360;
  LOBYTE(v33) = 1;
  v36 = HMAllocObject(gptiCurrent, v24, v33);
  v40 = (_QWORD *)v36;
  v247 = v36;
  if ( !v36 )
    return 0LL;
  *(_DWORD *)(v36 + 288) &= ~0x80u;
  if ( (HIWORD(a5) & 0xC000) != 0x4000 || !v29 || v29 == (struct tagWND *)GetThreadDesktopWindow(0LL) )
    goto LABEL_81;
  v42 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v39, v41);
  if ( ThreadWin32Thread )
  {
    v44 = *(_QWORD *)(ThreadWin32Thread + 408);
    if ( v44 )
      v42 = *(struct tagWND **)(v44 + 96);
  }
  if ( v215 == v42 )
LABEL_81:
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v38, v37, v39);
  else
    CurrentThreadDpiAwarenessContext = *((_DWORD *)v215 + 88);
  *((_DWORD *)v40 + 88) = CurrentThreadDpiAwarenessContext;
  *((_DWORD *)v40 + 72) &= 0x3FFFFFFFu;
  v40[19] = v32;
  *((_DWORD *)v40 + 13) = a5 & 0xEFFFFFFF;
  *((_DWORD *)v40 + 12) = v214 & 0xFDF7FFFF;
  *((_DWORD *)v40 + 58) = v32[25];
  if ( !(unsigned int)ReferenceClass(v32) )
  {
LABEL_83:
    HMFreeObject(v40);
    v30 = gptiCurrent;
    goto LABEL_529;
  }
  v46 = v40[19];
  v225 = (struct tagCLS *)v46;
  v246 = (struct tagCLS *)v46;
  if ( !(unsigned int)ClassLock(v46, v262) )
  {
    DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 376LL), (__int64)v40);
    goto LABEL_83;
  }
  v40[33] = a17;
  if ( *(_WORD *)(v46 + 10) == *(_WORD *)(gpsi + 852LL) )
  {
    v40[31] = 0LL;
  }
  else
  {
    v47 = *(__int64 **)(gptiCurrent + 704LL);
    if ( v47 )
      v48 = *v47;
    else
      v48 = 0LL;
    v40[31] = v48;
  }
  *((_DWORD *)v40 + 76) = v25;
  ThreadDesktopWindow = (__int64)v215;
  if ( v25 == 1 )
    v50 = 0;
  else
    v50 = IsTopLevelParent(v215);
  if ( v50 )
    *((_DWORD *)v40 + 12) |= 8u;
  if ( v217 )
    *((_BYTE *)v40 + 290) |= 0x40u;
  ++*(_DWORD *)(gptiCurrent + 780LL);
  memset(v248, 0, sizeof(v248));
  DWORD2(v248[4]) = v214;
  *((_QWORD *)&v248[0] + 1) = v236;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (_WORD)v227 )
    {
      *(_QWORD *)&v248[4] = *((_QWORD *)v225 + 18);
      if ( (*(_QWORD *)&v248[4] & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString(&v248[6]);
    }
    else
    {
      *(_QWORD *)&v248[4] = *((_QWORD *)Str1 + 1);
      v248[6] = *(_OWORD *)Str1;
    }
  }
  else
  {
    *(_QWORD *)&v248[4] = Str1;
  }
  if ( v243 )
  {
    *((_QWORD *)&v248[3] + 1) = *(_QWORD *)(v243 + 8);
    v248[5] = *(_OWORD *)v243;
  }
  LODWORD(v248[3]) = a5;
  v51 = a7;
  *((_QWORD *)&v248[2] + 1) = __PAIR64__(a6, a7);
  *(_QWORD *)&v248[2] = __PAIR64__(a8, a9);
  if ( v215 )
    *((_QWORD *)&v248[1] + 1) = *(_QWORD *)v215;
  else
    *((_QWORD *)&v248[1] + 1) = 0LL;
  if ( (HIWORD(a5) & 0xC000) == 0x4000 )
  {
    *(_QWORD *)&v248[1] = v235;
    *((_DWORD *)v40 + 12) |= *((_DWORD *)v215 + 12) & 0xC4000000;
  }
  else if ( v235 )
  {
    *(_QWORD *)&v248[1] = *(_QWORD *)v235;
  }
  else
  {
    *(_QWORD *)&v248[1] = 0LL;
  }
  *(_QWORD *)&v248[0] = v244;
  v261[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v261;
  v261[1] = v40;
  ++*((_DWORD *)v40 + 2);
  if ( a6 == 0x80000000 || a6 == 0x8000 )
  {
    v52 = 0;
    v271[0] = 0;
  }
  else
  {
    v52 = a6;
    v271[0] = a6;
  }
  if ( a7 == 0x80000000 || a7 == 0x8000 )
    v51 = 0;
  v271[1] = v51;
  if ( a8 == 0x80000000 || (v53 = 0, a8 == 0x8000) )
    v53 = 1;
  v54 = v53 + v52 == 0;
  v55 = a8;
  if ( !v54 )
    v55 = 0;
  v271[2] = v55;
  if ( a9 == 0x80000000 || (v56 = 0, a9 == 0x8000) )
    v56 = 1;
  v57 = a9;
  if ( v51 + v56 )
    v57 = 0;
  v271[3] = v57;
  InheritedMonitor = GetInheritedMonitor((struct tagWND *)v40);
  v216 = (struct tagWND *)InheritedMonitor;
  if ( !InheritedMonitor && ThreadDesktopWindow )
  {
    InheritedMonitor = ValidateHmonitorNoRip(*(_QWORD *)(ThreadDesktopWindow + 344));
    v216 = (struct tagWND *)InheritedMonitor;
  }
  if ( InheritedMonitor
    || (InheritedMonitor = MonitorFromRect(v271, 2LL),
        v216 = (struct tagWND *)InheritedMonitor,
        v59 = 0LL,
        InheritedMonitor) )
  {
    v59 = *(_QWORD *)InheritedMonitor;
  }
  v40[43] = v59;
  *((_WORD *)v40 + 178) = *(_WORD *)(InheritedMonitor + 154);
  *((_DWORD *)v40 + 72) |= 0x8000000u;
  if ( v40[3] )
  {
    MessageWindow = GetMessageWindow((__int64)v40);
    HMAssignmentLock(v40 + 11, MessageWindow);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v40) )
  {
    if ( (HIWORD(a5) & 0xC000) != 0x4000
      && (!ThreadDesktopWindow || ThreadDesktopWindow != *(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 24) + 96LL)) )
    {
      GetThreadDesktopWindow(0LL);
    }
    memset(v269, 0, sizeof(v269));
    GetWindowCompositionInfo((__int64)v40, (__int64)v269);
    v61 = v40[3];
    ClassStyle = DwmGetClassStyle(v40);
    v63 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildCreate(
      v63,
      *((_DWORD *)v40 + 12),
      *((_DWORD *)v40 + 72),
      ClassStyle,
      (__int64)v269,
      *(_QWORD *)(v61 + 40),
      (__int64)v271);
  }
  v40[7] = v236;
  v64 = v227;
  v65 = v225;
  v40[18] = MapClientNeuterToClientPfn(v225, 0LL, (unsigned __int16)v227);
  SetOrClrWF((*((_BYTE *)v65 + 34) & 1) != 0, v40, 516LL, 1LL);
  if ( *((_QWORD *)v65 + 14) && !*((_QWORD *)v65 + 19) )
    xxxCreateClassSmIcon(v65);
  SetOrClrWF(1LL, v40, v64, 1LL);
  if ( (*((_BYTE *)v65 + 34) & 2) != 0
    || v64
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
    SetOrClrWF(1LL, v40, 520LL, 1LL);
  }
  v66 = gptiCurrent;
  AppCompatFlags = GetAppCompatFlags(gptiCurrent);
  v71 = AppCompatFlags;
  if ( (AppCompatFlags & 0x8000000) != 0 )
  {
    SetOrClrWF(1LL, v40, 1032LL, 1LL);
    v214 &= 0x3Fu;
    DWORD2(v248[4]) = BYTE8(v248[4]) & 0x3F;
  }
  *((_WORD *)v40 + 32) = 0;
  if ( a15 < 0x30Au )
  {
    if ( (v71 & 0x40) != 0 )
    {
      v72 = 1600LL;
LABEL_169:
      SetOrClrWF(1LL, v40, v72, 1LL);
    }
  }
  else
  {
    SetOrClrWF(1LL, v40, 1281LL, 1LL);
    if ( a15 >= 0x400u )
    {
      SetOrClrWF(1LL, v40, 1282LL, 1LL);
      if ( a15 >= 0x500u )
      {
        v72 = 1284LL;
        goto LABEL_169;
      }
    }
  }
  v73 = a15;
  if ( a15 <= *(_WORD *)(gptiCurrent + 556LL) )
    v73 = *(_DWORD *)(gptiCurrent + 556LL);
  *((_DWORD *)v40 + 77) = v73;
  if ( (GetAppCompatFlags2(0x9900u, v68, v69, v70) & 0x10000000) != 0 )
    SetOrClrWF(1LL, v40, 2688LL, 1LL);
  if ( gihmodUserApiHook >= 0 )
    xxxLoadUserApiHook();
  if ( (unsigned int)WantImeWindow((struct tagWND *)ThreadDesktopWindow, (struct tagWND *)v40) )
    xxxCallCtfHook(5LL, 3LL, *v40);
  v74 = *(_QWORD *)(gptiCurrent + 416LL);
  Menu = (unsigned int)(*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(v74 + 24));
  if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(v74 + 24)) & 0x40) != 0 )
  {
    v259 = v248;
    v260 = 0LL;
    if ( !(unsigned int)xxxCallHook(3LL, *v40, &v259, 5LL) )
    {
      v77 = HIDWORD(v248[2]);
      a6 = HIDWORD(v248[2]);
      v78 = DWORD2(v248[2]);
      a7 = DWORD2(v248[2]);
      v79 = DWORD1(v248[2]);
      a8 = DWORD1(v248[2]);
      v80 = v248[2];
      a9 = v248[2];
      Str1 = v260;
      goto LABEL_182;
    }
    goto LABEL_435;
  }
  Str1 = 0LL;
  v77 = a6;
  v78 = a7;
  v79 = a8;
  v80 = a9;
LABEL_182:
  v81 = *((_BYTE *)v40 + 55) & 0xC0;
  if ( v81 == 64 )
  {
    v76 = 1LL;
    v218 = 1;
    if ( !ThreadDesktopWindow )
      goto LABEL_435;
  }
  else
  {
    v76 = 0LL;
    v218 = 0;
  }
  v82 = v235;
  if ( (_DWORD)v76 != v241 )
    v82 = 0LL;
  v235 = v82;
  if ( v81 )
  {
    v83 = 0;
    if ( v77 == 0x80000000 || v77 == 0x8000 )
    {
      v77 = 0;
      a6 = 0;
      v78 = 0;
      a7 = 0;
    }
    if ( v79 == 0x80000000 || v79 == 0x8000 )
    {
      v79 = 0;
      a8 = 0;
      v80 = 0;
      a9 = 0;
    }
  }
  else
  {
    v83 = 1;
  }
  v219 = v77;
  v220 = v78;
  v221 = v79;
  v222 = v80;
  if ( (_DWORD)v76 )
  {
    if ( ThreadDesktopWindow != GetDesktopWindow(v40) )
    {
      v219 = v77 + *(_DWORD *)(ThreadDesktopWindow + 128);
      v76 = (unsigned int)(v78 + *(_DWORD *)(ThreadDesktopWindow + 132));
      v220 = v78 + *(_DWORD *)(ThreadDesktopWindow + 132);
    }
    Str1 = (wchar_t *)1;
  }
  if ( v83 )
  {
    SetOrClrWF(1LL, v40, 3844LL, 1LL);
    v234 = 192;
    if ( (*((_BYTE *)v40 + 45) & 2) != 0 )
      SetOrClrWF(1LL, v40, 2305LL, 1LL);
    SetOrClrWF(1LL, v40, 16LL, 1LL);
    v84 = 0x8000LL;
    if ( (v77 == 0x80000000 || v77 == 0x8000) && v220 != 0x80000000 )
    {
      v85 = v230;
      if ( v220 != 0x8000 )
        v85 = v220;
      v230 = v85;
    }
    v86 = 0LL;
    v216 = 0LL;
    if ( v77 == 0x80000000 || v77 == 0x8000 || a8 == 0x80000000 || a8 == 0x8000 )
    {
      v84 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 656LL);
      if ( v84 )
      {
        v87 = ValidateHmonitor(v84);
        goto LABEL_217;
      }
      if ( ThreadDesktopWindow )
      {
        v87 = MonitorFromWindow(ThreadDesktopWindow, 2LL);
LABEL_217:
        v216 = (struct tagWND *)v87;
        v86 = v87;
      }
    }
    if ( !v86 )
    {
      v86 = *(_QWORD *)(GetDispInfo(v84) + 88);
      v216 = (struct tagWND *)v86;
    }
    SetTiledRect(v40, v270, v86);
    if ( v77 == 0x80000000 || v77 == 0x8000 )
    {
      v76 = *(_QWORD *)(gptiCurrent + 376LL);
      if ( (*(_DWORD *)(v76 + 760) & 4) != 0 )
      {
        v228 = 1;
        v77 = *(_DWORD *)(v76 + 744);
        v220 = *(_DWORD *)(v76 + 748);
        v78 = v220;
        a7 = v220;
      }
      else
      {
        v77 = v270[0];
        v78 = HIDWORD(v270[0]);
        a7 = HIDWORD(v270[0]);
        v220 = HIDWORD(v270[0]);
      }
      v219 = v77;
      a6 = v77;
      v90 = 1;
    }
    else
    {
      v89 = *(_WORD *)(v86 + 156);
      if ( v89 )
        *(_WORD *)(v86 + 156) = v89 - 1;
      v90 = v233;
    }
    if ( a8 == 0x80000000 || a8 == 0x8000 )
    {
      v66 = gptiCurrent;
      v76 = *(_QWORD *)(gptiCurrent + 376LL);
      if ( (*(_DWORD *)(v76 + 760) & 2) != 0 )
      {
        v228 = 1;
        v221 = *(_DWORD *)(v76 + 752);
        v137 = *(_DWORD *)(v76 + 756);
      }
      else
      {
        v221 = LODWORD(v270[1]) - v77;
        v137 = HIDWORD(v270[1]) - v78;
      }
      v222 = v137;
    }
    else
    {
      if ( v90 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v76, v88, 0x80000000LL) & 0xF) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v91, v93, v94) + 408)
            ? (v92 = 0LL)
            : (v92 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v91,
                                                           v93,
                                                           v95)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              !(_DWORD)v92) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v92, v91, v93) & 0xF) != 1
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v91, v93, v97) + 408)
              ? (v92 = 0LL)
              : (v92 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v91,
                                                             v93,
                                                             v98)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v96 = v86 + 60,
                !(_DWORD)v92) )
          {
            v96 = v86 + 28;
          }
        }
        else
        {
          v96 = v86 + 44;
        }
        v99 = a8 + v219 - *(_DWORD *)(v96 + 8);
        if ( (W32GetCurrentThreadDpiAwarenessContext(v92, v91, v93) & 0xF) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v100, v101, v102) + 408)
            ? (v76 = 0LL)
            : (v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v100,
                                                           v101,
                                                           v103)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              !(_DWORD)v76) )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v76, v100, v101) & 0xF) != 1
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v100, v101, v105) + 408)
              ? (v76 = 0LL)
              : (v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v100,
                                                             v101,
                                                             v106)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v104 = v86 + 60,
                !(_DWORD)v76) )
          {
            v104 = v86 + 28;
          }
        }
        else
        {
          v104 = v86 + 44;
        }
        v107 = a9 + v220 - *(_DWORD *)(v104 + 12);
        if ( v99 > 0 )
        {
          a6 -= v99;
          v219 = a6;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v76, v100, v101) & 0xF) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v100, v101, v108) + 408)
              ? (v76 = 0LL)
              : (v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v100,
                                                             v101,
                                                             v109)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                !(_DWORD)v76) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v76, v100, v101) & 0xF) != 1
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v100, v101, v111) + 408)
                ? (v76 = 0LL)
                : (v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v100,
                                                               v101,
                                                               v112)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v110 = (signed int *)(v86 + 60),
                  !(_DWORD)v76) )
            {
              v110 = (signed int *)(v86 + 28);
            }
          }
          else
          {
            v110 = (signed int *)(v86 + 44);
          }
          if ( a6 < *v110 )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v76, v100, v101) & 0xF) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v100, v101, v113) + 408)
                ? (v76 = 0LL)
                : (v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v100,
                                                               v101,
                                                               v114)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  !(_DWORD)v76) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v76, v100, v101) & 0xF) != 1
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v100, v101, v116) + 408)
                  ? (v76 = 0LL)
                  : (v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v100,
                                                                 v101,
                                                                 v117)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v115 = (signed int *)(v86 + 60),
                    !(_DWORD)v76) )
              {
                v115 = (signed int *)(v86 + 28);
              }
            }
            else
            {
              v115 = (signed int *)(v86 + 44);
            }
            a6 = *v115;
            v219 = *v115;
          }
        }
        if ( v107 > 0 )
        {
          v118 = a7 - v107;
          a7 = v118;
          v220 = v118;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v76, v100, v101) & 0xF) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v119, v120, v121) + 408)
              ? (v76 = 0LL)
              : (v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v119,
                                                             v120,
                                                             v122)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                !(_DWORD)v76) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v76, v119, v120) & 0xF) != 1
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v119, v120, v124) + 408)
                ? (v76 = 0LL)
                : (v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v119,
                                                               v120,
                                                               v125)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v123 = v86 + 60,
                  !(_DWORD)v76) )
            {
              v123 = v86 + 28;
            }
          }
          else
          {
            v123 = v86 + 44;
          }
          if ( v118 < *(_DWORD *)(v123 + 4) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v76, v119, v120) & 0xF) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v126, v127, v128) + 408)
                ? (v76 = 0LL)
                : (v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v126,
                                                               v127,
                                                               v129)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  !(_DWORD)v76) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v76, v126, v127) & 0xF) != 1
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v131, v132, v133) + 408)
                  ? (v76 = 0LL)
                  : (v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v134,
                                                                 v135,
                                                                 v136)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v130 = v86 + 60,
                    !(_DWORD)v76) )
              {
                v130 = v86 + 28;
              }
            }
            else
            {
              v130 = v86 + 44;
            }
            a7 = *(_DWORD *)(v130 + 4);
            v220 = a7;
          }
        }
      }
      v66 = gptiCurrent;
    }
  }
  if ( v228 )
    *(_DWORD *)(*(_QWORD *)(v66 + 376) + 760LL) &= 0xFFFFFFF9;
  if ( (((*((_BYTE *)v40 + 55) & 0xC0) + 0x80) & 0xBF) == 0 )
    SetOrClrWF(1LL, v40, 3844LL, 1LL);
  *((_WORD *)v40 + 27) |= v234;
  Menu = (unsigned __int64)v235;
  if ( !v235 && !v218 && *((_QWORD *)v225 + 17) )
  {
    v138 = v40;
    if ( v40[11] )
      v138 = (_QWORD *)v40[11];
    zzzLockDisplayAreaAndInvalidateDCCache(v138, 16LL);
    RtlInitUnicodeStringOrId(v263, *((_QWORD *)v225 + 17));
    Menu = xxxClientLoadMenu(*((_QWORD *)v225 + 13), v263);
    v76 = (*((_BYTE *)v40 + 55) & 0xC0) == 64;
    if ( (*((_BYTE *)v40 + 55) & 0xC0) == 0x40 )
    {
      DestroyMenu((struct tagMENU *)Menu);
      Menu = 0LL;
    }
    if ( Menu )
      *(_QWORD *)&v248[1] = *(_QWORD *)Menu;
    else
      *(_QWORD *)&v248[1] = 0LL;
  }
  if ( (*((_BYTE *)v40 + 55) & 0xC0) == 0x40 )
    v40[24] = Menu;
  else
    LockWndMenu(v40, v40 + 24, Menu);
  if ( (*((_BYTE *)v40 + 55) & 0xC0) == 0x40 )
  {
    if ( !ThreadDesktopWindow )
      goto LABEL_435;
    if ( (a16 & 2) != 0 )
    {
LABEL_335:
      v139 = 87LL;
LABEL_336:
      UserSetLastError(v139);
      goto LABEL_435;
    }
  }
  else
  {
    v140 = a16;
    if ( (a16 & 4) != 0 )
      CoreWindowProp::SetRole(v40, 1LL);
    HMAssignmentLock(v40 + 30, v40);
    if ( (unsigned int)IsTopLevelParent(ThreadDesktopWindow) )
    {
      v142 = v40 + 13;
      HMAssignmentLock(v40 + 13, 0LL);
    }
    else
    {
      NonChildAncestor = GetNonChildAncestor();
      if ( !(unsigned int)ValidateOwnerDepth(v40, NonChildAncestor) )
        goto LABEL_335;
      if ( NonChildAncestor )
      {
        *((_DWORD *)v40 + 76) = *(_DWORD *)(NonChildAncestor + 304);
        SetOrClrWF(*(_BYTE *)(NonChildAncestor + 290) & 0x40, v40, 64064LL, 1LL);
        WindowCloakState = GetWindowCloakState(NonChildAncestor);
      }
      v142 = v40 + 13;
      HMAssignmentLock(v40 + 13, NonChildAncestor);
      if ( v40[13] && ((*(_BYTE *)(v40[13] + 48LL) & 8) != 0 || *((_DWORD *)v40 + 76) != 1) )
        SetOrClrWF(1LL, v40, 2056LL, 1LL);
      if ( Atom != *(_WORD *)(gpsi + 882LL) )
      {
        if ( *v142 )
        {
          v143 = *(_QWORD *)(*v142 + 16LL);
          if ( v143 != v66 )
            zzzAttachThreadInput(v66, v143, 1LL);
        }
      }
      v140 = a16;
    }
    if ( !*v142 )
    {
      if ( (v144 = *((_DWORD *)v40 + 76), v144 <= 0xF) && (v145 = 44800, _bittest(&v145, v144))
        || (*((_BYTE *)v40 + 290) & 0x40) != 0 )
      {
        WindowCloakState = 2;
      }
    }
    if ( !ThreadDesktopWindow || ThreadDesktopWindow != *(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 24) + 96LL) )
    {
      ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
      v264[0] = *(_QWORD *)(v66 + 368);
      *(_QWORD *)(v66 + 368) = v264;
      v264[1] = ThreadDesktopWindow;
      if ( ThreadDesktopWindow )
        ++*(_DWORD *)(ThreadDesktopWindow + 8);
      v231 = 1;
    }
    if ( (v140 & 2) != 0 )
    {
      if ( *(_QWORD *)(v66 + 1248) )
        goto LABEL_335;
      SetOrClrWF(1LL, v40, 64128LL, 1LL);
      *(_DWORD *)(v66 + 1096) |= 0x40000u;
      *(_DWORD *)(*(_QWORD *)(v66 + 384) + 340LL) |= 0x2000000u;
      if ( !*(_QWORD *)(v66 + 1240) )
      {
        KernelEvent = CreateKernelEvent(1LL, 0LL);
        *(_QWORD *)(v66 + 1240) = KernelEvent;
        if ( !KernelEvent )
          goto LABEL_435;
      }
      HMAssignmentLock(v66 + 1248, v40);
    }
  }
  if ( (v40[36] & 8) != 0 )
  {
    v147 = v40[11];
    UnlinkWindow((__int64)v40, v147);
  }
  else
  {
    v147 = v245;
  }
  if ( !(unsigned int)IsTopLevelParent(ThreadDesktopWindow) )
  {
    *((_DWORD *)v40 + 76) = *(_DWORD *)(ThreadDesktopWindow + 304);
    SetOrClrWF(*(_BYTE *)(ThreadDesktopWindow + 290) & 0x40, v40, 64064LL, 1LL);
  }
  if ( ThreadDesktopWindow && !(unsigned int)ValidateNewParent(v40, ThreadDesktopWindow) )
    goto LABEL_435;
  v148 = v40 + 11;
  HMAssignmentLock(v40 + 11, ThreadDesktopWindow);
  if ( ThreadDesktopWindow )
    v149 = -__CFSHR__(*(_DWORD *)(ThreadDesktopWindow + 288), 27);
  else
    v149 = 0;
  SetWindowSubtreeCoreWindowStatus((__int64)v40, v149);
  if ( (v40[44] & 0xF) == 2 )
    *((_DWORD *)v40 + 72) ^= (*((_DWORD *)v40 + 72) ^ ((unsigned int)ShouldUseLogPixelsForWindowMetrics((__int64)v40) << 28)) & 0x10000000;
  else
    UpdateWindowDPITransform(v40, v216);
  v150 = v225;
  if ( (*((_BYTE *)v40 + 45) & 1) == 0
    && (*((_DWORD *)v225 + 21) & 0x80u) != 0
    && (*(_BYTE *)(ThreadDesktopWindow + 55) & 2) == 0 )
  {
    SetOrClrWF(0LL, v40, 3846LL, 1LL);
  }
  v151 = WindowCloakState;
  if ( (WindowCloakState & 2) == 0 )
    *((_BYTE *)v40 + 290) |= 0x20u;
  if ( v151 )
  {
    v152 = zzzSetWindowCompositionCloak(v40, 0LL, v151);
    if ( v152 < 0 )
    {
      v139 = RtlNtStatusToDosError(v152);
      goto LABEL_336;
    }
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v257);
  if ( v147 )
    zzzLockDisplayAreaAndInvalidateDCCache(v147, 16LL);
  if ( ThreadDesktopWindow )
    zzzLockDisplayAreaAndInvalidateDCCache(ThreadDesktopWindow, 16LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v257);
  if ( (*((_BYTE *)v40 + 55) & 0xC0) != 0x40 || (unsigned int)IsTopLevelWindow((__int64)v40) )
  {
LABEL_401:
    v153 = gptiCurrent;
  }
  else
  {
    v153 = gptiCurrent;
    if ( *v148 )
    {
      v154 = *(_QWORD *)(*v148 + 16);
      if ( gptiCurrent != v154 )
      {
        zzzAttachThreadInput(gptiCurrent, v154, 1LL);
        v155 = GetMessageWindow((__int64)v40);
        if ( v157 != v155 && ((*((_BYTE *)v40 + 352) ^ *(_BYTE *)(v157 + 352)) & 0xF) != 0 )
          xxxForceUpdateProcessDpiAwarenessContext(v156, *(_DWORD *)(v157 + 352));
        goto LABEL_401;
      }
    }
  }
  if ( v237 != (unsigned __int16)gatomMessage && v237 != 32769 && v237 != 32774 && !*(_DWORD *)(v153 + 780) )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v153 + 400) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    xxxUpdateInputHangInfo(0LL, 1LL);
  }
  xxxAdjustSize((__int64)v40, &v221, &v222);
  ConstrainWindowSIZERECT((__int64)&v219);
  if ( v40[3] && (*((_BYTE *)v40 + 55) & 0x40) == 0 && *((char *)v40 + 48) >= 0 )
    xxxCheckFullScreen((__int64)v40, (const struct tagSIZERECT *)&v219);
  v158 = v221;
  if ( v221 < 0 )
    v158 = 0;
  v221 = v158;
  v159 = v222;
  if ( v222 < 0 )
    v159 = 0;
  v222 = v159;
  v160 = v40 + 14;
  RECTFromSIZERECT((_DWORD *)v40 + 28, &v219);
  if ( (*((_BYTE *)v40 + 51) & 0x20) != 0 && GetRedirectionBitmap((__int64)v40) )
  {
    GreLockVisRgn(*gpDispInfo);
    v162 = RecreateRedirectionBitmap((struct tagWND *)v40, 0, 0LL);
    v163 = *gpDispInfo;
    if ( v162 < 0 )
    {
LABEL_418:
      GreUnlockVisRgn(v163);
      goto LABEL_435;
    }
    GreUnlockVisRgn(v163);
  }
  v164 = *((_BYTE *)v150 + 84);
  if ( (v164 & 0x20) != 0 || (v164 & 0x40) != 0 && !*((_QWORD *)v150 + 3) )
  {
    v165 = 0x8000;
    if ( GetStyleWindow(v40, 2848LL) )
      v165 = 49152;
    GreLockVisRgn(*gpDispInfo);
    CacheDC = CreateCacheDC(v40, v165, 0LL);
    v163 = *gpDispInfo;
    if ( !CacheDC )
      goto LABEL_418;
    GreUnlockVisRgn(v163);
  }
  if ( (v214 & 0x80000) != 0
    && (*((_BYTE *)v40 + 50) & 8) == 0
    && (int)xxxSetLayeredWindow((__m128i *)v40, 0LL, 0LL, v161) < 0 )
  {
    goto LABEL_435;
  }
  if ( (v214 & 0x2000000) != 0 && !GetStyleWindow(*v148, 2818LL) )
  {
    SetOrClrWF(1LL, v40, 2818LL, 1LL);
    if ( (int)SetRedirectedWindow((struct tagWND *)v40, 2) < 0 )
    {
      SetOrClrWF(0LL, v40, 2818LL, 1LL);
      goto LABEL_435;
    }
  }
  *((_QWORD *)&v248[2] + 1) = __PAIR64__(a6, a7);
  *(_QWORD *)&v248[2] = __PAIR64__(a8, a9);
  if ( !xxxSendMessage(v40, 129LL, 0LL, v248) )
  {
LABEL_435:
    v167 = *((_BYTE *)v40 + 55) & 0x10;
    if ( v231 )
      ThreadUnlock1(v76, Menu);
    SetOrClrWF(1LL, v40, 1152LL, 1LL);
    SetOrClrWF(1LL, v40, 896LL, 1LL);
    if ( v167 )
      SetVisible(v40, 0LL);
    v168 = v40[11];
    if ( v168 )
    {
      if ( v167 )
        zzzLockDisplayAreaAndInvalidateDCCache(v168, 16LL);
      if ( (*((_BYTE *)v40 + 55) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow((__int64)v40) )
      {
        v169 = *(_QWORD *)(v40[11] + 16LL);
        if ( gptiCurrent != v169 )
          zzzAttachThreadInput(v40[2], v169, 0LL);
      }
      UnlinkWindow((__int64)v40, v40[11]);
    }
    ClassUnlock(v225);
    xxxFreeWindow((struct tagWND *)v40, (struct tagSwitchWndInfo *)v261, v170);
    return 0LL;
  }
  if ( (*(_BYTE *)(v40[19] + 85LL) & 2) != 0 )
  {
    SystemMenu = xxxGetSystemMenu(v40, 0LL);
    if ( SystemMenu )
    {
      v265[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v265;
      v265[1] = SystemMenu;
      ++*(_DWORD *)(SystemMenu + 8);
      xxxRemoveDeleteMenuHelper((struct tagMENU *)SystemMenu, 5u, 0x400u, 1);
      xxxRemoveDeleteMenuHelper((struct tagMENU *)SystemMenu, 5u, 0x400u, 1);
      ThreadUnlock1(v173, v172);
    }
  }
  if ( (*((_BYTE *)v40 + 42) & 2) != 0 && (!*((_QWORD *)&v248[5] + 1) || LODWORD(v248[5]) || v40[28]) )
  {
    *((_QWORD *)&v248[3] + 1) = v40[28];
    v248[5] = *(_OWORD *)(v40 + 27);
  }
  if ( (*gpsi & 4) != 0 )
  {
    v174 = (_QWORD *)(gptiCurrent + 696LL);
    if ( !*(_QWORD *)(gptiCurrent + 696LL) )
    {
      if ( (unsigned int)WantImeWindow((struct tagWND *)ThreadDesktopWindow, (struct tagWND *)v40) )
      {
        DefaultImeWindow = xxxCreateDefaultImeWindow(v40, Atom, v236);
        HMAssignmentLock(v174, DefaultImeWindow);
        v176 = *v174;
        if ( *v174 )
        {
          v266[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v266;
          v266[1] = v176;
          ++*(_DWORD *)(v176 + 8);
          xxxSendMessage(*v174, 647LL, 33LL, 0LL);
          ThreadUnlock1(v178, v177);
        }
        v179 = (**(unsigned __int8 **)(gptiCurrent + 432LL) >> 6) & 1;
        v258 = v179;
        v180 = *v174;
        if ( *v174 && v179 )
        {
          v267[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v267;
          v267[1] = v180;
          if ( v180 )
            ++*(_DWORD *)(v180 + 8);
          xxxSendMessage(*v174, 647LL, 25LL, *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 40LL));
          **(_QWORD **)(gptiCurrent + 432LL) &= ~0x40uLL;
          ThreadUnlock1(v182, v181);
        }
      }
    }
  }
  if ( !ThreadDesktopWindow || (v40[36] & 8) != 0 && *v148 != ThreadDesktopWindow )
  {
LABEL_490:
    if ( (*((_BYTE *)v40 + 55) & 0xC0) == 0x40 && (*(_BYTE *)(ThreadDesktopWindow + 50) & 0x40) != 0 )
    {
      v190 = *((_DWORD *)v40 + 30) - *v160;
      v191 = *(_DWORD *)(ThreadDesktopWindow + 128) + *(_DWORD *)(ThreadDesktopWindow + 136) - *v160;
      *((_DWORD *)v40 + 30) = v191;
      *v160 = v191 - v190;
    }
    *(_OWORD *)v270 = *(_OWORD *)v160;
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((struct tagWND *)v40, 0x83u, 0LL, (__int64)v270, 0, 0, 0LL, 1, 0);
    *((_OWORD *)v40 + 8) = *(_OWORD *)v270;
    if ( xxxSendMessage(v40, 1LL, 0LL, v248) == -1 )
      goto LABEL_494;
    SetOrClrWF(1LL, v40, 1920LL, 1LL);
    if ( (unsigned int)IsWindowDesktopComposed(v40) )
    {
      v193 = (void *)ReferenceDwmApiPort();
      DwmAsyncChildStyleChange(v193);
      DwmChildRectChange((__int64)v40);
      v194 = (__int64 *)v40[13];
      if ( v194 )
        v195 = *v194;
      else
        v195 = 0LL;
      v196 = (void *)ReferenceDwmApiPort();
      DwmAsyncOwnerChange(v196, *v40, v195);
    }
    xxxWindowEvent(0x8000, (_DWORD)v40, 0, 0, 0);
    if ( (v40[5] & 0x10) == 0 )
    {
      xxxSendSizeMessage((struct tagWND *)v40, 0LL);
      if ( ThreadDesktopWindow && GetDesktopWindow(v40) != ThreadDesktopWindow )
      {
        LODWORD(v270[0]) -= *(_DWORD *)(ThreadDesktopWindow + 128);
        HIDWORD(v270[0]) -= *(_DWORD *)(ThreadDesktopWindow + 132);
      }
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(
        (struct tagWND *)v40,
        3u,
        0LL,
        LOWORD(v270[0]) | (WORD2(v270[0]) << 16),
        0,
        0,
        0LL,
        1,
        0);
    }
    v197 = *((_BYTE *)v40 + 55);
    if ( (v197 & 0x20) != 0 )
    {
      SetMinimize(v40, 0LL);
    }
    else
    {
      if ( (v197 & 1) == 0 )
        goto LABEL_514;
      SetOrClrWF(0LL, v40, 3841LL, 1LL);
    }
    xxxMinMaximizeEx((struct tagWND *)v40, 0LL);
LABEL_514:
    CalcWindowFullScreen((__int64)v40);
    if ( (*((_BYTE *)v40 + 55) & 0xC0) == 0x40 && (v40[6] & 4) == 0 )
    {
      v198 = *v148;
      if ( *v148 )
      {
        v268[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v268;
        v268[1] = v198;
        ++*(_DWORD *)(v198 + 8);
        v199 = *v40;
        v200 = (*((unsigned __int16 *)v40 + 96) << 16) | 1;
        v201 = (struct tagWND *)*v148;
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v201, 0x210u, v200, v199, 0, 0, 0LL, 1, 0);
        ThreadUnlock1(v203, v202);
      }
    }
    xxxInheritWindowMonitor((struct tagWND *)v40, 0LL, 0, 0);
    if ( (a5 & 0x10000000) != 0 )
      xxxShowWindowEx((struct tagWND *)v40);
    if ( (*((_BYTE *)v40 + 55) & 0xC0) == 0 || (*((_BYTE *)v40 + 50) & 4) != 0 )
    {
      v205 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 376LL) + 652LL);
      if ( (_DWORD)v205 )
      {
        xxxSendMessage(v40, 50LL, (unsigned int)v205, 0LL);
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 652LL) = 0;
      }
    }
    if ( v231 )
      ThreadUnlock1(v205, v204);
    PopW32ThreadLock(v262, v204, v206, v207);
    ClassUnlockWorker(v225, v208);
    result = (_DWORD *)ThreadUnlock1(v210, v209);
    if ( !result
      || (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*result
                   + *((_QWORD *)&gSharedInfo + 1)
                   + 17LL) & 1) != 0 )
    {
      return 0LL;
    }
    return result;
  }
  v183 = PWInsertAfter(Str1);
  v184 = v183;
  if ( (unsigned __int64)(v183 - 2) <= 0xFFFFFFFFFFFFFFFBuLL && *(_QWORD *)(v183 + 88) != *v148 )
    v184 = v218 != 0;
  v185 = v40[13];
  if ( v185 )
  {
    *((_DWORD *)v40 + 76) = *(_DWORD *)(v185 + 304);
    SetOrClrWF(*(_BYTE *)(v185 + 290) & 0x40, v40, 64064LL, 1LL);
  }
  if ( (unsigned int)ValidateNewParent(v40, ThreadDesktopWindow) )
  {
    UnlinkWindow((__int64)v40, *v148);
    if ( (*((_BYTE *)v40 + 55) & 0xC0) != 0x40
      && ThreadDesktopWindow != *(_QWORD *)(*(_QWORD *)(ThreadDesktopWindow + 24) + 96LL) )
    {
      if ( (v40[6] & 8) != 0 )
      {
        if ( gHardErrorHandler )
        {
          TopMostInsertAfter = GetTopMostInsertAfter(v40);
          if ( TopMostInsertAfter )
            v184 = TopMostInsertAfter;
        }
      }
      else
      {
        if ( !v184 )
          goto LABEL_484;
        v188 = 0;
        if ( v184 >= 0xFFFFFFFFFFFFFFFEuLL || v184 == 1 )
          v188 = 1;
        if ( !v188 && (*(_BYTE *)(v184 + 48) & 8) != 0 )
LABEL_484:
          v184 = CalcForegroundInsertAfter(v40);
      }
    }
    if ( v184 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LinkWindow((struct tagWND *)v40);
      zzzLockDisplayAreaAndInvalidateDCCache(ThreadDesktopWindow, 16LL);
      goto LABEL_490;
    }
  }
LABEL_494:
  v192 = v225;
  if ( v231 )
    ThreadUnlock1(v187, v186);
  if ( ThreadUnlock1(v187, v186) )
    xxxDestroyWindow(v40);
  ClassUnlock(v192);
  return 0LL;
}
