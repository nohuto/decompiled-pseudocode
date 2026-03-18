/*
 * XREFs of xxxDestroyThreadInfo @ 0x1C0040170
 * Callers:
 *     UserThreadCallout @ 0x1C0021F20 (UserThreadCallout.c)
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 * Callees:
 *     IsUnloadCursorsAndIconsSupported_0 @ 0x1C0001B10 (IsUnloadCursorsAndIconsSupported_0.c)
 *     UnloadCursorsAndIcons_0 @ 0x1C0001B18 (UnloadCursorsAndIcons_0.c)
 *     IsDestroyDpiMetricsCacheSupported_0 @ 0x1C0001B20 (IsDestroyDpiMetricsCacheSupported_0.c)
 *     DestroyDpiMetricsCache_0 @ 0x1C0001B28 (DestroyDpiMetricsCache_0.c)
 *     PushW32ThreadLock_0 @ 0x1C0001C90 (PushW32ThreadLock_0.c)
 *     IsDestroyThreadsMessagesSupported_0 @ 0x1C0001D10 (IsDestroyThreadsMessagesSupported_0.c)
 *     DestroyThreadsMessages_0 @ 0x1C0001D18 (DestroyThreadsMessages_0.c)
 *     PopAndFreeW32ThreadLock_0 @ 0x1C0001D80 (PopAndFreeW32ThreadLock_0.c)
 *     xxxWindowEvent_0 @ 0x1C0001DC0 (xxxWindowEvent_0.c)
 *     FreeMessageList_0 @ 0x1C0001DE0 (FreeMessageList_0.c)
 *     IszzzSetFMouseMovedSupported_0 @ 0x1C0001DF8 (IszzzSetFMouseMovedSupported_0.c)
 *     zzzSetFMouseMoved_0 @ 0x1C0001E00 (zzzSetFMouseMoved_0.c)
 *     IsCleanupIAMAccessSupported_0 @ 0x1C0001E08 (IsCleanupIAMAccessSupported_0.c)
 *     CleanupIAMAccess_0 @ 0x1C0001E10 (CleanupIAMAccess_0.c)
 *     IsxxxCleanupThreadPointerInputInfoSupported_0 @ 0x1C0001E18 (IsxxxCleanupThreadPointerInputInfoSupported_0.c)
 *     xxxCleanupThreadPointerInputInfo_0 @ 0x1C0001E20 (xxxCleanupThreadPointerInputInfo_0.c)
 *     IsMagpRevokeInputTransfromSupported_0 @ 0x1C0001E28 (IsMagpRevokeInputTransfromSupported_0.c)
 *     MagpRevokeInputTransfrom_0 @ 0x1C0001E30 (MagpRevokeInputTransfrom_0.c)
 *     IsMagContextThreadCalloutSupported_0 @ 0x1C0001E38 (IsMagContextThreadCalloutSupported_0.c)
 *     MagContextThreadCallout_0 @ 0x1C0001E40 (MagContextThreadCallout_0.c)
 *     IsRemovePtiFromShellMiPListSupported_0 @ 0x1C0001E48 (IsRemovePtiFromShellMiPListSupported_0.c)
 *     RemovePtiFromShellMiPList_0 @ 0x1C0001E50 (RemovePtiFromShellMiPList_0.c)
 *     IsPatchThreadWindowsSupported_0 @ 0x1C0001E58 (IsPatchThreadWindowsSupported_0.c)
 *     PatchThreadWindows_0 @ 0x1C0001E60 (PatchThreadWindows_0.c)
 *     IsxxxCancelTrackingForThreadSupported_0 @ 0x1C0001E68 (IsxxxCancelTrackingForThreadSupported_0.c)
 *     xxxCancelTrackingForThread_0 @ 0x1C0001E70 (xxxCancelTrackingForThread_0.c)
 *     Is_GetProcessWindowStationSupported_0 @ 0x1C0001E78 (Is_GetProcessWindowStationSupported_0.c)
 *     _GetProcessWindowStation_0 @ 0x1C0001E80 (_GetProcessWindowStation_0.c)
 *     IsxxxCloseClipboardSupported_0 @ 0x1C0001E88 (IsxxxCloseClipboardSupported_0.c)
 *     xxxCloseClipboard_0 @ 0x1C0001E90 (xxxCloseClipboard_0.c)
 *     xxxUnlockMenuState_0 @ 0x1C0001E98 (xxxUnlockMenuState_0.c)
 *     IsxxxEndMenuLoopSupported_0 @ 0x1C0001EA0 (IsxxxEndMenuLoopSupported_0.c)
 *     xxxEndMenuLoop_0 @ 0x1C0001EA8 (xxxEndMenuLoop_0.c)
 *     IsxxxMNEndMenuStateSupported_0 @ 0x1C0001EB0 (IsxxxMNEndMenuStateSupported_0.c)
 *     xxxMNEndMenuState_0 @ 0x1C0001EB8 (xxxMNEndMenuState_0.c)
 *     IsxxxMNCloseHierarchySupported_0 @ 0x1C0001EC0 (IsxxxMNCloseHierarchySupported_0.c)
 *     xxxMNCloseHierarchy_0 @ 0x1C0001EC8 (xxxMNCloseHierarchy_0.c)
 *     IsMNFlushDestroyedPopupsSupported_0 @ 0x1C0001ED0 (IsMNFlushDestroyedPopupsSupported_0.c)
 *     MNFlushDestroyedPopups_0 @ 0x1C0001ED8 (MNFlushDestroyedPopups_0.c)
 *     IsMNUnlinkDelayedFreePopupsSupported_0 @ 0x1C0001EE0 (IsMNUnlinkDelayedFreePopupsSupported_0.c)
 *     MNUnlinkDelayedFreePopups_0 @ 0x1C0001EE8 (MNUnlinkDelayedFreePopups_0.c)
 *     IsxxxMNEndMenuStateInternalSupported_0 @ 0x1C0001EF0 (IsxxxMNEndMenuStateInternalSupported_0.c)
 *     xxxMNEndMenuStateInternal_0 @ 0x1C0001EF8 (xxxMNEndMenuStateInternal_0.c)
 *     IsxxxDestroyThreadDDEObjectSupported_0 @ 0x1C0001F00 (IsxxxDestroyThreadDDEObjectSupported_0.c)
 *     xxxDestroyThreadDDEObject_0 @ 0x1C0001F08 (xxxDestroyThreadDDEObject_0.c)
 *     IsxxxFlushPaletteSupported_0 @ 0x1C0001F10 (IsxxxFlushPaletteSupported_0.c)
 *     xxxFlushPalette_0 @ 0x1C0001F18 (xxxFlushPalette_0.c)
 *     IsDestroyThreadHidObjectsSupported_0 @ 0x1C0001F20 (IsDestroyThreadHidObjectsSupported_0.c)
 *     DestroyThreadHidObjects_0 @ 0x1C0001F28 (DestroyThreadHidObjects_0.c)
 *     IsxxxHandleHealthyThreadSupported_0 @ 0x1C0001F30 (IsxxxHandleHealthyThreadSupported_0.c)
 *     xxxHandleHealthyThread_0 @ 0x1C0001F38 (xxxHandleHealthyThread_0.c)
 *     IsDestroyInputHangInfoSupported_0 @ 0x1C0001F40 (IsDestroyInputHangInfoSupported_0.c)
 *     DestroyInputHangInfo_0 @ 0x1C0001F48 (DestroyInputHangInfo_0.c)
 *     IsDestroyThreadsTimersSupported_0 @ 0x1C0001F50 (IsDestroyThreadsTimersSupported_0.c)
 *     DestroyThreadsTimers_0 @ 0x1C0001F58 (DestroyThreadsTimers_0.c)
 *     IsFreeThreadsWindowHooksSupported_0 @ 0x1C0001F60 (IsFreeThreadsWindowHooksSupported_0.c)
 *     FreeThreadsWindowHooks_0 @ 0x1C0001F68 (FreeThreadsWindowHooks_0.c)
 *     IsRemoveThreadSwitchWindowInfoSupported_0 @ 0x1C0001F70 (IsRemoveThreadSwitchWindowInfoSupported_0.c)
 *     RemoveThreadSwitchWindowInfo_0 @ 0x1C0001F78 (RemoveThreadSwitchWindowInfo_0.c)
 *     IsFreeHwndListSupported_0 @ 0x1C0001F80 (IsFreeHwndListSupported_0.c)
 *     FreeHwndList_0 @ 0x1C0001F88 (FreeHwndList_0.c)
 *     IsDestroyThreadsHotKeysSupported_0 @ 0x1C0001F90 (IsDestroyThreadsHotKeysSupported_0.c)
 *     DestroyThreadsHotKeys_0 @ 0x1C0001F98 (DestroyThreadsHotKeys_0.c)
 *     IsFreeThreadsWinEventsSupported_0 @ 0x1C0001FA0 (IsFreeThreadsWinEventsSupported_0.c)
 *     FreeThreadsWinEvents_0 @ 0x1C0001FA8 (FreeThreadsWinEvents_0.c)
 *     Is_PostMessageSupported_0 @ 0x1C0001FB0 (Is_PostMessageSupported_0.c)
 *     _PostMessage_0 @ 0x1C0001FB8 (_PostMessage_0.c)
 *     IsDestroyProcessesClassesSupported_0 @ 0x1C0001FC0 (IsDestroyProcessesClassesSupported_0.c)
 *     DestroyProcessesClasses_0 @ 0x1C0001FC8 (DestroyProcessesClasses_0.c)
 *     IsPackAffectedThreadsFromThreadCleanupSupported_0 @ 0x1C0001FD0 (IsPackAffectedThreadsFromThreadCleanupSupported_0.c)
 *     PackAffectedThreadsFromThreadCleanup_0 @ 0x1C0001FD8 (PackAffectedThreadsFromThreadCleanup_0.c)
 *     IsSendMsgCleanupSupported_0 @ 0x1C0001FE0 (IsSendMsgCleanupSupported_0.c)
 *     SendMsgCleanup_0 @ 0x1C0001FE8 (SendMsgCleanup_0.c)
 *     IsxxxWindowEventSupported_0 @ 0x1C0001FF0 (IsxxxWindowEventSupported_0.c)
 *     IsxxxSetForegroundThreadSupported_0 @ 0x1C0001FF8 (IsxxxSetForegroundThreadSupported_0.c)
 *     xxxSetForegroundThread_0 @ 0x1C0002000 (xxxSetForegroundThread_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?FLastGuiThread@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C0040F34 (-FLastGuiThread@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     zzzDestroyQueue @ 0x1C0040F60 (zzzDestroyQueue.c)
 *     HMAssignmentUnlock @ 0x1C0041220 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C0041430 (HMAssignmentLock.c)
 *     ProtectHandle @ 0x1C00414C0 (ProtectHandle.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0041CF0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     MarkThreadsObjects @ 0x1C0041E20 (MarkThreadsObjects.c)
 *     DestroyThreadsObjects @ 0x1C0041EB0 (DestroyThreadsObjects.c)
 *     LockObjectAssignment @ 0x1C0042100 (LockObjectAssignment.c)
 *     UnlockObjectAssignment @ 0x1C0042150 (UnlockObjectAssignment.c)
 *     ThreadUnlock1 @ 0x1C005EA20 (ThreadUnlock1.c)
 *     CleanupGDI @ 0x1C0069388 (CleanupGDI.c)
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 *     EtwTraceMessageCheckDelay @ 0x1C006DC50 (EtwTraceMessageCheckDelay.c)
 *     EtwTraceInputProcessDelay @ 0x1C0072540 (EtwTraceInputProcessDelay.c)
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C0074A58 (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0074B80 (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     CleanupPowerRequestList @ 0x1C007EC10 (CleanupPowerRequestList.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007F9E4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00AB43C (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00AB468 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 *     Template_qqqqq @ 0x1C00AE778 (Template_qqqqq.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C00C11A8 (RIMIDEProcessRemoveInjectionDevices.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C00E0480 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 */

