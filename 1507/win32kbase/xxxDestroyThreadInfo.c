/*
 * XREFs of xxxDestroyThreadInfo @ 0x1C004DF98
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     UserThreadCallout @ 0x1C004F0C0 (UserThreadCallout.c)
 * Callees:
 *     IsUnloadCursorsAndIconsSupported_0 @ 0x1C0001AF0 (IsUnloadCursorsAndIconsSupported_0.c)
 *     UnloadCursorsAndIcons_0 @ 0x1C0001AF8 (UnloadCursorsAndIcons_0.c)
 *     IsDestroyDpiMetricsCacheSupported_0 @ 0x1C0001B00 (IsDestroyDpiMetricsCacheSupported_0.c)
 *     DestroyDpiMetricsCache_0 @ 0x1C0001B08 (DestroyDpiMetricsCache_0.c)
 *     PushW32ThreadLock_0 @ 0x1C0001C70 (PushW32ThreadLock_0.c)
 *     IsDestroyThreadsMessagesSupported_0 @ 0x1C0001CF0 (IsDestroyThreadsMessagesSupported_0.c)
 *     DestroyThreadsMessages_0 @ 0x1C0001CF8 (DestroyThreadsMessages_0.c)
 *     PopAndFreeW32ThreadLock_0 @ 0x1C0001D60 (PopAndFreeW32ThreadLock_0.c)
 *     xxxWindowEvent_0 @ 0x1C0001DA0 (xxxWindowEvent_0.c)
 *     FreeMessageList_0 @ 0x1C0001DC0 (FreeMessageList_0.c)
 *     IszzzSetFMouseMovedSupported_0 @ 0x1C0001DD8 (IszzzSetFMouseMovedSupported_0.c)
 *     zzzSetFMouseMoved_0 @ 0x1C0001DE0 (zzzSetFMouseMoved_0.c)
 *     IsCleanupIAMAccessSupported_0 @ 0x1C0001DE8 (IsCleanupIAMAccessSupported_0.c)
 *     CleanupIAMAccess_0 @ 0x1C0001DF0 (CleanupIAMAccess_0.c)
 *     IsxxxCleanupThreadPointerInputInfoSupported_0 @ 0x1C0001DF8 (IsxxxCleanupThreadPointerInputInfoSupported_0.c)
 *     xxxCleanupThreadPointerInputInfo_0 @ 0x1C0001E00 (xxxCleanupThreadPointerInputInfo_0.c)
 *     IsMagpRevokeInputTransfromSupported_0 @ 0x1C0001E08 (IsMagpRevokeInputTransfromSupported_0.c)
 *     MagpRevokeInputTransfrom_0 @ 0x1C0001E10 (MagpRevokeInputTransfrom_0.c)
 *     IsMagContextThreadCalloutSupported_0 @ 0x1C0001E18 (IsMagContextThreadCalloutSupported_0.c)
 *     MagContextThreadCallout_0 @ 0x1C0001E20 (MagContextThreadCallout_0.c)
 *     IsRemovePtiFromShellMiPListSupported_0 @ 0x1C0001E28 (IsRemovePtiFromShellMiPListSupported_0.c)
 *     RemovePtiFromShellMiPList_0 @ 0x1C0001E30 (RemovePtiFromShellMiPList_0.c)
 *     IsPatchThreadWindowsSupported_0 @ 0x1C0001E38 (IsPatchThreadWindowsSupported_0.c)
 *     PatchThreadWindows_0 @ 0x1C0001E40 (PatchThreadWindows_0.c)
 *     IsxxxCancelTrackingForThreadSupported_0 @ 0x1C0001E48 (IsxxxCancelTrackingForThreadSupported_0.c)
 *     xxxCancelTrackingForThread_0 @ 0x1C0001E50 (xxxCancelTrackingForThread_0.c)
 *     Is_GetProcessWindowStationSupported_0 @ 0x1C0001E58 (Is_GetProcessWindowStationSupported_0.c)
 *     _GetProcessWindowStation_0 @ 0x1C0001E60 (_GetProcessWindowStation_0.c)
 *     IsxxxCloseClipboardSupported_0 @ 0x1C0001E68 (IsxxxCloseClipboardSupported_0.c)
 *     xxxCloseClipboard_0 @ 0x1C0001E70 (xxxCloseClipboard_0.c)
 *     xxxUnlockMenuState_0 @ 0x1C0001E78 (xxxUnlockMenuState_0.c)
 *     IsxxxEndMenuLoopSupported_0 @ 0x1C0001E80 (IsxxxEndMenuLoopSupported_0.c)
 *     xxxEndMenuLoop_0 @ 0x1C0001E88 (xxxEndMenuLoop_0.c)
 *     IsxxxMNEndMenuStateSupported_0 @ 0x1C0001E90 (IsxxxMNEndMenuStateSupported_0.c)
 *     xxxMNEndMenuState_0 @ 0x1C0001E98 (xxxMNEndMenuState_0.c)
 *     IsxxxMNCloseHierarchySupported_0 @ 0x1C0001EA0 (IsxxxMNCloseHierarchySupported_0.c)
 *     xxxMNCloseHierarchy_0 @ 0x1C0001EA8 (xxxMNCloseHierarchy_0.c)
 *     IsMNFlushDestroyedPopupsSupported_0 @ 0x1C0001EB0 (IsMNFlushDestroyedPopupsSupported_0.c)
 *     MNFlushDestroyedPopups_0 @ 0x1C0001EB8 (MNFlushDestroyedPopups_0.c)
 *     IsMNUnlinkDelayedFreePopupsSupported_0 @ 0x1C0001EC0 (IsMNUnlinkDelayedFreePopupsSupported_0.c)
 *     MNUnlinkDelayedFreePopups_0 @ 0x1C0001EC8 (MNUnlinkDelayedFreePopups_0.c)
 *     IsxxxMNEndMenuStateInternalSupported_0 @ 0x1C0001ED0 (IsxxxMNEndMenuStateInternalSupported_0.c)
 *     xxxMNEndMenuStateInternal_0 @ 0x1C0001ED8 (xxxMNEndMenuStateInternal_0.c)
 *     IsxxxDestroyThreadDDEObjectSupported_0 @ 0x1C0001EE0 (IsxxxDestroyThreadDDEObjectSupported_0.c)
 *     xxxDestroyThreadDDEObject_0 @ 0x1C0001EE8 (xxxDestroyThreadDDEObject_0.c)
 *     IsxxxFlushPaletteSupported_0 @ 0x1C0001EF0 (IsxxxFlushPaletteSupported_0.c)
 *     xxxFlushPalette_0 @ 0x1C0001EF8 (xxxFlushPalette_0.c)
 *     IsDestroyThreadHidObjectsSupported_0 @ 0x1C0001F00 (IsDestroyThreadHidObjectsSupported_0.c)
 *     DestroyThreadHidObjects_0 @ 0x1C0001F08 (DestroyThreadHidObjects_0.c)
 *     IsxxxHandleHealthyThreadSupported_0 @ 0x1C0001F10 (IsxxxHandleHealthyThreadSupported_0.c)
 *     xxxHandleHealthyThread_0 @ 0x1C0001F18 (xxxHandleHealthyThread_0.c)
 *     IsDestroyInputHangInfoSupported_0 @ 0x1C0001F20 (IsDestroyInputHangInfoSupported_0.c)
 *     DestroyInputHangInfo_0 @ 0x1C0001F28 (DestroyInputHangInfo_0.c)
 *     IsDestroyThreadsTimersSupported_0 @ 0x1C0001F30 (IsDestroyThreadsTimersSupported_0.c)
 *     DestroyThreadsTimers_0 @ 0x1C0001F38 (DestroyThreadsTimers_0.c)
 *     IsFreeThreadsWindowHooksSupported_0 @ 0x1C0001F40 (IsFreeThreadsWindowHooksSupported_0.c)
 *     FreeThreadsWindowHooks_0 @ 0x1C0001F48 (FreeThreadsWindowHooks_0.c)
 *     IsDestroyThreadsHotKeysSupported_0 @ 0x1C0001F50 (IsDestroyThreadsHotKeysSupported_0.c)
 *     DestroyThreadsHotKeys_0 @ 0x1C0001F58 (DestroyThreadsHotKeys_0.c)
 *     IsFreeHwndListSupported_0 @ 0x1C0001F60 (IsFreeHwndListSupported_0.c)
 *     FreeHwndList_0 @ 0x1C0001F68 (FreeHwndList_0.c)
 *     IsFreeThreadsWinEventsSupported_0 @ 0x1C0001F70 (IsFreeThreadsWinEventsSupported_0.c)
 *     FreeThreadsWinEvents_0 @ 0x1C0001F78 (FreeThreadsWinEvents_0.c)
 *     Is_PostMessageSupported_0 @ 0x1C0001F80 (Is_PostMessageSupported_0.c)
 *     _PostMessage_0 @ 0x1C0001F88 (_PostMessage_0.c)
 *     IsDestroyProcessesClassesSupported_0 @ 0x1C0001F90 (IsDestroyProcessesClassesSupported_0.c)
 *     DestroyProcessesClasses_0 @ 0x1C0001F98 (DestroyProcessesClasses_0.c)
 *     IsPackAffectedThreadsFromThreadCleanupSupported_0 @ 0x1C0001FA0 (IsPackAffectedThreadsFromThreadCleanupSupported_0.c)
 *     PackAffectedThreadsFromThreadCleanup_0 @ 0x1C0001FA8 (PackAffectedThreadsFromThreadCleanup_0.c)
 *     IsSendMsgCleanupSupported_0 @ 0x1C0001FB0 (IsSendMsgCleanupSupported_0.c)
 *     SendMsgCleanup_0 @ 0x1C0001FB8 (SendMsgCleanup_0.c)
 *     IsxxxWindowEventSupported_0 @ 0x1C0001FC0 (IsxxxWindowEventSupported_0.c)
 *     IsxxxSetForegroundThreadSupported_0 @ 0x1C0001FC8 (IsxxxSetForegroundThreadSupported_0.c)
 *     xxxSetForegroundThread_0 @ 0x1C0001FD0 (xxxSetForegroundThread_0.c)
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0012694 (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     HMAssignmentLock @ 0x1C004D0A0 (HMAssignmentLock.c)
 *     ?FLastGuiThread@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C004ECDC (-FLastGuiThread@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     zzzDestroyQueue @ 0x1C004ED10 (zzzDestroyQueue.c)
 *     HMAssignmentUnlock @ 0x1C004EFD0 (HMAssignmentUnlock.c)
 *     ProtectHandle @ 0x1C004F034 (ProtectHandle.c)
 *     MarkThreadsObjects @ 0x1C004FE30 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C004FEC0 (DestroyThreadsObjects.c)
 *     LockObjectAssignment @ 0x1C0050110 (LockObjectAssignment.c)
 *     UnlockObjectAssignment @ 0x1C0050160 (UnlockObjectAssignment.c)
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C0050328 (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 *     EtwTraceInputProcessDelay @ 0x1C0050350 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0050760 (EtwTraceMessageCheckDelay.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00519E0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ThreadUnlock1 @ 0x1C0052B70 (ThreadUnlock1.c)
 *     CleanupGDI @ 0x1C006D050 (CleanupGDI.c)
 *     CleanupPowerRequestList @ 0x1C006D750 (CleanupPowerRequestList.c)
 *     xxxUserSetDisplayConfig @ 0x1C006DFB0 (xxxUserSetDisplayConfig.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0070294 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00A6ECC (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00A6EF8 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 *     Template_qqqqq @ 0x1C00AA258 (Template_qqqqq.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C00C05C8 (RIMIDEProcessRemoveInjectionDevices.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C00DE7D0 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 */

