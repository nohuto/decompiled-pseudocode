/*
 * XREFs of DestroyProcessInfo @ 0x1C0012B48
 * Callers:
 *     xxxUserProcessCallout @ 0x1C001F620 (xxxUserProcessCallout.c)
 * Callees:
 *     PostPlaySoundMessage_0 @ 0x1C0001C58 (PostPlaySoundMessage_0.c)
 *     IszzzCalcStartCursorHideSupported_0 @ 0x1C0001F80 (IszzzCalcStartCursorHideSupported_0.c)
 *     zzzCalcStartCursorHide_0 @ 0x1C0001F88 (zzzCalcStartCursorHide_0.c)
 *     IsCleanupIAMAccessSupported_0 @ 0x1C00020F8 (IsCleanupIAMAccessSupported_0.c)
 *     CleanupIAMAccess_0 @ 0x1C0002100 (CleanupIAMAccess_0.c)
 *     IsDestroyProcessHidRequestsSupported_0 @ 0x1C0002358 (IsDestroyProcessHidRequestsSupported_0.c)
 *     DestroyProcessHidRequests_0 @ 0x1C0002360 (DestroyProcessHidRequests_0.c)
 *     IsCleanupInjectedTouchProcessSupported_0 @ 0x1C0002368 (IsCleanupInjectedTouchProcessSupported_0.c)
 *     CleanupInjectedTouchProcess_0 @ 0x1C0002370 (CleanupInjectedTouchProcess_0.c)
 *     IsMSGSQMRemoveProcessSupported_0 @ 0x1C0002378 (IsMSGSQMRemoveProcessSupported_0.c)
 *     MSGSQMRemoveProcess_0 @ 0x1C0002380 (MSGSQMRemoveProcess_0.c)
 *     IsPostPlaySoundMessageSupported_0 @ 0x1C0002388 (IsPostPlaySoundMessageSupported_0.c)
 *     IsGetgpPublicObjectListSupported_0 @ 0x1C0002390 (IsGetgpPublicObjectListSupported_0.c)
 *     GetgpPublicObjectList_0 @ 0x1C0002398 (GetgpPublicObjectList_0.c)
 *     Is_UnregisterUserApiHookSupported_0 @ 0x1C00023A0 (Is_UnregisterUserApiHookSupported_0.c)
 *     _UnregisterUserApiHook_0 @ 0x1C00023A8 (_UnregisterUserApiHook_0.c)
 *     Is_UnregisterDManipHookSupported_0 @ 0x1C00023B0 (Is_UnregisterDManipHookSupported_0.c)
 *     _UnregisterDManipHook_0 @ 0x1C00023B8 (_UnregisterDManipHook_0.c)
 *     IsFreeProcessMessageFilterSupported_0 @ 0x1C00023C0 (IsFreeProcessMessageFilterSupported_0.c)
 *     FreeProcessMessageFilter_0 @ 0x1C00023C8 (FreeProcessMessageFilter_0.c)
 *     IsTransitionCursorSuppressionStateSupported_0 @ 0x1C00023D0 (IsTransitionCursorSuppressionStateSupported_0.c)
 *     TransitionCursorSuppressionState_0 @ 0x1C00023D8 (TransitionCursorSuppressionState_0.c)
 *     DestroyProcessInfoEditionRundown_0 @ 0x1C00023E0 (DestroyProcessInfoEditionRundown_0.c)
 *     DelayedDestroyCacheDC @ 0x1C000F4CC (DelayedDestroyCacheDC.c)
 *     ClearAppStarting @ 0x1C0011F50 (ClearAppStarting.c)
 *     CloseProtectedHandle @ 0x1C0011F88 (CloseProtectedHandle.c)
 *     RIMOnProcessDestroy @ 0x1C0012770 (RIMOnProcessDestroy.c)
 *     CitProcessCallout @ 0x1C0013014 (CitProcessCallout.c)
 *     UnlockObjectAssignment @ 0x1C00155E0 (UnlockObjectAssignment.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003A784 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003A7A0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     CleanupLogonProcess @ 0x1C006D120 (CleanupLogonProcess.c)
 *     PostWinlogonMessage @ 0x1C0071B40 (PostWinlogonMessage.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00B59C8 (EtwTraceScreenSaverProcessEvent.c)
 *     TemplateEventDescriptor @ 0x1C00B64B8 (TemplateEventDescriptor.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00CCFD0 (GreCleanDCAndSetOwnerEx.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C00D04D8 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 */

