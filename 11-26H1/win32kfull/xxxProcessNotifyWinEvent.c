/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x1400441AC
 * Callers:
 *     xxxFlushDeferredWindowEvents @ 0x14001A9A0 (xxxFlushDeferredWindowEvents.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxClientCallWinEventProc @ 0x140038D98 (xxxClientCallWinEventProc.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140039250 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     DestroyNotify @ 0x14013BFF0 (DestroyNotify.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x14013C170 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x14013CB18 (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_CLIENTLIB@@@-$UnlockDomainShared@$$V@@QEA.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_WINEVENT@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x1401AADE8 (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_WINEVENT@@@-$UnlockDomainShared@$$V@@QEAA.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxProcessNotifyWinEvent(__int64 a1)
{
  struct tagTHREADINFO *v2; // rbp
  BOOL v3; // r15d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  UIPrivilegeIsolation *v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rbx
  __int16 ProcessMachine; // di
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rbx
  __int16 v20; // di
  __int64 v21; // rdx
  __int64 v22; // r13
  struct tagQ *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  signed __int32 v32; // ecx
  __int64 v33; // rdi
  __int16 v34; // bx
  void (*EventProc)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int); // rdi
  unsigned int v36; // ebx
  __int64 ProcessInformation; // [rsp+40h] [rbp-78h] BYREF
  __int64 CurrentThreadWin32Thread; // [rsp+48h] [rbp-70h]
  _BYTE v39[48]; // [rsp+50h] [rbp-68h] BYREF

  v2 = PtiCurrent(a1);
  v3 = 0;
  UserSessionState = W32GetUserSessionState(v5, v4);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42344)) != 1 )
    __int2c();
  v7 = *(_QWORD *)(a1 + 16);
  IsEnabledDeviceUsageNoInline = Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline();
  v9 = (UIPrivilegeIsolation *)*(unsigned int *)(a1 + 56);
  LOBYTE(v9) = (unsigned __int8)v9 & 0xC;
  if ( (_BYTE)v9 == 4 )
    goto LABEL_32;
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v2 + 130, 0, 0) & 0xD) != 0 )
      goto LABEL_32;
    v10 = *(_QWORD **)(v7 + 16);
    if ( v10[57] != *((_QWORD *)v2 + 57) )
    {
      if ( (unsigned __int8)IsRestricted(*v10) )
        goto LABEL_32;
    }
    v11 = **((_QWORD **)v2 + 57);
    ProcessMachine = PsGetProcessMachine(**(_QWORD **)(*(_QWORD *)(v7 + 16) + 456LL));
    if ( (unsigned __int16)PsGetProcessMachine(v11) != ProcessMachine )
      goto LABEL_32;
    v3 = !UIPrivilegeIsolation::CheckAccess(
            (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 456LL) + 864LL),
            (const struct tagUIPI_INFO *)(*((_QWORD *)v2 + 57) + 864LL),
            (const struct tagUIPI_INFO *)0x360);
    if ( v3 )
      goto LABEL_32;
  }
  else
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v2 + 130, 0, 0) & 0xD) != 0 )
      goto LABEL_32;
    if ( !UIPrivilegeIsolation::Enforced(v9) )
    {
      v9 = (UIPrivilegeIsolation *)*((_QWORD *)v2 + 57);
      v17 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 456LL);
      if ( (*(_DWORD *)(v17 + 764) != *((_DWORD *)v9 + 191) || *(_DWORD *)(v17 + 768) != *((_DWORD *)v9 + 192))
        && (_InterlockedCompareExchange((volatile signed __int32 *)v2 + 130, 0, 0) & 0x400000) == 0 )
      {
        goto LABEL_32;
      }
    }
    v18 = *(_QWORD **)(v7 + 16);
    if ( v18[57] != *((_QWORD *)v2 + 57) )
    {
      if ( (unsigned __int8)IsRestricted(*v18) )
        goto LABEL_32;
    }
    v19 = **((_QWORD **)v2 + 57);
    v20 = PsGetProcessMachine(**(_QWORD **)(*(_QWORD *)(v7 + 16) + 456LL));
    if ( (unsigned __int16)PsGetProcessMachine(v19) != v20 )
      goto LABEL_32;
    if ( !UIPrivilegeIsolation::CheckAccess(
            (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 456LL) + 864LL),
            (const struct tagUIPI_INFO *)(*((_QWORD *)v2 + 57) + 864LL),
            (const struct tagUIPI_INFO *)0x360) )
    {
      v3 = 1;
      goto LABEL_32;
    }
  }
  if ( *(_DWORD *)(v7 + 56) && *(_QWORD *)(v7 + 48)
    || (unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 456LL))
    || (v13 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 456LL), *(int *)(v13 + 12) < 0)
    || (v14 = *((_QWORD *)v2 + 57), v13 == v14)
    || (*(_DWORD *)(v13 + 808) & 0x100LL) != 0
    || !(unsigned int)IsImmersiveAppRestricted(v14)
    && (ProcessInformation = 6LL,
        ZwQueryInformationProcess(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          ProcessCookie|ProcessUserModeIOPL,
          &ProcessInformation,
          8u,
          0LL) >= 0)
    && (ProcessInformation & 0x100000000LL) == 0 )
  {
    if ( (*(_DWORD *)(v7 + 40) & 1) != 0 )
    {
      v15 = *(_QWORD *)(v7 + 24);
    }
    else
    {
      Win32HM_LockIntoThread<0>((__int64)v2, v7, &ProcessInformation);
      *(_QWORD *)(a1 + 64) = v2;
      if ( (*(_DWORD *)(v7 + 40) & 8) != 0 )
        EventProc = xxxGetEventProc((struct tagEVENTHOOK *)v7);
      else
        EventProc = *(void (**)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))(v7 + 64);
      if ( EventProc )
      {
        v36 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v7 + 76));
        UnlockDomainShared<>::UnlockDomainExclusive<DLT_WINEVENT>::UnlockObjectLock<>::UnlockObjectLock<>(v39);
        xxxClientCallWinEventProc((__int64)EventProc, (__int64 *)v7, a1);
        UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::~UnlockObjectLock<>(v39);
        W32SetCurrentThreadDpiAwarenessContext(v36);
      }
      *(_QWORD *)(a1 + 64) = 0LL;
      v15 = *(_QWORD *)(v7 + 24);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(&ProcessInformation);
    }
    DestroyNotify(a1);
    return v15;
  }