__int64 xxxDestroyThreadInfo()
{
  unsigned int *v0; // rbp
  struct tagTHREADINFO *v1; // rsi
  struct _NT_TIB *Self; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 i; // rax
  char v15; // al
  unsigned __int64 v16; // rbx
  unsigned int ThreadId; // r14d
  char ThreadInfoFlags; // r15
  int v19; // r8d
  char v20; // r11
  __int64 v21; // rcx
  _QWORD *ProcessWindowStation_0; // rbx
  __int64 v23; // r14
  _DWORD *v24; // r15
  __int64 v25; // rbx
  struct tagTHREADINFO *v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rbx
  struct tagTHREADINFO *v31; // rdx
  __int64 v32; // rax
  struct _ETHREAD *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  PVOID CurrentProcess; // rax
  BOOL v37; // edx
  _QWORD *v38; // rbx
  _QWORD *v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 j; // rbx
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rax
  _DWORD *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  _QWORD *v58; // rax
  __int64 v59; // rdx
  _QWORD *v60; // rcx
  void **v61; // rbx
  void **v62; // rcx
  __int64 v63; // rcx
  char *v64; // r8
  __int64 v65; // rcx
  __int64 result; // rax
  signed __int32 v67[8]; // [rsp+60h] [rbp+60h] BYREF
  __int64 v68; // [rsp+80h] [rbp+80h]
  __int64 v69; // [rsp+88h] [rbp+88h]
  _BYTE v70[96]; // [rsp+F0h] [rbp+F0h] BYREF

  v0 = (unsigned int *)((unsigned __int64)v70 & 0xFFFFFFFFFFFFFFC0uLL);
  v1 = gptiCurrent;
  *(_QWORD *)(((unsigned __int64)v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = gptiCurrent;
  Self = KeGetPcr()->NtTib.Self;
  if ( v1 == (struct tagTHREADINFO *)gptiTSRequest )
    gptiTSRequest = 0LL;
  if ( (*((_DWORD *)v1 + 270) & 0x200000) != 0 )
  {
    RIMIDEProcessRemoveInjectionDevices(v1);
    v7 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v4, v3, v5, v6, v68, v69) + 848);
    if ( v7 )
    {
      *(_QWORD *)(v7 + 88) = 0LL;
      v8 = *(void **)(v7 + 80);
      if ( v8 )
      {
        ZwClose(v8);
        *(_QWORD *)(v7 + 80) = 0LL;
      }
    }
  }
  if ( Self )
    Self[2].StackBase = 0LL;
  v9 = *((_QWORD *)v1 + 52);
  if ( v9 && v1 == *(struct tagTHREADINFO **)(v9 + 280) && (int)IsCleanupIAMAccessSupported_0() >= 0 )
    CleanupIAMAccess_0();
  if ( (struct tagTHREADINFO *)gptiBlockInput == v1 )
    gptiBlockInput = 0LL;
  *((_DWORD *)v1 + 112) |= 0x41u;
  if ( (int)IsxxxCleanupThreadPointerInputInfoSupported_0() >= 0 )
    xxxCleanupThreadPointerInputInfo_0();
  v10 = *((_QWORD *)v1 + 52);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 208);
    if ( v11 && *(struct tagTHREADINFO **)(v11 + 32) == v1 && (int)IsMagpRevokeInputTransfromSupported_0() >= 0 )
      MagpRevokeInputTransfrom_0();
    v12 = *((_QWORD *)v1 + 52);
    v13 = *((_QWORD *)v1 + 48);
    if ( *(_QWORD *)(v12 + 296) == v13 )
    {
      for ( i = *(_QWORD *)(v13 + 296);
            i && ((struct tagTHREADINFO *)i == v1 || *(_QWORD *)(i + 416) != v12);
            i = *(_QWORD *)(i + 592) )
      {
        ;
      }
      if ( !i )
        *(_QWORD *)(v12 + 296) = 0LL;
    }
  }
  if ( (*((_DWORD *)v1 + 270) & 8) != 0 && (int)IsMagContextThreadCalloutSupported_0() >= 0 )
    MagContextThreadCallout_0();
  if ( ((unsigned __int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x8000000000200000uLL) != 0 )
  {
    if ( (unsigned __int8)(byte_1C00FEA58 - 1) <= 2u
      || (qword_1C00FEA40 & 0x8000000000200000uLL) == 0
      || (v15 = 1, (qword_1C00FEA48 & 0x8000000000200000uLL) != qword_1C00FEA48) )
    {
      v15 = 0;
    }
    if ( v15 )
    {
      v16 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v1);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(v1);
      EtwpGetLastInputProcessTime(*((struct tagQ *const *)v1 + 49), v16, v0 + 4, v0 + 5);
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400) != 0 )
        Template_qqqqq(
          Microsoft_Windows_Win32kEnableBits,
          (unsigned int)&ThreadExitEvent,
          v19,
          ThreadId,
          ThreadInfoFlags,
          v20,
          *(_DWORD *)(((unsigned __int64)v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
          *(_DWORD *)(((unsigned __int64)v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14));
    }
  }
  if ( (*((_DWORD *)v1 + 112) & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay(v1);
    EtwTraceInputProcessDelay(v1);
  }
  if ( *((_QWORD *)v1 + 140) )
  {
    Win32FreePool();
    *((_QWORD *)v1 + 140) = 0LL;
  }
  if ( (int)IsRemovePtiFromShellMiPListSupported_0() >= 0 )
    RemovePtiFromShellMiPList_0();
  HMAssignmentUnlock((char *)v1 + 1240);
  if ( (int)IsPatchThreadWindowsSupported_0() >= 0 )
    PatchThreadWindows_0();
  if ( *((_QWORD *)v1 + 75) && (int)IsxxxCancelTrackingForThreadSupported_0() >= 0 )
    xxxCancelTrackingForThread_0();
  v21 = *((_QWORD *)v1 + 75);
  if ( v21 )
  {
    HMAssignmentUnlock(v21);
    Win32FreePool();
    *((_QWORD *)v1 + 75) = 0LL;
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
  while ( *((_QWORD *)v1 + 67) )
  {
    v23 = *((_QWORD *)v1 + 67);
    v24 = *(_DWORD **)v23;
    v25 = v23;
    *(_QWORD *)(((unsigned __int64)v70 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v23;
    v26 = *(struct tagTHREADINFO **)(v23 + 32);
    if ( gptiCurrent == v26 )
    {
      ++*(_DWORD *)(v23 + 40);
    }
    else
    {
      v25 = 0LL;
      *(_QWORD *)(((unsigned __int64)v70 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    }
    if ( v1 != v26 )
    {
      if ( v25 )
        xxxUnlockMenuState_0();
      break;
    }
    v27 = *(_DWORD *)(v23 + 8);
    if ( (v27 & 0x100) != 0 )
    {
      if ( (int)IsxxxEndMenuLoopSupported_0() >= 0 )
        xxxEndMenuLoop_0();
      goto LABEL_85;
    }
    *(_DWORD *)(v23 + 8) = v27 & 0xFFFFFFFB;
    *(_DWORD *)(*((_QWORD *)v1 + 49) + 332LL) &= ~0x100000u;
    if ( (int)IsxxxMNCloseHierarchySupported_0() >= 0 )
      xxxMNCloseHierarchy_0();
    if ( (*v24 & 0x8001) != 0 )
    {
LABEL_85:
      if ( v25 )
      {
        *(_DWORD *)(v25 + 40) = 0;
        *(_QWORD *)(((unsigned __int64)v70 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
      }
      if ( (int)IsxxxMNEndMenuStateSupported_0() >= 0 )
        xxxMNEndMenuState_0();
    }
    else
    {
      if ( v25 )
      {
        *(_DWORD *)(v25 + 40) = 0;
        *(_QWORD *)(((unsigned __int64)v70 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
      }
      if ( (int)IsMNFlushDestroyedPopupsSupported_0() >= 0 )
        MNFlushDestroyedPopups_0();
      if ( (int)IsMNUnlinkDelayedFreePopupsSupported_0() >= 0 )
        MNUnlinkDelayedFreePopups_0();
      if ( (*v24 & 0x40000000) != 0 )
      {
        *v24 &= ~0x20000000u;
      }
      else if ( v24 == (_DWORD *)&gpopupMenu )
      {
        gdwPUDFlags &= ~0x800000u;
      }
      else
      {
        Win32FreePool();
      }
      if ( (int)IsxxxMNEndMenuStateInternalSupported_0() >= 0 )
        xxxMNEndMenuStateInternal_0();
    }
  }
  v28 = *((_QWORD *)v1 + 80);
  if ( v28 )
  {
    HMAssignmentUnlock(v28 + 16);
    HMAssignmentUnlock(*((_QWORD *)v1 + 80) + 24LL);
    HMAssignmentUnlock(*((_QWORD *)v1 + 80) + 8LL);
    Win32FreePool();
    *((_QWORD *)v1 + 80) = 0LL;
  }
  v29 = *((_QWORD *)v1 + 48);
  if ( v29 && *(struct tagTHREADINFO **)(v29 + 304) == v1 )
    *(_QWORD *)(v29 + 304) = 0LL;
  while ( *((_QWORD *)v1 + 69) )
  {
    if ( (int)IsxxxDestroyThreadDDEObjectSupported_0() >= 0 )
      xxxDestroyThreadDDEObject_0();
  }
  if ( (*((_DWORD *)v1 + 112) & 0x800) != 0 )
  {
    v30 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 52) + 8LL) + 16LL);
    if ( v30 )
    {
      v31 = gptiCurrent;
      *(_QWORD *)(((unsigned __int64)v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *((_QWORD *)gptiCurrent + 47);
      *((_QWORD *)v31 + 47) = v0 + 10;
      *(_QWORD *)(((unsigned __int64)v70 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v30;
      ++*(_DWORD *)(v30 + 8);
      if ( (int)IsxxxFlushPaletteSupported_0() >= 0 )
        xxxFlushPalette_0();
      ThreadUnlock1();
    }
  }
  if ( (unsigned int)FLastGuiThread(v1) && gppiFullscreen == *((_QWORD *)v1 + 48) && !gbMDEVDisabled )
    xxxUserSetDisplayConfig(0, 0x88Fu, 4, 0, 0LL, 0, 0LL);
  v32 = *((_QWORD *)v1 + 48);
  if ( v32 && *(_QWORD *)(v32 + 784) && (int)IsDestroyThreadHidObjectsSupported_0() >= 0 )
    DestroyThreadHidObjects_0();
  if ( *((int *)v1 + 112) < 0 && (int)IsxxxHandleHealthyThreadSupported_0() >= 0 )
    xxxHandleHealthyThread_0();
  if ( *((_QWORD *)v1 + 126) && (int)IsDestroyInputHangInfoSupported_0() >= 0 )
    DestroyInputHangInfo_0();
  if ( CInputManager::IsDwmInputThread(*(struct _ETHREAD **)v1) )
    CInputManager::NotifyDwmInputThreadShutdown(v33);
  if ( *((_QWORD *)v1 + 48) && (unsigned int)FLastGuiThread(v1) )
  {
    CurrentProcess = (PVOID)PsGetCurrentProcess(v35, v34);
    v37 = 0;
    if ( CurrentProcess )
      v37 = CurrentProcess == g_pepDwm;
    if ( v37 )
      xxxDwmProcessShutdown(1);
  }
  if ( (int)IsDestroyThreadsTimersSupported_0() >= 0 )
    DestroyThreadsTimers_0();
  if ( (int)IsFreeThreadsWindowHooksSupported_0() >= 0 )
    FreeThreadsWindowHooks_0();
  if ( (int)IsDestroyThreadsHotKeysSupported_0() >= 0 )
    DestroyThreadsHotKeys_0();
  DestroyThreadsObjects();
  v38 = (_QWORD *)gpbwlList;
  if ( gpbwlList )
  {
    do
    {
      v39 = (_QWORD *)*v38;
      if ( (struct tagTHREADINFO *)v38[3] == v1 && (int)IsFreeHwndListSupported_0() >= 0 )
        FreeHwndList_0();
      v38 = v39;
    }
    while ( v39 );
  }
  if ( (int)IsFreeThreadsWinEventsSupported_0() >= 0 )
    FreeThreadsWinEvents_0();
  HMAssignmentUnlock((char *)v1 + 400);
  if ( gdwGuiThreads == 1 )
  {
    gbPowerCalloutsReady = 0;
    _InterlockedOr(v67, 0);
    gbCleanedUpResources = 1;
    gdwHydraHint |= 0x20000u;
    CleanupPowerRequestList();
    for ( j = *(_QWORD *)(PsGetCurrentProcessWin32Process(v41, v40, v42, v43, v68, v69) + 296); j; j = *(_QWORD *)(j + 592) )
    {
      v45 = *(_QWORD *)(j + 392);
      if ( v45 )
        HMAssignmentLock((_DWORD **)(v45 + 320), 0LL);
    }
    if ( (int)IsUnloadCursorsAndIconsSupported_0() >= 0 )
      UnloadCursorsAndIcons_0();
    if ( (int)IsDestroyDpiMetricsCacheSupported_0() >= 0 )
      DestroyDpiMetricsCache_0();
    CleanupGDI();
  }
  if ( (unsigned int)FLastGuiThread(v1) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v1 + 48) + 12LL) & 0x1000000) != 0 )
    {
      v46 = *((_QWORD *)v1 + 53);
      if ( v46 )
      {
        if ( *(_QWORD *)(v46 + 160) && (int)Is_PostMessageSupported_0() >= 0 )
          PostMessage_0();
      }
    }
    if ( (int)IsDestroyProcessesClassesSupported_0() >= 0 )
      DestroyProcessesClasses_0();
    *(_DWORD *)(*((_QWORD *)v1 + 48) + 12LL) &= ~0x2000u;
    *(_DWORD *)(*((_QWORD *)v1 + 48) + 12LL) &= ~0x10000000u;
    v47 = *((_QWORD *)v1 + 55);
    v48 = *(_DWORD **)(v47 + 208);
    if ( v48 )
    {
      ProbeForWrite(*(volatile void **)(v47 + 208), 4uLL, 4u);
      *v48 = 0;
    }
    DestroyProcessesObjects(*((struct tagPROCESSINFO **)v1 + 48));
  }
  HMAssignmentUnlock((char *)v1 + 712);
  if ( *((_QWORD *)v1 + 153) )
  {
    Win32FreePool();
    *((_QWORD *)v1 + 153) = 0LL;
  }
  if ( *((_QWORD *)v1 + 49) )
  {
    if ( (int)IsPackAffectedThreadsFromThreadCleanupSupported_0() >= 0 )
      PackAffectedThreadsFromThreadCleanup_0();
    v50 = *((_QWORD *)v1 + 49);
    *(_DWORD *)(v50 + 328) -= *((_DWORD *)v1 + 170);
    if ( *(_DWORD *)(*((_QWORD *)v1 + 49) + 336LL) != 1 )
    {
      gpdeskRecalcQueueAttach = *((_QWORD *)v1 + 52);
      if ( (int)IszzzSetFMouseMovedSupported_0() >= 0 )
      {
        KeQueryPerformanceCounter(0LL);
        zzzSetFMouseMoved_0();
      }
    }
  }
  v53 = PsGetCurrentProcessWin32Process(v50, v49, v51, v52, v68, v69) + 296;
  if ( *(_QWORD *)v53 )
  {
    if ( *(struct tagTHREADINFO **)v53 != v1 )
    {
      do
      {
        v54 = *(_QWORD *)v53;
        if ( !*(_QWORD *)(*(_QWORD *)v53 + 592LL) )
          break;
        v53 = v54 + 592;
      }
      while ( *(struct tagTHREADINFO **)(v54 + 592) != v1 );
    }
    if ( *(struct tagTHREADINFO **)v53 == v1 )
    {
      *(_QWORD *)v53 = *((_QWORD *)v1 + 74);
      *((_QWORD *)v1 + 74) = 0LL;
    }
  }
  *(_QWORD *)v0 = 0LL;
  LockObjectAssignment((unsigned __int64)v70 & 0xFFFFFFFFFFFFFFC0uLL, *((_QWORD *)v1 + 52));
  if ( (int)IsSendMsgCleanupSupported_0() >= 0 )
    SendMsgCleanup_0();
  if ( *((_DWORD *)v1 + 182) )
  {
    KeSetKernelStackSwapEnable(1u);
    *((_DWORD *)v1 + 182) = 0;
  }
  v55 = *((_QWORD *)v1 + 48);
  if ( v55 )
    --*(_DWORD *)(v55 + 360);
  v56 = *((_QWORD *)v1 + 81);
  if ( v56 )
  {
    if ( (int)ProtectHandle(v56, ExEventObjectType, 0LL) >= 0 )
      ObCloseHandle(*((HANDLE *)v1 + 81), 1);
    *((_QWORD *)v1 + 81) = 0LL;
  }
  if ( gspwndInternalCapture && *(struct tagTHREADINFO **)(gspwndInternalCapture + 16) == v1 )
    HMAssignmentUnlock(&gspwndInternalCapture);
  if ( gptiForeground == v1 )
  {
    if ( (int)IsxxxWindowEventSupported_0() >= 0 )
    {
      LODWORD(v68) = 4;
      xxxWindowEvent_0();
      LODWORD(v68) = 4;
      xxxWindowEvent_0();
    }
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v0 + 8LL) + 192LL) && (int)Is_PostMessageSupported_0() >= 0 )
      PostMessage_0();
    if ( (int)IsxxxSetForegroundThreadSupported_0() >= 0 )
      xxxSetForegroundThread_0();
  }
  if ( v1 == (struct tagTHREADINFO *)qword_1C00FFD30 )
  {
    v57 = *(_QWORD *)(*((_QWORD *)v1 + 48) + 296LL);
    qword_1C00FFD38 = 0LL;
    if ( v57 )
      qword_1C00FFD30 = v57;
    else
      qword_1C00FFD30 = (__int64)gptiForeground;
  }
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v1 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v1 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v1 )
    gHardErrorHandler = 0LL;
  if ( (*((_DWORD *)v1 + 270) & 0x2000) != 0 )
    ScrubDelegatedWindows(v1);
  if ( *((_QWORD *)v1 + 49) )
  {
    if ( (int)IsDestroyThreadsMessagesSupported_0() >= 0 )
      DestroyThreadsMessages_0();
    ++*(_DWORD *)(*((_QWORD *)v1 + 49) + 340LL);
    zzzDestroyQueue(*((_QWORD *)v1 + 49), v1);
  }
  if ( *((_QWORD *)v1 + 52) )
  {
    v58 = (_QWORD *)((char *)v1 + 664);
    v59 = *((_QWORD *)v1 + 83);
    v60 = (_QWORD *)*((_QWORD *)v1 + 84);
    if ( *(struct tagTHREADINFO **)(v59 + 8) != (struct tagTHREADINFO *)((char *)v1 + 664) || (_QWORD *)*v60 != v58 )
      __fastfail(3u);
    *v60 = v59;
    *(_QWORD *)(v59 + 8) = v60;
    *((_QWORD *)v1 + 84) = (char *)v1 + 664;
    *v58 = v58;
  }
  FreeMessageList_0();
  v61 = &gpai;
  if ( gpai )
  {
    do
    {
      v62 = (void **)*v61;
      if ( *((struct tagTHREADINFO **)*v61 + 1) == v1 || v62[2] == v1 )
      {
        *v61 = *v62;
        Win32FreePool();
      }
      else
      {
        v61 = (void **)*v61;
      }
    }
    while ( *v61 );
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
  if ( v1 == (struct tagTHREADINFO *)qword_1C00FFD30 )
    qword_1C00FFD30 = 0LL;
  v63 = *((_QWORD *)v1 + 49);
  if ( v63 && !*(_DWORD *)(v63 + 336) )
  {
    if ( gpqForeground == v63 )
      gpqForeground = 0LL;
    if ( gpqForegroundPrev == *((_QWORD *)v1 + 49) )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == *((_QWORD *)v1 + 49) )
      gpqCursor = 0LL;
  }
  if ( *(_QWORD *)v0 )
  {
    v64 = (char *)*((_QWORD *)v1 + 51);
    if ( v64 )
    {
      if ( v64 != (char *)v1 + 920 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)v0 + 120LL), 0, v64);
        *((_QWORD *)v1 + 51) = (char *)v1 + 920;
      }
    }
  }
  if ( (*((_DWORD *)v1 + 112) & 4) != 0 && *((_QWORD *)v1 + 55) )
  {
    Win32FreePool();
    *((_QWORD *)v1 + 55) = 0LL;
  }
  UnlockObjectAssignment((unsigned __int64)v70 & 0xFFFFFFFFFFFFFFC0uLL);
  result = Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    result = TemplateEventDescriptor(v65, &CompleteGuiThreadExecution, &W32kControlGuid);
  --gdwGuiThreads;
  *((_DWORD *)v1 + 270) |= 0x80u;
  return result;
}
