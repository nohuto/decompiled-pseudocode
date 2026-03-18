/*
 * XREFs of xxxTrackPopupMenuEx @ 0x140177014
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     NtUserTrackPopupMenuEx @ 0x1402C0470 (NtUserTrackPopupMenuEx.c)
 *     xxxDoScrollMenu @ 0x1402F8250 (xxxDoScrollMenu.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     MNAnimate @ 0x14000ED10 (MNAnimate.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x140013EAC (-IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z @ 0x140013EDC (-IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetMonitorRectForWindow @ 0x1400313D4 (GetMonitorRectForWindow.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140032BC8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     SubtractRect @ 0x14003ECCC (SubtractRect.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     ?IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z @ 0x1400461A8 (-IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140046254 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     _MonitorFromPoint @ 0x14008A650 (_MonitorFromPoint.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401663E8 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     GetMonitorMenuRectForWindow @ 0x140175FCC (GetMonitorMenuRectForWindow.c)
 *     FindBestPos @ 0x14017604C (FindBestPos.c)
 *     xxxPlayEventSound @ 0x140176A50 (xxxPlayEventSound.c)
 *     xxxMNStartMenu @ 0x140176B5C (xxxMNStartMenu.c)
 *     LockPopupMenu @ 0x140176F40 (LockPopupMenu.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x140177E84 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     xxxMNEndMenuState @ 0x140177ED0 (xxxMNEndMenuState.c)
 *     xxxMNReleaseCapture @ 0x140178014 (xxxMNReleaseCapture.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x140178FF8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14017A2E8 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1401D77C4 (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     MNClearCachedPopupSizes @ 0x140235800 (MNClearCachedPopupSizes.c)
 *     MNAllocMenuState @ 0x140290298 (MNAllocMenuState.c)
 *     ?GetMenuRightAlignHint@@YA_NXZ @ 0x140295A68 (-GetMenuRightAlignHint@@YA_NXZ.c)
 *     xxxUserModeCallback @ 0x1402D8670 (xxxUserModeCallback.c)
 */