__int64 __fastcall DestroyProcessInfo(struct tagPROCESSINFO *a1)
{
  struct _KEVENT *v2; // rcx
  int v3; // eax
  __int64 i; // rcx
  __int64 j; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  NTSTATUS ProcessExitStatus; // eax
  NTSTATUS v11; // eax
  __int64 k; // rax
  __int64 m; // rcx
  __int64 v14; // rdx
  HANDLE ProcessId; // rax
  int v16; // edx
  __int64 *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ebp
  __int64 *n; // rcx
  void *v22; // rcx
  __int64 v23; // rbx
  __int64 *v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rcx
  __int64 *v29; // [rsp+30h] [rbp+8h] BYREF

  CitProcessCallout(a1);
  v2 = (struct _KEVENT *)*((_QWORD *)a1 + 2);
  if ( v2 == (struct _KEVENT *)-1LL )
    goto LABEL_4;
  if ( v2 )
  {
    KeSetEvent(v2, 1, 0);
    ObfDereferenceObject(*((PVOID *)a1 + 2));
LABEL_4:
    *((_QWORD *)a1 + 2) = 0LL;
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v29);
  ++gdwDeferWinEvent;
  v3 = *((_DWORD *)a1 + 3);
  if ( (v3 & 4) != 0 )
  {
    *((_DWORD *)a1 + 3) = v3 & 0xFFFFFFFB;
    if ( (int)IszzzCalcStartCursorHideSupported_0() >= 0 )
      zzzCalcStartCursorHide_0();
  }
  --gdwDeferWinEvent;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v29);
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 16) )
    {
      if ( *(struct tagPROCESSINFO **)(j + 248) == a1 )
        *(_QWORD *)(j + 248) = 0LL;
    }
  }
  if ( (*((_DWORD *)a1 + 3) & 0x8000) == 0 )
    return 0LL;
  PsUpdateComponentPower(*(_QWORD *)a1, 6LL, 0LL);
  v7 = *((_QWORD *)a1 + 34);
  if ( v7 )
  {
    PsReleaseProcessWakeCounter(v7, 1LL);
    *((_QWORD *)a1 + 34) = 0LL;
  }
  if ( *((_QWORD *)a1 + 97) && (int)IsDestroyProcessHidRequestsSupported_0() >= 0 )
    DestroyProcessHidRequests_0();
  if ( *((_QWORD *)a1 + 105) && (int)IsCleanupInjectedTouchProcessSupported_0() >= 0 )
    CleanupInjectedTouchProcess_0();
  if ( *((_QWORD *)a1 + 106) != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( *((_QWORD *)a1 + 107) != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( (int)IsMSGSQMRemoveProcessSupported_0() >= 0 )
    MSGSQMRemoveProcess_0();
  if ( (*((_DWORD *)a1 + 3) & 0x40001) == 0x40000 )
  {
    v8 = *((_QWORD *)a1 + 79);
    if ( (!v8 || (*(_DWORD *)(v8 + 32) & 2) == 0) && (int)IsPostPlaySoundMessageSupported_0() >= 0 )
      PostPlaySoundMessage_0();
  }
  v9 = *((_QWORD *)a1 + 38);
  if ( v9 && *(struct tagPROCESSINFO **)(*(_QWORD *)(v9 + 8) + 168LL) == a1 && v9 == grpdeskIODefault )
  {
    if ( (int)IsCleanupIAMAccessSupported_0() >= 0 )
      CleanupIAMAccess_0();
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 79) + 32LL) & 2) == 0 )
    {
      ProcessExitStatus = PsGetProcessExitStatus(*(PEPROCESS *)a1);
      if ( ProcessExitStatus != 1 && ProcessExitStatus != 255 )
      {
        v11 = PsGetProcessExitStatus(*(PEPROCESS *)a1);
        PostWinlogonMessage(1025LL, v11);
      }
    }
  }
  for ( k = grpWinStaList; k; k = *(_QWORD *)(k + 8) )
  {
    for ( m = *(_QWORD *)(k + 16); m; m = *(_QWORD *)(m + 16) )
    {
      v14 = *(_QWORD *)(m + 8);
      if ( *(struct tagPROCESSINFO **)(v14 + 168) == a1 )
        *(_QWORD *)(v14 + 168) = 0LL;
    }
  }
  if ( (*((_DWORD *)a1 + 3) & 0x40) != 0 )
  {
    ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
    v16 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
    ghCanActivateForegroundPIDs[*((int *)&WPP_MAIN_CB.Queue.Wcb.1 + 5)] = ProcessId;
    *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5) = v16 + 1;
    if ( v16 == 4 )
      *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5) = 0;
    ClearAppStarting((__int64)a1);
  }
  v17 = &gppiList;
  if ( gppiList )
  {
    while ( 1 )
    {
      v18 = *v17;
      if ( (struct tagPROCESSINFO *)*v17 == a1 )
        break;
      v17 = (__int64 *)(v18 + 344);
      if ( !*(_QWORD *)(v18 + 344) )
        goto LABEL_63;
    }
    *v17 = *((_QWORD *)a1 + 43);
  }
