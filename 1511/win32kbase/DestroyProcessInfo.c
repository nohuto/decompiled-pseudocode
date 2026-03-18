/*
 * XREFs of DestroyProcessInfo @ 0x1C00448B4
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0021AA0 (xxxUserProcessCallout.c)
 * Callees:
 *     IszzzCalcStartCursorHideSupported_0 @ 0x1C0001C70 (IszzzCalcStartCursorHideSupported_0.c)
 *     zzzCalcStartCursorHide_0 @ 0x1C0001C78 (zzzCalcStartCursorHide_0.c)
 *     IsCleanupIAMAccessSupported_0 @ 0x1C0001E08 (IsCleanupIAMAccessSupported_0.c)
 *     CleanupIAMAccess_0 @ 0x1C0001E10 (CleanupIAMAccess_0.c)
 *     IsDestroyProcessHidRequestsSupported_0 @ 0x1C0002058 (IsDestroyProcessHidRequestsSupported_0.c)
 *     DestroyProcessHidRequests_0 @ 0x1C0002060 (DestroyProcessHidRequests_0.c)
 *     IsCleanupInjectedTouchProcessSupported_0 @ 0x1C0002068 (IsCleanupInjectedTouchProcessSupported_0.c)
 *     CleanupInjectedTouchProcess_0 @ 0x1C0002070 (CleanupInjectedTouchProcess_0.c)
 *     IsMSGSQMRemoveProcessSupported_0 @ 0x1C0002078 (IsMSGSQMRemoveProcessSupported_0.c)
 *     MSGSQMRemoveProcess_0 @ 0x1C0002080 (MSGSQMRemoveProcess_0.c)
 *     IsPostPlaySoundMessageSupported_0 @ 0x1C0002088 (IsPostPlaySoundMessageSupported_0.c)
 *     PostPlaySoundMessage_0 @ 0x1C0002090 (PostPlaySoundMessage_0.c)
 *     IsGetgpPublicObjectListSupported_0 @ 0x1C0002098 (IsGetgpPublicObjectListSupported_0.c)
 *     GetgpPublicObjectList_0 @ 0x1C00020A0 (GetgpPublicObjectList_0.c)
 *     Is_UnregisterUserApiHookSupported_0 @ 0x1C00020A8 (Is_UnregisterUserApiHookSupported_0.c)
 *     _UnregisterUserApiHook_0 @ 0x1C00020B0 (_UnregisterUserApiHook_0.c)
 *     Is_UnregisterDManipHookSupported_0 @ 0x1C00020B8 (Is_UnregisterDManipHookSupported_0.c)
 *     _UnregisterDManipHook_0 @ 0x1C00020C0 (_UnregisterDManipHook_0.c)
 *     IsFreeProcessMessageFilterSupported_0 @ 0x1C00020C8 (IsFreeProcessMessageFilterSupported_0.c)
 *     FreeProcessMessageFilter_0 @ 0x1C00020D0 (FreeProcessMessageFilter_0.c)
 *     IsTransitionCursorSuppressionStateSupported_0 @ 0x1C00020D8 (IsTransitionCursorSuppressionStateSupported_0.c)
 *     TransitionCursorSuppressionState_0 @ 0x1C00020E0 (TransitionCursorSuppressionState_0.c)
 *     DestroyProcessInfoEditionRundown_0 @ 0x1C00020E8 (DestroyProcessInfoEditionRundown_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     GreSetDCOwnerEx @ 0x1C0034DF0 (GreSetDCOwnerEx.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0041FB4 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041FD0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UnlockObjectAssignment @ 0x1C0042150 (UnlockObjectAssignment.c)
 *     CitProcessCallout @ 0x1C0044D54 (CitProcessCallout.c)
 *     RIMOnProcessDestroy @ 0x1C0046810 (RIMOnProcessDestroy.c)
 *     CloseProtectedHandle @ 0x1C0046BB8 (CloseProtectedHandle.c)
 *     ClearAppStarting @ 0x1C0046D20 (ClearAppStarting.c)
 *     CleanupLogonProcess @ 0x1C0063480 (CleanupLogonProcess.c)
 *     DelayedDestroyCacheDC @ 0x1C006A5AC (DelayedDestroyCacheDC.c)
 *     PostWinlogonMessage @ 0x1C0080870 (PostWinlogonMessage.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00AC268 (EtwTraceScreenSaverProcessEvent.c)
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C00C3878 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 */