__int64 __fastcall xxxTrackPopupMenuEx(__int64 a1, unsigned int a2, LONG a3, LONG a4, __int64 a5, __int64 a6)
{
  struct tagTHREADINFO *v7; // rax
  unsigned int v8; // esi
  __int64 v9; // r12
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // rdi
  __int64 v12; // rbx
  int v13; // r15d
  __int16 KeyState; // ax
  _BOOL8 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // rdi
  __int64 Window; // rdi
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rdx
  _QWORD **v27; // rbx
  __int64 v28; // rax
  int v29; // r14d
  int v30; // ebx
  __int64 v32; // rcx
  struct tagTHREADINFO *v33; // rax
  unsigned int *v34; // rdx
  unsigned int v35; // ecx
  bool v36; // cf
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // r9d
  __int64 v40; // rax
  int v41; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // ebx
  __int64 UserSessionState; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rcx
  struct tagMONITOR *v52; // r9
  unsigned int *v53; // rcx
  unsigned int v54; // eax
  __int64 v55; // rcx
  int BestPos; // ebx
  struct tagWND *TopLevelHostForComponent; // rbx
  __int64 v58; // rdx
  unsigned int i; // edx
  __int64 v60; // rax
  int v61; // ecx
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rcx
  int v67; // eax
  char v68; // al
  __int64 v69; // rax
  _QWORD *v70; // rcx
  char v71; // [rsp+28h] [rbp-F0h]
  __int64 v72; // [rsp+98h] [rbp-80h] BYREF
  __int64 v73; // [rsp+A0h] [rbp-78h] BYREF
  int v74; // [rsp+A8h] [rbp-70h]
  ULONG_PTR v75; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v76; // [rsp+C0h] [rbp-58h] BYREF
  int v77; // [rsp+C8h] [rbp-50h]
  int v78[2]; // [rsp+D0h] [rbp-48h] BYREF
  int v79; // [rsp+D8h] [rbp-40h]
  struct tagMONITOR *v80; // [rsp+E0h] [rbp-38h]
  struct tagRECT v81; // [rsp+E8h] [rbp-30h] BYREF
  __int64 v82[2]; // [rsp+F8h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+108h] [rbp-10h] BYREF
  __m128i v84; // [rsp+118h] [rbp+0h] BYREF
  __int64 v85[10]; // [rsp+128h] [rbp+10h] BYREF

  v7 = PtiCurrent(a1);
  v8 = 0;
  v72 = gSmartObjNullRef;
  *(_QWORD *)&v81.left = 0LL;
  v9 = 0LL;
  v73 = *((_QWORD *)v7 + 209);
  *((_QWORD *)v7 + 209) = &v73;
  v78[0] = 0;
  v74 = 0;
  *(_OWORD *)v82 = 0LL;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
      goto LABEL_82;
    *(_OWORD *)v82 = *(_OWORD *)(a6 + 4);
  }
  v10 = PtiCurrent((__int64)&v73);
  v11 = v10;
  v80 = v10;
  if ( v10 != *(struct tagTHREADINFO **)(a5 + 16) )
  {
LABEL_82:
    v61 = 87;
    goto LABEL_84;
  }
  v12 = *((_QWORD *)v10 + 80);
  v13 = 1;
  if ( v12 )
  {
    if ( (a2 & 1) != 0 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v72, *(_QWORD *)v12);
      v62 = *(_QWORD *)(*(_QWORD *)v72 + 8LL);
      if ( (*(_DWORD *)(v12 + 8) & 4) == 0
        || (**(_DWORD **)v72 & 0x8000) != 0
        || !v62
        || v62 != a5
        || *(_QWORD *)(v12 + 32) != *(_QWORD *)(v62 + 16) )
      {
        goto LABEL_85;
      }
      MNAnimate((__int64 *)v12, 0LL);
      v63 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v72 + 56LL));
      if ( v63 )
        v64 = *(_QWORD *)(v63 + 8);
      else
        v64 = 0LL;
      SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v72, v64);
      if ( *(_QWORD *)v72 && (**(_DWORD **)v72 & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(*(_QWORD *)v72 + 16LL), 65534LL, 0, 1, 0LL);
        **(_DWORD **)v72 &= ~0x2000u;
      }
      if ( (*(_DWORD *)(v12 + 8) & 0x100) == 0 )
        *(_DWORD *)(*((_QWORD *)v11 + 58) + 436LL) &= ~0x100000u;
      goto LABEL_4;
    }
    v61 = 1446;
LABEL_84:
    UserSetLastError(v61);
    goto LABEL_85;
  }
LABEL_4:
  v77 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    v79 = (unsigned __int16)_GetKeyState(2LL) >> 15;
  }
  else
  {
    KeyState = _GetKeyState(1LL);
    v15 = KeyState < 0;
    v79 = KeyState < 0;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v15) & 0xF) == 2
    || (W32GetCurrentThreadDpiAwarenessContext(v16) & 0xF) == 3 )
  {
    *(_QWORD *)v78 = __PAIR64__(a4, a3);
    v17 = *(_QWORD *)(MonitorFromPoint(__SPAIR64__(a4, a3), 2LL, 0) + 40);
    v78[0] = *(_DWORD *)(v17 + 28);
    v74 = *(_DWORD *)(v17 + 32);
  }
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v17);
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    goto LABEL_10;
  v65 = PsGetCurrentProcessWin32Process(v19);
  v66 = v65;
  if ( v65 )
    v66 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)v65 >> 64) & v65;
  v67 = IsImmersiveAppRestricted(v66);
  LODWORD(v75) = 1;
  if ( !v67 )
