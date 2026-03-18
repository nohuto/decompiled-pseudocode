/*
 * XREFs of xxxCreateThreadInfo @ 0x1C004D110
 * Callers:
 *     UserThreadCallout @ 0x1C004F0C0 (UserThreadCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C007C5BC (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     IszzzCalcStartCursorHideSupported_0 @ 0x1C0001C50 (IszzzCalcStartCursorHideSupported_0.c)
 *     zzzCalcStartCursorHide_0 @ 0x1C0001C58 (zzzCalcStartCursorHide_0.c)
 *     PushW32ThreadLock_0 @ 0x1C0001C70 (PushW32ThreadLock_0.c)
 *     IsSetManifestWinVerSupported_0 @ 0x1C0001C78 (IsSetManifestWinVerSupported_0.c)
 *     SetManifestWinVer_0 @ 0x1C0001C80 (SetManifestWinVer_0.c)
 *     IsSetAppCompatFlagsSupported_0 @ 0x1C0001C88 (IsSetAppCompatFlagsSupported_0.c)
 *     SetAppCompatFlags_0 @ 0x1C0001C90 (SetAppCompatFlags_0.c)
 *     IsxxxResolveDesktopSupported_0 @ 0x1C0001CA0 (IsxxxResolveDesktopSupported_0.c)
 *     xxxResolveDesktop_0 @ 0x1C0001CA8 (xxxResolveDesktop_0.c)
 *     IsxxxSetProcessWindowStationSupported_0 @ 0x1C0001CB0 (IsxxxSetProcessWindowStationSupported_0.c)
 *     xxxSetProcessWindowStation_0 @ 0x1C0001CB8 (xxxSetProcessWindowStation_0.c)
 *     IsMapDesktopSupported_0 @ 0x1C0001CC0 (IsMapDesktopSupported_0.c)
 *     MapDesktop_0 @ 0x1C0001CC8 (MapDesktop_0.c)
 *     IszzzSetDesktopSupported_0 @ 0x1C0001CD0 (IszzzSetDesktopSupported_0.c)
 *     zzzSetDesktop_0 @ 0x1C0001CD8 (zzzSetDesktop_0.c)
 *     IsGetJournallingQueueSupported_0 @ 0x1C0001CE0 (IsGetJournallingQueueSupported_0.c)
 *     GetJournallingQueue_0 @ 0x1C0001CE8 (GetJournallingQueue_0.c)
 *     IsDestroyThreadsMessagesSupported_0 @ 0x1C0001CF0 (IsDestroyThreadsMessagesSupported_0.c)
 *     DestroyThreadsMessages_0 @ 0x1C0001CF8 (DestroyThreadsMessages_0.c)
 *     IsSetForegroundPrioritySupported_0 @ 0x1C0001D00 (IsSetForegroundPrioritySupported_0.c)
 *     SetForegroundPriority_0 @ 0x1C0001D08 (SetForegroundPriority_0.c)
 *     IsxxxUpdateInputHangInfoSupported_0 @ 0x1C0001D10 (IsxxxUpdateInputHangInfoSupported_0.c)
 *     xxxUpdateInputHangInfo_0 @ 0x1C0001D18 (xxxUpdateInputHangInfo_0.c)
 *     IsSetUnavailableInputSourceSupported_0 @ 0x1C0001D20 (IsSetUnavailableInputSourceSupported_0.c)
 *     SetUnavailableInputSource_0 @ 0x1C0001D28 (SetUnavailableInputSource_0.c)
 *     IsCreateInputContextSupported_0 @ 0x1C0001D30 (IsCreateInputContextSupported_0.c)
 *     CreateInputContext_0 @ 0x1C0001D38 (CreateInputContext_0.c)
 *     IsxxxClientThreadSetupSupported_0 @ 0x1C0001D40 (IsxxxClientThreadSetupSupported_0.c)
 *     xxxClientThreadSetup_0 @ 0x1C0001D48 (xxxClientThreadSetup_0.c)
 *     IsPlayEventSoundSupported_0 @ 0x1C0001D50 (IsPlayEventSoundSupported_0.c)
 *     PlayEventSound_0 @ 0x1C0001D58 (PlayEventSound_0.c)
 *     PopAndFreeW32ThreadLock_0 @ 0x1C0001D60 (PopAndFreeW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D68 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     AllocQueue @ 0x1C004CEE0 (AllocQueue.c)
 *     HMAssignmentLock @ 0x1C004D0A0 (HMAssignmentLock.c)
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C004ED10 (zzzDestroyQueue.c)
 *     UpdateRawMouseMode @ 0x1C004F018 (UpdateRawMouseMode.c)
 *     ProtectHandle @ 0x1C004F034 (ProtectHandle.c)
 *     RtlGetExpWinVer @ 0x1C004F614 (RtlGetExpWinVer.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004FFC4 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004FFE0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00500C4 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     LockObjectAssignment @ 0x1C0050110 (LockObjectAssignment.c)
 *     InitClientInfo @ 0x1C0050180 (InitClientInfo.c)
 *     IsImmersiveAppRestricted @ 0x1C0051DB0 (IsImmersiveAppRestricted.c)
 *     CloseProtectedHandle @ 0x1C0052440 (CloseProtectedHandle.c)
 *     ?ParseReserved@@YAKPEBG0@Z @ 0x1C0084764 (-ParseReserved@@YAKPEBG0@Z.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00A7CF8 (EtwTraceScreenSaverProcessEvent.c)
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 *     Template_qq @ 0x1C00A95AC (Template_qq.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  unsigned __int64 v1; // rbp
  __int64 v3; // rcx
  PEPROCESS ThreadProcess; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  struct _NT_TIB *Self; // r13
  __int64 v8; // rdx
  int v9; // r12d
  __int64 ThreadWin32Thread; // rdi
  __int64 v11; // r9
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  int v14; // edx
  const void *v15; // rsi
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int *v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  __int64 CurrentProcessWin32Process; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  PVOID CurrentProcess; // rax
  BOOL v26; // edx
  _DWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  int Event; // esi
  __int64 v31; // rsi
  __int64 ProcessSectionBaseAddress; // rax
  int v33; // r12d
  HANDLE *v34; // r15
  const unsigned __int16 *v35; // rdx
  __int64 v36; // r8
  BOOL v37; // r13d
  unsigned int v38; // eax
  __int64 v39; // r8
  __int64 v40; // r12
  __int64 v41; // rdx
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // r15
  __int64 v45; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v47; // rdi
  int v48; // r14d
  struct tagTHREADINFO **v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  PVOID v52; // rcx
  __int64 v53; // r15
  int v54; // r8d
  LARGE_INTEGER v55; // r14
  char v56; // al
  unsigned int CurrentProcessId; // eax
  __int64 v58; // r8
  void *v59; // rcx
  void *v60; // r15
  __int64 v61; // rdx
  __int64 v62; // rcx
  UserAtomicCheck *v63; // rcx
  __int64 JournallingQueue_0; // r15
  __int64 v65; // rdx
  __int64 v66; // rax
  int v67; // eax
  BOOLEAN InitialState[8]; // [rsp+20h] [rbp-50h]
  BOOLEAN InitialStatea[8]; // [rsp+20h] [rbp-50h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-48h]
  POBJECT_HANDLE_INFORMATION HandleInformationa; // [rsp+28h] [rbp-48h]
  int v73; // [rsp+70h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL;
  ThreadProcess = PsGetThreadProcess(Thread);
  *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = ThreadProcess;
  *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0LL;
  v8 = Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    TemplateEventDescriptor(v3, &InitiateGuiThreadExecution, &W32kControlGuid);
  if ( !gbCleanedUpResources
    && PsGetCurrentProcessWin32Process(v3, v8, v5, v6, *(_QWORD *)InitialState, HandleInformation) )
  {
    ++gdwGuiThreads;
    v9 = 0;
    if ( ThreadProcess == gpepCSRSS )
      v9 = 33554504;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
    *(_QWORD *)(ThreadWin32Thread + 488) = ThreadWin32Thread + 480;
    *(_QWORD *)(ThreadWin32Thread + 480) = ThreadWin32Thread + 480;
    *(_QWORD *)(ThreadWin32Thread + 1072) = ThreadWin32Thread + 1064;
    *(_QWORD *)(ThreadWin32Thread + 1064) = ThreadWin32Thread + 1064;
    *(_QWORD *)(ThreadWin32Thread + 976) = ThreadWin32Thread + 968;
    *(_QWORD *)(ThreadWin32Thread + 968) = ThreadWin32Thread + 968;
    *(_DWORD *)(ThreadWin32Thread + 984) = 0;
    *(_BYTE *)(ThreadWin32Thread + 1092) = 0;
    *(_DWORD *)(ThreadWin32Thread + 756) = 1;
    *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = *(_QWORD *)(PsGetProcessPeb(ThreadProcess)
                                                                                     + 32);
    *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = ((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 48;
    v12 = *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
    *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v12 + 32);
    *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_QWORD *)(v12 + 40);
    *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_DWORD *)(v12 + 136);
    *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = *(_DWORD *)(v12 + 140);
    *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_DWORD *)(v12 + 144);
    *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C) = *(_DWORD *)(v12 + 148);
    *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_DWORD *)(v12 + 164);
    *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54) = *(_DWORD *)(v12 + 168);
    v13 = (_QWORD *)(v12 + 192);
    if ( v13 >= W32UserProbeAddress )
      v13 = W32UserProbeAddress;
    v14 = *(_DWORD *)v13;
    *(_DWORD *)v1 = *(_DWORD *)v13;
    *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v14;
    v15 = (const void *)v13[1];
    *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v15;
    if ( (_WORD)v14 )
    {
      if ( ((unsigned __int8)v15 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (unsigned __int64)v15 + (unsigned __int16)v14 + 2;
      if ( v16 >= (unsigned __int64)W32UserProbeAddress
        || (unsigned __int16)v14 > *(_WORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 2)
        || (v14 & 1) != 0
        || v16 <= (unsigned __int64)v15 )
      {
        *(_BYTE *)W32UserProbeAddress = 0;
      }
      v17 = Win32AllocPoolWithQuota();
      *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v17;
      *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v17;
      if ( !v17 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock_0();
      memmove(
        *(void **)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
        v15,
        *(unsigned __int16 *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58));
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
    }
    v18 = (unsigned int *)(*(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) + 208LL);
    if ( v18 >= W32UserProbeAddress )
      v18 = (unsigned int *)W32UserProbeAddress;
    v19 = *v18;
    *(_DWORD *)v1 = v19;
    *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v19;
    v20 = *((_QWORD *)v18 + 1);
    *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v20;
    if ( (v20 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = (unsigned __int16)v19 + v20 + 2;
    if ( v21 >= (unsigned __int64)W32UserProbeAddress
      || (unsigned __int16)v19 > *(_WORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 2)
      || (v19 & 1) != 0
      || v21 <= v20 )
    {
      *(_BYTE *)W32UserProbeAddress = 0;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(
                                   v21,
                                   v19,
                                   v20,
                                   v11,
                                   *(_QWORD *)InitialStatea,
                                   HandleInformationa);
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80u) != 0 )
      v9 |= 0x100u;
    if ( (HANDLE)gpidLogon == PsGetThreadProcessId(Thread) )
      v9 |= 0x2000000u;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v24, v23);
    v26 = 0;
    if ( CurrentProcess )
      v26 = CurrentProcess == g_pepDwm;
    if ( v26 )
      *(_DWORD *)(ThreadWin32Thread + 1080) |= 4u;
    *(_DWORD *)(ThreadWin32Thread + 448) = v9;
    *(_DWORD *)(ThreadWin32Thread + 1208) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1212) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1200) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1204) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1252) = 0;
    if ( (dword_1C00FF334 & 0x80u) == 0 )
    {
      v27 = (_DWORD *)gspklGlobalActive;
      if ( !gspklGlobalActive )
      {
        HMAssignmentLock((_DWORD **)&gspklGlobalActive, (_DWORD *)gspklBaseLayout);
        v27 = (_DWORD *)gspklGlobalActive;
      }
    }
    else
    {
      v27 = (_DWORD *)gspklBaseLayout;
    }
    HMAssignmentLock((_DWORD **)(ThreadWin32Thread + 400), v27);
    *(_QWORD *)(ThreadWin32Thread + 408) = ThreadWin32Thread + 920;
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x800000) != 0 )
      *(_DWORD *)(ThreadWin32Thread + 448) |= 0x2000000u;
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x400) != 0 )
      *(_DWORD *)(ThreadWin32Thread + 1080) |= 0x20u;
    *(_QWORD *)(ThreadWin32Thread + 384) = CurrentProcessWin32Process;
    *(_QWORD *)(ThreadWin32Thread + 592) = *(_QWORD *)(CurrentProcessWin32Process + 296);
    *(_QWORD *)(CurrentProcessWin32Process + 296) = ThreadWin32Thread;
    ++*(_DWORD *)(CurrentProcessWin32Process + 360);
    if ( Self )
      Self[2].StackBase = (PVOID)ThreadWin32Thread;
    if ( (v9 & 4) != 0 )
    {
      v28 = Win32AllocPoolWithQuota();
      *(_QWORD *)(ThreadWin32Thread + 440) = v28;
      if ( !v28 )
      {
LABEL_50:
        Event = -1073741801;
        goto LABEL_215;
      }
    }
    else
    {
      *(_QWORD *)(ThreadWin32Thread + 440) = (char *)Self + 2048;
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x2000000) != 0 )
        *(_DWORD *)(ThreadWin32Thread + 448) |= 0x20000000u;
    }
    if ( !*(_DWORD *)(ThreadWin32Thread + 560) )
    {
      v31 = *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      if ( PsGetProcessPeb(v31) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v31);
        *(_DWORD *)(ThreadWin32Thread + 560) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(ThreadWin32Thread + 560) = 1536;
      }
    }
    if ( (int)IsSetManifestWinVerSupported_0() >= 0 )
      SetManifestWinVer_0();
    v33 = v9 & 0xC;
    *(_DWORD *)v1 = v33;
    if ( !v33 && (int)IsSetAppCompatFlagsSupported_0() >= 0 && (unsigned int)SetAppCompatFlags_0() )
      *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x1000000u;
    v34 = (HANDLE *)(ThreadWin32Thread + 648);
    Event = ZwCreateEvent((PHANDLE)(ThreadWin32Thread + 648), 0x1F0003u, 0LL, SynchronizationEvent, 0);
    if ( Event >= 0 )
    {
      Event = ObReferenceObjectByHandle(*v34, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, (PVOID *)(v1 + 168), 0LL);
      *(_QWORD *)(ThreadWin32Thread + 656) = *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8);
      if ( Event < 0 )
      {
        if ( Event != -1073741816 )
          ObCloseHandle(*v34, 1);
      }
      else
      {
        LOBYTE(v36) = 1;
        Event = ProtectHandle(*v34, ExEventObjectType, v36);
      }
    }
    if ( Event < 0 )
    {
      *v34 = 0LL;
      goto LABEL_215;
    }
    v37 = (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x4000) == 0;
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x4000u;
    if ( !*(_DWORD *)(CurrentProcessWin32Process + 748)
      && *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) )
    {
      *(_DWORD *)(CurrentProcessWin32Process + 748) = 28;
      *(_DWORD *)(CurrentProcessWin32Process + 752) = *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      *(_DWORD *)(CurrentProcessWin32Process + 756) = *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44);
      *(_DWORD *)(CurrentProcessWin32Process + 760) = *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
      *(_DWORD *)(CurrentProcessWin32Process + 764) = *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C);
      *(_DWORD *)(CurrentProcessWin32Process + 768) = *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
      *(_WORD *)(CurrentProcessWin32Process + 772) = *(_WORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
    }
    if ( !v37 )
    {
LABEL_93:
      v43 = AllocQueue(0LL, 0LL);
      v44 = v43;
      if ( !v43 )
        goto LABEL_50;
      *(_QWORD *)(ThreadWin32Thread + 392) = v43;
      *(_QWORD *)(v43 + 56) = ThreadWin32Thread;
      *(_QWORD *)(v43 + 48) = ThreadWin32Thread;
      UpdateRawMouseMode(v43);
      ++*(_DWORD *)(v44 + 336);
      if ( *(PVOID *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) == gpepCSRSS )
      {
        *(_QWORD *)(v44 + 372) = 0x2000LL;
      }
      else
      {
        *(_DWORD *)(v44 + 372) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 384) + 832LL);
        *(_DWORD *)(v44 + 376) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 384) + 836LL);
      }
      if ( (*(_DWORD *)(ThreadWin32Thread + 448) & 0xC) != 0 || !grpWinStaList )
      {
        *(_DWORD *)(ThreadWin32Thread + 1080) |= 0x10u;
        if ( (int)IsxxxSetProcessWindowStationSupported_0() < 0 )
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x40010u;
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
        Event = IsxxxResolveDesktopSupported_0();
        if ( Event >= 0 )
          Event = xxxResolveDesktop_0();
        if ( Event < 0 )
        {
          if ( Event == -1073741205 )
          {
            UserSessionSwitchLeaveCrit();
            ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
            CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v45);
            if ( CurrentThreadWin32Thread )
              CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
            v47 = 0LL;
            while ( 1 )
            {
              v48 = 0;
              v49 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
              if ( v49 )
                v47 = *v49;
              if ( (unsigned int)IsCurrentProcessDwm()
                || (PVOID)PsGetCurrentProcess(v51, v50) == gpepCSRSS && v47 != (struct tagTHREADINFO *)gptiTSRequest )
              {
LABEL_119:
                v53 = PsGetCurrentThreadWin32Thread(v51);
                if ( v53 )
                {
                  v55 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v53 + 8));
                  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0 )
                  {
                    LOBYTE(v29) = byte_1C00FEA58 - 1;
                    if ( (unsigned __int8)(byte_1C00FEA58 - 1) <= 2u
                      || (qword_1C00FEA40 & 0x200000010000000LL) == 0
                      || (v56 = 1, (qword_1C00FEA48 & 0x200000010000000LL) != qword_1C00FEA48) )
                    {
                      v56 = 0;
                    }
                    if ( v56 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                      Template_xqx(
                        v29,
                        (unsigned int)&AcquiredExclusiveUserCritEvent,
                        v54,
                        v55.LowPart,
                        0,
                        gullUserCritAcquireToken);
                  }
                  if ( v55.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
                    && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                  {
                    Template_xqx(
                      gullUserCritAcquireToken,
                      (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                      v54,
                      0,
                      1000 * v55.QuadPart / gliQpcFreq.QuadPart,
                      gullUserCritAcquireToken);
                  }
                  *(_QWORD *)(v53 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                }
                gptiCurrent = v47;
                gbValidateHandleForIL = 1;
                goto LABEL_215;
              }
              if ( !gbRITBlockedOnDIT )
                break;
              if ( v47 != gptiRit )
              {
                ++gcRITBlockedOnDITWaiters;
                ExReleaseResourceAndLeavePriorityRegion(gpresUser);
                v52 = gpsemRITBlockedOnDITWaiters;
LABEL_117:
                KeWaitForSingleObject(v52, UserRequest, 0, 0, 0LL);
                v48 = 1;
              }
LABEL_118:
              if ( v48 != 1 )
                goto LABEL_119;
            }
            if ( gbDITInHitTest != 1 || v47 == gptiRit )
              goto LABEL_118;
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeavePriorityRegion(gpresUser);
            v52 = gpsemDITHitTestWaiters;
            goto LABEL_117;
          }
          CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
          v29 = Microsoft_Windows_Win32kEnableBits;
          if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
            Template_qq(Microsoft_Windows_Win32kEnableBits, &DesktopResolutionFailure, v58, CurrentProcessId, Event);
          Event = -1073741502;
          goto LABEL_215;
        }
        Event = IsxxxSetProcessWindowStationSupported_0();
        if ( Event >= 0 )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)(v1 + 160));
          Event = xxxSetProcessWindowStation_0();
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)(v1 + 160));
        }
        v59 = *(void **)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        if ( Event < 0 )
        {
          CloseProtectedHandle(v59);
          CloseProtectedHandle(*(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
          *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
          goto LABEL_215;
        }
        Event = ObReferenceObjectByHandle(v59, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, (PVOID *)(v1 + 152), 0LL);
        v60 = *(void **)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
        *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v60;
        if ( Event < 0 )
          goto LABEL_215;
        PushW32ThreadLock_0();
        if ( v60 )
          ObfReferenceObject(v60);
        ObfDereferenceObject(v60);
        *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 1;
        *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = PsGetCurrentProcess(v62, v61);
        *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = v60;
        *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = 0;
        *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0xCC) = 1;
        Event = IsMapDesktopSupported_0();
        if ( Event >= 0 )
          Event = MapDesktop_0();
        if ( Event < 0 )
          goto LABEL_215;
        if ( !*(_QWORD *)(CurrentProcessWin32Process + 368)
          && PsGetProcessId(*(PEPROCESS *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)) != (HANDLE)gpidLogon )
        {
          LockObjectAssignment(CurrentProcessWin32Process + 312, v60);
          *(_QWORD *)(CurrentProcessWin32Process + 368) = *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                    + 8);
        }
      }
      if ( !(unsigned int)InitClientInfo(ThreadWin32Thread) )
        goto LABEL_215;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)(v1 + 40));
      Event = IszzzSetDesktopSupported_0();
      if ( Event >= 0 )
        Event = zzzSetDesktop_0();
      v63 = (UserAtomicCheck *)(v1 + 40);
      if ( Event < 0 )
      {
        *(_BYTE *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 1;
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack(v63);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)(v1 + 40));
        goto LABEL_215;
      }
      UserAtomicCheck::~UserAtomicCheck(v63);
      if ( *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) == grpdeskRitInput )
      {
        JournallingQueue_0 = 0LL;
        if ( (int)IsGetJournallingQueueSupported_0() >= 0 )
          JournallingQueue_0 = GetJournallingQueue_0();
        if ( JournallingQueue_0 && JournallingQueue_0 != *(_QWORD *)(ThreadWin32Thread + 392) )
        {
          if ( (int)IsDestroyThreadsMessagesSupported_0() >= 0 )
            DestroyThreadsMessages_0();
          zzzDestroyQueue(*(_QWORD *)(ThreadWin32Thread + 392), ThreadWin32Thread);
          *(_QWORD *)(ThreadWin32Thread + 392) = JournallingQueue_0;
          ++*(_DWORD *)(JournallingQueue_0 + 336);
        }
      }
      if ( *(int *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) < 0 )
      {
        if ( !v37 )
        {
LABEL_170:
          if ( (int)IsSetForegroundPrioritySupported_0() >= 0 )
            SetForegroundPriority_0();
          if ( v37 )
            *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x400000u;
          *(_DWORD *)(ThreadWin32Thread + 448) |= 0x2000000u;
          goto LABEL_175;
        }
        if ( gpidLogon
          && PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10)) == gpidLogon )
        {
          gppiScreenSaver = CurrentProcessWin32Process;
          gptSSCursor = *((_QWORD *)gpsi + 497);
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200000u;
          EtwTraceScreenSaverProcessEvent(1LL);
          goto LABEL_170;
        }
        *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) &= ~0x80000000;
      }
LABEL_175:
      if ( (*(_DWORD *)(ThreadWin32Thread + 448) & 0xC) == 0 && v37 )
      {
        ++gdwDeferWinEvent;
        if ( (int)IszzzCalcStartCursorHideSupported_0() >= 0 )
        {
          PsGetProcessWin32Process(*(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
          zzzCalcStartCursorHide_0();
        }
        --gdwDeferWinEvent;
        if ( grpWinStaList )
        {
          if ( !*(_QWORD *)(CurrentProcessWin32Process + 640) )
          {
            UserSetLastError(1003LL, v65);
LABEL_182:
            Event = -1073741823;
            goto LABEL_215;
          }
        }
      }
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(ThreadWin32Thread + 408) + 12LL),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      if ( (int)IsxxxUpdateInputHangInfoSupported_0() >= 0 )
        xxxUpdateInputHangInfo_0();
      if ( (int)IsSetUnavailableInputSourceSupported_0() >= 0 )
      {
        SetUnavailableInputSource_0();
        SetUnavailableInputSource_0();
      }
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x20000) != 0 )
        *(_DWORD *)(ThreadWin32Thread + 448) |= 0x4000u;
      *(_DWORD *)(ThreadWin32Thread + 448) |= 0x1000000u;
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x140) == 0
        && (gptiForeground && CurrentProcessWin32Process == *((_QWORD *)gptiForeground + 48)
         || qword_1C00FFD30
         && CurrentProcessWin32Process == *(_QWORD *)(qword_1C00FFD30 + 384)
         && !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
      {
        *(_DWORD *)(ThreadWin32Thread + 448) |= 0x20u;
      }
      v29 = *(unsigned int *)gpsi;
      if ( (v29 & 4) != 0 && (int)IsCreateInputContextSupported_0() >= 0 )
        CreateInputContext_0();
      if ( v33 )
        goto LABEL_205;
      Event = IsxxxClientThreadSetupSupported_0();
      if ( Event >= 0 )
        Event = xxxClientThreadSetup_0();
      if ( Event >= 0 )
      {
LABEL_205:
        if ( v37 && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 1) == 0 && (int)IsPlayEventSoundSupported_0() >= 0 )
          PlayEventSound_0();
        v66 = *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        if ( v66 )
        {
          if ( (*(_DWORD *)(v66 + 32) & 8) != 0 )
            goto LABEL_182;
          PopAndFreeW32ThreadLock_0();
        }
        if ( *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) )
          PopAndFreeAlwaysW32ThreadLock_0();
        v67 = *(_DWORD *)(ThreadWin32Thread + 1080);
        if ( (v67 & 1) != 0 )
          *(_DWORD *)(ThreadWin32Thread + 1080) = v67 & 0xFFFFFFFE;
        return (unsigned int)Event;
      }
LABEL_215:
      if ( *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
        PopAndFreeW32ThreadLock_0();
      if ( *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) )
        PopAndFreeAlwaysW32ThreadLock_0();
      xxxDestroyThreadInfo(v29);
      return (unsigned int)Event;
    }
    if ( (*(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) & 0x200) != 0 )
    {
      v38 = *(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    }
    else
    {
      if ( !*(_WORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) )
      {
        *(_DWORD *)(CurrentProcessWin32Process + 660) = 0;
LABEL_80:
        if ( (*(_DWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) & 0x400) != 0 )
        {
          v39 = *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v39;
          v40 = 0LL;
          v41 = (unsigned __int16)v39;
          if ( (unsigned __int64)(unsigned __int16)v39 < *((_QWORD *)gpsi + 1) )
          {
            v42 = qword_1C01003E8 + (unsigned int)(unsigned __int16)v39 * dword_1C01003F0;
            if ( (WORD1(v39) == *(_WORD *)(v42 + 18)
               || WORD1(v39) == 0xFFFF
               || !WORD1(v39) && PsGetCurrentProcessWow64Process())
              && (*(_BYTE *)(v42 + 17) & 1) == 0
              && *(_BYTE *)(v42 + 16) == 12 )
            {
              v40 = *(_QWORD *)v42;
            }
          }
          if ( v40 )
            *(_QWORD *)(CurrentProcessWin32Process + 664) = *(_QWORD *)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                      + 0x90);
          else
            UserSetLastError(1461LL, v41);
          v33 = *(_DWORD *)v1;
        }
        goto LABEL_93;
      }
      v38 = ParseReserved(*(const unsigned __int16 **)(((unsigned __int64)&v73 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70), v35);
    }
    *(_DWORD *)(CurrentProcessWin32Process + 660) = v38;
    goto LABEL_80;
  }
  return 3221225738LL;
}
