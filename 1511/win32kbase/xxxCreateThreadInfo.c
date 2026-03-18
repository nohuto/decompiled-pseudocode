/*
 * XREFs of xxxCreateThreadInfo @ 0x1C003F3A0
 * Callers:
 *     UserThreadCallout @ 0x1C0021F20 (UserThreadCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C006A144 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     IszzzCalcStartCursorHideSupported_0 @ 0x1C0001C70 (IszzzCalcStartCursorHideSupported_0.c)
 *     zzzCalcStartCursorHide_0 @ 0x1C0001C78 (zzzCalcStartCursorHide_0.c)
 *     PushW32ThreadLock_0 @ 0x1C0001C90 (PushW32ThreadLock_0.c)
 *     IsSetManifestWinVerSupported_0 @ 0x1C0001C98 (IsSetManifestWinVerSupported_0.c)
 *     SetManifestWinVer_0 @ 0x1C0001CA0 (SetManifestWinVer_0.c)
 *     IsSetAppCompatFlagsSupported_0 @ 0x1C0001CA8 (IsSetAppCompatFlagsSupported_0.c)
 *     SetAppCompatFlags_0 @ 0x1C0001CB0 (SetAppCompatFlags_0.c)
 *     IsxxxResolveDesktopSupported_0 @ 0x1C0001CC0 (IsxxxResolveDesktopSupported_0.c)
 *     xxxResolveDesktop_0 @ 0x1C0001CC8 (xxxResolveDesktop_0.c)
 *     IsxxxSetProcessWindowStationSupported_0 @ 0x1C0001CD0 (IsxxxSetProcessWindowStationSupported_0.c)
 *     xxxSetProcessWindowStation_0 @ 0x1C0001CD8 (xxxSetProcessWindowStation_0.c)
 *     IsMapDesktopSupported_0 @ 0x1C0001CE0 (IsMapDesktopSupported_0.c)
 *     MapDesktop_0 @ 0x1C0001CE8 (MapDesktop_0.c)
 *     IszzzSetDesktopSupported_0 @ 0x1C0001CF0 (IszzzSetDesktopSupported_0.c)
 *     zzzSetDesktop_0 @ 0x1C0001CF8 (zzzSetDesktop_0.c)
 *     IsGetJournallingQueueSupported_0 @ 0x1C0001D00 (IsGetJournallingQueueSupported_0.c)
 *     GetJournallingQueue_0 @ 0x1C0001D08 (GetJournallingQueue_0.c)
 *     IsDestroyThreadsMessagesSupported_0 @ 0x1C0001D10 (IsDestroyThreadsMessagesSupported_0.c)
 *     DestroyThreadsMessages_0 @ 0x1C0001D18 (DestroyThreadsMessages_0.c)
 *     IsSetForegroundPrioritySupported_0 @ 0x1C0001D20 (IsSetForegroundPrioritySupported_0.c)
 *     SetForegroundPriority_0 @ 0x1C0001D28 (SetForegroundPriority_0.c)
 *     IsxxxUpdateInputHangInfoSupported_0 @ 0x1C0001D30 (IsxxxUpdateInputHangInfoSupported_0.c)
 *     xxxUpdateInputHangInfo_0 @ 0x1C0001D38 (xxxUpdateInputHangInfo_0.c)
 *     IsSetUnavailableInputSourceSupported_0 @ 0x1C0001D40 (IsSetUnavailableInputSourceSupported_0.c)
 *     SetUnavailableInputSource_0 @ 0x1C0001D48 (SetUnavailableInputSource_0.c)
 *     IsCreateInputContextSupported_0 @ 0x1C0001D50 (IsCreateInputContextSupported_0.c)
 *     CreateInputContext_0 @ 0x1C0001D58 (CreateInputContext_0.c)
 *     IsxxxClientThreadSetupSupported_0 @ 0x1C0001D60 (IsxxxClientThreadSetupSupported_0.c)
 *     xxxClientThreadSetup_0 @ 0x1C0001D68 (xxxClientThreadSetup_0.c)
 *     IsPlayEventSoundSupported_0 @ 0x1C0001D70 (IsPlayEventSoundSupported_0.c)
 *     PlayEventSound_0 @ 0x1C0001D78 (PlayEventSound_0.c)
 *     PopAndFreeW32ThreadLock_0 @ 0x1C0001D80 (PopAndFreeW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D88 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     InitClientInfo @ 0x1C003F27C (InitClientInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0040170 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C0040F60 (zzzDestroyQueue.c)
 *     AllocQueue @ 0x1C0041270 (AllocQueue.c)
 *     HMAssignmentLock @ 0x1C0041430 (HMAssignmentLock.c)
 *     UpdateRawMouseMode @ 0x1C00414A4 (UpdateRawMouseMode.c)
 *     ProtectHandle @ 0x1C00414C0 (ProtectHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0041FB4 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041FD0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     LockObjectAssignment @ 0x1C0042100 (LockObjectAssignment.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     IsImmersiveAppRestricted @ 0x1C0046480 (IsImmersiveAppRestricted.c)
 *     CloseProtectedHandle @ 0x1C0046BB8 (CloseProtectedHandle.c)
 *     RtlGetExpWinVer @ 0x1C0072890 (RtlGetExpWinVer.c)
 *     ?ParseReserved@@YAKPEBG0@Z @ 0x1C007F114 (-ParseReserved@@YAKPEBG0@Z.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00AC268 (EtwTraceScreenSaverProcessEvent.c)
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 *     Template_qq @ 0x1C00AE3A8 (Template_qq.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  unsigned __int64 v1; // rbp
  __int64 v3; // rcx
  PEPROCESS ThreadProcess; // rsi
  struct _NT_TIB *Self; // r13
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r12d
  __int64 ThreadWin32Thread; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  int v12; // edx
  const void *v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  int v17; // r8d
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  PVOID CurrentProcess; // rax
  BOOL v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  int Event; // esi
  __int64 v29; // rsi
  __int64 ProcessSectionBaseAddress; // rax
  int v31; // r12d
  HANDLE *v32; // r15
  const unsigned __int16 *v33; // rdx
  __int64 v34; // r9
  BOOL v35; // r13d
  unsigned int v36; // eax
  __int64 v37; // r8
  __int64 v38; // r12
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // r15
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v46; // r15
  __int64 v47; // rcx
  __int64 v48; // r14
  LARGE_INTEGER v49; // rdi
  int v50; // r8d
  char v51; // al
  unsigned int CurrentProcessId; // eax
  __int64 v53; // r8
  void *v54; // rcx
  void *v55; // r15
  __int64 v56; // rdx
  __int64 v57; // rcx
  UserAtomicCheck *v58; // rcx
  __int64 JournallingQueue_0; // r15
  __int64 v60; // rax
  int v61; // eax
  BOOLEAN InitialState[8]; // [rsp+20h] [rbp-50h]
  int v64; // [rsp+70h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL;
  ThreadProcess = PsGetThreadProcess(Thread);
  *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = ThreadProcess;
  *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    TemplateEventDescriptor(v3, &InitiateGuiThreadExecution, &W32kControlGuid);
  if ( !gbCleanedUpResources && PsGetCurrentProcessWin32Process(v3) )
  {
    ++gdwGuiThreads;
    v8 = 0;
    if ( ThreadProcess == gpepCSRSS )
      v8 = 33554504;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread, v6, v7);
    *(_QWORD *)(ThreadWin32Thread + 480) = ThreadWin32Thread + 472;
    *(_QWORD *)(ThreadWin32Thread + 472) = ThreadWin32Thread + 472;
    *(_QWORD *)(ThreadWin32Thread + 1064) = ThreadWin32Thread + 1056;
    *(_QWORD *)(ThreadWin32Thread + 1056) = ThreadWin32Thread + 1056;
    *(_QWORD *)(ThreadWin32Thread + 968) = ThreadWin32Thread + 960;
    *(_QWORD *)(ThreadWin32Thread + 960) = ThreadWin32Thread + 960;
    *(_DWORD *)(ThreadWin32Thread + 976) = 0;
    *(_BYTE *)(ThreadWin32Thread + 1084) = 0;
    *(_DWORD *)(ThreadWin32Thread + 748) = 1;
    *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = *(_QWORD *)(PsGetProcessPeb(ThreadProcess)
                                                                                     + 32);
    *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = ((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 48;
    v10 = *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
    *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v10 + 32);
    *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_QWORD *)(v10 + 40);
    *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_DWORD *)(v10 + 136);
    *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = *(_DWORD *)(v10 + 140);
    *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_DWORD *)(v10 + 144);
    *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C) = *(_DWORD *)(v10 + 148);
    *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_DWORD *)(v10 + 164);
    *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54) = *(_DWORD *)(v10 + 168);
    v11 = (_QWORD *)(v10 + 192);
    if ( v11 >= W32UserProbeAddress )
      v11 = W32UserProbeAddress;
    v12 = *(_DWORD *)v11;
    *(_DWORD *)v1 = *(_DWORD *)v11;
    *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v12;
    v13 = (const void *)v11[1];
    *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v13;
    if ( (_WORD)v12 )
    {
      if ( ((unsigned __int8)v13 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = (unsigned __int64)v13 + (unsigned __int16)v12 + 2;
      if ( v14 >= (unsigned __int64)W32UserProbeAddress
        || (unsigned __int16)v12 > *(_WORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 2)
        || v14 <= (unsigned __int64)v13 )
      {
        *(_BYTE *)W32UserProbeAddress = 0;
      }
      v15 = Win32AllocPoolWithQuota();
      *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v15;
      *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v15;
      if ( !v15 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock_0();
      memmove(
        *(void **)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
        v13,
        *(unsigned __int16 *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58));
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
    }
    v16 = (_QWORD *)(*(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) + 208LL);
    if ( v16 >= W32UserProbeAddress )
      v16 = W32UserProbeAddress;
    v17 = *(_DWORD *)v16;
    *(_DWORD *)v1 = *(_DWORD *)v16;
    *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v17;
    v18 = v16[1];
    *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v18;
    if ( (v18 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = (unsigned __int16)v17 + v18 + 2;
    if ( v19 >= (unsigned __int64)W32UserProbeAddress
      || (unsigned __int16)v17 > *(_WORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 2)
      || v19 <= v18 )
    {
      *(_BYTE *)W32UserProbeAddress = 0;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80u) != 0 )
      v8 |= 0x100u;
    if ( (HANDLE)gpidLogon == PsGetThreadProcessId(Thread) )
      v8 |= 0x2000000u;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v22, v21);
    v24 = 0;
    if ( CurrentProcess )
      v24 = CurrentProcess == g_pepDwm;
    if ( v24 )
      *(_DWORD *)(ThreadWin32Thread + 1072) |= 4u;
    *(_DWORD *)(ThreadWin32Thread + 440) = v8;
    *(_DWORD *)(ThreadWin32Thread + 1200) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1204) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1192) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1196) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1244) = 0;
    if ( (dword_1C0102324 & 0x80u) == 0 )
    {
      v25 = gspklGlobalActive;
      if ( !gspklGlobalActive )
      {
        HMAssignmentLock(&gspklGlobalActive, gspklBaseLayout);
        v25 = gspklGlobalActive;
      }
    }
    else
    {
      v25 = gspklBaseLayout;
    }
    HMAssignmentLock(ThreadWin32Thread + 392, v25);
    *(_QWORD *)(ThreadWin32Thread + 400) = ThreadWin32Thread + 912;
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x800000) != 0 )
      *(_DWORD *)(ThreadWin32Thread + 440) |= 0x2000000u;
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x400) != 0 )
      *(_DWORD *)(ThreadWin32Thread + 1072) |= 0x20u;
    *(_QWORD *)(ThreadWin32Thread + 376) = CurrentProcessWin32Process;
    *(_QWORD *)(ThreadWin32Thread + 584) = *(_QWORD *)(CurrentProcessWin32Process + 296);
    *(_QWORD *)(CurrentProcessWin32Process + 296) = ThreadWin32Thread;
    ++*(_DWORD *)(CurrentProcessWin32Process + 360);
    if ( Self )
      Self[2].StackBase = (PVOID)ThreadWin32Thread;
    if ( (v8 & 4) != 0 )
    {
      v26 = Win32AllocPoolWithQuota();
      *(_QWORD *)(ThreadWin32Thread + 432) = v26;
      if ( !v26 )
      {
LABEL_48:
        Event = -1073741801;
LABEL_199:
        if ( *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
          PopAndFreeW32ThreadLock_0();
        if ( *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) )
          PopAndFreeAlwaysW32ThreadLock_0();
        xxxDestroyThreadInfo(v27);
        return (unsigned int)Event;
      }
    }
    else
    {
      *(_QWORD *)(ThreadWin32Thread + 432) = (char *)Self + 2048;
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x2000000) != 0 )
        *(_DWORD *)(ThreadWin32Thread + 440) |= 0x20000000u;
    }
    if ( !*(_DWORD *)(ThreadWin32Thread + 552) )
    {
      v29 = *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      if ( PsGetProcessPeb(v29) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v29);
        *(_DWORD *)(ThreadWin32Thread + 552) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(ThreadWin32Thread + 552) = 1536;
      }
    }
    if ( (int)IsSetManifestWinVerSupported_0() >= 0 )
      SetManifestWinVer_0();
    v31 = v8 & 0xC;
    *(_DWORD *)v1 = v31;
    if ( !v31 && (int)IsSetAppCompatFlagsSupported_0() >= 0 && (unsigned int)SetAppCompatFlags_0() )
      *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x1000000u;
    v32 = (HANDLE *)(ThreadWin32Thread + 640);
    Event = ZwCreateEvent((PHANDLE)(ThreadWin32Thread + 640), 0x1F0003u, 0LL, SynchronizationEvent, 0);
    if ( Event >= 0 )
    {
      Event = ObReferenceObjectByHandle(*v32, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, (PVOID *)(v1 + 168), 0LL);
      *(_QWORD *)(ThreadWin32Thread + 648) = *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8);
      if ( Event < 0 )
      {
        if ( Event != -1073741816 )
          ObCloseHandle(*v32, 1);
      }
      else
      {
        LOBYTE(v34) = 1;
        Event = ProtectHandle(*v32, v33, ExEventObjectType, v34);
      }
    }
    if ( Event < 0 )
    {
      *v32 = 0LL;
      goto LABEL_199;
    }
    v35 = (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x4000) == 0;
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x4000u;
    if ( !*(_DWORD *)(CurrentProcessWin32Process + 748)
      && *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) )
    {
      *(_DWORD *)(CurrentProcessWin32Process + 748) = 28;
      *(_DWORD *)(CurrentProcessWin32Process + 752) = *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      *(_DWORD *)(CurrentProcessWin32Process + 756) = *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44);
      *(_DWORD *)(CurrentProcessWin32Process + 760) = *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
      *(_DWORD *)(CurrentProcessWin32Process + 764) = *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C);
      *(_DWORD *)(CurrentProcessWin32Process + 768) = *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
      *(_WORD *)(CurrentProcessWin32Process + 772) = *(_WORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
    }
    if ( !v35 )
    {
LABEL_91:
      v40 = AllocQueue(0LL, 0LL);
      v41 = v40;
      if ( !v40 )
        goto LABEL_48;
      *(_QWORD *)(ThreadWin32Thread + 384) = v40;
      *(_QWORD *)(v40 + 56) = ThreadWin32Thread;
      *(_QWORD *)(v40 + 48) = ThreadWin32Thread;
      UpdateRawMouseMode(v40);
      ++*(_DWORD *)(v41 + 336);
      if ( *(PVOID *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) == gpepCSRSS )
      {
        *(_QWORD *)(v41 + 372) = 0x2000LL;
      }
      else
      {
        *(_DWORD *)(v41 + 372) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 376) + 832LL);
        *(_DWORD *)(v41 + 376) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 376) + 836LL);
      }
      if ( (*(_DWORD *)(ThreadWin32Thread + 440) & 0xC) != 0 || !grpWinStaList )
      {
        *(_DWORD *)(ThreadWin32Thread + 1072) |= 0x10u;
        if ( (int)IsxxxSetProcessWindowStationSupported_0() < 0 )
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x40010u;
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
        Event = IsxxxResolveDesktopSupported_0();
        if ( Event >= 0 )
        {
          *(_QWORD *)InitialState = v1 + 8;
          Event = xxxResolveDesktop_0();
        }
        if ( Event < 0 )
        {
          if ( Event == -1073741205 )
          {
            UserSessionSwitchLeaveCrit(v43, v42);
            ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
            CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v44);
            if ( CurrentThreadWin32Thread )
              CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
            v46 = EnterCritAvoidingDitHitTestHazard(0, 1);
            v48 = PsGetCurrentThreadWin32Thread(v47);
            if ( v48 )
            {
              v49 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v48 + 8));
              if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
              {
                LOBYTE(v27) = byte_1C01020C8 - 1;
                if ( (unsigned __int8)(byte_1C01020C8 - 1) <= 2u
                  || (qword_1C01020B0 & 0x200000010000000LL) == 0
                  || (v51 = 1, (qword_1C01020B8 & 0x200000010000000LL) != qword_1C01020B8) )
                {
                  v51 = 0;
                }
                if ( v51 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                  Template_xqx(
                    v27,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v50,
                    v49.LowPart,
                    0,
                    gullUserCritAcquireToken);
              }
              if ( v49.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
                && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
              {
                Template_xqx(
                  gullUserCritAcquireToken,
                  (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                  v50,
                  0,
                  1000 * v49.QuadPart / gliQpcFreq.QuadPart,
                  gullUserCritAcquireToken);
              }
              *(_QWORD *)(v48 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
            }
            gptiCurrent = v46;
            gbValidateHandleForIL = 1;
          }
          else
          {
            CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
            v27 = Microsoft_Windows_Win32kEnableBits;
            if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
            {
              *(_DWORD *)InitialState = Event;
              Template_qq(
                Microsoft_Windows_Win32kEnableBits,
                &DesktopResolutionFailure,
                v53,
                CurrentProcessId,
                *(_QWORD *)InitialState);
            }
            Event = -1073741502;
          }
          goto LABEL_199;
        }
        Event = IsxxxSetProcessWindowStationSupported_0();
        if ( Event >= 0 )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)(v1 + 160));
          Event = xxxSetProcessWindowStation_0();
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)(v1 + 160));
        }
        v54 = *(void **)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        if ( Event < 0 )
        {
          CloseProtectedHandle(v54);
          CloseProtectedHandle(*(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
          *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
          goto LABEL_199;
        }
        Event = ObReferenceObjectByHandle(v54, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, (PVOID *)(v1 + 152), 0LL);
        v55 = *(void **)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
        *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v55;
        if ( Event < 0 )
          goto LABEL_199;
        PushW32ThreadLock_0();
        if ( v55 )
          ObfReferenceObject(v55);
        ObfDereferenceObject(v55);
        *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 1;
        *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = PsGetCurrentProcess(v57, v56);
        *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = v55;
        *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = 0;
        *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0xCC) = 1;
        Event = IsMapDesktopSupported_0();
        if ( Event >= 0 )
          Event = MapDesktop_0();
        if ( Event < 0 )
          goto LABEL_199;
        if ( !*(_QWORD *)(CurrentProcessWin32Process + 368)
          && PsGetProcessId(*(PEPROCESS *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)) != (HANDLE)gpidLogon )
        {
          LockObjectAssignment(CurrentProcessWin32Process + 312, v55);
          *(_QWORD *)(CurrentProcessWin32Process + 368) = *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                    + 8);
        }
      }
      if ( !(unsigned int)InitClientInfo(ThreadWin32Thread) )
        goto LABEL_199;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)(v1 + 40));
      Event = IszzzSetDesktopSupported_0();
      if ( Event >= 0 )
        Event = zzzSetDesktop_0();
      v58 = (UserAtomicCheck *)(v1 + 40);
      if ( Event < 0 )
      {
        *(_BYTE *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 1;
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack(v58);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)(v1 + 40));
        goto LABEL_199;
      }
      UserAtomicCheck::~UserAtomicCheck(v58);
      if ( *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) == grpdeskRitInput )
      {
        JournallingQueue_0 = 0LL;
        if ( (int)IsGetJournallingQueueSupported_0() >= 0 )
          JournallingQueue_0 = GetJournallingQueue_0();
        if ( JournallingQueue_0 && JournallingQueue_0 != *(_QWORD *)(ThreadWin32Thread + 384) )
        {
          if ( (int)IsDestroyThreadsMessagesSupported_0() >= 0 )
            DestroyThreadsMessages_0();
          zzzDestroyQueue(*(_QWORD *)(ThreadWin32Thread + 384), ThreadWin32Thread);
          *(_QWORD *)(ThreadWin32Thread + 384) = JournallingQueue_0;
          ++*(_DWORD *)(JournallingQueue_0 + 336);
        }
      }
      if ( *(int *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) < 0 )
      {
        if ( v35 )
        {
          if ( !gpidLogon
            || PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                  + 0x10)) != gpidLogon )
          {
            *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) &= ~0x80000000;
            goto LABEL_159;
          }
          gppiScreenSaver = CurrentProcessWin32Process;
          gptSSCursor = *((_QWORD *)gpsi + 497);
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200000u;
          EtwTraceScreenSaverProcessEvent(1LL);
        }
        if ( (int)IsSetForegroundPrioritySupported_0() >= 0 )
          SetForegroundPriority_0();
        if ( v35 )
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x400000u;
        *(_DWORD *)(ThreadWin32Thread + 440) |= 0x2000000u;
      }
LABEL_159:
      if ( (*(_DWORD *)(ThreadWin32Thread + 440) & 0xC) == 0 && v35 )
      {
        ++gdwDeferWinEvent;
        if ( (int)IszzzCalcStartCursorHideSupported_0() >= 0 )
        {
          PsGetProcessWin32Process(*(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
          zzzCalcStartCursorHide_0();
        }
        --gdwDeferWinEvent;
        if ( grpWinStaList )
        {
          if ( !*(_QWORD *)(CurrentProcessWin32Process + 640) )
          {
            UserSetLastError(1003LL);
LABEL_166:
            Event = -1073741823;
            goto LABEL_199;
          }
        }
      }
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(ThreadWin32Thread + 400) + 12LL),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      if ( (int)IsxxxUpdateInputHangInfoSupported_0() >= 0 )
        xxxUpdateInputHangInfo_0();
      if ( (int)IsSetUnavailableInputSourceSupported_0() >= 0 )
      {
        SetUnavailableInputSource_0();
        SetUnavailableInputSource_0();
      }
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x20000) != 0 )
        *(_DWORD *)(ThreadWin32Thread + 440) |= 0x4000u;
      *(_DWORD *)(ThreadWin32Thread + 440) |= 0x1000000u;
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x140) == 0
        && (gptiForeground && CurrentProcessWin32Process == *((_QWORD *)gptiForeground + 47)
         || qword_1C01030F8
         && CurrentProcessWin32Process == *(_QWORD *)(qword_1C01030F8 + 376)
         && !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
      {
        *(_DWORD *)(ThreadWin32Thread + 440) |= 0x20u;
      }
      v27 = *(unsigned int *)gpsi;
      if ( (v27 & 4) != 0 && (int)IsCreateInputContextSupported_0() >= 0 )
        CreateInputContext_0();
      if ( !v31 )
      {
        Event = IsxxxClientThreadSetupSupported_0();
        if ( Event >= 0 )
          Event = xxxClientThreadSetup_0();
        if ( Event < 0 )
          goto LABEL_199;
      }
      if ( v35 && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 1) == 0 && (int)IsPlayEventSoundSupported_0() >= 0 )
        PlayEventSound_0();
      v60 = *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      if ( v60 )
      {
        if ( (*(_DWORD *)(v60 + 32) & 8) != 0 )
          goto LABEL_166;
        PopAndFreeW32ThreadLock_0();
      }
      if ( *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) )
        PopAndFreeAlwaysW32ThreadLock_0();
      v61 = *(_DWORD *)(ThreadWin32Thread + 1072);
      if ( (v61 & 1) != 0 )
        *(_DWORD *)(ThreadWin32Thread + 1072) = v61 & 0xFFFFFFFE;
      return (unsigned int)Event;
    }
    if ( (*(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) & 0x200) != 0 )
    {
      v36 = *(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    }
    else
    {
      if ( !*(_WORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) )
      {
        *(_DWORD *)(CurrentProcessWin32Process + 660) = 0;
LABEL_78:
        if ( (*(_DWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) & 0x400) != 0 )
        {
          v37 = *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v37;
          v38 = 0LL;
          if ( (unsigned __int64)(unsigned __int16)v37 < *((_QWORD *)gpsi + 1) )
          {
            v39 = qword_1C0102D48 + (unsigned int)(unsigned __int16)v37 * dword_1C0102D50;
            if ( (WORD1(v37) == *(_WORD *)(v39 + 18)
               || WORD1(v37) == 0xFFFF
               || !WORD1(v37) && PsGetCurrentProcessWow64Process())
              && (*(_BYTE *)(v39 + 17) & 1) == 0
              && *(_BYTE *)(v39 + 16) == 12 )
            {
              v38 = *(_QWORD *)v39;
            }
          }
          if ( v38 )
            *(_QWORD *)(CurrentProcessWin32Process + 664) = *(_QWORD *)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                      + 0x90);
          else
            UserSetLastError(1461LL);
          v31 = *(_DWORD *)v1;
        }
        goto LABEL_91;
      }
      v36 = ParseReserved(*(const unsigned __int16 **)(((unsigned __int64)&v64 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70), v33);
    }
    *(_DWORD *)(CurrentProcessWin32Process + 660) = v36;
    goto LABEL_78;
  }
  return 3221225738LL;
}