LABEL_10:
    LODWORD(v75) = 0;
  v20 = *(_QWORD *)(a5 + 40);
  v21 = *(_DWORD *)(v20 + 236);
  v22 = *(_QWORD *)(v20 + 32);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v85, 0);
  Window = xxxCreateWindowEx(
             385,
             0x8000,
             0x8000,
             0,
             -2139095040,
             v78[0],
             v74,
             100,
             100,
             (struct tagWND *)(a5 & -(__int64)((*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) & 0x40000000) != 0)),
             (__int64)v85,
             v22,
             0LL,
             v21,
             2560,
             v75,
             0LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v85);
  if ( Window )
  {
    v75 = safe_cast_fnid_to_PMENUWND(Window);
    if ( !v75 )
    {
      xxxDestroyWindow((struct tagWND *)Window);
LABEL_31:
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v72);
      return v8;
    }
    v24 = (__int64)v80;
    Win32HM_LockIntoThread<0>((__int64)v80, Window, BugCheckParameter3);
    if ( (W32GetCurrentThreadDpiAwarenessContext(v25) & 0xF) == 2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v24 + 456) + 808LL) & 0x100000) != 0
        || ((a2 & 0x200) == 0
          ? (!IsTopLevelWindow(a5)
           ? (v68 = IsChildWindowDpiMessageEnabledX((struct tagWND *)a5))
           : (v68 = IsWindowBroadcastingDpiToChildrenX((struct tagWND *)a5)))
          : (v68 = IsNonClientDpiScalingEnabledX((struct tagWND *)a5, v26)),
            v68) )
      {
        xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
      }
      v27 = (_QWORD **)a1;
    }
    else
    {
      v27 = (_QWORD **)a1;
      if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) & 0x40000000) == 0 )
        xxxInheritWindowMonitor((struct tagWND *)Window, (struct tagWND *)a5, 0);
    }
    v28 = (__int64)*v27;
    *(_QWORD *)v78 = 0LL;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 40LL) + 40LL) & 0x40000000) == 0 )
    {
      TopLevelHostForComponent = (struct tagWND *)Window;
      if ( (!(unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)Window, v26)
         || (TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent((const struct tagWND *)Window, v58)) != 0LL)
        && (*(_BYTE *)(*((_QWORD *)TopLevelHostForComponent + 5) + 233LL) & 0x20) != 0
        && !IsWindowShellCloakedComponentUIAware((const struct tagWND *)a5, 0LL) )
      {
        zzzSetWindowCompositionCloak(Window, 0LL);
      }
      v27 = (_QWORD **)a1;
    }
    if ( (((a2 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) >> 6)) == 0 )
      SetOrClrWF(1, (struct tagWND *)Window, 0xA40u, 1);
    SetOrClrWF(0, (struct tagWND *)Window, 0x408u, 1);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v72, *(_QWORD *)(v75 + 8));
    if ( !*(_QWORD *)v72 )
      goto LABEL_20;
    v76 = a5;
    v75 = *(_QWORD *)v72 + 8LL;
    HMAssignmentLock(&v75, 0LL);
    LockPopupMenu((__int64)&v72, (__int64 *)(*(_QWORD *)v72 + 40LL), (__int64)v27);
    v76 = Window;
    v75 = *(_QWORD *)v72 + 56LL;
    HMAssignmentLock(&v75, 0LL);
    v33 = PtiCurrent(v32);
    v75 = gSmartObjNullRef;
    v76 = *((_QWORD *)v33 + 209);
    *((_QWORD *)v33 + 209) = &v76;
    **(_DWORD **)v72 |= 0x10000u;
    if ( *(_QWORD *)v75 )
    {
      *(_QWORD *)(*(_QWORD *)v72 + 72LL) = *(_QWORD *)(*(_QWORD *)v75 + 72LL);
      **(_DWORD **)v72 |= 0x20000000u;
      *(_QWORD *)(*(_QWORD *)v75 + 72LL) = *(_QWORD *)v72;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v75);
    *(_QWORD *)(*(_QWORD *)v72 + 64LL) = *(_QWORD *)v72;
    **(_DWORD **)v72 |= 8u;
    v34 = *(unsigned int **)v72;
    v35 = (v79 << 9) | **(_DWORD **)v72 & 0xFFFFFDFF;
    v36 = v77 != 0;
    v77 = -v77;
    *v34 = v35;
    **(_DWORD **)v72 = **(_DWORD **)v72 & 0xFFFFFFBF | (v36 ? 0x40 : 0);
    if ( GetMenuRightAlignHint() || (*(_DWORD *)(*(_QWORD *)(**v27 + 40LL) + 40LL) & 0x20) != 0 )
      **(_DWORD **)v72 |= 0x10u;
    **(_DWORD **)v72 = **(_DWORD **)v72 & 0xFFFFF7FF | (16 * (a2 & 0x80));
    v77 = a2 & 0x100;
    if ( (a2 & 0x100) != 0 )
      **(_DWORD **)v72 |= 0x100u;
    **(_DWORD **)v72 = **(_DWORD **)v72 & 0xFFFFFFFB | (a2 >> 7) & 4;
    v9 = MNAllocMenuState(&v72);
    if ( v9 )
    {
      if ( PtiCurrent(v37) == *(struct tagTHREADINFO **)(v9 + 32) )
      {
        ++*(_DWORD *)(v9 + 40);
        v38 = v9;
      }
      else
      {
        v38 = 0LL;
      }
      *(_QWORD *)v78 = v38;
      if ( (**(_DWORD **)v72 & 0x800) == 0 )
        xxxSendMessage((struct tagWND *)a5, 0x211u);
      if ( xxxMNStartMenu((__int64)&v72, v9, -1) )
      {
        if ( (*(_DWORD *)(v9 + 8) & 0x400) != 0 )
        {
          v75 = *(_QWORD *)Window;
          xxxUserModeCallback(100, (unsigned int)&v75, 8, v39, v71);
        }
        if ( (**(_DWORD **)v72 & 0x800) == 0 && *(_QWORD *)(*(_QWORD *)v72 + 8LL) )
        {
          Win32HM_LockIntoThread<0>((__int64)v80, *(_QWORD *)(*(_QWORD *)v72 + 8LL), &v75);
          xxxSendMessage(*(struct tagWND **)(*(_QWORD *)v72 + 8LL), 0x117u);
          **(_DWORD **)v72 |= 0x200000u;
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(&v75);
        }
        if ( (*(_DWORD *)(Window + 380) & 0x100000) != 0 )
        {
          for ( i = 0; i < *(_DWORD *)(*(_QWORD *)(**v27 + 40LL) + 44LL); ++i )
          {
            if ( (**(_DWORD **)(96LL * (int)i + *(_QWORD *)(**v27 + 88LL)) & 0x100) != 0
              || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**v27 + 88LL) + 96LL * (int)i) + 96LL) == -1LL )
            {
              xxxEnableChildWindowDpiMessageX((struct tagWND *)Window);
              break;
            }
          }
        }
        v40 = *(_QWORD *)(Window + 40);
        v41 = *(_DWORD *)(v40 + 288) & 0xF;
        if ( v41 == 3 )
        {
          WindowDpiLastNotify = (*(_DWORD *)(v40 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v40 + 232) & 0x400) != 0 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify(Window);
        }
        else if ( !v41
               && (v69 = *(_QWORD *)(*(_QWORD *)(Window + 16) + 488LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v69 + 8) + 64LL) & 1) != 0 )
        {
          WindowDpiLastNotify = 96;
        }
        else
        {
          WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 456LL) + 272LL);
        }
        if ( WindowDpiLastNotify != *(_WORD *)(**v27 + 76LL) )
        {
          *(_WORD *)(**v27 + 76LL) = WindowDpiLastNotify;
          v70 = v27[2];
          if ( !v70 )
            v70 = (_QWORD *)**v27;
          MNClearCachedPopupSizes(v70);
        }
        v45 = xxxSendMessage((struct tagWND *)Window, 0x1E2u);
        if ( v45 )
        {
          UserSessionState = W32GetUserSessionState(v44, v43);
          if ( (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(UserSessionState + 3056)) == 1
            || (v60 = W32GetUserSessionState(v48, v47),
                (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(v60 + 3056)) == 4) )
          {
            *(_DWORD *)(v9 + 8) |= 0x20u;
            *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) |= 4u;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) &= ~4u;
          }
          LODWORD(v75) = (unsigned __int16)v45 + 6;
          v74 = HIWORD(v45) + 6;
          *(_QWORD *)&v81.left = __PAIR64__(a4, a3);
          v49 = __PAIR64__(a4, a3);
          v50 = MonitorFromPoint(__SPAIR64__(a4, a3), 2LL, 0);
          v51 = *(_QWORD *)(a5 + 40);
          v52 = (struct tagMONITOR *)v50;
          v80 = (struct tagMONITOR *)v50;
          if ( (*(_BYTE *)(v51 + 26) & 0x40) != 0 && (a2 & 4) == 0 )
            a2 ^= 8u;
          if ( (a2 & 8) != 0 )
          {
            a3 -= v75;
            v53 = *(unsigned int **)v72;
            v54 = **(_DWORD **)v72 & 0xF07FFFFF | 0x1000000;
          }
          else
          {
            if ( (a2 & 4) != 0 )
            {
              a3 -= (unsigned int)v75 >> 1;
LABEL_58:
              if ( (a2 & 0x20) != 0 )
              {
                a4 -= v74;
                **(_DWORD **)v72 |= 0x4000000u;
              }
              else if ( (a2 & 0x10) != 0 )
              {
                a4 -= (unsigned int)v74 >> 1;
              }
              else
              {
                **(_DWORD **)v72 |= 0x2000000u;
              }
              if ( (a2 & 0x3C00) != 0 )
                **(_DWORD **)v72 = **(_DWORD **)v72 & 0xF07FFFFF | ((a2 & 0x3C00) << 13);
              v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v72 + 16LL) + 40LL);
              if ( a6 )
              {
                if ( *(_DWORD *)(v55 + 236) != 1 )
                {
LABEL_65:
                  BestPos = FindBestPos(a3, a4, v75, v74, (struct tagRECT *)v82, a2, (unsigned int ***)&v72, v52, v49);
                  if ( (*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) & 0x40) != 0 && (**(_DWORD **)v72 & 0x1800000) != 0 )
                    **(_DWORD **)v72 ^= 0x1800000u;
                  if ( (**(_DWORD **)v72 & 0xF800000) != 0 && (a2 & 0x4000) == 0 )
                    **(_DWORD **)v72 |= 0x8000000u;
                  xxxPlayEventSound(5LL);
                  xxxSetWindowPos(
                    (struct tagWND *)Window,
                    ((*(_DWORD *)(v9 + 8) & 0x100) != 0) - 1LL,
                    (unsigned int)(__int16)BestPos,
                    (unsigned int)SHIWORD(BestPos),
                    0,
                    0,
                    (*(_DWORD *)(v9 + 8) & 0x100) != 0 ? 577 : 593);
                  xxxWindowEvent(6u, (struct tagWND *)Window, -4, 0, 0);
                  *(_DWORD *)(v9 + 8) = (8 * v79) | *(_DWORD *)(v9 + 8) & 0xFFFFFFF7;
                  v30 = xxxMNLoop((struct tagWND ****)&v72, v9, 0LL, 0);
                  v29 = v77;
                  if ( (*(_DWORD *)(v9 + 8) & 0x100) != 0 )
                    goto LABEL_28;
                  goto LABEL_24;
                }
              }
              else
              {
                if ( *(_DWORD *)(v55 + 236) != 1 )
                {
                  *(_OWORD *)v82 = 0LL;
                  **(_DWORD **)v72 &= ~0x80000000;
                  goto LABEL_65;
                }
                v84 = *GetMonitorRectForWindow(&v84, (__int64)v52, (const struct tagWND *)Window);
                v81 = *GetMonitorMenuRectForWindow(&v81, (__int64)v80, (const struct tagWND *)Window);
                SubtractRect((__int64)v82, (__int64)&v84, (__int64)&v81);
                v52 = v80;
              }
              **(_DWORD **)v72 |= 0x80000000;
              goto LABEL_65;
            }
            v53 = *(unsigned int **)v72;
            v54 = ((((**(_DWORD **)v72 & 0x10) != 0) + 1) << 23) | **(_DWORD **)v72 & 0xF07FFFFF;
          }
          *v53 = v54;
          goto LABEL_58;
        }
      }
    }
    else
    {
LABEL_20:
      LOBYTE(a2) = a2 | 0x80;
    }
    xxxWindowEvent(5u, (struct tagWND *)a5, 0, 0, 0);
    xxxMNReleaseCapture(v9);
    if ( (a2 & 0x80u) == 0 )
      xxxSendMessage((struct tagWND *)a5, 0x212u);
    v29 = 1;
    v30 = 0;
LABEL_24:
    if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3)
      && *(char *)(*(_QWORD *)(Window + 40) + 19LL) >= 0 )
    {
      xxxDestroyWindow((struct tagWND *)Window);
    }
    if ( v9 )
      xxxMNEndMenuState(v9);
    xxxDeliverRestoreFocusMessage((struct tagWND *)a5);
LABEL_28:
    if ( v29 )
      v13 = v30;
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v78);
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
    v8 = v13;
    goto LABEL_31;
  }
LABEL_85:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v72);
  return 0LL;
}