LABEL_32:
  v21 = *(_QWORD *)(v7 + 16);
  v22 = *(_QWORD *)(v7 + 24);
  v23 = *(struct tagQ **)(v21 + 464);
  if ( v3 )
    EtwTraceUIPIEventHookError(a1, v21, v2);
  if ( !*(_QWORD *)W32GetUserSessionState(v9, v21) || !IS_USERCRIT_OWNED_AT_ALL(v25, v24) )
    KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v26);
  LOBYTE(ProcessInformation) = 1;
  ++*(_DWORD *)(CurrentThreadWin32Thread + 28);
  *(_DWORD *)(a1 + 56) |= 0xCu;
  if ( !v23
    || (v29 = W32GetUserSessionState(v28, v27), v30 = *(_QWORD *)(v7 + 16), v30 == *(_QWORD *)(v29 + 18696))
    || (v31 = *(_DWORD *)(v7 + 40), (v31 & 1) != 0)
    || (v31 & 0x10) != 0
    && ((v32 = _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 520), 0, 0),
         ((v32 ^ _InterlockedCompareExchange((volatile signed __int32 *)v2 + 130, 0, 0)) & 0x100) != 0)
     || (_InterlockedCompareExchange((volatile signed __int32 *)v2 + 130, 0, 0) & 0x100) != 0
     && (v33 = **(_QWORD **)(*(_QWORD *)(v7 + 16) + 456LL),
         v34 = PsWow64GetProcessMachine(**((_QWORD **)v2 + 57)),
         v34 != (unsigned __int16)PsWow64GetProcessMachine(v33)))
    || !(unsigned int)PostEventMessageEx(*(struct tagTHREADINFO **)(v7 + 16), v23, 0xCu, 0LL, 0, 0LL, a1, 0LL) )
  {
    DestroyNotify(a1);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&ProcessInformation);
  return v22;
}
