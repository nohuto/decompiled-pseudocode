/*
 * XREFs of DestroyProcessInfo @ 0x1C0050D24
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0051410 (xxxUserProcessCallout.c)
 * Callees:
 *     IszzzCalcStartCursorHideSupported_0 @ 0x1C0001C50 (IszzzCalcStartCursorHideSupported_0.c)
 *     zzzCalcStartCursorHide_0 @ 0x1C0001C58 (zzzCalcStartCursorHide_0.c)
 *     IsCleanupIAMAccessSupported_0 @ 0x1C0001DE8 (IsCleanupIAMAccessSupported_0.c)
 *     CleanupIAMAccess_0 @ 0x1C0001DF0 (CleanupIAMAccess_0.c)
 *     IsDestroyProcessHidRequestsSupported_0 @ 0x1C0002028 (IsDestroyProcessHidRequestsSupported_0.c)
 *     DestroyProcessHidRequests_0 @ 0x1C0002030 (DestroyProcessHidRequests_0.c)
 *     IsCleanupInjectedTouchProcessSupported_0 @ 0x1C0002038 (IsCleanupInjectedTouchProcessSupported_0.c)
 *     CleanupInjectedTouchProcess_0 @ 0x1C0002040 (CleanupInjectedTouchProcess_0.c)
 *     IsMSGSQMRemoveProcessSupported_0 @ 0x1C0002048 (IsMSGSQMRemoveProcessSupported_0.c)
 *     MSGSQMRemoveProcess_0 @ 0x1C0002050 (MSGSQMRemoveProcess_0.c)
 *     IsPostPlaySoundMessageSupported_0 @ 0x1C0002058 (IsPostPlaySoundMessageSupported_0.c)
 *     PostPlaySoundMessage_0 @ 0x1C0002060 (PostPlaySoundMessage_0.c)
 *     IsGetgpPublicObjectListSupported_0 @ 0x1C0002068 (IsGetgpPublicObjectListSupported_0.c)
 *     GetgpPublicObjectList_0 @ 0x1C0002070 (GetgpPublicObjectList_0.c)
 *     Is_UnregisterUserApiHookSupported_0 @ 0x1C0002078 (Is_UnregisterUserApiHookSupported_0.c)
 *     _UnregisterUserApiHook_0 @ 0x1C0002080 (_UnregisterUserApiHook_0.c)
 *     Is_UnregisterDManipHookSupported_0 @ 0x1C0002088 (Is_UnregisterDManipHookSupported_0.c)
 *     _UnregisterDManipHook_0 @ 0x1C0002090 (_UnregisterDManipHook_0.c)
 *     IsFreeProcessMessageFilterSupported_0 @ 0x1C0002098 (IsFreeProcessMessageFilterSupported_0.c)
 *     FreeProcessMessageFilter_0 @ 0x1C00020A0 (FreeProcessMessageFilter_0.c)
 *     IsTransitionCursorSuppressionStateSupported_0 @ 0x1C00020A8 (IsTransitionCursorSuppressionStateSupported_0.c)
 *     TransitionCursorSuppressionState_0 @ 0x1C00020B0 (TransitionCursorSuppressionState_0.c)
 *     DestroyProcessInfoEditionRundown_0 @ 0x1C00020B8 (DestroyProcessInfoEditionRundown_0.c)
 *     PostWinlogonMessage @ 0x1C0019A20 (PostWinlogonMessage.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004FFC4 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004FFE0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UnlockObjectAssignment @ 0x1C0050160 (UnlockObjectAssignment.c)
 *     CitProcessCallout @ 0x1C00511F4 (CitProcessCallout.c)
 *     RIMOnProcessDestroy @ 0x1C00522E0 (RIMOnProcessDestroy.c)
 *     CloseProtectedHandle @ 0x1C0052440 (CloseProtectedHandle.c)
 *     ClearAppStarting @ 0x1C00525A0 (ClearAppStarting.c)
 *     DelayedDestroyCacheDC @ 0x1C005AB48 (DelayedDestroyCacheDC.c)
 *     CleanupLogonProcess @ 0x1C006BCD0 (CleanupLogonProcess.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00A7CF8 (EtwTraceScreenSaverProcessEvent.c)
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00BF750 (GreCleanDCAndSetOwnerEx.c)
 *     RIMRemoveInjectionDevice @ 0x1C00C29F0 (RIMRemoveInjectionDevice.c)
 */