__int64 __fastcall DestroyProcessInfo(_QWORD *a1)
{
  struct _KEVENT *v2; // rcx
  int v3; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 i; // rcx
  HANDLE ProcessId; // rax
  ULONG SortKey; // edx
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebp
  __int64 *k; // rcx
  __int64 v16; // rcx
  __int64 v17; // rbx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  _QWORD *j; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rbx
  NTSTATUS ProcessExitStatus; // eax
  NTSTATUS v24; // eax
  __int64 *v25; // rcx
  _QWORD *v26; // rax
  __int64 *v27; // [rsp+30h] [rbp+8h] BYREF

  CitProcessCallout((struct tagPROCESSINFO *)a1);
  v2 = (struct _KEVENT *)a1[2];
  if ( v2 != (struct _KEVENT *)-1LL )
  {
    if ( !v2 )
      goto LABEL_3;
    KeSetEvent(v2, 1, 0);
    ObfDereferenceObject((PVOID)a1[2]);
  }
  a1[2] = 0LL;
LABEL_3:
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v27);
  ++gdwDeferWinEvent;
  v3 = *((_DWORD *)a1 + 3);
  if ( (v3 & 4) != 0 )
  {
    *((_DWORD *)a1 + 3) = v3 & 0xFFFFFFFB;
    if ( (int)IszzzCalcStartCursorHideSupported_0() >= 0 )
      zzzCalcStartCursorHide_0();
  }
  --gdwDeferWinEvent;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v27);
  if ( (*((_DWORD *)a1 + 3) & 0x8000) == 0 )
    return 0LL;
  PsUpdateComponentPower(*a1, 4LL);
  v5 = a1[34];
  if ( v5 )
  {
    PsReleaseProcessWakeCounter(v5, 1LL);
    a1[34] = 0LL;
  }
  if ( a1[98] && (int)IsDestroyProcessHidRequestsSupported_0() >= 0 )
    DestroyProcessHidRequests_0();
  if ( a1[106] && (int)IsCleanupInjectedTouchProcessSupported_0() >= 0 )
    CleanupInjectedTouchProcess_0();
  if ( a1[107] != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( a1[108] != -1LL )
    RIMRemoveMouseOrKeyboardInjectionDevice();
  if ( (int)IsMSGSQMRemoveProcessSupported_0() >= 0 )
    MSGSQMRemoveProcess_0();
  if ( (*((_DWORD *)a1 + 3) & 0x40001) == 0x40000 )
  {
    v6 = a1[80];
    if ( (!v6 || (*(_DWORD *)(v6 + 32) & 2) == 0) && (int)IsPostPlaySoundMessageSupported_0() >= 0 )
      PostPlaySoundMessage_0();
  }
  v7 = a1[39];
  if ( v7 && *(_QWORD **)(*(_QWORD *)(v7 + 8) + 168LL) == a1 && v7 == grpdeskIODefault )
  {
    if ( (int)IsCleanupIAMAccessSupported_0() >= 0 )
      CleanupIAMAccess_0();
    if ( (*(_DWORD *)(a1[80] + 32LL) & 2) == 0 )
    {
      ProcessExitStatus = PsGetProcessExitStatus((PEPROCESS)*a1);
      if ( ProcessExitStatus != 1 && ProcessExitStatus != 255 )
      {
        v24 = PsGetProcessExitStatus((PEPROCESS)*a1);
        PostWinlogonMessage(1025LL, v24);
      }
    }
  }
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD **)(i + 16); j; j = (_QWORD *)j[2] )
    {
      v21 = j[1];
      if ( *(_QWORD **)(v21 + 168) == a1 )
        *(_QWORD *)(v21 + 168) = 0LL;
      if ( (_QWORD *)j[31] == a1 )
        j[31] = 0LL;
    }
  }
  if ( (*((_DWORD *)a1 + 3) & 0x40) != 0 )
  {
    ProcessId = PsGetProcessId((PEPROCESS)*a1);
    SortKey = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
    ghCanActivateForegroundPIDs[WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey] = ProcessId;
    WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = SortKey + 1;
    if ( SortKey == 4 )
      WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = 0;
    ClearAppStarting(a1);
  }
  v11 = &gppiList;
  if ( gppiList )
  {
    while ( 1 )
    {
      v12 = *v11;
      if ( (_QWORD *)*v11 == a1 )
        break;
      v11 = (__int64 *)(v12 + 352);
      if ( !*(_QWORD *)(v12 + 352) )
        goto LABEL_33;
    }
    *v11 = a1[44];
  }
