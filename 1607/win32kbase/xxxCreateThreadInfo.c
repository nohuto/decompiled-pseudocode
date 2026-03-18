/*
 * XREFs of xxxCreateThreadInfo @ 0x1C0014378
 * Callers:
 *     UserThreadCallout @ 0x1C001F2C0 (UserThreadCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00542E4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     IsSetForegroundPrioritySupported_0 @ 0x1C0001C60 (IsSetForegroundPrioritySupported_0.c)
 *     SetForegroundPriority_0 @ 0x1C0001C68 (SetForegroundPriority_0.c)
 *     PushW32ThreadLock_0 @ 0x1C0001D98 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001F00 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     PopAndFreeW32ThreadLock_0 @ 0x1C0001F68 (PopAndFreeW32ThreadLock_0.c)
 *     IszzzCalcStartCursorHideSupported_0 @ 0x1C0001F80 (IszzzCalcStartCursorHideSupported_0.c)
 *     zzzCalcStartCursorHide_0 @ 0x1C0001F88 (zzzCalcStartCursorHide_0.c)
 *     IsSetManifestWinVerSupported_0 @ 0x1C0001FA0 (IsSetManifestWinVerSupported_0.c)
 *     SetManifestWinVer_0 @ 0x1C0001FA8 (SetManifestWinVer_0.c)
 *     IsSetAppCompatFlagsSupported_0 @ 0x1C0001FB0 (IsSetAppCompatFlagsSupported_0.c)
 *     SetAppCompatFlags_0 @ 0x1C0001FB8 (SetAppCompatFlags_0.c)
 *     IsxxxResolveDesktopSupported_0 @ 0x1C0001FC8 (IsxxxResolveDesktopSupported_0.c)
 *     xxxResolveDesktop_0 @ 0x1C0001FD0 (xxxResolveDesktop_0.c)
 *     IsxxxSetProcessWindowStationSupported_0 @ 0x1C0001FD8 (IsxxxSetProcessWindowStationSupported_0.c)
 *     xxxSetProcessWindowStation_0 @ 0x1C0001FE0 (xxxSetProcessWindowStation_0.c)
 *     IsMapDesktopSupported_0 @ 0x1C0001FE8 (IsMapDesktopSupported_0.c)
 *     MapDesktop_0 @ 0x1C0001FF0 (MapDesktop_0.c)
 *     IszzzSetDesktopSupported_0 @ 0x1C0001FF8 (IszzzSetDesktopSupported_0.c)
 *     zzzSetDesktop_0 @ 0x1C0002000 (zzzSetDesktop_0.c)
 *     IsGetJournallingQueueSupported_0 @ 0x1C0002008 (IsGetJournallingQueueSupported_0.c)
 *     GetJournallingQueue_0 @ 0x1C0002010 (GetJournallingQueue_0.c)
 *     IsDestroyThreadsMessagesSupported_0 @ 0x1C0002018 (IsDestroyThreadsMessagesSupported_0.c)
 *     DestroyThreadsMessages_0 @ 0x1C0002020 (DestroyThreadsMessages_0.c)
 *     IsxxxUpdateInputHangInfoSupported_0 @ 0x1C0002028 (IsxxxUpdateInputHangInfoSupported_0.c)
 *     xxxUpdateInputHangInfo_0 @ 0x1C0002030 (xxxUpdateInputHangInfo_0.c)
 *     IsSetUnavailableInputSourceSupported_0 @ 0x1C0002038 (IsSetUnavailableInputSourceSupported_0.c)
 *     SetUnavailableInputSource_0 @ 0x1C0002040 (SetUnavailableInputSource_0.c)
 *     IsCreateInputContextSupported_0 @ 0x1C0002048 (IsCreateInputContextSupported_0.c)
 *     CreateInputContext_0 @ 0x1C0002050 (CreateInputContext_0.c)
 *     IsxxxClientThreadSetupSupported_0 @ 0x1C0002058 (IsxxxClientThreadSetupSupported_0.c)
 *     xxxClientThreadSetup_0 @ 0x1C0002060 (xxxClientThreadSetup_0.c)
 *     IsPlayEventSoundSupported_0 @ 0x1C0002068 (IsPlayEventSoundSupported_0.c)
 *     PlayEventSound_0 @ 0x1C0002070 (PlayEventSound_0.c)
 *     CloseProtectedHandle @ 0x1C0011F88 (CloseProtectedHandle.c)
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C0014070 (zzzDestroyQueue.c)
 *     AllocQueue @ 0x1C00151C0 (AllocQueue.c)
 *     HMAssignmentLock @ 0x1C0015370 (HMAssignmentLock.c)
 *     UpdateRawMouseMode @ 0x1C00153E4 (UpdateRawMouseMode.c)
 *     ProtectHandle @ 0x1C0015400 (ProtectHandle.c)
 *     InitClientInfo @ 0x1C0015480 (InitClientInfo.c)
 *     LockObjectAssignment @ 0x1C0015600 (LockObjectAssignment.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003A784 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003A7A0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C003A884 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     RtlGetExpWinVer @ 0x1C0076E74 (RtlGetExpWinVer.c)
 *     ?ParseReserved@@YAKPEBG0@Z @ 0x1C0082988 (-ParseReserved@@YAKPEBG0@Z.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00B59C8 (EtwTraceScreenSaverProcessEvent.c)
 *     TemplateEventDescriptor @ 0x1C00B64B8 (TemplateEventDescriptor.c)
 *     Template_qq @ 0x1C00B7B64 (Template_qq.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  unsigned __int64 v1; // rbp
  __int64 v3; // rcx
  PEPROCESS ThreadProcess; // rsi
  struct _NT_TIB *Self; // r13
  int v6; // r12d
  __int64 ThreadWin32Thread; // rdi
  __int64 v8; // rcx
  ULONGLONG v9; // rcx
  int v10; // edx
  const void *v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  int v15; // edx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 CurrentProcessWin32Process; // r14
  PVOID CurrentProcess; // rax
  BOOL v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rax
  int Event; // esi
  __int64 v24; // rsi
  __int64 ProcessSectionBaseAddress; // rax
  int v26; // r12d
  HANDLE *v27; // r15
  const unsigned __int16 *v28; // rdx
  __int64 v29; // r9
  unsigned int v30; // eax
  int v31; // r12d
  unsigned int v32; // eax
  __int64 v33; // r13
  __int64 v34; // r12
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // r15
  struct _KPROCESS *v38; // r13
  __int64 v39; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v41; // r15
  __int64 v42; // rcx
  __int64 v43; // r14
  int v44; // ecx
  LARGE_INTEGER v45; // rdi
  int v46; // r8d
  char v47; // al
  unsigned int CurrentProcessId; // eax
  __int64 v49; // r8
  void *v50; // rcx
  void *v51; // r15
  UserAtomicCheck *v52; // rcx
  __int64 JournallingQueue_0; // r15
  __int64 v54; // rax
  int v55; // eax
  BOOLEAN InitialState[8]; // [rsp+20h] [rbp-50h]
  int v58; // [rsp+70h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL;
  ThreadProcess = PsGetThreadProcess(Thread);
  *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = ThreadProcess;
  *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    TemplateEventDescriptor(v3, &InitiateGuiThreadExecution, &W32kControlGuid);
  if ( !gbCleanedUpResources && PsGetCurrentProcessWin32Process() )
  {
    ++gdwGuiThreads;
    v6 = 0;
    if ( ThreadProcess == gpepCSRSS )
      v6 = 33554504;
    ThreadWin32Thread = W32GetThreadWin32Thread(Thread);
    *(_QWORD *)(ThreadWin32Thread + 480) = ThreadWin32Thread + 472;
    *(_QWORD *)(ThreadWin32Thread + 472) = ThreadWin32Thread + 472;
    *(_QWORD *)(ThreadWin32Thread + 1088) = ThreadWin32Thread + 1080;
    *(_QWORD *)(ThreadWin32Thread + 1080) = ThreadWin32Thread + 1080;
    *(_QWORD *)(ThreadWin32Thread + 976) = ThreadWin32Thread + 968;
    *(_QWORD *)(ThreadWin32Thread + 968) = ThreadWin32Thread + 968;
    *(_DWORD *)(ThreadWin32Thread + 984) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1016) = ThreadWin32Thread + 1008;
    *(_QWORD *)(ThreadWin32Thread + 1008) = ThreadWin32Thread + 1008;
    *(_BYTE *)(ThreadWin32Thread + 1108) = 0;
    *(_DWORD *)(ThreadWin32Thread + 748) = 1;
    *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_QWORD *)(PsGetProcessPeb(ThreadProcess)
                                                                                     + 32);
    *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = ((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                         + 48;
    v8 = *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
    *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v8 + 32);
    *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_QWORD *)(v8 + 40);
    *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_DWORD *)(v8 + 136);
    *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = *(_DWORD *)(v8 + 140);
    *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_DWORD *)(v8 + 144);
    *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C) = *(_DWORD *)(v8 + 148);
    *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_DWORD *)(v8 + 164);
    *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54) = *(_DWORD *)(v8 + 168);
    v9 = v8 + 192;
    if ( v9 >= W32UserProbeAddress )
      v9 = W32UserProbeAddress;
    v10 = *(_DWORD *)v9;
    *(_DWORD *)v1 = *(_DWORD *)v9;
    *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v10;
    v11 = *(const void **)(v9 + 8);
    *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v11;
    if ( (_WORD)v10 )
    {
      if ( ((unsigned __int8)v11 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)v11 + (unsigned __int16)v10 + 2;
      if ( v12 >= W32UserProbeAddress
        || (unsigned __int16)v10 > *(_WORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 2)
        || (v10 & 1) != 0
        || v12 <= (unsigned __int64)v11 )
      {
        *(_BYTE *)W32UserProbeAddress = 0;
      }
      v13 = Win32AllocPoolWithQuota(
              *(unsigned __int16 *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58),
              2037674837LL);
      *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v13;
      *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v13;
      if ( !v13 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock_0();
      memmove(
        *(void **)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
        v11,
        *(unsigned __int16 *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58));
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
    }
    v14 = *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) + 208LL;
    if ( v14 >= W32UserProbeAddress )
      v14 = W32UserProbeAddress;
    v15 = *(_DWORD *)v14;
    *(_DWORD *)v1 = *(_DWORD *)v14;
    *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v15;
    v16 = *(_QWORD *)(v14 + 8);
    *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v16;
    if ( (v16 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (unsigned __int16)v15 + v16 + 2;
    if ( v17 >= W32UserProbeAddress
      || (unsigned __int16)v15 > *(_WORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 2)
      || (v15 & 1) != 0
      || v17 <= v16 )
    {
      *(_BYTE *)W32UserProbeAddress = 0;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80u) != 0 )
      v6 |= 0x100u;
    if ( (HANDLE)gpidLogon == PsGetThreadProcessId(Thread) )
      v6 |= 0x2000000u;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    v20 = 0;
    if ( CurrentProcess )
      v20 = CurrentProcess == g_pepDwm;
    if ( v20 )
      *(_DWORD *)(ThreadWin32Thread + 1096) |= 4u;
    *(_DWORD *)(ThreadWin32Thread + 340) = 0;
    *(_DWORD *)(ThreadWin32Thread + 440) = v6;
    *(_DWORD *)(ThreadWin32Thread + 1224) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1228) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1216) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1220) = -1;
    *(_DWORD *)(ThreadWin32Thread + 1268) = 0;
    if ( (dword_1C0119944 & 0x80u) == 0 )
    {
      v21 = gspklGlobalActive;
      if ( !gspklGlobalActive )
      {
        HMAssignmentLock(&gspklGlobalActive, gspklBaseLayout);
        v21 = gspklGlobalActive;
      }
    }
    else
    {
      v21 = gspklBaseLayout;
    }
    HMAssignmentLock(ThreadWin32Thread + 392, v21);
    *(_QWORD *)(ThreadWin32Thread + 400) = ThreadWin32Thread + 920;
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x800000) != 0 )
      *(_DWORD *)(ThreadWin32Thread + 440) |= 0x2000000u;
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 768) & 0x400) != 0 )
      *(_DWORD *)(ThreadWin32Thread + 1096) |= 0x20u;
    *(_QWORD *)(ThreadWin32Thread + 376) = CurrentProcessWin32Process;
    *(_QWORD *)(ThreadWin32Thread + 584) = *(_QWORD *)(CurrentProcessWin32Process + 288);
    *(_QWORD *)(CurrentProcessWin32Process + 288) = ThreadWin32Thread;
    ++*(_DWORD *)(CurrentProcessWin32Process + 352);
    if ( Self )
      Self[2].StackBase = (PVOID)ThreadWin32Thread;
    if ( (v6 & 4) != 0 )
    {
      v22 = Win32AllocPoolWithQuota(240LL, 1768125269LL);
      *(_QWORD *)(ThreadWin32Thread + 432) = v22;
      if ( !v22 )
      {
LABEL_50:
        Event = -1073741801;
LABEL_204:
        if ( *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
          PopAndFreeW32ThreadLock_0();
        if ( *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) )
          PopAndFreeAlwaysW32ThreadLock_0();
        xxxDestroyThreadInfo();
        return (unsigned int)Event;
      }
    }
    else
    {
      *(_QWORD *)(ThreadWin32Thread + 432) = (char *)Self + 2048;
      LODWORD(Self[40].ArbitraryUserPointer) = *(_DWORD *)(ThreadWin32Thread + 340);
      *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 432) + 236LL) = 0;
      *(_QWORD *)(ThreadWin32Thread + 352) = *(_QWORD *)(ThreadWin32Thread + 432) + 232LL;
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x2000000) != 0 )
        *(_DWORD *)(ThreadWin32Thread + 440) |= 0x20000000u;
    }
    if ( !*(_DWORD *)(ThreadWin32Thread + 552) )
    {
      v24 = *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
      if ( PsGetProcessPeb(v24) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v24);
        *(_DWORD *)(ThreadWin32Thread + 552) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(ThreadWin32Thread + 552) = 1536;
      }
    }
    if ( (int)IsSetManifestWinVerSupported_0() >= 0 )
      SetManifestWinVer_0();
    v26 = v6 & 0xC;
    *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v26;
    if ( !v26 && (int)IsSetAppCompatFlagsSupported_0() >= 0 && (unsigned int)SetAppCompatFlags_0() )
      *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x1000000u;
    v27 = (HANDLE *)(ThreadWin32Thread + 640);
    Event = ZwCreateEvent((PHANDLE)(ThreadWin32Thread + 640), 0x1F0003u, 0LL, SynchronizationEvent, 0);
    if ( Event >= 0 )
    {
      Event = ObReferenceObjectByHandle(*v27, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, (PVOID *)(v1 + 160), 0LL);
      *(_QWORD *)(ThreadWin32Thread + 648) = *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
      if ( Event < 0 )
      {
        if ( Event != -1073741816 )
          ObCloseHandle(*v27, 1);
      }
      else
      {
        LOBYTE(v29) = 1;
        Event = ProtectHandle(*v27, v28, ExEventObjectType, v29);
      }
    }
    if ( Event < 0 )
    {
      *v27 = 0LL;
      goto LABEL_204;
    }
    v30 = *(_DWORD *)(CurrentProcessWin32Process + 12);
    v31 = ((v30 >> 14) & 1) == 0;
    *(_DWORD *)v1 = v31;
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v30 | 0x4000;
    if ( !*(_DWORD *)(CurrentProcessWin32Process + 740)
      && *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) )
    {
      *(_DWORD *)(CurrentProcessWin32Process + 740) = 28;
      *(_DWORD *)(CurrentProcessWin32Process + 744) = *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      *(_DWORD *)(CurrentProcessWin32Process + 748) = *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44);
      *(_DWORD *)(CurrentProcessWin32Process + 752) = *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
      *(_DWORD *)(CurrentProcessWin32Process + 756) = *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C);
      *(_DWORD *)(CurrentProcessWin32Process + 760) = *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
      *(_WORD *)(CurrentProcessWin32Process + 764) = *(_WORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
    }
    if ( ((v30 >> 14) & 1) != 0 )
    {
LABEL_93:
      v36 = AllocQueue(0LL, 0LL);
      v37 = v36;
      if ( !v36 )
        goto LABEL_50;
      *(_QWORD *)(ThreadWin32Thread + 384) = v36;
      *(_QWORD *)(v36 + 64) = ThreadWin32Thread;
      *(_QWORD *)(v36 + 56) = ThreadWin32Thread;
      UpdateRawMouseMode(v36);
      ++*(_DWORD *)(v37 + 344);
      v38 = *(struct _KPROCESS **)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
      if ( v38 == gpepCSRSS )
      {
        *(_QWORD *)(v37 + 380) = 0x2000LL;
      }
      else
      {
        *(_DWORD *)(v37 + 380) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 376) + 824LL);
        *(_DWORD *)(v37 + 384) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 376) + 828LL);
      }
      if ( (*(_DWORD *)(ThreadWin32Thread + 440) & 0xC) != 0 || !grpWinStaList )
      {
        *(_DWORD *)(ThreadWin32Thread + 1096) |= 0x10u;
        if ( (int)IsxxxSetProcessWindowStationSupported_0() < 0 )
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x40010u;
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
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
            if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
            UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
            ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
            CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v39);
            if ( CurrentThreadWin32Thread )
              CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
            v41 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
            v43 = PsGetCurrentThreadWin32Thread(v42);
            if ( v43 )
            {
              v45 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v43 + 8));
              if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
              {
                if ( (unsigned __int8)(byte_1C0118B28 - 1) <= 2u
                  || (qword_1C0118B10 & 0x200000010000000LL) == 0
                  || (v47 = 1, (qword_1C0118B18 & 0x200000010000000LL) != qword_1C0118B18) )
                {
                  v47 = 0;
                }
                if ( v47 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                {
                  LOBYTE(v44) = byte_1C0118B28 - 1;
                  Template_xqx(
                    v44,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v46,
                    v45.LowPart,
                    0,
                    gullUserCritAcquireToken);
                }
              }
              if ( v45.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
                && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
              {
                Template_xqx(
                  gullUserCritAcquireToken,
                  (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                  v46,
                  0,
                  1000 * v45.QuadPart / gliQpcFreq.QuadPart,
                  gullUserCritAcquireToken);
              }
              *(_QWORD *)(v43 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
            }
            gptiCurrent = v41;
            gbValidateHandleForIL = 1;
          }
          else
          {
            CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
            if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
            {
              *(_DWORD *)InitialState = Event;
              Template_qq(
                Microsoft_Windows_Win32kEnableBits,
                &DesktopResolutionFailure,
                v49,
                CurrentProcessId,
                *(_QWORD *)InitialState);
            }
            Event = -1073741502;
          }
          goto LABEL_204;
        }
        Event = IsxxxSetProcessWindowStationSupported_0();
        if ( Event >= 0 )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)(v1 + 168));
          Event = xxxSetProcessWindowStation_0();
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)(v1 + 168));
        }
        v50 = *(void **)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        if ( Event < 0 )
        {
          CloseProtectedHandle(v50);
          CloseProtectedHandle(*(void **)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
          *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
          goto LABEL_204;
        }
        Event = ObReferenceObjectByHandle(v50, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, (PVOID *)(v1 + 176), 0LL);
        v51 = *(void **)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0);
        *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v51;
        if ( Event < 0 )
          goto LABEL_204;
        PushW32ThreadLock_0();
        if ( v51 )
          ObfReferenceObject(v51);
        ObfDereferenceObject(v51);
        *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 1;
        *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = PsGetCurrentProcess();
        *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = v51;
        *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = 0;
        *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD4) = 1;
        Event = IsMapDesktopSupported_0();
        if ( Event >= 0 )
          Event = MapDesktop_0();
        if ( Event < 0 )
          goto LABEL_204;
        if ( !*(_QWORD *)(CurrentProcessWin32Process + 360) && PsGetProcessId(v38) != (HANDLE)gpidLogon )
        {
          LockObjectAssignment(CurrentProcessWin32Process + 304, v51);
          *(_QWORD *)(CurrentProcessWin32Process + 360) = *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                    + 8);
        }
      }
      if ( !(unsigned int)InitClientInfo(ThreadWin32Thread) )
        goto LABEL_204;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)(v1 + 32));
      Event = IszzzSetDesktopSupported_0();
      if ( Event >= 0 )
        Event = zzzSetDesktop_0();
      v52 = (UserAtomicCheck *)(v1 + 32);
      if ( Event < 0 )
      {
        *(_BYTE *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 1;
        LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
        UserAtomicCheck::UnregisterStack(v52);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)(v1 + 32));
        goto LABEL_204;
      }
      UserAtomicCheck::~UserAtomicCheck(v52);
      if ( *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) == grpdeskRitInput )
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
          ++*(_DWORD *)(JournallingQueue_0 + 344);
        }
      }
      if ( *(int *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) < 0 )
      {
        if ( v31 )
        {
          if ( !gpidLogon || PsGetProcessInheritedFromUniqueProcessId(v38) != gpidLogon )
          {
            *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) &= ~0x80000000;
            goto LABEL_164;
          }
          gppiScreenSaver = CurrentProcessWin32Process;
          gptSSCursor = *((_QWORD *)gpsi + 671);
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200000u;
          EtwTraceScreenSaverProcessEvent(1LL);
        }
        if ( (int)IsSetForegroundPrioritySupported_0() >= 0 )
          SetForegroundPriority_0();
        if ( v31 )
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x400000u;
        *(_DWORD *)(ThreadWin32Thread + 440) |= 0x2000000u;
      }
LABEL_164:
      if ( (*(_DWORD *)(ThreadWin32Thread + 440) & 0xC) == 0 && v31 )
      {
        ++gdwDeferWinEvent;
        if ( (int)IszzzCalcStartCursorHideSupported_0() >= 0 )
        {
          PsGetProcessWin32Process(v38);
          zzzCalcStartCursorHide_0();
        }
        --gdwDeferWinEvent;
        if ( grpWinStaList )
        {
          if ( !*(_QWORD *)(CurrentProcessWin32Process + 632) )
          {
            UserSetLastError(1003LL);
LABEL_171:
            Event = -1073741823;
            goto LABEL_204;
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
         || qword_1C011A500
         && CurrentProcessWin32Process == *(_QWORD *)(qword_1C011A500 + 376)
         && (*(_DWORD *)(CurrentProcessWin32Process + 768) & 0x30) != 0x10) )
      {
        *(_DWORD *)(ThreadWin32Thread + 440) |= 0x20u;
      }
      if ( (*(_DWORD *)gpsi & 4) != 0 && (int)IsCreateInputContextSupported_0() >= 0 )
        CreateInputContext_0();
      if ( !*(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) )
      {
        Event = IsxxxClientThreadSetupSupported_0();
        if ( Event >= 0 )
          Event = xxxClientThreadSetup_0();
        if ( Event < 0 )
          goto LABEL_204;
      }
      if ( v31 && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 1) == 0 && (int)IsPlayEventSoundSupported_0() >= 0 )
        PlayEventSound_0();
      v54 = *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      if ( v54 )
      {
        if ( (*(_DWORD *)(v54 + 32) & 8) != 0 )
          goto LABEL_171;
        PopAndFreeW32ThreadLock_0();
      }
      if ( *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) )
        PopAndFreeAlwaysW32ThreadLock_0();
      v55 = *(_DWORD *)(ThreadWin32Thread + 1096);
      if ( (v55 & 1) != 0 )
        *(_DWORD *)(ThreadWin32Thread + 1096) = v55 & 0xFFFFFFFE;
      return (unsigned int)Event;
    }
    if ( (*(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) & 0x200) != 0 )
    {
      v32 = *(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    }
    else
    {
      if ( !*(_WORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) )
      {
        *(_DWORD *)(CurrentProcessWin32Process + 652) = 0;
LABEL_80:
        if ( (*(_DWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) & 0x400) != 0 )
        {
          v33 = *(_QWORD *)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          v34 = 0LL;
          if ( (unsigned __int64)(unsigned __int16)v33 < *((_QWORD *)gpsi + 1) )
          {
            v35 = qword_1C011A128 + (unsigned int)(unsigned __int16)v33 * dword_1C011A130;
            if ( (WORD1(v33) == *(_WORD *)(v35 + 18)
               || WORD1(v33) == 0xFFFF
               || !WORD1(v33) && PsGetCurrentProcessWow64Process())
              && (*(_BYTE *)(v35 + 17) & 1) == 0
              && *(_BYTE *)(v35 + 16) == 12 )
            {
              v34 = *(_QWORD *)v35;
            }
          }
          if ( v34 )
            *(_QWORD *)(CurrentProcessWin32Process + 656) = v33;
          else
            UserSetLastError(1461LL);
          v31 = *(_DWORD *)v1;
        }
        goto LABEL_93;
      }
      v32 = ParseReserved(*(const unsigned __int16 **)(((unsigned __int64)&v58 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70), v28);
    }
    *(_DWORD *)(CurrentProcessWin32Process + 652) = v32;
    goto LABEL_80;
  }
  return 3221225738LL;
}
