/*
 * XREFs of ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x14003D278 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 *     fnHkINLPCWPEXSTRUCT @ 0x14003D3D0 (fnHkINLPCWPEXSTRUCT.c)
 *     xxxCallMouseHook @ 0x14003D5A4 (xxxCallMouseHook.c)
 *     xxxPointerCallHook @ 0x1401360C4 (xxxPointerCallHook.c)
 *     EditionKeyEventLLHook @ 0x140172CB0 (EditionKeyEventLLHook.c)
 *     EditionLLMouseButtonHook @ 0x140173290 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1401734E0 (EditionLLMouseWheelHook.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x1401AE4CC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     FreeHook @ 0x1400267F0 (FreeHook.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400378B8 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     PhkNextValid @ 0x14003926C (PhkNextValid.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly@@QEAA@XZ @ 0x14003933C (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@SharedUserCritOnly.c)
 *     xxxLoadHmodIndex @ 0x1400396C0 (xxxLoadHmodIndex.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x14003AAB0 (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x14003B6B0 (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@$$V@-$UnlockDomainShared@VDLT_HOOK@@@SharedUse.c)
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x14003CD54 (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@$$V@-$UnlockDomainShared@VDLT_HOOK@@@SharedUse.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140046FE4 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14004D19C (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     IsPointerInputHookCall @ 0x140155840 (IsPointerInputHookCall.c)
 *     ?DeBoostHook@@YAXPEAUtagHOOK@@@Z @ 0x140190964 (-DeBoostHook@@YAXPEAUtagHOOK@@@Z.c)
 *     ?BoostHook@@YA_NPEAUtagTHREADINFO@@PEAUtagHOOK@@W4CallHookHints@@@Z @ 0x140190F44 (-BoostHook@@YA_NPEAUtagTHREADINFO@@PEAUtagHOOK@@W4CallHookHints@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDd @ 0x14019145C (WPP_RECORDER_AND_TRACE_SF_DDd.c)
 *     ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1401ABFEC (-IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallHook2(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v6; // edi
  __int64 Valid; // r14
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // esi
  struct tagTHREADINFO *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r12d
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v20; // rdx
  const struct tagUIPI_INFO *v21; // r8
  struct tagTHREADINFO *v22; // rcx
  int v23; // edi
  __int16 v24; // bx
  __int16 ProcessMachine; // bx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 UserSessionState; // rax
  const struct tagUIPI_INFO *v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // xmm6_8
  int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 *v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 CurrentProcess; // rax
  unsigned int v49; // ebx
  ULONG_PTR HmodIndex; // rbx
  __int64 v51; // r12
  __int64 v52; // rax
  bool v53; // zf
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rbx
  int v61; // edi
  struct _ERESOURCE *v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 *v65; // rax
  char v66; // bl
  char v67; // r12
  bool v68; // r13
  int v69; // esi
  char ThreadId; // di
  __int64 v71; // rcx
  int v72; // ebx
  __int64 v73; // rdx
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx
  int ReturnLength; // [rsp+20h] [rbp-228h]
  int v78; // [rsp+28h] [rbp-220h]
  int v79; // [rsp+38h] [rbp-210h]
  unsigned int v80; // [rsp+60h] [rbp-1E8h]
  char v81; // [rsp+64h] [rbp-1E4h]
  char v82; // [rsp+68h] [rbp-1E0h]
  __int64 v83; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 ProcessInformation; // [rsp+78h] [rbp-1D0h] BYREF
  __int64 v85; // [rsp+80h] [rbp-1C8h]
  __int64 v86; // [rsp+88h] [rbp-1C0h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+90h] [rbp-1B8h] BYREF
  char *v88; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v89; // [rsp+A8h] [rbp-1A0h]
  __int64 v90; // [rsp+F0h] [rbp-158h]
  __int64 v91; // [rsp+100h] [rbp-148h] BYREF
  int v92; // [rsp+108h] [rbp-140h]
  __int64 v93; // [rsp+110h] [rbp-138h] BYREF
  int v94; // [rsp+118h] [rbp-130h]
  ULONG_PTR v95[2]; // [rsp+120h] [rbp-128h] BYREF
  _QWORD v96[2]; // [rsp+130h] [rbp-118h] BYREF
  ULONG_PTR v97[2]; // [rsp+140h] [rbp-108h] BYREF
  __int64 v98; // [rsp+150h] [rbp-F8h] BYREF
  unsigned int v99; // [rsp+158h] [rbp-F0h]
  int v100; // [rsp+15Ch] [rbp-ECh]
  __int64 v101; // [rsp+160h] [rbp-E8h]
  int v102; // [rsp+168h] [rbp-E0h]
  __int64 v103; // [rsp+16Ch] [rbp-DCh]
  int v104; // [rsp+174h] [rbp-D4h]
  __int64 v105; // [rsp+178h] [rbp-D0h]
  __int64 v106; // [rsp+180h] [rbp-C8h]
  _BYTE v107[28]; // [rsp+188h] [rbp-C0h] BYREF
  int v108; // [rsp+1A4h] [rbp-A4h]
  int v109; // [rsp+1A8h] [rbp-A0h]
  int v110; // [rsp+1ACh] [rbp-9Ch]
  __int64 *v111; // [rsp+1B0h] [rbp-98h]
  _BYTE v112[56]; // [rsp+1B8h] [rbp-90h] BYREF

  v85 = a4;
  v86 = a3;
  v6 = a2;
  v80 = a2;
  Valid = a1;
  v8 = 0LL;
  v90 = 0LL;
  v83 = 0LL;
  ProcessInformation = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 42336);
  LockRefactorStagingAssertAny((PERESOURCE *)&ProcessInformation, v9);
  if ( !Valid )
    return 0LL;
  v11 = *(_DWORD *)(Valid + 48);
  v12 = PtiCurrent(v10);
  if ( v12 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v14, v13) + 18696) && v11 != 13 && v11 != 14 )
    return 0LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v12 + 130, 0, 0) & 0x10000001) != 0
    || !*((_QWORD *)v12 + 61) && *(_DWORD *)(Valid + 48) != 14
    || (unsigned int)IsPointerInputHookCall(v11, a4) && v11 != 3 && v11 != 4 && v11 != 12 )
  {
    return 0LL;
  }
  while ( 1 )
  {
    SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v112);
    if ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) != 0 || (*(_DWORD *)(Valid + 64) & 0x1000) != 0 )
    {
      Valid = PhkNextValid(Valid, v15);
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v112);
      goto LABEL_163;
    }
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v112);
    if ( (v11 != 14 || !*(_QWORD *)(Valid + 16) || !(unsigned __int8)IsSpatialDelegationEnabledForThread())
      && (v11 != 13 || !*(_QWORD *)(Valid + 16) || !(unsigned __int8)IsKeyboardDelegationEnabledForThread()) )
    {
      break;
    }
    Valid = PhkNextValid(Valid, v16);
LABEL_163:
    if ( !Valid )
      return 0LL;
  }
  v17 = *(int *)(Valid + 48);
  v18 = dword_140362794[v17];
  v82 = v18;
  if ( (_DWORD)v17 == 10
    && (_InterlockedCompareExchange((volatile signed __int32 *)v12 + 130, 0, 0) & 8) != 0
    && ((v6 - 4) & 0xFFFFFFF3) == 0
    && v6 != 16 )
  {
    LOBYTE(v18) = v18 | 0x10;
    v82 = v18;
  }
  if ( *(_DWORD *)(Valid + 48) == 10
    && (_InterlockedCompareExchange((volatile signed __int32 *)v12 + 130, 0, 0) & 4) != 0
    && v6 == 11 )
  {
    LOBYTE(v18) = v18 | 0x10;
    v82 = v18;
  }
  IsEnabledDeviceUsageNoInline = Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline();
  v22 = *(struct tagTHREADINFO **)(Valid + 16);
  if ( !IsEnabledDeviceUsageNoInline )
  {
    if ( v22 == v12 )
      goto LABEL_56;
    if ( (v18 & 0x20) == 0 )
    {
      ProcessMachine = PsGetProcessMachine(**((_QWORD **)v22 + 57));
      if ( (unsigned __int16)PsGetProcessMachine(**((_QWORD **)v12 + 57)) == ProcessMachine )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)v12 + 130, 0, 0) & 0xC) == 0
          || (v22 = *(struct tagTHREADINFO **)(Valid + 16), *((_QWORD *)v22 + 57) == *((_QWORD *)v12 + 57)) )
        {
          if ( !(unsigned int)IsProcessDwm(**(_QWORD **)(*(_QWORD *)(Valid + 16) + 456LL)) )
          {
            if ( UIPrivilegeIsolation::Enforced(v22)
              || (*(_DWORD *)(Valid + 64) & 1) == 0
              || (v26 = *((_QWORD *)v12 + 57),
                  v20 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 456LL),
                  *(_DWORD *)(v20 + 764) == *(_DWORD *)(v26 + 764))
              && *(_DWORD *)(v20 + 768) == *(_DWORD *)(v26 + 768)
              || (_InterlockedCompareExchange((volatile signed __int32 *)v12 + 130, 0, 0) & 0x400000) != 0
              || (v20 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 456LL),
                  v22 = (struct tagTHREADINFO *)luidSystem[0],
                  *(_DWORD *)(v20 + 764) == luidSystem[0])
              && (v22 = (struct tagTHREADINFO *)luidSystem[1], *(_DWORD *)(v20 + 768) == (_DWORD)v22) )
            {
              v22 = *(struct tagTHREADINFO **)(Valid + 16);
              if ( *((_QWORD *)v22 + 57) == *((_QWORD *)v12 + 57) || !(unsigned __int8)IsRestricted(*(_QWORD *)v22) )
              {
LABEL_56:
                v23 = 0;
                goto LABEL_57;
              }
            }
          }
        }
      }
    }
    goto LABEL_63;
  }
  v23 = 0;
  if ( v22 != v12 )
  {
    if ( (v18 & 0x20) != 0 )
      goto LABEL_63;
    v24 = PsGetProcessMachine(**((_QWORD **)v22 + 57));
    if ( (unsigned __int16)PsGetProcessMachine(**((_QWORD **)v12 + 57)) != v24 )
    {
      v23 = 1;
      goto LABEL_57;
    }
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v12 + 130, 0, 0) & 0xC) != 0
      && (v22 = *(struct tagTHREADINFO **)(Valid + 16), *((_QWORD *)v22 + 57) != *((_QWORD *)v12 + 57))
      || (unsigned int)IsProcessDwm(**(_QWORD **)(*(_QWORD *)(Valid + 16) + 456LL))
      || (v22 = *(struct tagTHREADINFO **)(Valid + 16), *((_QWORD *)v22 + 57) != *((_QWORD *)v12 + 57))
      && (unsigned __int8)IsRestricted(*(_QWORD *)v22) )
    {
LABEL_63:
      v23 = 1;
    }
  }
LABEL_57:
  v27 = *(_DWORD *)(Valid + 48);
  if ( v27 == 14 || v27 == 13 )
  {
    if ( (a5 & 2) != 0
      || !*(_QWORD *)(W32GetUserSessionState(v22, v20) + 18928)
      || (UserSessionState = W32GetUserSessionState(v32, v31),
          UIPrivilegeIsolation::CheckAccess(
            (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 456LL) + 864LL),
            (const struct tagUIPI_INFO *)(*(_QWORD *)(UserSessionState + 18928) + 472LL),
            v34))
      || (unsigned int)IsForegroundShellFrameQueueAccessible(*(const struct tagTHREADINFO **)(Valid + 16))
      || (v36 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 456LL), *(int *)(v36 + 12) < 0) )
    {
      if ( *(_DWORD *)(Valid + 48) != 14 )
        goto LABEL_76;
      if ( *((_DWORD *)v12 + 389) == -1 )
        goto LABEL_76;
      if ( UIPrivilegeIsolation::CheckAccess(
             (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 456LL) + 864LL),
             (struct tagTHREADINFO *)((char *)v12 + 1556),
             v21) )
      {
        goto LABEL_76;
      }
      v43 = *(_QWORD *)(Valid + 16);
      if ( *(int *)(*(_QWORD *)(v43 + 456) + 12LL) < 0 )
        goto LABEL_76;
      v93 = *(_QWORD *)((char *)v12 + 1556);
      v94 = *((_DWORD *)v12 + 391);
      v42 = &v93;
      v41 = 0LL;
    }
    else
    {
      v37 = *(_QWORD *)(W32GetUserSessionState(v36, v35) + 18928);
      v38 = *(_QWORD *)(v37 + 472);
      v39 = *(_DWORD *)(v37 + 480);
      v41 = *(_QWORD *)(W32GetUserSessionState(v37, v40) + 18928);
      v91 = v38;
      v92 = v39;
      v42 = &v91;
      v43 = *(_QWORD *)(Valid + 16);
    }
    EtwTraceUIPIInputError(v43, 0LL, v41, v42, 6);
    LOBYTE(v18) = v18 & 0xEF;
    v82 = v18;
LABEL_76:
    v30 = v80;
    goto LABEL_77;
  }
  if ( UIPrivilegeIsolation::CheckAccess(
         (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 456LL) + 864LL),
         (const struct tagUIPI_INFO *)(*((_QWORD *)v12 + 57) + 864LL),
         (const struct tagUIPI_INFO *)0x360) )
  {
    goto LABEL_76;
  }
  v29 = *(_QWORD *)(Valid + 16);
  v30 = v80;
  if ( *(int *)(*(_QWORD *)(v29 + 456) + 12LL) >= 0 )
  {
    LOBYTE(v18) = v18 & 0xEF;
    v82 = v18;
    LOBYTE(v28) = v18;
    EtwTraceUIPIHookError(Valid, v28, v29, v12, v11, v80, v86, v85);
  }
  v23 = 1;
LABEL_77:
  if ( !v23
    && (*(_DWORD *)(Valid + 64) & 1) != 0
    && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 456LL)) )
  {
    v44 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 456LL);
    if ( *(int *)(v44 + 12) >= 0 )
    {
      v45 = *((_QWORD *)v12 + 57);
      if ( v44 != v45 && (*(_DWORD *)(v44 + 808) & 0x100LL) == 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v45)
          || (ProcessInformation = 6LL,
              ZwQueryInformationProcess(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                ProcessCookie|ProcessUserModeIOPL,
                &ProcessInformation,
                8u,
                0LL) < 0)
          || (ProcessInformation & 0x100000000LL) != 0 )
        {
          v23 = 1;
        }
      }
    }
  }
  Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v12, Valid);
  if ( !v23 )
  {
    if ( *(_DWORD *)(Valid + 68) == -1 )
      goto LABEL_95;
    CurrentProcess = PsGetCurrentProcess(v47);
    if ( !(unsigned int)PsIsProtectedProcess(CurrentProcess) && (unsigned int)PsGetWin32KFilterSet() != 5 )
    {
      v49 = *(_DWORD *)(Valid + 68);
      SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>((__int64)&v98);
      HmodIndex = xxxLoadHmodIndex(v49);
      SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(&v98);
      if ( HmodIndex )
      {
        SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)&v98);
        if ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) == 0 && (*(_DWORD *)(Valid + 64) & 0x1000) == 0 )
        {
          SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&v98);
LABEL_95:
          if ( ((*((_DWORD *)v12 + 178) | *(_DWORD *)(**((_QWORD **)v12 + 62) + 16LL)) & 0x400) == 0
            || *(_DWORD *)(Valid + 48) == 9 )
          {
            v51 = v85;
            v6 = v80;
            goto LABEL_107;
          }
          v108 = 0;
          *(_QWORD *)v107 = (unsigned int)PsGetThreadId(*(PETHREAD *)v12);
          v6 = v80;
          *(_DWORD *)&v107[24] = v80;
          *(_QWORD *)&v107[16] = v86;
          v51 = v85;
          *(_QWORD *)&v107[8] = v85;
          if ( !(unsigned int)xxxCallHook(0LL, *(int *)(Valid + 48), (__int64)v107, 9) )
          {
            SharedUserCritOnly::DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)&v98);
            if ( (*(_BYTE *)(_HMPheFromObject(Valid) + 25) & 1) == 0 && (*(_DWORD *)(Valid + 64) & 0x1000) == 0 )
            {
              SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&v98);
LABEL_107:
              v54 = *((_QWORD *)v12 + 90);
              Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(v95, v12, v54);
              if ( *((_QWORD *)v12 + 64) )
              {
                v56 = (__int64 *)PhkNextValid(Valid, v55);
                v8 = *(_QWORD *)(*((_QWORD *)v12 + 64) + 48LL);
                v90 = v8;
                if ( v56 )
                  v57 = *v56;
                else
                  v57 = 0LL;
                *(_QWORD *)(*((_QWORD *)v12 + 64) + 48LL) = v57;
              }
              v96[0] = (char *)v12 + 720;
              v96[1] = Valid;
              HMAssignmentLock(v96, 1LL);
              v83 = xxxHkCallHook(Valid, v6, v86, v51);
              v88 = (char *)v12 + 720;
              v89 = v54;
              HMAssignmentLock(&v88, 1LL);
              if ( *((_QWORD *)v12 + 64) )
                *(_QWORD *)(*((_QWORD *)v12 + 64) + 48LL) = v8;
              Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v95);
              if ( (*(_DWORD *)(Valid + 64) & 0x10) == 0 )
              {
                v59 = v83;
                goto LABEL_120;
              }
              Valid = PhkNextValid(Valid, v58);
              v52 = Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3);
              v53 = v52 == 0;
              goto LABEL_116;
            }
            SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&v98);
          }
LABEL_103:
          Valid = PhkNextValid(Valid, v46);
          v52 = Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3);
          if ( !v52 )
          {
LABEL_118:
            Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
            goto LABEL_163;
          }
          v53 = (*(_DWORD *)(v52 + 64) & 0x10) == 0;
LABEL_116:
          if ( !v53 )
            FreeHook((PETHREAD **)v52);
          goto LABEL_118;
        }
        SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)&v98);
      }
    }
LABEL_102:
    v6 = v80;
    goto LABEL_103;
  }
  if ( (v18 & 0x10) == 0 )
    goto LABEL_102;
  v100 = 0;
  v104 = 0;
  v106 = 0LL;
  v61 = 200;
  v101 = v85;
  v98 = Valid;
  v99 = v30;
  v103 = -1LL;
  v105 = -1LL;
  v102 = 0;
  if ( tagPROCESSINFO::SyncAndTestFreeze(*(tagPROCESSINFO **)(*(_QWORD *)(Valid + 16) + 456LL)) )
    goto LABEL_102;
  v62 = (struct _ERESOURCE *)*((_QWORD *)v12 + 90);
  ProcessInformation = (__int64)v62;
  Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(v97, v12, v62);
  v88 = (char *)v12 + 720;
  v89 = Valid;
  HMAssignmentLock(&v88, 0LL);
  if ( *((_QWORD *)v12 + 64) )
  {
    v65 = (__int64 *)PhkNextValid(Valid, v63);
    v90 = *(_QWORD *)(*((_QWORD *)v12 + 64) + 48LL);
    if ( v65 )
      v64 = *v65;
    else
      v64 = 0LL;
    *(_QWORD *)(*((_QWORD *)v12 + 64) + 48LL) = v64;
  }
  if ( (v18 & 0x20) != 0 )
  {
    v61 = (*(_DWORD *)(Valid + 64) & 0x40) != 0 ? 30000 : *(_DWORD *)(W32GetUserSessionState(v64, v63) + 64192);
    if ( (*(_DWORD *)(Valid + 64) & 0x4000) != 0 )
      v61 = 20;
  }
  if ( (v18 & 0x20) != 0 || (_InterlockedCompareExchange((volatile signed __int32 *)v12 + 130, 0, 0) & 0xC) != 0 )
  {
    memset(&v107[4], 0, 24);
    v108 = 0;
    *(_DWORD *)v107 = 2;
    v109 = 2;
    v110 = v61;
    v111 = &v83;
    if ( (v18 & 0x20) != 0 )
    {
      v103 = *((_QWORD *)v12 + 193);
      v104 = *((_DWORD *)v12 + 388);
      v105 = *(_QWORD *)((char *)v12 + 1556);
      LODWORD(v106) = *((_DWORD *)v12 + 391);
      v101 = *((_QWORD *)v12 + 196);
    }
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v12 + 130, 0, 0) & 0x20000) != 0
      || IsThreadHung(*(const struct tagTHREADINFO **)(Valid + 16)) )
    {
      v83 = 0LL;
    }
    else
    {
      v66 = BoostHook(v12, Valid, a5);
      v81 = v66;
      if ( v66 )
        v102 |= 1u;
      if ( !xxxInterSendMsgEx(0LL, 0x314u, 1, *(_QWORD *)(Valid + 16), (__int64)v107, 1, 0) )
      {
        v83 = 0LL;
        if ( (*(_DWORD *)(Valid + 64) & 0x80u) == 0 )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
            || (v67 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v67 = 0;
          }
          v68 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v67 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v69 = *(_DWORD *)(Valid + 48);
            ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(Valid + 16));
            v71 = *(_QWORD *)(Valid + 16);
            v72 = *(_DWORD *)(*(_QWORD *)(v71 + 456) + 56LL);
            v74 = W32GetUserSessionState(v71, v73);
            LOBYTE(v75) = v68;
            LOBYTE(v76) = v67;
            WPP_RECORDER_AND_TRACE_SF_DDd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v76,
              v75,
              *(_QWORD *)(v74 + 69152),
              ReturnLength,
              v78,
              47,
              v79,
              v72,
              ThreadId,
              v69);
            v66 = v81;
            v62 = (struct _ERESOURCE *)ProcessInformation;
          }
          LOBYTE(v18) = v82;
        }
      }
      if ( v66 )
        DeBoostHook((struct tagHOOK *)Valid);
    }
    if ( (v18 & 0x20) != 0 && v83 )
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 480LL) + 20LL),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  }
  else
  {
    v83 = xxxInterSendMsgEx(0LL, 0x314u, 1, *(_QWORD *)(Valid + 16), 0LL, 1, 0);
  }
  v88 = (char *)v12 + 720;
  v89 = (__int64)v62;
  HMAssignmentLock(&v88, 1LL);
  if ( *((_QWORD *)v12 + 64) )
    *(_QWORD *)(*((_QWORD *)v12 + 64) + 48LL) = v90;
  v59 = v83;
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v97);
LABEL_120:
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  return v59;
}