LABEL_33:
  v13 = *((_DWORD *)a1 + 3);
  v14 = v13 & 0x4000;
  if ( (v13 & 0x4000) != 0 && (v13 & 0x200) != 0 )
    DelayedDestroyCacheDC(1LL);
  if ( (int)IsGetgpPublicObjectListSupported_0() >= 0 )
  {
    GetgpPublicObjectList_0();
    for ( k = v27; k; k = (__int64 *)*k )
    {
      if ( *((_DWORD *)k + 5) == *((_DWORD *)a1 + 14) )
        *((_DWORD *)k + 5) = 0;
    }
  }
  if ( (_QWORD *)gppiScreenSaver == a1 )
  {
    gppiScreenSaver = 0LL;
    EtwTraceScreenSaverProcessEvent(2LL);
  }
  if ( (_QWORD *)gppiForegroundOld == a1 )
    gppiForegroundOld = 0LL;
  if ( (_QWORD *)gppiUserApiHook == a1 && (int)Is_UnregisterUserApiHookSupported_0() >= 0 )
    UnregisterUserApiHook_0();
  if ( (_QWORD *)gppiDManipHook == a1 && (int)Is_UnregisterDManipHookSupported_0() >= 0 )
    UnregisterDManipHook_0();
  UnlockObjectAssignment((void **)a1 + 80);
  UnlockObjectAssignment((void **)a1 + 39);
  v16 = a1[46];
  if ( v16 )
  {
    CloseProtectedHandle(v16);
    a1[46] = 0LL;
  }
  *((_DWORD *)a1 + 3) |= 0x1000u;
  v17 = a1[42];
  if ( v17 )
  {
    ObfDereferenceObject(*(PVOID *)(v17 + 32));
    v25 = &gpwpiFirstWow;
    if ( gpwpiFirstWow )
    {
      while ( 1 )
      {
        v26 = (_QWORD *)*v25;
        if ( *v25 == v17 )
          break;
        v25 = (__int64 *)*v25;
        if ( !*v26 )
          goto LABEL_103;
      }
      *v25 = *(_QWORD *)v17;
    }
LABEL_103:
    Win32FreePool();
    a1[42] = 0LL;
  }
  v18 = (_QWORD *)a1[84];
  if ( v18 )
  {
    do
    {
      v22 = (_QWORD *)*v18;
      Win32FreePool();
      v18 = v22;
    }
    while ( v22 );
  }
  a1[84] = 0LL;
  if ( (int)IsFreeProcessMessageFilterSupported_0() >= 0 )
    FreeProcessMessageFilter_0();
  if ( a1 == (_QWORD *)gppiInputProvider )
    gppiInputProvider = 0LL;
  if ( a1 == (_QWORD *)gppiLockSFW )
    gppiLockSFW = 0LL;
  if ( *((_DWORD *)a1 + 14) == gpidLogonUI )
  {
    gpidLogonUI = 0LL;
    WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0;
    if ( (a1[97] & 0x100000) != 0 && (int)IsTransitionCursorSuppressionStateSupported_0() >= 0 )
    {
      TransitionCursorSuppressionState_0();
      *((_DWORD *)a1 + 194) &= ~0x100000u;
    }
  }
  if ( *((_DWORD *)a1 + 14) == gpidLogon )
    CleanupLogonProcess();
  GreSetDCOwnerEx((int)qword_1C01049E8, 0LL, 0LL, 0);
  DestroyProcessInfoEditionRundown_0();
  RIMOnProcessDestroy(*a1);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    TemplateEventDescriptor(v19, &CompleteGuiProcessExecution, &W32kControlGuid);
  return v14;
}