__int64 xxxDestroyThreadInfo()
{
  unsigned int *v0; // rbp
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
  _QWORD *ProcessWindowStation_0; // rbx
  __int64 v20; // r14
  _DWORD *v21; // r15
  __int64 v22; // rbx
  struct tagTHREADINFO *v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rbx
  struct tagTHREADINFO *v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  struct _ETHREAD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  PVOID CurrentProcess; // rax
  BOOL v35; // edx
  _QWORD *v36; // rbx
  _QWORD *v37; // r14
  __int64 v38; // rcx
  __int64 j; // rbx
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rax
  _DWORD *v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // rcx
  void **v54; // rbx
  void **v55; // rcx
  __int64 v56; // rcx
  char *v57; // r8
  __int64 v58; // rcx
  __int64 result; // rax
  signed __int32 v60[8]; // [rsp+60h] [rbp+60h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v61; // [rsp+80h] [rbp+80h]
  _BYTE v62[96]; // [rsp+F0h] [rbp+F0h] BYREF

  v0 = (unsigned int *)((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL);
  v1 = gptiCurrent;
  *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = gptiCurrent;
  v2 = *((_QWORD *)v1 + 47);
  Self = KeGetPcr()->NtTib.Self;
  if ( v1 == (struct tagTHREADINFO *)gptiTSRequest )
    gptiTSRequest = 0LL;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 776) & 0x400000) != 0 )
    {
      if ( (unsigned int)FLastGuiThread(v1) )
      {
        RIMIDEProcessRemoveInjectionDevices(v2);
        v4 = *(_QWORD *)(v2 + 848);
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
      for ( i = *(_QWORD *)(v10 + 296);
            i && ((struct tagTHREADINFO *)i == v1 || *(_QWORD *)(i + 408) != v9);
            i = *(_QWORD *)(i + 584) )
      {
        ;
      }
      if ( !i )
        *(_QWORD *)(v9 + 248) = 0LL;
    }
  }
  if ( (*((_DWORD *)v1 + 268) & 8) != 0 && (int)IsMagContextThreadCalloutSupported_0() >= 0 )
    MagContextThreadCallout_0();
  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x8000000000200000uLL) != 0 )
  {
    if ( (unsigned __int8)(byte_1C01020C8 - 1) <= 2u
      || (qword_1C01020B0 & 0x8000000000200000uLL) == 0
      || (v12 = 1, (qword_1C01020B8 & 0x8000000000200000uLL) != qword_1C01020B8) )
    {
      v12 = 0;
    }
    if ( v12 )
    {
      v13 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v1);
      ThreadInfoFlags = EtwpGetThreadInfoFlags(v1);
      EtwpGetLastInputProcessTime(*((struct tagQ *const *)v1 + 48), v13, v0 + 4, v0 + 5);
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400) != 0 )
        Template_qqqqq(
          Microsoft_Windows_Win32kEnableBits,
          (unsigned int)&ThreadExitEvent,
          v16,
          ThreadId,
          ThreadInfoFlags,
          v17,
          *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
          *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14));
    }
  }
  if ( (*((_DWORD *)v1 + 110) & 0x1000000) != 0 )
  {
    EtwTraceMessageCheckDelay(v1);
    EtwTraceInputProcessDelay(v1);
  }
  if ( *((_QWORD *)v1 + 139) )
  {
    Win32FreePool();
    *((_QWORD *)v1 + 139) = 0LL;
  }
  if ( (int)IsRemovePtiFromShellMiPListSupported_0() >= 0 )
    RemovePtiFromShellMiPList_0();
  HMAssignmentUnlock((char *)v1 + 1232);
  if ( (int)IsPatchThreadWindowsSupported_0() >= 0 )
    PatchThreadWindows_0();
  if ( *((_QWORD *)v1 + 74) && (int)IsxxxCancelTrackingForThreadSupported_0() >= 0 )
    xxxCancelTrackingForThread_0();
  v18 = *((_QWORD *)v1 + 74);
  if ( v18 )
  {
    HMAssignmentUnlock(v18);
    Win32FreePool();
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
    v20 = *((_QWORD *)v1 + 66);
    v21 = *(_DWORD **)v20;
    v22 = v20;
    *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v20;
    v23 = *(struct tagTHREADINFO **)(v20 + 32);
    if ( gptiCurrent == v23 )
    {
      ++*(_DWORD *)(v20 + 40);
    }
    else
    {
      v22 = 0LL;
      *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    }
    if ( v1 != v23 )
    {
      if ( v22 )
        xxxUnlockMenuState_0();
      break;
    }
    v24 = *(_DWORD *)(v20 + 8);
    if ( (v24 & 0x100) != 0 )
    {
      if ( (int)IsxxxEndMenuLoopSupported_0() >= 0 )
        xxxEndMenuLoop_0();
      goto LABEL_87;
    }
    *(_DWORD *)(v20 + 8) = v24 & 0xFFFFFFFB;
    *(_DWORD *)(*((_QWORD *)v1 + 48) + 332LL) &= ~0x100000u;
    if ( (int)IsxxxMNCloseHierarchySupported_0() >= 0 )
      xxxMNCloseHierarchy_0();
    if ( (*v21 & 0x8001) != 0 )
    {
LABEL_87:
      if ( v22 )
      {
        *(_DWORD *)(v22 + 40) = 0;
        *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
      }
      if ( (int)IsxxxMNEndMenuStateSupported_0() >= 0 )
        xxxMNEndMenuState_0();
    }
    else
    {
      if ( v22 )
      {
        *(_DWORD *)(v22 + 40) = 0;
        *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
      }
      if ( (int)IsMNFlushDestroyedPopupsSupported_0() >= 0 )
        MNFlushDestroyedPopups_0();
      if ( (int)IsMNUnlinkDelayedFreePopupsSupported_0() >= 0 )
        MNUnlinkDelayedFreePopups_0();
      if ( (*v21 & 0x40000000) != 0 )
      {
        *v21 &= ~0x20000000u;
      }
      else if ( v21 == (_DWORD *)&gpopupMenu )
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
  v25 = *((_QWORD *)v1 + 79);
  if ( v25 )
  {
    HMAssignmentUnlock(v25 + 16);
    HMAssignmentUnlock(*((_QWORD *)v1 + 79) + 24LL);
    HMAssignmentUnlock(*((_QWORD *)v1 + 79) + 8LL);
    Win32FreePool();
    *((_QWORD *)v1 + 79) = 0LL;
  }
  v26 = *((_QWORD *)v1 + 47);
  if ( v26 && *(struct tagTHREADINFO **)(v26 + 304) == v1 )
    *(_QWORD *)(v26 + 304) = 0LL;
  while ( *((_QWORD *)v1 + 68) )
  {
    if ( (int)IsxxxDestroyThreadDDEObjectSupported_0() >= 0 )
      xxxDestroyThreadDDEObject_0();
  }
  if ( (*((_DWORD *)v1 + 110) & 0x800) != 0 )
  {
    v27 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 51) + 8LL) + 16LL);
    if ( v27 )
    {
      v28 = gptiCurrent;
      *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *((_QWORD *)gptiCurrent + 46);
      *((_QWORD *)v28 + 46) = v0 + 10;
      *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v27;
      ++*(_DWORD *)(v27 + 8);
      if ( (int)IsxxxFlushPaletteSupported_0() >= 0 )
        xxxFlushPalette_0();
      ThreadUnlock1();
    }
  }
  if ( (unsigned int)FLastGuiThread(v1) && gppiFullscreen == *((_QWORD *)v1 + 47) && !gbMDEVDisabled )
  {
    LODWORD(v61) = 2191;
    xxxUserSetDisplayConfig(0, v61, 4, 0, 0LL, 0, 0LL);
  }
  v29 = *((_QWORD *)v1 + 47);
  if ( v29 && *(_QWORD *)(v29 + 784) && (int)IsDestroyThreadHidObjectsSupported_0() >= 0 )
    DestroyThreadHidObjects_0();
  if ( *((int *)v1 + 110) < 0 && (int)IsxxxHandleHealthyThreadSupported_0() >= 0 )
    xxxHandleHealthyThread_0();
  if ( *((_QWORD *)v1 + 125) && (int)IsDestroyInputHangInfoSupported_0() >= 0 )
    DestroyInputHangInfo_0();
  v30 = *((_DWORD *)v1 + 268);
  if ( (v30 & 0x400000) != 0 )
  {
    *((_DWORD *)v1 + 268) = v30 & 0xFFBFFFFF;
    gbMouseInjectionBlockedOnDIT = 0;
    if ( gcDITMouseInjectionWaiters )
    {
      KeReleaseSemaphore(gpsemDITMouseInjectionWaiters, 0, gcDITMouseInjectionWaiters, 0);
      gcDITMouseInjectionWaiters = 0;
    }
  }
  if ( CInputManager::IsDwmInputThread(*(struct _ETHREAD **)v1) )
    CInputManager::NotifyDwmInputThreadShutdown(v31);
  if ( *((_QWORD *)v1 + 47) && (unsigned int)FLastGuiThread(v1) )
  {
    CurrentProcess = (PVOID)PsGetCurrentProcess(v33, v32);
    v35 = 0;
    if ( CurrentProcess )
      v35 = CurrentProcess == g_pepDwm;
    if ( v35 )
      xxxDwmProcessShutdown(1);
  }
  if ( (int)IsDestroyThreadsTimersSupported_0() >= 0 )
    DestroyThreadsTimers_0();
  if ( (int)IsFreeThreadsWindowHooksSupported_0() >= 0 )
    FreeThreadsWindowHooks_0();
  if ( (int)IsRemoveThreadSwitchWindowInfoSupported_0() >= 0 )
    RemoveThreadSwitchWindowInfo_0();
  v36 = (_QWORD *)gpbwlList;
  if ( gpbwlList )
  {
    do
    {
      v37 = (_QWORD *)*v36;
      if ( (struct tagTHREADINFO *)v36[3] == v1 && (int)IsFreeHwndListSupported_0() >= 0 )
        FreeHwndList_0();
      v36 = v37;
    }
    while ( v37 );
  }
  if ( (int)IsDestroyThreadsHotKeysSupported_0() >= 0 )
    DestroyThreadsHotKeys_0();
  DestroyThreadsObjects();
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
    for ( j = *(_QWORD *)(PsGetCurrentProcessWin32Process(v38) + 296); j; j = *(_QWORD *)(j + 584) )
    {
      v40 = *(_QWORD *)(j + 384);
      if ( v40 )
        HMAssignmentLock(v40 + 320, 0LL);
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
      v41 = *((_QWORD *)v1 + 52);
      if ( v41 )
      {
        if ( *(_QWORD *)(v41 + 160) && (int)Is_PostMessageSupported_0() >= 0 )
          PostMessage_0();
      }
    }
    if ( (int)IsDestroyProcessesClassesSupported_0() >= 0 )
      DestroyProcessesClasses_0();
    *(_DWORD *)(*((_QWORD *)v1 + 47) + 12LL) &= ~0x2000u;
    *(_DWORD *)(*((_QWORD *)v1 + 47) + 12LL) &= ~0x10000000u;
    v42 = *((_QWORD *)v1 + 54);
    v43 = *(_DWORD **)(v42 + 208);
    if ( v43 )
    {
      ProbeForWrite(*(volatile void **)(v42 + 208), 4uLL, 4u);
      *v43 = 0;
    }
    DestroyProcessesObjects(*((struct tagPROCESSINFO **)v1 + 47));
  }
  HMAssignmentUnlock((char *)v1 + 704);
  if ( *((_QWORD *)v1 + 152) )
  {
    Win32FreePool();
    *((_QWORD *)v1 + 152) = 0LL;
  }
  if ( *((_QWORD *)v1 + 48) )
  {
    if ( (int)IsPackAffectedThreadsFromThreadCleanupSupported_0() >= 0 )
      PackAffectedThreadsFromThreadCleanup_0();
    v44 = *((_QWORD *)v1 + 48);
    *(_DWORD *)(v44 + 328) -= *((_DWORD *)v1 + 168);
    if ( *(_DWORD *)(*((_QWORD *)v1 + 48) + 336LL) != 1 )
    {
      gpdeskRecalcQueueAttach = *((_QWORD *)v1 + 51);
      if ( (int)IszzzSetFMouseMovedSupported_0() >= 0 )
      {
        KeQueryPerformanceCounter(0LL);
        zzzSetFMouseMoved_0();
      }
    }
  }
  v45 = PsGetCurrentProcessWin32Process(v44) + 296;
  if ( *(_QWORD *)v45 )
  {
    if ( *(struct tagTHREADINFO **)v45 != v1 )
    {
      do
      {
        v46 = *(_QWORD *)v45;
        if ( !*(_QWORD *)(*(_QWORD *)v45 + 584LL) )
          break;
        v45 = v46 + 584;
      }
      while ( *(struct tagTHREADINFO **)(v46 + 584) != v1 );
    }
    if ( *(struct tagTHREADINFO **)v45 == v1 )
    {
      *(_QWORD *)v45 = *((_QWORD *)v1 + 73);
      *((_QWORD *)v1 + 73) = 0LL;
    }
  }
  *(_QWORD *)v0 = 0LL;
  LockObjectAssignment((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL, *((_QWORD *)v1 + 51));
  if ( (int)IsSendMsgCleanupSupported_0() >= 0 )
    SendMsgCleanup_0();
  if ( *((_DWORD *)v1 + 180) )
  {
    KeSetKernelStackSwapEnable(1u);
    *((_DWORD *)v1 + 180) = 0;
  }
  v48 = *((_QWORD *)v1 + 47);
  if ( v48 )
    --*(_DWORD *)(v48 + 360);
  v49 = *((_QWORD *)v1 + 80);
  if ( v49 )
  {
    if ( (int)ProtectHandle(v49, v47, ExEventObjectType, 0LL) >= 0 )
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
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v0 + 8LL) + 192LL) && (int)Is_PostMessageSupported_0() >= 0 )
      PostMessage_0();
    if ( (int)IsxxxSetForegroundThreadSupported_0() >= 0 )
      xxxSetForegroundThread_0();
  }
  if ( v1 == (struct tagTHREADINFO *)qword_1C01030F8 )
  {
    v50 = *(_QWORD *)(*((_QWORD *)v1 + 47) + 296LL);
    qword_1C0103100 = 0LL;
    if ( v50 )
      qword_1C01030F8 = v50;
    else
      qword_1C01030F8 = (__int64)gptiForeground;
  }
  if ( (struct tagTHREADINFO *)gptiShutdownNotify == v1 )
    gptiShutdownNotify = 0LL;
  if ( (struct tagTHREADINFO *)gptiTasklist == v1 )
    gptiTasklist = 0LL;
  if ( (struct tagTHREADINFO *)gHardErrorHandler == v1 )
    gHardErrorHandler = 0LL;
  if ( (*((_DWORD *)v1 + 268) & 0x2000) != 0 )
    ScrubDelegatedWindows(v1);
  if ( *((_QWORD *)v1 + 48) )
  {
    if ( (int)IsDestroyThreadsMessagesSupported_0() >= 0 )
      DestroyThreadsMessages_0();
    ++*(_DWORD *)(*((_QWORD *)v1 + 48) + 340LL);
    zzzDestroyQueue(*((_QWORD *)v1 + 48), v1);
  }
  if ( *((_QWORD *)v1 + 51) )
  {
    v51 = (_QWORD *)((char *)v1 + 656);
    v52 = *((_QWORD *)v1 + 82);
    v53 = (_QWORD *)*((_QWORD *)v1 + 83);
    if ( *(struct tagTHREADINFO **)(v52 + 8) != (struct tagTHREADINFO *)((char *)v1 + 656) || (_QWORD *)*v53 != v51 )
      __fastfail(3u);
    *v53 = v52;
    *(_QWORD *)(v52 + 8) = v53;
    *((_QWORD *)v1 + 83) = (char *)v1 + 656;
    *v51 = v51;
  }
  FreeMessageList_0();
  v54 = &gpai;
  if ( gpai )
  {
    do
    {
      v55 = (void **)*v54;
      if ( *((struct tagTHREADINFO **)*v54 + 1) == v1 || v55[2] == v1 )
      {
        *v54 = *v55;
        Win32FreePool();
      }
      else
      {
        v54 = (void **)*v54;
      }
    }
    while ( *v54 );
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
  if ( v1 == (struct tagTHREADINFO *)qword_1C01030F8 )
    qword_1C01030F8 = 0LL;
  v56 = *((_QWORD *)v1 + 48);
  if ( v56 && !*(_DWORD *)(v56 + 336) )
  {
    if ( gpqForeground == v56 )
      gpqForeground = 0LL;
    if ( gpqForegroundPrev == *((_QWORD *)v1 + 48) )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == *((_QWORD *)v1 + 48) )
      gpqCursor = 0LL;
  }
  if ( *(_QWORD *)v0 )
  {
    v57 = (char *)*((_QWORD *)v1 + 50);
    if ( v57 )
    {
      if ( v57 != (char *)v1 + 912 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)v0 + 120LL), 0, v57);
        *((_QWORD *)v1 + 50) = (char *)v1 + 912;
      }
    }
  }
  if ( (*((_DWORD *)v1 + 110) & 4) != 0 && *((_QWORD *)v1 + 54) )
  {
    Win32FreePool();
    *((_QWORD *)v1 + 54) = 0LL;
  }
  UnlockObjectAssignment((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( gdwThreadEndSession == (unsigned int)PsGetCurrentThreadId() )
    UnlockObjectAssignment(&grpwinstaLogoff);
  result = Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    result = TemplateEventDescriptor(v58, &CompleteGuiThreadExecution, &W32kControlGuid);
  --gdwGuiThreads;
  *((_DWORD *)v1 + 268) |= 0x80u;
  return result;
}
