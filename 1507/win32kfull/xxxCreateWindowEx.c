/*
 * XREFs of xxxCreateWindowEx @ 0x1C005E828
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C0052518 (xxxCreateDefaultImeWindow.c)
 *     NtUserCreateWindowEx @ 0x1C0057F00 (NtUserCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x1C00DBDE0 (xxxCreateDesktopEx.c)
 *     xxxCsDdeInitialize @ 0x1C00FB808 (xxxCsDdeInitialize.c)
 *     xxxAddShadow @ 0x1C0104418 (xxxAddShadow.c)
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     xxxCreateWindowStation @ 0x1C0138EEC (xxxCreateWindowStation.c)
 *     xxxNextWindow @ 0x1C02011B0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C02017F4 (xxxOldNextWindow.c)
 * Callees:
 *     HasMessageRootWindow @ 0x1C0008CF8 (HasMessageRootWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C000B580 (RecreateRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1C000E0B0 (SetRedirectedWindow.c)
 *     IsDesktopWindow @ 0x1C0012B0C (IsDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C003F74C (SetMinimize.c)
 *     zzzAttachThreadInput @ 0x1C004340C (zzzAttachThreadInput.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     xxxGetSystemMenu @ 0x1C004EA78 (xxxGetSystemMenu.c)
 *     LockWndMenu @ 0x1C004F214 (LockWndMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C004F27C (RtlInitUnicodeStringOrId.c)
 *     RtlInitLargeAnsiString @ 0x1C004FCE4 (RtlInitLargeAnsiString.c)
 *     xxxCreateDefaultImeWindow @ 0x1C0052518 (xxxCreateDefaultImeWindow.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0054D4C (-xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z.c)
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 *     IsImmersiveAppIORestricted @ 0x1C005733C (IsImmersiveAppIORestricted.c)
 *     UpdateWindowDPITransform @ 0x1C0058AD0 (UpdateWindowDPITransform.c)
 *     GetRedirectionBitmap @ 0x1C0059490 (GetRedirectionBitmap.c)
 *     RegisterDefaultClass @ 0x1C0059D10 (RegisterDefaultClass.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C005B79C (DwmAsyncChildStyleChange.c)
 *     DwmAsyncOwnerChange @ 0x1C005B838 (DwmAsyncOwnerChange.c)
 *     DwmGetClassStyle @ 0x1C005B8D0 (DwmGetClassStyle.c)
 *     DwmAsyncChildCreate @ 0x1C005B92C (DwmAsyncChildCreate.c)
 *     PWInsertAfter @ 0x1C005BC30 (PWInsertAfter.c)
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C005BCA0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     ReferenceClass @ 0x1C005BCD0 (ReferenceClass.c)
 *     ClassLock @ 0x1C005BE7C (ClassLock.c)
 *     xxxInheritWindowMonitor @ 0x1C005BED4 (xxxInheritWindowMonitor.c)
 *     GetInheritedMonitor @ 0x1C005C590 (GetInheritedMonitor.c)
 *     MapClientNeuterToClientPfn @ 0x1C005C9FC (MapClientNeuterToClientPfn.c)
 *     GetAppCompatFlags @ 0x1C005CA60 (GetAppCompatFlags.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C005CA7C (SetWindowSubtreeCoreWindowStatus.c)
 *     xxxAdjustSize @ 0x1C005CB5C (xxxAdjustSize.c)
 *     ConstrainWindowSIZERECT @ 0x1C005CC34 (ConstrainWindowSIZERECT.c)
 *     RECTFromSIZERECT @ 0x1C005CCBC (RECTFromSIZERECT.c)
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 *     CheckGrantedAccess @ 0x1C005CD60 (CheckGrantedAccess.c)
 *     IsValidBandForProcess @ 0x1C005CD7C (IsValidBandForProcess.c)
 *     GetClassPtr @ 0x1C005D620 (GetClassPtr.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005E4A8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C005E6CC (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxLoadUserApiHook @ 0x1C0061D40 (xxxLoadUserApiHook.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ValidateParentDepth @ 0x1C0061F68 (ValidateParentDepth.c)
 *     ValidateNewParent @ 0x1C0061FF8 (ValidateNewParent.c)
 *     IsTopLevelParent @ 0x1C00620F0 (IsTopLevelParent.c)
 *     _GetWindowCompositionInfo @ 0x1C00633C4 (_GetWindowCompositionInfo.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     UnlinkWindow @ 0x1C0065F2C (UnlinkWindow.c)
 *     CalcWindowFullScreen @ 0x1C006601C (CalcWindowFullScreen.c)
 *     LinkWindow @ 0x1C006616C (LinkWindow.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 *     xxxCallCtfHook @ 0x1C0067860 (xxxCallCtfHook.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     xxxUpdateInputHangInfo @ 0x1C006B110 (xxxUpdateInputHangInfo.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     GetThreadDesktopWindow @ 0x1C007BD60 (GetThreadDesktopWindow.c)
 *     xxxCreateClassSmIcon @ 0x1C007D888 (xxxCreateClassSmIcon.c)
 *     xxxClientLoadMenu @ 0x1C007E4F8 (xxxClientLoadMenu.c)
 *     GetNonChildAncestor @ 0x1C0081140 (GetNonChildAncestor.c)
 *     CalcForegroundInsertAfter @ 0x1C008143C (CalcForegroundInsertAfter.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     _MonitorFromWindow @ 0x1C0082D50 (_MonitorFromWindow.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     DereferenceClass @ 0x1C008A2C0 (DereferenceClass.c)
 *     xxxCheckFullScreen @ 0x1C008B384 (xxxCheckFullScreen.c)
 *     DwmChildRectChange @ 0x1C00916A8 (DwmChildRectChange.c)
 *     NeedsWindowEdge @ 0x1C00919AC (NeedsWindowEdge.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GetAppCompatFlags2 @ 0x1C00956B8 (GetAppCompatFlags2.c)
 *     _DestroyMenu @ 0x1C00DD5A0 (_DestroyMenu.c)
 *     SetTiledRect @ 0x1C00E3178 (SetTiledRect.c)
 *     xxxSendSizeMessage @ 0x1C00E57B8 (xxxSendSizeMessage.c)
 *     RegisterIconTitleClass @ 0x1C00F1DF4 (RegisterIconTitleClass.c)
 *     ValidateOwnerDepth @ 0x1C00F285C (ValidateOwnerDepth.c)
 *     IsValidBand @ 0x1C00F684C (IsValidBand.c)
 *     ClassUnlock @ 0x1C0154834 (ClassUnlock.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     GetTopMostInsertAfter @ 0x1C01C39FC (GetTopMostInsertAfter.c)
 *     xxxForceUpdateProcessDpiAwareness @ 0x1C01E67A4 (xxxForceUpdateProcessDpiAwareness.c)
 *     ?SetRole@CoreWindowProp@@SAJPEAUtagWND@@W4COREWINDOWROLE@@@Z @ 0x1C02262C4 (-SetRole@CoreWindowProp@@SAJPEAUtagWND@@W4COREWINDOWROLE@@@Z.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

_DWORD *__fastcall xxxCreateWindowEx(
        int a1,
        wchar_t *a2,
        char **a3,
        unsigned __int64 a4,
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
  int v26; // ebx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r9
  int v30; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v32; // r14
  int **ClassPtr; // rax
  int *v34; // rdi
  __int64 v35; // r8
  int v36; // r10d
  unsigned int v37; // r10d
  __int64 v38; // r9
  unsigned int v39; // r8d
  _QWORD *v40; // r14
  unsigned int v41; // ecx
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 *v44; // rax
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  int v48; // ecx
  struct tagWND *v49; // r13
  BOOL v50; // edi
  int v51; // edx
  int v52; // eax
  bool v53; // zf
  int v54; // ecx
  int v55; // eax
  int v56; // ecx
  __int64 v57; // r8
  __int64 InheritedMonitor; // r12
  __int64 v59; // rax
  __int64 MessageWindow; // rax
  __int64 *ThreadDesktopWindow; // rbx
  __int64 v62; // r12
  __int64 v63; // rbx
  int ClassStyle; // edi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  void *v69; // rax
  unsigned __int16 v70; // bx
  struct tagCLS *v71; // rdi
  __int64 v72; // r12
  int AppCompatFlags; // eax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  char v77; // bl
  unsigned __int16 v78; // r8
  int v79; // eax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  unsigned int v83; // ebx
  unsigned int v84; // edi
  int v85; // r9d
  int v86; // r10d
  char v87; // al
  _QWORD *v88; // rdx
  int v89; // edx
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rcx
  __int64 v93; // r12
  __int64 v94; // rdi
  __int64 v95; // rax
  __int16 v96; // ax
  int v97; // eax
  __int64 v98; // rcx
  __int64 v99; // rax
  int v100; // ebx
  __int64 v101; // rax
  int v102; // edi
  signed int *v103; // rax
  signed int *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  int v107; // eax
  _QWORD *v108; // rcx
  __int64 v109; // rcx
  char v110; // bl
  __int64 v111; // rcx
  __int64 NonChildAncestor; // rbx
  _QWORD *v113; // rdi
  __int64 v114; // rdx
  unsigned int v115; // eax
  int v116; // ecx
  __int64 KernelEvent; // rax
  __int64 v118; // rdi
  struct tagWND **v119; // r12
  int v120; // edx
  struct tagCLS *v121; // rbx
  unsigned int v122; // eax
  NTSTATUS v123; // eax
  __int64 v124; // r9
  __int64 v125; // rdx
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // r8
  int v129; // eax
  int v130; // eax
  _DWORD *v131; // rdi
  int v132; // eax
  __int64 v133; // rcx
  char v134; // al
  unsigned int v135; // ebx
  __int64 CacheDC; // rax
  int v137; // ebx
  __int64 v138; // rcx
  __int64 v139; // rdx
  __int64 SystemMenu; // rbx
  __int64 v141; // rdx
  __int64 v142; // rcx
  _QWORD *v143; // rbx
  __int64 DefaultImeWindow; // rax
  __int64 v145; // rdx
  __int64 v146; // rdx
  __int64 v147; // rcx
  int v148; // ecx
  __int64 v149; // r9
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rax
  unsigned __int64 v153; // rbx
  __int64 v154; // rcx
  __int64 v155; // rdx
  __int64 v156; // rcx
  int v157; // eax
  __int64 TopMostInsertAfter; // rax
  int v159; // edx
  int v160; // ecx
  struct tagCLS *v161; // rbx
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  void *v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 *v171; // rbx
  __int64 v172; // rbx
  void *v173; // rax
  char v174; // al
  unsigned int v175; // edx
  struct tagWND *v176; // rcx
  __int64 v177; // r9
  unsigned __int64 v178; // r8
  struct tagWND *v179; // rcx
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rdx
  __int64 v185; // rcx
  _DWORD *result; // rax
  wchar_t *v187; // rcx
  unsigned int v188; // [rsp+58h] [rbp-2D0h]
  unsigned __int16 Atom; // [rsp+5Ch] [rbp-2CCh]
  int v190; // [rsp+60h] [rbp-2C8h]
  int v191; // [rsp+60h] [rbp-2C8h]
  unsigned __int64 v192; // [rsp+68h] [rbp-2C0h] BYREF
  int v193; // [rsp+70h] [rbp-2B8h] BYREF
  int v194; // [rsp+74h] [rbp-2B4h] BYREF
  int v195; // [rsp+78h] [rbp-2B0h]
  __int16 v196; // [rsp+80h] [rbp-2A8h]
  struct tagCLS *v197; // [rsp+88h] [rbp-2A0h]
  struct tagWND *v198; // [rsp+90h] [rbp-298h]
  __int64 v199; // [rsp+98h] [rbp-290h]
  int v200; // [rsp+A0h] [rbp-288h]
  int v201; // [rsp+A4h] [rbp-284h]
  unsigned int v202; // [rsp+A8h] [rbp-280h]
  int v203; // [rsp+ACh] [rbp-27Ch]
  int v204; // [rsp+B0h] [rbp-278h]
  int WindowCloakState; // [rsp+B4h] [rbp-274h]
  int v206; // [rsp+B8h] [rbp-270h]
  int v207; // [rsp+BCh] [rbp-26Ch]
  int v208; // [rsp+C0h] [rbp-268h]
  _QWORD *v209; // [rsp+C8h] [rbp-260h]
  BOOL v210; // [rsp+D0h] [rbp-258h]
  __int64 v211; // [rsp+D8h] [rbp-250h]
  __int64 v212; // [rsp+E0h] [rbp-248h] BYREF
  char **v213; // [rsp+E8h] [rbp-240h]
  wchar_t *Str1; // [rsp+F8h] [rbp-230h]
  int v215; // [rsp+100h] [rbp-228h]
  int v216; // [rsp+108h] [rbp-220h]
  int v217; // [rsp+10Ch] [rbp-21Ch]
  unsigned __int64 v218; // [rsp+110h] [rbp-218h]
  struct tagCLS *v219; // [rsp+118h] [rbp-210h]
  __int64 v220; // [rsp+120h] [rbp-208h]
  __int64 v221; // [rsp+128h] [rbp-200h]
  _QWORD *v222; // [rsp+130h] [rbp-1F8h]
  __int64 v223; // [rsp+138h] [rbp-1F0h]
  char **v224; // [rsp+140h] [rbp-1E8h] BYREF
  struct tagWND *v225; // [rsp+148h] [rbp-1E0h]
  _OWORD v226[7]; // [rsp+150h] [rbp-1D8h] BYREF
  char v227[8]; // [rsp+1C0h] [rbp-168h] BYREF
  int v228; // [rsp+1C8h] [rbp-160h]
  struct _UNICODE_STRING v229; // [rsp+1D0h] [rbp-158h] BYREF
  __int64 v230; // [rsp+1E0h] [rbp-148h]
  int v231; // [rsp+1E8h] [rbp-140h]
  _QWORD v232[3]; // [rsp+1F0h] [rbp-138h] BYREF
  _QWORD v233[3]; // [rsp+208h] [rbp-120h] BYREF
  _QWORD v234[3]; // [rsp+220h] [rbp-108h] BYREF
  _QWORD v235[3]; // [rsp+238h] [rbp-F0h] BYREF
  _QWORD v236[3]; // [rsp+250h] [rbp-D8h] BYREF
  _QWORD v237[3]; // [rsp+268h] [rbp-C0h] BYREF
  _QWORD v238[4]; // [rsp+280h] [rbp-A8h] BYREF
  _BYTE v239[40]; // [rsp+2A0h] [rbp-88h] BYREF
  __int128 v240; // [rsp+2C8h] [rbp-60h] BYREF
  __int128 v241; // [rsp+2D8h] [rbp-50h] BYREF

  v218 = a4;
  v213 = a3;
  Str1 = a2;
  v188 = a1;
  v195 = a1;
  *(_QWORD *)&v241 = a2;
  v224 = a3;
  v192 = a4;
  v19 = a10;
  v198 = (struct tagWND *)a10;
  v209 = a11;
  v212 = (__int64)a11;
  v211 = a12;
  v220 = a13;
  v208 = 0;
  v216 = 0;
  v206 = 0;
  v203 = 0;
  v240 = 0LL;
  v202 = 5;
  v217 = 5;
  v223 = 0LL;
  v20 = gptiCurrent;
  v230 = gptiCurrent;
  v204 = 0;
  v21 = 0LL;
  v201 = 0;
  v196 = 0;
  v22 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 12LL);
  v190 = v22 & 0x2000;
  v207 = v190;
  WindowCloakState = 0;
  v23 = 0;
  v200 = 0;
  if ( (v22 & 0x10000000) == 0 )
  {
    if ( !(unsigned int)RegisterIconTitleClass() )
    {
LABEL_3:
      v24 = 87LL;
LABEL_538:
      UserSetLastError(v24);
      return 0LL;
    }
    v20 = gptiCurrent;
  }
  if ( a1 < 0 )
  {
    v201 = 800;
    v196 = 800;
    v188 = a1 & 0x7FFFFFFF;
    v195 = a1 & 0x7FFFFFFF;
  }
  v25 = *(_QWORD *)(v20 + 416);
  v221 = v25;
  *(_QWORD *)&v229.Length = v25;
  if ( a10 && *(_QWORD *)(a10 + 24) != v25 )
    goto LABEL_3;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*(_QWORD *)(v20 + 384), v21) )
    {
LABEL_11:
      v24 = 5LL;
      goto LABEL_538;
    }
    v23 = 1;
    v200 = 1;
    v20 = gptiCurrent;
  }
  if ( (a16 & 2) != 0 && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(v20 + 384)) )
    goto LABEL_11;
  v26 = a14;
  if ( !a14 )
    goto LABEL_24;
  if ( !(unsigned int)IsValidBand(a14, v21, v20) || a14 == 15 )
    goto LABEL_3;
  v27 = gptiCurrent;
  if ( (*(_BYTE *)(*(_QWORD *)(gptiCurrent + 384LL) + 776LL) & 0x30) == 0x10
    && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 776LL) & 0x200) == 0
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
  v210 = (HIWORD(a5) & 0xC000) == 0x4000;
  LODWORD(v199) = v210;
  v215 = v210;
  if ( (HIWORD(a5) & 0xC000) != 0x4000 )
  {
    if ( (unsigned int)ShouldSetNoOwner(*(_QWORD *)(v27 + 384), a10) )
      v19 = 0LL;
    v198 = (struct tagWND *)v19;
  }
  if ( !v19 || (unsigned int)IsDesktopWindow(v19) )
  {
    if ( !a14 )
    {
      if ( IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 384LL)) )
      {
        v23 = 1;
        v200 = 1;
        v26 = 15;
      }
      else if ( (*(_DWORD *)(v28 + 776) & 2) != 0 && (v188 & 8) != 0 )
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
    v200 = v23;
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
  if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(v29 + 384), v26, v19) )
    goto LABEL_11;
  v30 = v188;
  if ( (v188 & 0x400000) == 0 )
  {
    if ( v19 )
    {
      if ( (HIWORD(a5) & 0xC000) == 0x4000 && (*(_BYTE *)(v19 + 50) & 0x50) == 0x40 )
      {
        v30 = v188 | 0x400000;
        v188 = v30;
        v195 = v30;
      }
    }
    else if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 || (_WORD)a2 != 0x8002 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v188);
      v30 = v188;
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 780) & 1) != 0 )
      {
        v30 = v188 | 0x400000;
        v188 = v30;
        v195 = v30;
      }
    }
  }
  if ( (v30 & 0x2200000) == 0x2200000 )
    goto LABEL_3;
  v32 = gptiCurrent;
  if ( *(_QWORD *)(gptiCurrent + 520LL) && !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 776LL), 2u) )
    return 0LL;
  if ( (HIWORD(a5) & 0xC000) != 0x4000 )
    goto LABEL_60;
  if ( !v198 )
  {
    v24 = 1406LL;
    goto LABEL_538;
  }
  if ( !(unsigned int)ValidateParentDepth(0LL, v198) )
    goto LABEL_3;
  while ( 1 )
  {
LABEL_60:
    if ( ((unsigned __int64)v213 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v227);
      if ( (int)RtlStringCchCopyW((char *)gawchAtomScratch, 256LL, v213[1]) < 0 )
      {
        Atom = 0;
        v190 = 1;
        v207 = 1;
      }
      else
      {
        Atom = UserFindAtom(gawchAtomScratch);
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v227);
    }
    else
    {
      Atom = (unsigned __int16)v213;
    }
    if ( Atom )
    {
      ClassPtr = (int **)GetClassPtr(Atom, *(_QWORD *)(v32 + 384), v211);
      if ( ClassPtr )
        break;
    }
LABEL_530:
    if ( v190
      || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 12LL) & 0x2000) != 0
      || (((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0
        ? (v187 = Str1)
        : (v187 = (wchar_t *)*((_QWORD *)Str1 + 1)),
          !(unsigned int)RegisterDefaultClass(v187)) )
    {
      v24 = 1407LL;
      goto LABEL_538;
    }
    v190 = 1;
    v207 = 1;
    v32 = gptiCurrent;
  }
  v34 = *ClassPtr;
  if ( (unsigned int)NeedsWindowEdge(a5, v188, a15 >= 0x400u) )
    v37 = v36 | 0x100;
  else
    v37 = v36 & 0xFFFFFEFF;
  v195 = v37;
  v188 = v37;
  v38 = (unsigned int)(v34[25] + 376);
  if ( (unsigned int)v34[25] >= 0xFFFFFE88 )
    goto LABEL_3;
  v228 = v34[25] + 376;
  LOBYTE(v35) = 1;
  v40 = (_QWORD *)HMAllocObject(v32, v221, v35, v38);
  v222 = v40;
  if ( !v40 )
    return 0LL;
  v41 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 776LL);
  if ( (v41 & 0x4000) != 0 )
    *((_DWORD *)v40 + 86) = 2;
  else
    *((_DWORD *)v40 + 86) = (v41 >> 13) & 1;
  *((_DWORD *)v40 + 91) = 0;
  v40[19] = v34;
  *((_DWORD *)v40 + 13) = a5 & 0xEFFFFFFF;
  *((_DWORD *)v40 + 12) = v188 & 0xFDF7FFFF;
  *((_DWORD *)v40 + 58) = v34[25];
  if ( !(unsigned int)ReferenceClass(v34, (__int64)v40, v39) )
  {
LABEL_77:
    HMFreeObject(v40);
    goto LABEL_530;
  }
  v42 = v40[19];
  v197 = (struct tagCLS *)v42;
  v219 = (struct tagCLS *)v42;
  if ( !(unsigned int)ClassLock(v42, (__int64)v232) )
  {
    DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 384LL));
    goto LABEL_77;
  }
  v43 = gptiCurrent;
  *((_DWORD *)v40 + 72) ^= (*((_DWORD *)v40 + 72) ^ (((*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 776LL) & 0x6000) == 0) << 7)) & 0x80;
  v40[33] = a17;
  if ( *(_WORD *)(v42 + 10) == *(_WORD *)(gpsi + 852LL) )
  {
    v40[31] = 0LL;
  }
  else
  {
    v44 = *(__int64 **)(gptiCurrent + 712LL);
    if ( v44 )
      v45 = *v44;
    else
      v45 = 0LL;
    v40[31] = v45;
  }
  *((_DWORD *)v40 + 76) = v26;
  if ( v26 == 1 )
    v46 = 0;
  else
    v46 = IsTopLevelParent(v198);
  if ( v46 )
    *((_DWORD *)v40 + 12) |= 8u;
  if ( v23 )
    *((_BYTE *)v40 + 290) |= 0x40u;
  ++*(_DWORD *)(v43 + 780);
  memset(v226, 0, sizeof(v226));
  DWORD2(v226[4]) = v188;
  *((_QWORD *)&v226[0] + 1) = v211;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (_WORD)v201 )
    {
      v47 = *(_QWORD *)(v42 + 144);
      *(_QWORD *)&v226[4] = v47;
      if ( (v47 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString((__int64)&v226[6], v47);
    }
    else
    {
      *(_QWORD *)&v226[4] = *((_QWORD *)Str1 + 1);
      v226[6] = *(_OWORD *)Str1;
    }
  }
  else
  {
    *(_QWORD *)&v226[4] = Str1;
  }
  if ( v218 )
  {
    *((_QWORD *)&v226[3] + 1) = *(_QWORD *)(v218 + 8);
    v226[5] = *(_OWORD *)v218;
  }
  LODWORD(v226[3]) = a5;
  v48 = a6;
  *((_QWORD *)&v226[2] + 1) = __PAIR64__(a6, a7);
  *(_QWORD *)&v226[2] = __PAIR64__(a8, a9);
  v49 = v198;
  if ( v198 )
    *((_QWORD *)&v226[1] + 1) = *(_QWORD *)v198;
  else
    *((_QWORD *)&v226[1] + 1) = 0LL;
  v50 = v210;
  if ( v210 )
  {
    *(_QWORD *)&v226[1] = v209;
    *((_DWORD *)v40 + 12) |= *((_DWORD *)v198 + 12) & 0xC4000000;
  }
  else if ( v209 )
  {
    *(_QWORD *)&v226[1] = *v209;
  }
  else
  {
    *(_QWORD *)&v226[1] = 0LL;
  }
  *(_QWORD *)&v226[0] = v220;
  v233[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v233;
  v233[1] = v40;
  ++*((_DWORD *)v40 + 2);
  if ( a6 == 0x80000000 || a6 == 0x8000 )
    v48 = 0;
  LODWORD(v241) = v48;
  if ( a7 == 0x80000000 || (v51 = a7, a7 == 0x8000) )
    v51 = 0;
  DWORD1(v241) = v51;
  if ( a8 == 0x80000000 || (v52 = 0, a8 == 0x8000) )
    v52 = 1;
  v53 = v48 + v52 == 0;
  v54 = a8;
  if ( !v53 )
    v54 = 0;
  DWORD2(v241) = v54;
  if ( a9 == 0x80000000 || (v55 = 0, a9 == 0x8000) )
    v55 = 1;
  v56 = a9;
  if ( v51 + v55 )
    v56 = 0;
  HIDWORD(v241) = v56;
  InheritedMonitor = GetInheritedMonitor((struct tagWND *)v40);
  v199 = InheritedMonitor;
  if ( !InheritedMonitor && v49 )
  {
    InheritedMonitor = ValidateHmonitorNoRip(*((_QWORD *)v49 + 44));
    v199 = InheritedMonitor;
  }
  if ( InheritedMonitor
    || (InheritedMonitor = MonitorFromRect(&v241, 2LL, v57), v199 = InheritedMonitor, v59 = 0LL, InheritedMonitor) )
  {
    v59 = *(_QWORD *)InheritedMonitor;
  }
  v40[44] = v59;
  *((_WORD *)v40 + 180) = *(_WORD *)(InheritedMonitor + 152);
  *((_DWORD *)v40 + 72) |= 0x8000000u;
  if ( v40[3] )
  {
    MessageWindow = GetMessageWindow((__int64)v40);
    HMAssignmentLock(v40 + 11, MessageWindow);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v40) )
  {
    ThreadDesktopWindow = (__int64 *)v49;
    if ( !v50 && (!v49 || v49 != *(struct tagWND **)(*((_QWORD *)v49 + 3) + 96LL)) )
      ThreadDesktopWindow = (__int64 *)GetThreadDesktopWindow(0LL);
    memset(v239, 0, sizeof(v239));
    GetWindowCompositionInfo(v40, v239);
    v62 = 0LL;
    if ( ThreadDesktopWindow )
      v62 = *ThreadDesktopWindow;
    v63 = v40[3];
    ClassStyle = DwmGetClassStyle((__int64)v40);
    v69 = (void *)ReferenceDwmApiPort(v66, v65, v67, v68);
    DwmAsyncChildCreate(
      v69,
      *v40,
      v62,
      *((_DWORD *)v40 + 13),
      *((_DWORD *)v40 + 12),
      *((_DWORD *)v40 + 72),
      ClassStyle,
      (__int128 *)v239,
      *(_QWORD *)(v63 + 40),
      &v241);
  }
  v40[7] = v211;
  v70 = v201;
  v71 = v197;
  v40[18] = MapClientNeuterToClientPfn((__int64)v197, 0LL, (unsigned __int16)v201);
  SetOrClrWF((*((_BYTE *)v71 + 34) & 1) != 0, v40, 0x204u, 1);
  if ( *((_QWORD *)v71 + 14) && !*((_QWORD *)v71 + 19) )
    xxxCreateClassSmIcon(v71);
  SetOrClrWF(1, v40, v70, 1);
  if ( (*((_BYTE *)v71 + 34) & 2) != 0
    || v70
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
    SetOrClrWF(1, v40, 0x208u, 1);
  }
  v72 = gptiCurrent;
  AppCompatFlags = GetAppCompatFlags(gptiCurrent);
  v77 = AppCompatFlags;
  if ( (AppCompatFlags & 0x8000000) != 0 )
  {
    SetOrClrWF(1, v40, 0x408u, 1);
    v188 &= 0x3Fu;
    DWORD2(v226[4]) = BYTE8(v226[4]) & 0x3F;
  }
  *((_WORD *)v40 + 32) = 0;
  if ( a15 < 0x30Au )
  {
    if ( (v77 & 0x40) != 0 )
    {
      v78 = 1600;
LABEL_164:
      SetOrClrWF(1, v40, v78, 1);
    }
  }
  else
  {
    SetOrClrWF(1, v40, 0x501u, 1);
    if ( a15 >= 0x400u )
    {
      SetOrClrWF(1, v40, 0x502u, 1);
      if ( a15 >= 0x500u )
      {
        v78 = 1284;
        goto LABEL_164;
      }
    }
  }
  v79 = a15;
  if ( a15 <= *(_WORD *)(gptiCurrent + 564LL) )
    v79 = *(_DWORD *)(gptiCurrent + 564LL);
  *((_DWORD *)v40 + 77) = v79;
  if ( (GetAppCompatFlags2(39168LL, v74, v75, v76) & 0x10000000) != 0 )
    SetOrClrWF(1, v40, 0xA80u, 1);
  if ( gihmodUserApiHook >= 0 )
    xxxLoadUserApiHook();
  if ( (unsigned int)WantImeWindow(v49, (struct tagWND *)v40) )
    xxxCallCtfHook(5LL, 3LL, *v40);
  v80 = *(_QWORD *)(gptiCurrent + 424LL);
  v81 = (unsigned int)(*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(v80 + 24));
  if ( ((*(_BYTE *)(gptiCurrent + 608LL) | *(_BYTE *)(v80 + 24)) & 0x40) != 0 )
  {
    v224 = (char **)v226;
    v225 = 0LL;
    if ( !(unsigned int)xxxCallHook(3, *v40, (__int64)&v224, 5u) )
    {
      v83 = HIDWORD(v226[2]);
      a6 = HIDWORD(v226[2]);
      v84 = DWORD2(v226[2]);
      a7 = DWORD2(v226[2]);
      v85 = DWORD1(v226[2]);
      a8 = DWORD1(v226[2]);
      v86 = v226[2];
      a9 = v226[2];
      v198 = v225;
      goto LABEL_177;
    }
    goto LABEL_436;
  }
  v198 = 0LL;
  v83 = a6;
  v84 = a7;
  v85 = a8;
  v86 = a9;
LABEL_177:
  v87 = *((_BYTE *)v40 + 55) & 0xC0;
  if ( v87 == 64 )
  {
    v82 = 1LL;
    v191 = 1;
    if ( !v49 )
      goto LABEL_436;
  }
  else
  {
    v82 = 0LL;
    v191 = 0;
  }
  v88 = v209;
  if ( (_DWORD)v82 != v215 )
    v88 = 0LL;
  v209 = v88;
  if ( v87 )
  {
    v89 = 0;
    if ( v83 == 0x80000000 || v83 == 0x8000 )
    {
      v83 = 0;
      a6 = 0;
      v84 = 0;
      a7 = 0;
    }
    if ( v85 == 0x80000000 || v85 == 0x8000 )
    {
      v85 = 0;
      a8 = 0;
      v86 = 0;
      a9 = 0;
    }
  }
  else
  {
    v89 = 1;
  }
  v192 = __PAIR64__(v84, v83);
  v193 = v85;
  v194 = v86;
  if ( (_DWORD)v82 )
  {
    if ( v49 != (struct tagWND *)GetDesktopWindow(v40) )
    {
      LODWORD(v192) = v83 + *((_DWORD *)v49 + 32);
      v82 = v84 + *((_DWORD *)v49 + 33);
      HIDWORD(v192) = v84 + *((_DWORD *)v49 + 33);
    }
    v198 = (struct tagWND *)1;
  }
  if ( v89 )
  {
    SetOrClrWF(1, v40, 0xF04u, 1);
    v208 = 192;
    if ( (*((_BYTE *)v40 + 45) & 2) != 0 )
      SetOrClrWF(1, v40, 0x901u, 1);
    SetOrClrWF(1, v40, 0x10u, 1);
    v91 = 0x80000000LL;
    v92 = 0x8000LL;
    if ( (v83 == 0x80000000 || v83 == 0x8000) && HIDWORD(v192) != 0x80000000 )
    {
      v90 = v202;
      if ( HIDWORD(v192) != 0x8000 )
        v90 = HIDWORD(v192);
      v202 = v90;
    }
    v93 = 0LL;
    v199 = 0LL;
    if ( v83 == 0x80000000 || v83 == 0x8000 || a8 == 0x80000000 || a8 == 0x8000 )
    {
      v94 = gptiCurrent;
      v92 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 664LL);
      if ( v92 )
      {
        v95 = ValidateHmonitor();
        goto LABEL_210;
      }
      if ( v49 )
      {
        v95 = MonitorFromWindow(v49, 2LL);
LABEL_210:
        v93 = v95;
        v199 = v95;
      }
    }
    else
    {
      v94 = gptiCurrent;
    }
    if ( !v93 )
    {
      v93 = *(_QWORD *)(GetDispInfo(v92, v90, v91) + 88);
      v199 = v93;
    }
    SetTiledRect(v40, &v240, v93);
    if ( v83 == 0x80000000 || v83 == 0x8000 )
    {
      v82 = *(_QWORD *)(v94 + 384);
      if ( (*(_DWORD *)(v82 + 768) & 4) != 0 )
      {
        v203 = 1;
        v83 = *(_DWORD *)(v82 + 752);
        HIDWORD(v192) = *(_DWORD *)(v82 + 756);
        a7 = HIDWORD(v192);
      }
      else
      {
        v83 = v240;
        v82 = DWORD1(v240);
        a7 = DWORD1(v240);
        HIDWORD(v192) = DWORD1(v240);
      }
      LODWORD(v192) = v83;
      a6 = v83;
      v97 = 1;
    }
    else
    {
      v96 = *(_WORD *)(v93 + 154);
      if ( v96 )
        *(_WORD *)(v93 + 154) = v96 - 1;
      v97 = v206;
    }
    if ( a8 == 0x80000000 || a8 == 0x8000 )
    {
      v72 = gptiCurrent;
      v82 = *(_QWORD *)(gptiCurrent + 384LL);
      if ( (*(_DWORD *)(v82 + 768) & 2) != 0 )
      {
        v203 = 1;
        v193 = *(_DWORD *)(v82 + 760);
        v107 = *(_DWORD *)(v82 + 764);
      }
      else
      {
        v193 = DWORD2(v240) - v83;
        v107 = HIDWORD(v240) - a7;
      }
      v194 = v107;
    }
    else
    {
      if ( v97 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v98) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v98 = 0LL)
            : (v98 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              !(_DWORD)v98) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v98) + 776) & 0x2000) == 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v98 = 0LL)
              : (v98 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v99 = v93 + 60,
                !(_DWORD)v98) )
          {
            v99 = v93 + 28;
          }
        }
        else
        {
          v99 = v93 + 44;
        }
        v100 = a8 + v192 - *(_DWORD *)(v99 + 8);
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v98) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x4000) != 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v82 = 0LL)
            : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              !(_DWORD)v82) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x2000) == 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v82 = 0LL)
              : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v101 = v93 + 60,
                !(_DWORD)v82) )
          {
            v101 = v93 + 28;
          }
        }
        else
        {
          v101 = v93 + 44;
        }
        v102 = a9 + HIDWORD(v192) - *(_DWORD *)(v101 + 12);
        if ( v100 > 0 )
        {
          a6 -= v100;
          LODWORD(v192) = a6;
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v82 = 0LL)
              : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                !(_DWORD)v82) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x2000) == 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v82 = 0LL)
                : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v103 = (signed int *)(v93 + 60),
                  !(_DWORD)v82) )
            {
              v103 = (signed int *)(v93 + 28);
            }
          }
          else
          {
            v103 = (signed int *)(v93 + 44);
          }
          if ( a6 < *v103 )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v82 = 0LL)
                : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  !(_DWORD)v82) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x2000) == 0
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v82 = 0LL)
                  : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                    v104 = (signed int *)(v93 + 60),
                    !(_DWORD)v82) )
              {
                v104 = (signed int *)(v93 + 28);
              }
            }
            else
            {
              v104 = (signed int *)(v93 + 44);
            }
            a6 = *v104;
            LODWORD(v192) = *v104;
          }
        }
        if ( v102 > 0 )
        {
          a7 -= v102;
          HIDWORD(v192) = a7;
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x4000) != 0
            || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v82 = 0LL)
              : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                !(_DWORD)v82) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x2000) == 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v82 = 0LL)
                : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v105 = v93 + 60,
                  !(_DWORD)v82) )
            {
              v105 = v93 + 28;
            }
          }
          else
          {
            v105 = v93 + 44;
          }
          if ( a7 < *(_DWORD *)(v105 + 4) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v82 = 0LL)
                : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  !(_DWORD)v82) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v82) + 776) & 0x2000) == 0
                || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v82 = 0LL)
                  : (v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                    v106 = v93 + 60,
                    !(_DWORD)v82) )
              {
                v106 = v93 + 28;
              }
            }
            else
            {
              v106 = v93 + 44;
            }
            a7 = *(_DWORD *)(v106 + 4);
            HIDWORD(v192) = a7;
          }
        }
      }
      v72 = gptiCurrent;
    }
  }
  if ( v203 )
    *(_DWORD *)(*(_QWORD *)(v72 + 384) + 768LL) &= 0xFFFFFFF9;
  if ( (((*((_BYTE *)v40 + 55) & 0xC0) + 0x80) & 0xBF) == 0 )
    SetOrClrWF(1, v40, 0xF04u, 1);
  *((_WORD *)v40 + 27) |= v208;
  v81 = (__int64)v209;
  if ( !v209 && !v191 && *((_QWORD *)v197 + 17) )
  {
    v108 = v40;
    if ( v40[11] )
      v108 = (_QWORD *)v40[11];
    zzzLockDisplayAreaAndInvalidateDCCache(v108, 16LL, 0LL);
    RtlInitUnicodeStringOrId(&v229, *((WCHAR **)v197 + 17));
    v81 = xxxClientLoadMenu(*((_QWORD *)v197 + 13), &v229);
    v82 = (*((_BYTE *)v40 + 55) & 0xC0) == 64;
    if ( (*((_BYTE *)v40 + 55) & 0xC0) == 0x40 )
    {
      DestroyMenu(v81);
      v81 = 0LL;
    }
    if ( v81 )
      *(_QWORD *)&v226[1] = *(_QWORD *)v81;
    else
      *(_QWORD *)&v226[1] = 0LL;
  }
  if ( (*((_BYTE *)v40 + 55) & 0xC0) == 0x40 )
    v40[24] = v81;
  else
    LockWndMenu((__int64)v40, v40 + 24, v81);
  if ( (*((_BYTE *)v40 + 55) & 0xC0) == 0x40 )
  {
    if ( !v49 )
      goto LABEL_436;
    if ( (a16 & 2) != 0 )
    {
LABEL_337:
      v109 = 87LL;
LABEL_338:
      UserSetLastError(v109);
      goto LABEL_436;
    }
  }
  else
  {
    v110 = a16;
    if ( (a16 & 4) != 0 )
      CoreWindowProp::SetRole(v40, 1LL);
    HMAssignmentLock(v40 + 30, v40);
    if ( (unsigned int)IsTopLevelParent(v49) )
    {
      v113 = v40 + 13;
      HMAssignmentLock(v40 + 13, 0LL);
    }
    else
    {
      NonChildAncestor = GetNonChildAncestor(v111);
      if ( !(unsigned int)ValidateOwnerDepth(v40, NonChildAncestor) )
        goto LABEL_337;
      if ( NonChildAncestor )
      {
        *((_DWORD *)v40 + 76) = *(_DWORD *)(NonChildAncestor + 304);
        SetOrClrWF(*(_BYTE *)(NonChildAncestor + 290) & 0x40, v40, 0xFA40u, 1);
        WindowCloakState = GetWindowCloakState(NonChildAncestor);
      }
      v113 = v40 + 13;
      HMAssignmentLock(v40 + 13, NonChildAncestor);
      if ( v40[13] && ((*(_BYTE *)(v40[13] + 48LL) & 8) != 0 || *((_DWORD *)v40 + 76) != 1) )
        SetOrClrWF(1, v40, 0x808u, 1);
      if ( Atom != *(_WORD *)(gpsi + 882LL) )
      {
        if ( *v113 )
        {
          v114 = *(_QWORD *)(*v113 + 16LL);
          if ( v114 != v72 )
            zzzAttachThreadInput(v72, v114, 1);
        }
      }
      v110 = a16;
    }
    if ( !*v113 )
    {
      if ( (v115 = *((_DWORD *)v40 + 76), v115 <= 0xF) && (v116 = 44800, _bittest(&v116, v115))
        || (*((_BYTE *)v40 + 290) & 0x40) != 0 )
      {
        WindowCloakState = 2;
      }
    }
    if ( !v49 || v49 != *(struct tagWND **)(*((_QWORD *)v49 + 3) + 96LL) )
    {
      v49 = (struct tagWND *)GetThreadDesktopWindow(0LL);
      v237[0] = *(_QWORD *)(v72 + 376);
      *(_QWORD *)(v72 + 376) = v237;
      v237[1] = v49;
      if ( v49 )
        ++*((_DWORD *)v49 + 2);
      v204 = 1;
    }
    if ( (v110 & 2) != 0 )
    {
      if ( *(_QWORD *)(v72 + 1232) )
        goto LABEL_337;
      SetOrClrWF(1, v40, 0xFA80u, 1);
      *(_DWORD *)(v72 + 1080) |= 0x40000u;
      *(_DWORD *)(*(_QWORD *)(v72 + 392) + 332LL) |= 0x2000000u;
      if ( !*(_QWORD *)(v72 + 1224) )
      {
        KernelEvent = CreateKernelEvent(1LL, 0LL);
        *(_QWORD *)(v72 + 1224) = KernelEvent;
        if ( !KernelEvent )
          goto LABEL_436;
      }
      HMAssignmentLock(v72 + 1232, v40);
    }
  }
  if ( (v40[36] & 8) != 0 )
  {
    v118 = v40[11];
    UnlinkWindow(v40, v118);
  }
  else
  {
    v118 = v223;
  }
  if ( !(unsigned int)IsTopLevelParent(v49) )
  {
    *((_DWORD *)v40 + 76) = *((_DWORD *)v49 + 76);
    SetOrClrWF(*((_BYTE *)v49 + 290) & 0x40, v40, 0xFA40u, 1);
  }
  if ( v49 && !(unsigned int)ValidateNewParent(v40, v49) )
    goto LABEL_436;
  v119 = (struct tagWND **)(v40 + 11);
  HMAssignmentLock(v40 + 11, v49);
  if ( v49 )
    v120 = -__CFSHR__(*((_DWORD *)v49 + 72), 27);
  else
    v120 = 0;
  SetWindowSubtreeCoreWindowStatus((__int64)v40, v120);
  if ( *((_DWORD *)v40 + 86) != 2 )
    UpdateWindowDPITransform((__int64)v40, v199);
  v121 = v197;
  if ( (*((_BYTE *)v40 + 45) & 1) == 0 && (*((_DWORD *)v197 + 21) & 0x80u) != 0 && (*((_BYTE *)v49 + 55) & 2) == 0 )
    SetOrClrWF(0, v40, 0xF06u, 1);
  v122 = WindowCloakState;
  if ( (WindowCloakState & 2) == 0 )
    *((_BYTE *)v40 + 290) |= 0x20u;
  if ( v122 )
  {
    v123 = zzzSetWindowCompositionCloak(v40, 0LL, v122);
    if ( v123 < 0 )
    {
      v109 = RtlNtStatusToDosError(v123);
      goto LABEL_338;
    }
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v212);
  if ( v118 )
    zzzLockDisplayAreaAndInvalidateDCCache(v118, 16LL, 0LL);
  if ( v49 )
    zzzLockDisplayAreaAndInvalidateDCCache(v49, 16LL, 0LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v212);
  if ( (*((_BYTE *)v40 + 55) & 0xC0) != 0x40 || (unsigned int)IsTopLevelWindow(v40) )
  {
LABEL_402:
    v124 = gptiCurrent;
  }
  else
  {
    v124 = gptiCurrent;
    if ( *v119 )
    {
      v125 = *((_QWORD *)*v119 + 2);
      if ( gptiCurrent != v125 )
      {
        zzzAttachThreadInput(gptiCurrent, v125, 1);
        v126 = GetMessageWindow((__int64)v40);
        if ( v128 != v126 && *(_DWORD *)(v128 + 344) != *((_DWORD *)v40 + 86) )
          xxxForceUpdateProcessDpiAwareness(v127);
        goto LABEL_402;
      }
    }
  }
  if ( v213 != (char **)(unsigned __int16)gatomMessage
    && v213 != (char **)32769
    && v213 != (char **)32774
    && !*(_DWORD *)(v124 + 780) )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v124 + 408) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    xxxUpdateInputHangInfo(0LL, 1LL);
  }
  xxxAdjustSize((__int64)v40, &v193, &v194);
  ConstrainWindowSIZERECT((__int64)&v192);
  if ( v40[3] && (*((_BYTE *)v40 + 55) & 0x40) == 0 && *((char *)v40 + 48) >= 0 )
    xxxCheckFullScreen(v40, &v192);
  v129 = v193;
  if ( v193 < 0 )
    v129 = 0;
  v193 = v129;
  v130 = v194;
  if ( v194 < 0 )
    v130 = 0;
  v194 = v130;
  v131 = v40 + 14;
  RECTFromSIZERECT((_DWORD *)v40 + 28, &v192);
  if ( (*((_BYTE *)v40 + 51) & 0x20) != 0 && GetRedirectionBitmap((__int64)v40) )
  {
    GreLockVisRgn(*gpDispInfo);
    v132 = RecreateRedirectionBitmap((struct tagWND *)v40, 0LL, 0LL, 0LL, 0, 0LL);
    v133 = *gpDispInfo;
    if ( v132 < 0 )
    {
LABEL_419:
      GreUnlockVisRgn(v133);
      goto LABEL_436;
    }
    GreUnlockVisRgn(v133);
  }
  v134 = *((_BYTE *)v121 + 84);
  if ( (v134 & 0x20) != 0 || (v134 & 0x40) != 0 && !*((_QWORD *)v121 + 3) )
  {
    v135 = 0x8000;
    if ( GetStyleWindow(v40, 2848LL) )
      v135 = 49152;
    GreLockVisRgn(*gpDispInfo);
    CacheDC = CreateCacheDC(v40, v135, 0LL);
    v133 = *gpDispInfo;
    if ( !CacheDC )
      goto LABEL_419;
    GreUnlockVisRgn(v133);
  }
  if ( (v188 & 0x80000) != 0
    && (*((_BYTE *)v40 + 50) & 8) == 0
    && (int)xxxSetLayeredWindow((struct tagWND *)v40, 0, 0LL) < 0 )
  {
    goto LABEL_436;
  }
  if ( (v188 & 0x2000000) != 0 && !GetStyleWindow(*v119, 2818LL) )
  {
    SetOrClrWF(1, v40, 0xB02u, 1);
    if ( (int)SetRedirectedWindow((struct tagWND *)v40, 2) < 0 )
    {
      SetOrClrWF(0, v40, 0xB02u, 1);
      goto LABEL_436;
    }
  }
  *((_QWORD *)&v226[2] + 1) = __PAIR64__(a6, a7);
  *(_QWORD *)&v226[2] = __PAIR64__(a8, a9);
  if ( !xxxSendMessage(v40, 129LL, 0LL) )
  {
LABEL_436:
    v137 = *((_BYTE *)v40 + 55) & 0x10;
    if ( v204 )
      ThreadUnlock1(v82, v81);
    SetOrClrWF(1, v40, 0x480u, 1);
    SetOrClrWF(1, v40, 0x380u, 1);
    if ( v137 )
      SetVisible(v40, 0LL);
    v138 = v40[11];
    if ( v138 )
    {
      if ( v137 )
        zzzLockDisplayAreaAndInvalidateDCCache(v138, 16LL, 0LL);
      if ( (*((_BYTE *)v40 + 55) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(v40) )
      {
        v139 = *(_QWORD *)(v40[11] + 16LL);
        if ( gptiCurrent != v139 )
          zzzAttachThreadInput(v40[2], v139, 0);
      }
      UnlinkWindow(v40, v40[11]);
    }
    ClassUnlock(v197);
    xxxFreeWindow((struct tagWND *)v40);
    return 0LL;
  }
  if ( (*(_BYTE *)(v40[19] + 85LL) & 2) != 0 )
  {
    SystemMenu = xxxGetSystemMenu((__int64)v40, 0);
    if ( SystemMenu )
    {
      v234[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v234;
      v234[1] = SystemMenu;
      ++*(_DWORD *)(SystemMenu + 8);
      xxxRemoveDeleteMenuHelper((struct tagMENU *)SystemMenu, 5LL, 1024);
      xxxRemoveDeleteMenuHelper((struct tagMENU *)SystemMenu, 5LL, 1024);
      ThreadUnlock1(v142, v141);
    }
  }
  if ( (*((_BYTE *)v40 + 42) & 2) != 0 && (!*((_QWORD *)&v226[5] + 1) || LODWORD(v226[5]) || v40[28]) )
  {
    *((_QWORD *)&v226[3] + 1) = v40[28];
    v226[5] = *(_OWORD *)(v40 + 27);
  }
  if ( (*gpsi & 4) != 0 )
  {
    v143 = (_QWORD *)(gptiCurrent + 704LL);
    if ( !*(_QWORD *)(gptiCurrent + 704LL) )
    {
      if ( (unsigned int)WantImeWindow(v49, (struct tagWND *)v40) )
      {
        DefaultImeWindow = xxxCreateDefaultImeWindow((__int64)v40, Atom, v211);
        HMAssignmentLock(v143, DefaultImeWindow);
        v145 = *v143;
        if ( *v143 )
        {
          v235[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v235;
          v235[1] = v145;
          ++*(_DWORD *)(v145 + 8);
          xxxSendMessage(*v143, 647LL, 33LL);
          ThreadUnlock1(v147, v146);
        }
        v81 = gptiCurrent;
        v148 = (**(unsigned __int8 **)(gptiCurrent + 440LL) >> 6) & 1;
        v231 = v148;
        v149 = *v143;
        if ( *v143 && v148 )
        {
          v236[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v236;
          v236[1] = v149;
          if ( v149 )
            ++*(_DWORD *)(v149 + 8);
          xxxSendMessage(*v143, 647LL, 25LL);
          **(_QWORD **)(gptiCurrent + 440LL) &= ~0x40uLL;
          ThreadUnlock1(v151, v150);
        }
      }
    }
  }
  if ( !v49 || (v40[36] & 8) != 0 && *v119 != v49 )
  {
LABEL_491:
    if ( (*((_BYTE *)v40 + 55) & 0xC0) == 0x40 && (*((_BYTE *)v49 + 50) & 0x40) != 0 )
    {
      v159 = *((_DWORD *)v40 + 30) - *v131;
      v160 = *((_DWORD *)v49 + 32) + *((_DWORD *)v49 + 34) - *v131;
      *((_DWORD *)v40 + 30) = v160;
      *v131 = v160 - v159;
    }
    v240 = *(_OWORD *)v131;
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((struct tagWND *)v40, 0x83u, 0LL, (__int64)&v240, 0, 0, 0LL, 1, 0);
    *((_OWORD *)v40 + 8) = v240;
    if ( xxxSendMessage(v40, 1LL, 0LL) == -1 )
      goto LABEL_495;
    SetOrClrWF(1, v40, 0x780u, 1);
    if ( (unsigned int)IsWindowDesktopComposed(v40) )
    {
      v166 = (void *)ReferenceDwmApiPort(v163, v162, v164, v165);
      DwmAsyncChildStyleChange(v166, *v40, -16, *((_DWORD *)v40 + 13));
      DwmChildRectChange(v40);
      v171 = (__int64 *)v40[13];
      if ( v171 )
        v172 = *v171;
      else
        v172 = 0LL;
      v173 = (void *)ReferenceDwmApiPort(v168, v167, v169, v170);
      DwmAsyncOwnerChange(v173, *v40, v172);
    }
    xxxWindowEvent(0x8000, (_DWORD)v40, 0, 0, 0);
    if ( (v40[5] & 0x10) == 0 )
    {
      xxxSendSizeMessage(v40, 0LL);
      if ( v49 && (struct tagWND *)GetDesktopWindow(v40) != v49 )
      {
        LODWORD(v240) = v240 - *((_DWORD *)v49 + 32);
        DWORD1(v240) -= *((_DWORD *)v49 + 33);
      }
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(
        (struct tagWND *)v40,
        3u,
        0LL,
        (unsigned __int16)v240 | (WORD2(v240) << 16),
        0,
        0,
        0LL,
        1,
        0);
    }
    v174 = *((_BYTE *)v40 + 55);
    if ( (v174 & 0x20) != 0 )
    {
      SetMinimize((__int64)v40, 0);
      v175 = 7;
    }
    else
    {
      if ( (v174 & 1) == 0 )
        goto LABEL_515;
      SetOrClrWF(0, v40, 0xF01u, 1);
      v175 = 3;
    }
    xxxMinMaximizeEx((struct tagWND *)v40, v175, gdwPUDFlags & 0x10000 | 1, 0LL, 0LL);
LABEL_515:
    CalcWindowFullScreen(v40);
    if ( (*((_BYTE *)v40 + 55) & 0xC0) == 0x40 && (v40[6] & 4) == 0 )
    {
      v176 = *v119;
      if ( *v119 )
      {
        v238[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v238;
        v238[1] = v176;
        ++*((_DWORD *)v176 + 2);
        v177 = *v40;
        v178 = (*((unsigned __int16 *)v40 + 96) << 16) | 1;
        v179 = *v119;
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v179, 0x210u, v178, v177, 0, 0, 0LL, 1, 0);
        ThreadUnlock1(v181, v180);
      }
    }
    xxxInheritWindowMonitor((struct tagWND *)v40, 0LL, 0);
    if ( (a5 & 0x10000000) != 0 )
      xxxShowWindow((struct tagWND *)v40);
    if ( (*((_BYTE *)v40 + 55) & 0xC0) == 0 || (*((_BYTE *)v40 + 50) & 4) != 0 )
    {
      v183 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 384LL) + 660LL);
      if ( (_DWORD)v183 )
      {
        xxxSendMessage(v40, 50LL, (unsigned int)v183);
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 660LL) = 0;
      }
    }
    if ( v204 )
      ThreadUnlock1(v183, v182);
    PopW32ThreadLock(v232);
    ClassUnlockWorker(v197);
    result = (_DWORD *)ThreadUnlock1(v185, v184);
    if ( !result
      || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*result + gSharedInfo[1] + 17LL) & 1) != 0 )
    {
      return 0LL;
    }
    return result;
  }
  v152 = PWInsertAfter((unsigned __int64)v198, v81);
  v153 = v152;
  if ( (unsigned __int64)(v152 - 2) <= 0xFFFFFFFFFFFFFFFBuLL && *(struct tagWND **)(v152 + 88) != *v119 )
    v153 = v191 != 0;
  v154 = v40[13];
  if ( v154 )
  {
    *((_DWORD *)v40 + 76) = *(_DWORD *)(v154 + 304);
    SetOrClrWF(*(_BYTE *)(v154 + 290) & 0x40, v40, 0xFA40u, 1);
  }
  if ( (unsigned int)ValidateNewParent(v40, v49) )
  {
    UnlinkWindow(v40, *v119);
    if ( (*((_BYTE *)v40 + 55) & 0xC0) != 0x40 && v49 != *(struct tagWND **)(*((_QWORD *)v49 + 3) + 96LL) )
    {
      if ( (v40[6] & 8) != 0 )
      {
        if ( gHardErrorHandler )
        {
          TopMostInsertAfter = GetTopMostInsertAfter(v40);
          if ( TopMostInsertAfter )
            v153 = TopMostInsertAfter;
        }
      }
      else
      {
        if ( !v153 )
          goto LABEL_485;
        v157 = 0;
        if ( v153 >= 0xFFFFFFFFFFFFFFFEuLL || v153 == 1 )
          v157 = 1;
        if ( !v157 && (*(_BYTE *)(v153 + 48) & 8) != 0 )
LABEL_485:
          v153 = CalcForegroundInsertAfter(v40);
      }
    }
    if ( v153 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LinkWindow((struct tagWND *)v40);
      zzzLockDisplayAreaAndInvalidateDCCache(v49, 16LL, 0LL);
      goto LABEL_491;
    }
  }
LABEL_495:
  v161 = v197;
  if ( v204 )
    ThreadUnlock1(v156, v155);
  if ( ThreadUnlock1(v156, v155) )
    xxxDestroyWindow(v40);
  ClassUnlock(v161);
  return 0LL;
}