__int64 __fastcall DestroyProcessInfo(_QWORD *a1)
{
  struct _KEVENT *v2; // rcx
  int v3; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  NTSTATUS ProcessExitStatus; // eax
  NTSTATUS v9; // eax
  __int64 i; // rcx
  _QWORD *j; // rax
  __int64 v12; // rdx
  HANDLE ProcessId; // rax
  int v14; // edx
  __int64 *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebp
  __int64 *k; // rcx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 *v27; // [rsp+30h] [rbp+8h] BYREF

  CitProcessCallout((struct tagPROCESSINFO *)a1);
  v2 = (struct _KEVENT *)a1[2];
  if ( v2 == (struct _KEVENT *)-1LL )
    goto LABEL_4;
  if ( v2 )
  {
    KeSetEvent(v2, 1, 0);
    ObfDereferenceObject((PVOID)a1[2]);
LABEL_4:
    a1[2] = 0LL;
  }
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
  if ( a1[108] != -1LL )
  {
    RIMRemoveInjectionDevice(a1[107]);
    ZwClose((HANDLE)a1[107]);
  }
  if ( a1[110] != -1LL )
  {
    RIMRemoveInjectionDevice(a1[109]);
    ZwClose((HANDLE)a1[109]);
  }
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
        v9 = PsGetProcessExitStatus((PEPROCESS)*a1);
        PostWinlogonMessage(1025LL, v9);
      }
    }
  }
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD **)(i + 16); j; j = (_QWORD *)j[2] )
    {
      v12 = j[1];
      if ( *(_QWORD **)(v12 + 168) == a1 )
        *(_QWORD *)(v12 + 168) = 0LL;
      if ( (_QWORD *)j[37] == a1 )
        j[37] = 0LL;
    }
  }
  if ( (*((_DWORD *)a1 + 3) & 0x40) != 0 )
  {
    ProcessId = PsGetProcessId((PEPROCESS)*a1);
    v14 = `GiveForegroundActivateRight'::`2'::index;
    ghCanActivateForegroundPIDs[`GiveForegroundActivateRight'::`2'::index] = ProcessId;
    `GiveForegroundActivateRight'::`2'::index = v14 + 1;
    if ( v14 == 4 )
      `GiveForegroundActivateRight'::`2'::index = 0;
    ClearAppStarting(a1);
  }
  v15 = &gppiList;
  if ( gppiList )
  {
    while ( 1 )
    {
      v16 = *v15;
      if ( (_QWORD *)*v15 == a1 )
        break;
      v15 = (__int64 *)(v16 + 352);
      if ( !*(_QWORD *)(v16 + 352) )
        goto LABEL_57;
    }
    *v15 = a1[44];
  }
LABEL_57:
  v17 = *((_DWORD *)a1 + 3);
  v18 = v17 & 0x4000;
  if ( (v17 & 0x4000) != 0 && (v17 & 0x200) != 0 )
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
  v20 = a1[46];
  if ( v20 )
  {
    CloseProtectedHandle(v20);
    a1[46] = 0LL;
  }
  *((_DWORD *)a1 + 3) |= 0x1000u;
  v21 = a1[42];
  if ( v21 )
  {
    ObfDereferenceObject(*(PVOID *)(v21 + 32));
    v22 = &gpwpiFirstWow;
    if ( gpwpiFirstWow )
    {
      while ( 1 )
      {
        v23 = (_QWORD *)*v22;
        if ( *v22 == v21 )
          break;
        v22 = (__int64 *)*v22;
        if ( !*v23 )
          goto LABEL_84;
      }
      *v22 = *(_QWORD *)v21;
    }
LABEL_84:
    Win32FreePool();
    a1[42] = 0LL;
  }
  v24 = (_QWORD *)a1[84];
  if ( v24 )
  {
    do
    {
      v25 = (_QWORD *)*v24;
      Win32FreePool();
      v24 = v25;
    }
    while ( v25 );
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
    gbLockScreenActive = 0;
    if ( (a1[97] & 0x100000) != 0 && (int)IsTransitionCursorSuppressionStateSupported_0() >= 0 )
    {
      TransitionCursorSuppressionState_0();
      *((_DWORD *)a1 + 194) &= ~0x100000u;
    }
  }
  if ( *((_DWORD *)a1 + 14) == gpidLogon )
    CleanupLogonProcess();
  GreCleanDCAndSetOwnerEx(qword_1C0104178);
  DestroyProcessInfoEditionRundown_0();
  RIMOnProcessDestroy(*a1);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    TemplateEventDescriptor(v26, &CompleteGuiProcessExecution, &W32kControlGuid);
  return v18;
}
