/*
 * XREFs of xxxDestroyThreadInfo @ 0x1C00131CC
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0014378 (xxxCreateThreadInfo.c)
 *     UserThreadCallout @ 0x1C001F2C0 (UserThreadCallout.c)
 * Callees:
 *     IsUnloadCursorsAndIconsSupported_0 @ 0x1C0001AE0 (IsUnloadCursorsAndIconsSupported_0.c)
 *     UnloadCursorsAndIcons_0 @ 0x1C0001AE8 (UnloadCursorsAndIcons_0.c)
 *     IsDestroyDpiMetricsCacheSupported_0 @ 0x1C0001AF0 (IsDestroyDpiMetricsCacheSupported_0.c)
 *     DestroyDpiMetricsCache_0 @ 0x1C0001AF8 (DestroyDpiMetricsCache_0.c)
 *     _PostMessage_0 @ 0x1C0001C90 (_PostMessage_0.c)
 *     PushW32ThreadLock_0 @ 0x1C0001D98 (PushW32ThreadLock_0.c)
 *     PopAndFreeW32ThreadLock_0 @ 0x1C0001F68 (PopAndFreeW32ThreadLock_0.c)
 *     IsDestroyThreadsMessagesSupported_0 @ 0x1C0002018 (IsDestroyThreadsMessagesSupported_0.c)
 *     DestroyThreadsMessages_0 @ 0x1C0002020 (DestroyThreadsMessages_0.c)
 *     xxxWindowEvent_0 @ 0x1C00020A8 (xxxWindowEvent_0.c)
 *     FreeMessageList_0 @ 0x1C00020C8 (FreeMessageList_0.c)
 *     IszzzSetFMouseMovedSupported_0 @ 0x1C00020E0 (IszzzSetFMouseMovedSupported_0.c)
 *     zzzSetFMouseMoved_0 @ 0x1C00020E8 (zzzSetFMouseMoved_0.c)
 *     IsCleanupIAMAccessSupported_0 @ 0x1C00020F8 (IsCleanupIAMAccessSupported_0.c)
 *     CleanupIAMAccess_0 @ 0x1C0002100 (CleanupIAMAccess_0.c)
 *     IsxxxCleanupThreadPointerInputInfoSupported_0 @ 0x1C0002108 (IsxxxCleanupThreadPointerInputInfoSupported_0.c)
 *     xxxCleanupThreadPointerInputInfo_0 @ 0x1C0002110 (xxxCleanupThreadPointerInputInfo_0.c)
 *     IsUnreferenceUndispatchedFrameListSupported_0 @ 0x1C0002118 (IsUnreferenceUndispatchedFrameListSupported_0.c)
 *     UnreferenceUndispatchedFrameList_0 @ 0x1C0002120 (UnreferenceUndispatchedFrameList_0.c)
 *     IsResetEdgyDataOwnershipForCurrentThreadSupported_0 @ 0x1C0002128 (IsResetEdgyDataOwnershipForCurrentThreadSupported_0.c)
 *     ResetEdgyDataOwnershipForCurrentThread_0 @ 0x1C0002130 (ResetEdgyDataOwnershipForCurrentThread_0.c)
 *     IsMagpRevokeInputTransfromSupported_0 @ 0x1C0002138 (IsMagpRevokeInputTransfromSupported_0.c)
 *     MagpRevokeInputTransfrom_0 @ 0x1C0002140 (MagpRevokeInputTransfrom_0.c)
 *     IsMagContextThreadCalloutSupported_0 @ 0x1C0002148 (IsMagContextThreadCalloutSupported_0.c)
 *     MagContextThreadCallout_0 @ 0x1C0002150 (MagContextThreadCallout_0.c)
 *     IsRemovePtiFromShellMiPListSupported_0 @ 0x1C0002158 (IsRemovePtiFromShellMiPListSupported_0.c)
 *     RemovePtiFromShellMiPList_0 @ 0x1C0002160 (RemovePtiFromShellMiPList_0.c)
 *     IsPatchThreadWindowsSupported_0 @ 0x1C0002168 (IsPatchThreadWindowsSupported_0.c)
 *     PatchThreadWindows_0 @ 0x1C0002170 (PatchThreadWindows_0.c)
 *     IsxxxCancelTrackingForThreadSupported_0 @ 0x1C0002178 (IsxxxCancelTrackingForThreadSupported_0.c)
 *     xxxCancelTrackingForThread_0 @ 0x1C0002180 (xxxCancelTrackingForThread_0.c)
 *     Is_GetProcessWindowStationSupported_0 @ 0x1C0002188 (Is_GetProcessWindowStationSupported_0.c)
 *     _GetProcessWindowStation_0 @ 0x1C0002190 (_GetProcessWindowStation_0.c)
 *     IsxxxCloseClipboardSupported_0 @ 0x1C0002198 (IsxxxCloseClipboardSupported_0.c)
 *     xxxCloseClipboard_0 @ 0x1C00021A0 (xxxCloseClipboard_0.c)
 *     xxxUnlockMenuState_0 @ 0x1C00021A8 (xxxUnlockMenuState_0.c)
 *     IsxxxEndMenuLoopSupported_0 @ 0x1C00021B0 (IsxxxEndMenuLoopSupported_0.c)
 *     xxxEndMenuLoop_0 @ 0x1C00021B8 (xxxEndMenuLoop_0.c)
 *     IsxxxMNEndMenuStateSupported_0 @ 0x1C00021C0 (IsxxxMNEndMenuStateSupported_0.c)
 *     xxxMNEndMenuState_0 @ 0x1C00021C8 (xxxMNEndMenuState_0.c)
 *     IsxxxMNCloseHierarchySupported_0 @ 0x1C00021D0 (IsxxxMNCloseHierarchySupported_0.c)
 *     xxxMNCloseHierarchy_0 @ 0x1C00021D8 (xxxMNCloseHierarchy_0.c)
 *     IsMNFlushDestroyedPopupsSupported_0 @ 0x1C00021E0 (IsMNFlushDestroyedPopupsSupported_0.c)
 *     MNFlushDestroyedPopups_0 @ 0x1C00021E8 (MNFlushDestroyedPopups_0.c)
 *     IsMNUnlinkDelayedFreePopupsSupported_0 @ 0x1C00021F0 (IsMNUnlinkDelayedFreePopupsSupported_0.c)
 *     MNUnlinkDelayedFreePopups_0 @ 0x1C00021F8 (MNUnlinkDelayedFreePopups_0.c)
 *     IsxxxMNEndMenuStateInternalSupported_0 @ 0x1C0002200 (IsxxxMNEndMenuStateInternalSupported_0.c)
 *     xxxMNEndMenuStateInternal_0 @ 0x1C0002208 (xxxMNEndMenuStateInternal_0.c)
 *     IsxxxDestroyThreadDDEObjectSupported_0 @ 0x1C0002210 (IsxxxDestroyThreadDDEObjectSupported_0.c)
 *     xxxDestroyThreadDDEObject_0 @ 0x1C0002218 (xxxDestroyThreadDDEObject_0.c)
 *     IsxxxFlushPaletteSupported_0 @ 0x1C0002220 (IsxxxFlushPaletteSupported_0.c)
 *     xxxFlushPalette_0 @ 0x1C0002228 (xxxFlushPalette_0.c)
 *     IsDestroyThreadHidObjectsSupported_0 @ 0x1C0002230 (IsDestroyThreadHidObjectsSupported_0.c)
 *     DestroyThreadHidObjects_0 @ 0x1C0002238 (DestroyThreadHidObjects_0.c)
 *     IsxxxHandleHealthyThreadSupported_0 @ 0x1C0002240 (IsxxxHandleHealthyThreadSupported_0.c)
 *     xxxHandleHealthyThread_0 @ 0x1C0002248 (xxxHandleHealthyThread_0.c)
 *     IsDestroyInputHangInfoSupported_0 @ 0x1C0002250 (IsDestroyInputHangInfoSupported_0.c)
 *     DestroyInputHangInfo_0 @ 0x1C0002258 (DestroyInputHangInfo_0.c)
 *     IsDestroyThreadsTimersSupported_0 @ 0x1C0002260 (IsDestroyThreadsTimersSupported_0.c)
 *     DestroyThreadsTimers_0 @ 0x1C0002268 (DestroyThreadsTimers_0.c)
 *     IsFreeThreadsWindowHooksSupported_0 @ 0x1C0002270 (IsFreeThreadsWindowHooksSupported_0.c)
 *     FreeThreadsWindowHooks_0 @ 0x1C0002278 (FreeThreadsWindowHooks_0.c)
 *     IsDestroyThreadsHotKeysSupported_0 @ 0x1C0002280 (IsDestroyThreadsHotKeysSupported_0.c)
 *     DestroyThreadsHotKeys_0 @ 0x1C0002288 (DestroyThreadsHotKeys_0.c)
 *     IsFreeHwndListSupported_0 @ 0x1C0002290 (IsFreeHwndListSupported_0.c)
 *     FreeHwndList_0 @ 0x1C0002298 (FreeHwndList_0.c)
 *     IsFreeThreadsWinEventsSupported_0 @ 0x1C00022A0 (IsFreeThreadsWinEventsSupported_0.c)
 *     FreeThreadsWinEvents_0 @ 0x1C00022A8 (FreeThreadsWinEvents_0.c)
 *     Is_PostMessageSupported_0 @ 0x1C00022B0 (Is_PostMessageSupported_0.c)
 *     IsDestroyProcessesClassesSupported_0 @ 0x1C00022B8 (IsDestroyProcessesClassesSupported_0.c)
 *     DestroyProcessesClasses_0 @ 0x1C00022C0 (DestroyProcessesClasses_0.c)
 *     IsPackAffectedThreadsFromThreadCleanupSupported_0 @ 0x1C00022C8 (IsPackAffectedThreadsFromThreadCleanupSupported_0.c)
 *     PackAffectedThreadsFromThreadCleanup_0 @ 0x1C00022D0 (PackAffectedThreadsFromThreadCleanup_0.c)
 *     IsSendMsgCleanupSupported_0 @ 0x1C00022D8 (IsSendMsgCleanupSupported_0.c)
 *     SendMsgCleanup_0 @ 0x1C00022E0 (SendMsgCleanup_0.c)
 *     IsxxxWindowEventSupported_0 @ 0x1C00022E8 (IsxxxWindowEventSupported_0.c)
 *     IsxxxSetForegroundThreadSupported_0 @ 0x1C00022F0 (IsxxxSetForegroundThreadSupported_0.c)
 *     xxxSetForegroundThread_0 @ 0x1C00022F8 (xxxSetForegroundThread_0.c)
 *     DesktopFree_0 @ 0x1C0002300 (DesktopFree_0.c)
 *     ?FLastGuiThread@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C0014044 (-FLastGuiThread@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     zzzDestroyQueue @ 0x1C0014070 (zzzDestroyQueue.c)
 *     HMAssignmentUnlock @ 0x1C0014330 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C0015370 (HMAssignmentLock.c)
 *     ProtectHandle @ 0x1C0015400 (ProtectHandle.c)
 *     UnlockObjectAssignment @ 0x1C00155E0 (UnlockObjectAssignment.c)
 *     LockObjectAssignment @ 0x1C0015600 (LockObjectAssignment.c)
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C001566C (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 *     EtwTraceInputProcessDelay @ 0x1C0015690 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0015AA0 (EtwTraceMessageCheckDelay.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0038F60 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C0039070 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C0039100 (DestroyThreadsObjects.c)
 *     CleanupGDI @ 0x1C0055F7C (CleanupGDI.c)
 *     ThreadUnlock1 @ 0x1C00590B0 (ThreadUnlock1.c)
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     CleanupPowerRequestList @ 0x1C006F870 (CleanupPowerRequestList.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00711B8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ScrubDelegatedWindow @ 0x1C00793B0 (ScrubDelegatedWindow.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00B4B4C (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00B4B78 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     TemplateEventDescriptor @ 0x1C00B64B8 (TemplateEventDescriptor.c)
 *     Template_qqqqq @ 0x1C00B7F34 (Template_qqqqq.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C00CD998 (RIMIDEProcessRemoveInjectionDevices.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C00F2570 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 */

