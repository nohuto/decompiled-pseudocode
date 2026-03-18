/*
 * XREFs of xxxAddShadow @ 0x140083B00
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x140011E54 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140032BC8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140047DD0 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400831B0 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     IsSysShadow @ 0x140083EE4 (IsSysShadow.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14017A2E8 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 */

__int64 __fastcall xxxAddShadow(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r15
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rcx
  int v11; // r12d
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  int v14; // r13d
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 UserSessionState; // rax
  struct tagWND *Window; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  _QWORD *v31; // r15
  __int64 v32; // rcx
  struct tagTHREADINFO *v33; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // [rsp+98h] [rbp-19h] BYREF
  struct tagWND *v39; // [rsp+A0h] [rbp-11h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+A8h] [rbp-9h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v42; // [rsp+C8h] [rbp+17h]
  __int64 v43[3]; // [rsp+D0h] [rbp+1Fh] BYREF

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 43264) )
    return 0LL;
  if ( *(_DWORD *)(W32GetUserSessionState(v4, v3) + 63400) )
    return 0LL;
  if ( (*(_DWORD *)(W32GetUserSessionState(v6, v5) + 66796) & 0x80040000) != 0x80040000 )
    return 0LL;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
    return 0LL;
  if ( (unsigned int)IsSysShadow(a1) )
    return 0LL;
  v8 = Win32AllocPoolZInit(24LL, 1685287765LL);
  if ( !v8 )
    return 0LL;
  v9 = PtiCurrent(v7);
  BugCheckParameter2[0] = *((_QWORD *)v9 + 47);
  *((_QWORD *)v9 + 47) = BugCheckParameter2;
  v42 = (__int64)Win32FreePool;
  v10 = *((_QWORD *)a1 + 5);
  BugCheckParameter2[1] = v8;
  v11 = *(_BYTE *)(v10 + 24) & 8 | 0x800A0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v10);
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    goto LABEL_9;
  v36 = PsGetCurrentProcessWin32Process(v13);
  v37 = v36;
  if ( v36 )
    v37 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)v36 >> 64) & v36;
  v14 = 1;
  if ( !(unsigned int)IsImmersiveAppRestricted(v37) )
LABEL_9:
    v14 = 0;
  v15 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v43, 0);
  v18 = *(unsigned __int16 *)(W32GetUserSessionState(v17, v16) + 41366);
  UserSessionState = W32GetUserSessionState(v20, v19);
  Window = (struct tagWND *)xxxCreateWindowEx(
                              v11,
                              *(unsigned __int16 *)(UserSessionState + 41366),
                              v18,
                              0,
                              0x80000000,
                              0,
                              0,
                              0,
                              0,
                              0LL,
                              (__int64)v43,
                              (__int64)hModuleWin,
                              0LL,
                              v15,
                              2560,
                              v14,
                              0LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v43);
  if ( !Window || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
  {
LABEL_22:
    if ( v42 != -1 )
      PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
    return 0LL;
  }
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)Window);
  xxxInheritWindowMonitor(Window, a1, 1);
  v25 = W32GetUserSessionState(v24, v23);
  ++*(_DWORD *)(v25 + 70592);
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 || FindShadow(a1, v26) || !zzzApplyShadow(a1, Window) )
  {
    zzzEndDeferWinEventNotify();
    xxxDestroyWindow(Window);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    goto LABEL_22;
  }
  v29 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 63368);
  *(_QWORD *)(v8 + 16) = v29;
  v38 = (_QWORD *)v8;
  v39 = a1;
  *(_QWORD *)(W32GetUserSessionState(v29, v30) + 63368) = v8;
  HMAssignmentLock(&v38, 0LL);
  v31 = (_QWORD *)(v8 + 8);
  v39 = Window;
  v38 = v31;
  HMAssignmentLock(&v38, 0LL);
  if ( IsWindowCloaked(a1) )
    zzzSetWindowCompositionCloak(*v31, 1LL);
  v42 = (__int64)RemoveShadow;
  zzzEndDeferWinEventNotify();
  xxxSetWindowPos(Window, (__int64)a1, 0LL, 0LL, 0, 0, 83);
  if ( v42 == -1 )
  {
    BugCheckParameter4 = PtiCurrent(v32);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, 0LL, (ULONG_PTR)BugCheckParameter4);
  }
  v33 = PtiCurrent(v32);
  *((_QWORD *)v33 + 47) = BugCheckParameter2[0];
  v42 = -1LL;
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  if ( v42 != -1 )
    PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
  return 1LL;
}