LABEL_63:
  v19 = *((_DWORD *)a1 + 3);
  v20 = v19 & 0x4000;
  if ( (v19 & 0x4000) != 0 && (v19 & 0x200) != 0 )
    DelayedDestroyCacheDC(1);
  if ( (int)IsGetgpPublicObjectListSupported_0() >= 0 )
  {
    GetgpPublicObjectList_0();
    for ( n = v29; n; n = (__int64 *)*n )
    {
      if ( *((_DWORD *)n + 5) == *((_DWORD *)a1 + 14) )
        *((_DWORD *)n + 5) = 0;
    }
  }
  if ( (struct tagPROCESSINFO *)gppiScreenSaver == a1 )
  {
    gppiScreenSaver = 0LL;
    EtwTraceScreenSaverProcessEvent(2LL);
  }
  if ( (struct tagPROCESSINFO *)gppiForegroundOld == a1 )
    gppiForegroundOld = 0LL;
  if ( (struct tagPROCESSINFO *)gppiUserApiHook == a1 && (int)Is_UnregisterUserApiHookSupported_0() >= 0 )
    UnregisterUserApiHook_0();
  if ( (struct tagPROCESSINFO *)gppiDManipHook == a1 && (int)Is_UnregisterDManipHookSupported_0() >= 0 )
    UnregisterDManipHook_0();
  UnlockObjectAssignment((char *)a1 + 632);
  UnlockObjectAssignment((char *)a1 + 304);
  v22 = (void *)*((_QWORD *)a1 + 45);
  if ( v22 )
  {
    CloseProtectedHandle(v22);
    *((_QWORD *)a1 + 45) = 0LL;
  }
  *((_DWORD *)a1 + 3) |= 0x1000u;
  v23 = *((_QWORD *)a1 + 41);
  if ( v23 )
  {
    ObfDereferenceObject(*(PVOID *)(v23 + 32));
    v24 = &gpwpiFirstWow;
    if ( gpwpiFirstWow )
    {
      while ( 1 )
      {
        v25 = (_QWORD *)*v24;
        if ( *v24 == v23 )
          break;
        v24 = (__int64 *)*v24;
        if ( !*v25 )
          goto LABEL_90;
      }
      *v24 = *(_QWORD *)v23;
    }
LABEL_90:
    Win32FreePool(v23);
    *((_QWORD *)a1 + 41) = 0LL;
  }
  v26 = (_QWORD *)*((_QWORD *)a1 + 83);
  if ( v26 )
  {
    do
    {
      v27 = (_QWORD *)*v26;
      Win32FreePool(v26);
      v26 = v27;
    }
    while ( v27 );
  }
  *((_QWORD *)a1 + 83) = 0LL;
  if ( (int)IsFreeProcessMessageFilterSupported_0() >= 0 )
    FreeProcessMessageFilter_0();
  if ( a1 == (struct tagPROCESSINFO *)gppiInputProvider )
    gppiInputProvider = 0LL;
  if ( a1 == (struct tagPROCESSINFO *)gppiLockSFW )
    gppiLockSFW = 0LL;
  if ( *((_DWORD *)a1 + 14) == gpidLogonUI )
  {
    gpidLogonUI = 0LL;
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 0;
    if ( (*((_DWORD *)a1 + 192) & 0x40000) != 0 && (int)IsTransitionCursorSuppressionStateSupported_0() >= 0 )
    {
      TransitionCursorSuppressionState_0();
      *((_DWORD *)a1 + 192) &= ~0x40000u;
    }
  }
  if ( *((_DWORD *)a1 + 14) == gpidLogon )
    CleanupLogonProcess();
  GreCleanDCAndSetOwnerEx(qword_1C011C438);
  DestroyProcessInfoEditionRundown_0();
  RIMOnProcessDestroy(*(struct _LIST_ENTRY **)a1);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    TemplateEventDescriptor(v28, &CompleteGuiProcessExecution, &W32kControlGuid);
  return v20;
}