__int64 xxxDestroyThreadInfo()
{
  unsigned __int64 v0; // rbp
  struct tagTHREADINFO *v1; // rsi
  __int64 v2; // rbx
  struct _NT_TIB *Self; // r14
  __int64 v4; // rbx
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 i; // rax
  char v12; // al
  unsigned __int64 v13; // rbx
  unsigned int ThreadId; // r14d
  char ThreadInfoFlags; // r15
  int v16; // r8d
  char v17; // r11
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *ProcessWindowStation_0; // rbx
  __int64 v21; // r14
  _DWORD *v22; // r15
  __int64 v23; // rbx
  struct tagTHREADINFO *v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  struct tagTHREADINFO *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  struct _ETHREAD *v32; // rcx
  PVOID CurrentProcess; // rax
  BOOL v34; // edx
  _QWORD *v35; // rbx
  _QWORD *v36; // r14
  __int64 j; // rbx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rax
  _DWORD *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  _BYTE *v48; // rbx
  unsigned int v49; // r14d
  _QWORD *v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // rcx
  void **v53; // rbx
  void **v54; // rcx
  __int64 v55; // rcx
  struct tagTHREADINFO *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 result; // rax
  signed __int32 v60[8]; // [rsp+B0h] [rbp+B0h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v61; // [rsp+D0h] [rbp+D0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v62; // [rsp+D8h] [rbp+D8h]
  _BYTE v63[176]; // [rsp+150h] [rbp+150h] BYREF

  v0 = (unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL;
  memset((void *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 96), 0, 0x40uLL);
  EtwActivityIdControl(3u, (LPGUID)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 104));
  *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 20;
  v1 = gptiCurrent;
  *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = gptiCurrent;
  v2 = *((_QWORD *)v1 + 47);
  Self = KeGetPcr()->NtTib.Self;
  if ( v1 == (struct tagTHREADINFO *)gptiTSRequest )
    gptiTSRequest = 0LL;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 768) & 0x100000) != 0 )
    {
      if ( (unsigned int)FLastGuiThread(v1) )
      {
        RIMIDEProcessRemoveInjectionDevices(v2);
        v4 = *(_QWORD *)(v2 + 840);
        if ( v4 )
        {
          *(_QWORD *)(v4 + 88) = 0LL;
          v5 = *(void **)(v4 + 80);
          if ( v5 )
          {
            ZwClose(v5);
            *(_QWORD *)(v4 + 80) = 0LL;
          }
        }
      }
    }
  }
  if ( Self )
    Self[2].StackBase = 0LL;
  v6 = *((_QWORD *)v1 + 51);
  if ( v6 && *(struct tagTHREADINFO **)(v6 + 280) == v1 && (int)IsCleanupIAMAccessSupported_0() >= 0 )
    CleanupIAMAccess_0();
  if ( (struct tagTHREADINFO *)gptiBlockInput == v1 )
    gptiBlockInput = 0LL;
  *((_DWORD *)v1 + 110) |= 0x41u;
  if ( (int)IsxxxCleanupThreadPointerInputInfoSupported_0() >= 0 )
    xxxCleanupThreadPointerInputInfo_0();
  if ( (int)IsUnreferenceUndispatchedFrameListSupported_0() >= 0 )
    UnreferenceUndispatchedFrameList_0();
  if ( (int)IsResetEdgyDataOwnershipForCurrentThreadSupported_0() >= 0 )
    ResetEdgyDataOwnershipForCurrentThread_0();
  v7 = *((_QWORD *)v1 + 51);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 208);
    if ( v8 && *(struct tagTHREADINFO **)(v8 + 32) == v1 && (int)IsMagpRevokeInputTransfromSupported_0() >= 0 )
      MagpRevokeInputTransfrom_0();
    v9 = *((_QWORD *)v1 + 51);
    v10 = *((_QWORD *)v1 + 47);
    if ( *(_QWORD *)(v9 + 248) == v10 )
    {
      for ( i = *(_QWORD *)(v10 + 288);
            i && ((struct tagTHREADINFO *)i == v1 || *(_QWORD *)(i + 408) != v9);
            i = *(_QWORD *)(i + 584) )
      {
        ;
      }
      if ( !i )
        *(_QWORD *)(v9 + 248) = 0LL;
    }
  }
  if ( (*((_DWORD *)v1 + 274) & 8) != 0 && (int)IsMagContextThreadCalloutSupported_0() >= 0 )
    MagContextThreadCallout_0();
  if ( ((unsigned __int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x8000000000200000uLL) != 0 )
  {
    if ( (unsigned __int8)(byte_1C0118B28 - 1) <= 2u
      || (qword_1C0118B10 & 0x8000000000200000uLL) == 0
      || (v12 = 1, (qword_1C0118B18 & 0x8000000000200000uLL) != qword_1C0118B18) )
    {
      v12 = 0;
    }
    if ( v12 )
    {
      v13 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v1);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(v1);
      EtwpGetLastInputProcessTime(
        *((struct tagQ *const *)v1 + 48),
        v13,
        (unsigned int *)(v0 + 20),
        (unsigned int *)(v0 + 16));
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400) != 0 )
        Template_qqqqq(
          Microsoft_Windows_Win32kEnableBits,
          (unsigned int)&ThreadExitEvent,
          v16,
          ThreadId,
          ThreadInfoFlags,
          v17,
          *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14),
          *(_DWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
    }
  }
  if ( (*((_DWORD *)v1 + 110) & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay(v1);
    EtwTraceInputProcessDelay(v1);
  }
  v18 = *((_QWORD *)v1 + 142);
  if ( v18 )
  {
    Win32FreePool(v18);
    *((_QWORD *)v1 + 142) = 0LL;
  }
  if ( (int)IsRemovePtiFromShellMiPListSupported_0() >= 0 )
    RemovePtiFromShellMiPList_0();
  HMAssignmentUnlock((char *)v1 + 1256);
  if ( (int)IsPatchThreadWindowsSupported_0() >= 0 )
    PatchThreadWindows_0();
  if ( *((_QWORD *)v1 + 74) && (int)IsxxxCancelTrackingForThreadSupported_0() >= 0 )
    xxxCancelTrackingForThread_0();
  v19 = *((_QWORD *)v1 + 74);
  if ( v19 )
  {
    HMAssignmentUnlock(v19);
    Win32FreePool(*((_QWORD *)v1 + 74));
    *((_QWORD *)v1 + 74) = 0LL;
  }
  if ( (int)Is_GetProcessWindowStationSupported_0() >= 0 )
  {
    ProcessWindowStation_0 = (_QWORD *)GetProcessWindowStation_0();
    if ( ProcessWindowStation_0 )
    {
      PushW32ThreadLock_0();
      ObfReferenceObject(ProcessWindowStation_0);
      if ( (struct tagTHREADINFO *)ProcessWindowStation_0[6] == v1 && (int)IsxxxCloseClipboardSupported_0() >= 0 )
        xxxCloseClipboard_0();
      if ( (struct tagTHREADINFO *)ProcessWindowStation_0[7] == v1 )
        ProcessWindowStation_0[7] = 0LL;
      PopAndFreeW32ThreadLock_0();
    }
  }
  while ( *((_QWORD *)v1 + 66) )
  {
    v21 = *((_QWORD *)v1 + 66);
    v22 = *(_DWORD **)v21;
    v23 = v21;
    *(_QWORD *)v0 = v21;
    v24 = *(struct tagTHREADINFO **)(v21 + 32);
    if ( gptiCurrent == v24 )
    {
      ++*(_DWORD *)(v21 + 40);
    }
    else
    {
      v23 = 0LL;
      *(_QWORD *)v0 = 0LL;
    }
    if ( v1 != v24 )
    {
      if ( v23 )
        xxxUnlockMenuState_0();
      break;
    }
    v25 = *(_DWORD *)(v21 + 8);
    if ( (v25 & 0x100) != 0 )
    {
      if ( (int)IsxxxEndMenuLoopSupported_0() >= 0 )
        xxxEndMenuLoop_0();
      goto LABEL_91;
    }
    *(_DWORD *)(v21 + 8) = v25 & 0xFFFFFFFB;
    *(_DWORD *)(*((_QWORD *)v1 + 48) + 340LL) &= ~0x100000u;
    if ( (int)IsxxxMNCloseHierarchySupported_0() >= 0 )
      xxxMNCloseHierarchy_0();
    if ( (*v22 & 0x8001) != 0 )
    {
LABEL_91:
      if ( v23 )
      {
        *(_DWORD *)(v23 + 40) = 0;
        *(_QWORD *)v0 = 0LL;
      }
      if ( (int)IsxxxMNEndMenuStateSupported_0() >= 0 )
        xxxMNEndMenuState_0();
    }
    else
    {
      if ( v23 )
      {
        *(_DWORD *)(v23 + 40) = 0;
        *(_QWORD *)v0 = 0LL;
      }
      if ( (int)IsMNFlushDestroyedPopupsSupported_0() >= 0 )
        MNFlushDestroyedPopups_0();
      if ( (int)IsMNUnlinkDelayedFreePopupsSupported_0() >= 0 )
        MNUnlinkDelayedFreePopups_0();
      if ( (*v22 & 0x40000000) != 0 )
      {
        *v22 &= ~0x20000000u;
      }
      else if ( v22 == (_DWORD *)&gpopupMenu )
      {
        gdwPUDFlags &= ~0x800000u;
      }
      else
      {
        Win32FreePool(v22);
      }
      if ( (int)IsxxxMNEndMenuStateInternalSupported_0() >= 0 )
        xxxMNEndMenuStateInternal_0();
    }
  }
  v26 = *((_QWORD *)v1 + 79);
  if ( v26 )
  {
    HMAssignmentUnlock(v26 + 16);
    HMAssignmentUnlock(*((_QWORD *)v1 + 79) + 24LL);
    HMAssignmentUnlock(*((_QWORD *)v1 + 79) + 8LL);
    Win32FreePool(*((_QWORD *)v1 + 79));
    *((_QWORD *)v1 + 79) = 0LL;
  }
  v27 = *((_QWORD *)v1 + 47);
  if ( v27 && *(struct tagTHREADINFO **)(v27 + 296) == v1 )
    *(_QWORD *)(v27 + 296) = 0LL;
  while ( *((_QWORD *)v1 + 68) )
  {
    if ( (int)IsxxxDestroyThreadDDEObjectSupported_0() >= 0 )
      xxxDestroyThreadDDEObject_0();
  }
  if ( (*((_DWORD *)v1 + 110) & 0x800) != 0 )
  {
    v28 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 51) + 8LL) + 16LL);
    if ( v28 )
    {
      v29 = gptiCurrent;
      *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *((_QWORD *)gptiCurrent + 46);
      *((_QWORD *)v29 + 46) = v0 + 48;
      *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v28;
      ++*(_DWORD *)(v28 + 8);
      if ( (int)IsxxxFlushPaletteSupported_0() >= 0 )
        xxxFlushPalette_0();
      ThreadUnlock1();
    }
  }
  if ( (unsigned int)FLastGuiThread(v1) && gppiFullscreen == *((_QWORD *)v1 + 47) && !gbMDEVDisabled )
  {
    LODWORD(v62) = 4;
    LODWORD(v61) = 2191;
    xxxUserSetDisplayConfig(0, 0, 0, 0, v61, v62, 0, 0LL, 0, 0LL, 0LL, v0 + 96);
  }
  v30 = *((_QWORD *)v1 + 47);
  if ( v30 && *(_QWORD *)(v30 + 776) && (int)IsDestroyThreadHidObjectsSupported_0() >= 0 )
    DestroyThreadHidObjects_0();
  if ( *((int *)v1 + 110) < 0 && (int)IsxxxHandleHealthyThreadSupported_0() >= 0 )
    xxxHandleHealthyThread_0();
  if ( *((_QWORD *)v1 + 128) && (int)IsDestroyInputHangInfoSupported_0() >= 0 )
    DestroyInputHangInfo_0();
  v31 = *((_DWORD *)v1 + 274);
  if ( (v31 & 0x400000) != 0 )
  {
    *((_DWORD *)v1 + 274) = v31 & 0xFFBFFFFF;
    gbMouseInjectionBlockedOnDIT = 0;
    if ( gcDITMouseInjectionWaiters )
    {
      KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
      gcDITMouseInjectionWaiters = 0;
    }
  }
  if ( CInputManager::IsDwmInputThread(*(struct _ETHREAD **)v1) )
    CInputManager::NotifyDwmInputThreadShutdown(v32);
  if ( *((_QWORD *)v1 + 47) && (unsigned int)FLastGuiThread(v1) )
  {
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    v34 = 0;
    if ( CurrentProcess )
      v34 = CurrentProcess == g_pepDwm;
    if ( v34 )
      xxxDwmProcessShutdown(1);
  }
  if ( (int)IsDestroyThreadsTimersSupported_0() >= 0 )
    DestroyThreadsTimers_0();
  if ( (int)IsFreeThreadsWindowHooksSupported_0() >= 0 )
    FreeThreadsWindowHooks_0();
  if ( (int)IsDestroyThreadsHotKeysSupported_0() >= 0 )
    DestroyThreadsHotKeys_0();
  DestroyThreadsObjects();
  v35 = (_QWORD *)gpbwlList;
  if ( gpbwlList )
  {
    do
    {
      v36 = (_QWORD *)*v35;
      if ( (struct tagTHREADINFO *)v35[3] == v1 && (int)IsFreeHwndListSupported_0() >= 0 )
        FreeHwndList_0();
      v35 = v36;
    }
    while ( v36 );
  }
  if ( (int)IsFreeThreadsWinEventsSupported_0() >= 0 )
    FreeThreadsWinEvents_0();
  HMAssignmentUnlock((char *)v1 + 392);
  if ( gdwGuiThreads == 1 )
  {
    gbPowerCalloutsReady = 0;
    _InterlockedOr(v60, 0);
    gbCleanedUpResources = 1;
    gdwHydraHint |= 0x20000u;
    CleanupPowerRequestList();
    for ( j = *(_QWORD *)(PsGetCurrentProcessWin32Process() + 288); j; j = *(_QWORD *)(j + 584) )
    {
      v38 = *(_QWORD *)(j + 384);
      if ( v38 )
        HMAssignmentLock(v38 + 328, 0LL);
    }
    if ( (int)IsUnloadCursorsAndIconsSupported_0() >= 0 )
      UnloadCursorsAndIcons_0();
    if ( (int)IsDestroyDpiMetricsCacheSupported_0() >= 0 )
      DestroyDpiMetricsCache_0();
    CleanupGDI();
  }
  if ( (unsigned int)FLastGuiThread(v1) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v1 + 47) + 12LL) & 0x1000000) != 0 )
    {
      v39 = *((_QWORD *)v1 + 52);
      if ( v39 )
      {
        if ( *(_QWORD *)(v39 + 160) && (int)Is_PostMessageSupported_0() >= 0 )
          PostMessage_0();
      }
    }
    if ( (int)IsDestroyProcessesClassesSupported_0() >= 0 )
      DestroyProcessesClasses_0();
    *(_DWORD *)(*((_QWORD *)v1 + 47) + 12LL) &= ~0x2000u;
    *(_DWORD *)(*((_QWORD *)v1 + 47) + 12LL) &= ~0x10000000u;
    v40 = *((_QWORD *)v1 + 54);
    v41 = *(_DWORD **)(v40 + 208);
    if ( v41 )
    {
      ProbeForWrite(*(volatile void **)(v40 + 208), 4uLL, 4u);
      *v41 = 0;
    }
    DestroyProcessesObjects(*((struct tagPROCESSINFO **)v1 + 47));
  }
  HMAssignmentUnlock((char *)v1 + 704);
  if ( *((_QWORD *)v1 + 155) )
  {
    Win32FreePool(*((_QWORD *)v1 + 155));
    *((_QWORD *)v1 + 155) = 0LL;
  }
  if ( *((_QWORD *)v1 + 48) )
  {
    if ( (int)IsPackAffectedThreadsFromThreadCleanupSupported_0() >= 0 )
      PackAffectedThreadsFromThreadCleanup_0();
    *(_DWORD *)(*((_QWORD *)v1 + 48) + 336LL) -= *((_DWORD *)v1 + 168);
    if ( *(_DWORD *)(*((_QWORD *)v1 + 48) + 344LL) != 1 )
    {
      gpdeskRecalcQueueAttach = *((_QWORD *)v1 + 51);
      if ( (int)IszzzSetFMouseMovedSupported_0() >= 0 )
      {
        KeQueryPerformanceCounter(0LL);
        zzzSetFMouseMoved_0();
      }
    }
  }
  v42 = PsGetCurrentProcessWin32Process() + 288;
  if ( *(_QWORD *)v42 )
  {
    if ( *(struct tagTHREADINFO **)v42 != v1 )
    {
      do
      {
        v43 = *(_QWORD *)v42;
        if ( !*(_QWORD *)(*(_QWORD *)v42 + 584LL) )
          break;
        v42 = v43 + 584;
      }
      while ( *(struct tagTHREADINFO **)(v43 + 584) != v1 );
    }
    if ( *(struct tagTHREADINFO **)v42 == v1 )
    {
      *(_QWORD *)v42 = *((_QWORD *)v1 + 73);
      *((_QWORD *)v1 + 73) = 0LL;
    }
  }
  *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  LockObjectAssignment(v0 + 8, *((_QWORD *)v1 + 51));
  if ( (int)IsSendMsgCleanupSupported_0() >= 0 )
    SendMsgCleanup_0();
  if ( *((_DWORD *)v1 + 180) )
  {
    KeSetKernelStackSwapEnable(1u);
    *((_DWORD *)v1 + 180) = 0;
  }
  v45 = *((_QWORD *)v1 + 47);
  if ( v45 )
    --*(_DWORD *)(v45 + 352);
  v46 = *((_QWORD *)v1 + 80);
  if ( v46 )
  {
    if ( (int)ProtectHandle(v46, v44, ExEventObjectType, 0LL) >= 0 )
      ObCloseHandle(*((HANDLE *)v1 + 80), 1);
    *((_QWORD *)v1 + 80) = 0LL;
  }
  if ( gspwndInternalCapture && *(struct tagTHREADINFO **)(gspwndInternalCapture + 16) == v1 )
    HMAssignmentUnlock(&gspwndInternalCapture);
  if ( gptiForeground == v1 )
  {
    if ( (int)IsxxxWindowEventSupported_0() >= 0 )
    {
      LODWORD(v61) = 4;
      xxxWindowEvent_0();
      LODWORD(v61) = 4;
      xxxWindowEvent_0();
    }
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 8LL) + 192LL)
      && (int)Is_PostMessageSupported_0() >= 0 )
    {
      PostMessage_0();
    }
    if ( (int)IsxxxSetForegroundThreadSupported_0() >= 0 )
      xxxSetForegroundThread_0();
  }
  if ( v1 == (struct tagTHREADINFO *)qword_1C011A500 )
  {
    v47 = *(_QWORD *)(*((_QWORD *)v1 + 47) + 288LL);
    qword_1C011A508 = 0LL;
    if ( v47 )
      qword_1C011A500 = v47;
    else
      qword_1C011A500 = (__int64)gptiForeground;
  }
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v1 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v1 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v1 )
    gHardErrorHandler = 0LL;
  if ( (*((_DWORD *)v1 + 274) & 0x2000) != 0 )
  {
    v48 = (_BYTE *)qword_1C011A128;
    v49 = 0;
    do
    {
      if ( v48[16] == 1
        && *(_DWORD *)(*(_QWORD *)v48 + 320LL)
        && *(struct tagTHREADINFO **)(*(_QWORD *)v48 + 312LL) == v1
        && (unsigned int)ScrubDelegatedWindow() )
      {
        break;
      }
      ++v49;
      v48 += 24;
    }
    while ( v49 <= giheLast );
  }
  if ( *((_QWORD *)v1 + 48) )
  {
    if ( (int)IsDestroyThreadsMessagesSupported_0() >= 0 )
      DestroyThreadsMessages_0();
    ++*(_DWORD *)(*((_QWORD *)v1 + 48) + 348LL);
    zzzDestroyQueue(*((_QWORD *)v1 + 48), v1);
  }
  if ( (int)IsResetEdgyDataOwnershipForCurrentThreadSupported_0() >= 0 )
    ResetEdgyDataOwnershipForCurrentThread_0();
  if ( *((_QWORD *)v1 + 51) )
  {
    v50 = (_QWORD *)((char *)v1 + 656);
    v51 = *((_QWORD *)v1 + 82);
    v52 = (_QWORD *)*((_QWORD *)v1 + 83);
    if ( *(struct tagTHREADINFO **)(v51 + 8) != (struct tagTHREADINFO *)((char *)v1 + 656) || (_QWORD *)*v52 != v50 )
      __fastfail(3u);
    *v52 = v51;
    *(_QWORD *)(v51 + 8) = v52;
    *((_QWORD *)v1 + 83) = (char *)v1 + 656;
    *v50 = v50;
  }
  FreeMessageList_0();
  v53 = &gpai;
  if ( gpai )
  {
    do
    {
      v54 = (void **)*v53;
      if ( *((struct tagTHREADINFO **)*v53 + 1) == v1 || v54[2] == v1 )
      {
        *v53 = *v54;
        Win32FreePool(v54);
      }
      else
      {
        v53 = (void **)*v53;
      }
    }
    while ( *v53 );
  }
  MarkThreadsObjects(v1);
  if ( (struct tagTHREADINFO *)gptiShutdownWaiter == v1 )
    gptiShutdownWaiter = 0LL;
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v1 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v1 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v1 )
    gHardErrorHandler = 0LL;
  if ( (struct tagTHREADINFO *)gptiLockUpdate == v1 )
    gptiLockUpdate = 0LL;
  if ( gptiForeground == v1 )
    gptiForeground = 0LL;
  if ( (struct tagTHREADINFO *)gptiBlockInput == v1 )
    gptiBlockInput = 0LL;
  if ( v1 == (struct tagTHREADINFO *)qword_1C011A500 )
    qword_1C011A500 = 0LL;
  v55 = *((_QWORD *)v1 + 48);
  if ( v55 && !*(_DWORD *)(v55 + 344) )
  {
    if ( gpqForeground == v55 )
      gpqForeground = 0LL;
    if ( gpqForegroundPrev == *((_QWORD *)v1 + 48) )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == *((_QWORD *)v1 + 48) )
      gpqCursor = 0LL;
  }
  if ( *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
  {
    v56 = (struct tagTHREADINFO *)*((_QWORD *)v1 + 50);
    if ( v56 )
    {
      if ( v56 != (struct tagTHREADINFO *)((char *)v1 + 920) )
      {
        DesktopFree_0();
        *((_QWORD *)v1 + 50) = (char *)v1 + 920;
      }
    }
  }
  if ( (*((_DWORD *)v1 + 110) & 4) != 0 )
  {
    v57 = *((_QWORD *)v1 + 54);
    if ( v57 )
    {
      Win32FreePool(v57);
      *((_QWORD *)v1 + 54) = 0LL;
    }
  }
  UnlockObjectAssignment(v0 + 8);
  if ( gdwThreadEndSession == (unsigned int)PsGetCurrentThreadId() )
    UnlockObjectAssignment(&grpwinstaLogoff);
  result = Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    result = TemplateEventDescriptor(v58, &CompleteGuiThreadExecution, &W32kControlGuid);
  --gdwGuiThreads;
  *((_DWORD *)v1 + 274) |= 0x80u;
  return result;
}
