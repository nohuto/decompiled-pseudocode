/*
 * XREFs of xxxResetDisplayDevice @ 0x1C0069940
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C0052BB0 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00BCE70 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C90 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D88 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch_0 @ 0x1C0002188 (DwmSyncFlushForceRenderAndWaitForBatch_0.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported_0 @ 0x1C00021B0 (IsDwmAsyncNotifyDisplayModeChangeSupported_0.c)
 *     DwmAsyncNotifyDisplayModeChange_0 @ 0x1C00021B8 (DwmAsyncNotifyDisplayModeChange_0.c)
 *     PopW32ThreadLock_0 @ 0x1C0002240 (PopW32ThreadLock_0.c)
 *     IsSnapshotMonitorRectsSupported_0 @ 0x1C0002300 (IsSnapshotMonitorRectsSupported_0.c)
 *     SnapshotMonitorRects_0 @ 0x1C0002308 (SnapshotMonitorRects_0.c)
 *     IsRecreateTouchInjectionDevicesSupported_0 @ 0x1C0002310 (IsRecreateTouchInjectionDevicesSupported_0.c)
 *     RecreateTouchInjectionDevices_0 @ 0x1C0002318 (RecreateTouchInjectionDevices_0.c)
 *     IszzzResetSharedDesktopsSupported_0 @ 0x1C0002320 (IszzzResetSharedDesktopsSupported_0.c)
 *     zzzResetSharedDesktops_0 @ 0x1C0002328 (zzzResetSharedDesktops_0.c)
 *     IsCreateCaptionStripSupported_0 @ 0x1C0002330 (IsCreateCaptionStripSupported_0.c)
 *     CreateCaptionStrip_0 @ 0x1C0002338 (CreateCaptionStrip_0.c)
 *     IsIsCurrentDesktopComposedSupported_0 @ 0x1C0002340 (IsIsCurrentDesktopComposedSupported_0.c)
 *     IsCurrentDesktopComposed_0 @ 0x1C0002348 (IsCurrentDesktopComposed_0.c)
 *     IsCreateBitmapStripSupported_0 @ 0x1C0002350 (IsCreateBitmapStripSupported_0.c)
 *     CreateBitmapStrip_0 @ 0x1C0002358 (CreateBitmapStrip_0.c)
 *     IsCalcWindowsFullScreenSupported_0 @ 0x1C0002360 (IsCalcWindowsFullScreenSupported_0.c)
 *     CalcWindowsFullScreen_0 @ 0x1C0002368 (CalcWindowsFullScreen_0.c)
 *     IsIAMKeyAcquiredSupported_0 @ 0x1C0002370 (IsIAMKeyAcquiredSupported_0.c)
 *     IAMKeyAcquired_0 @ 0x1C0002378 (IAMKeyAcquired_0.c)
 *     IsPostIAMShellHookMessageExSupported_0 @ 0x1C0002380 (IsPostIAMShellHookMessageExSupported_0.c)
 *     PostIAMShellHookMessageEx_0 @ 0x1C0002388 (PostIAMShellHookMessageEx_0.c)
 *     IsxxxBroadcastDisplaySettingsChangeSupported_0 @ 0x1C0002390 (IsxxxBroadcastDisplaySettingsChangeSupported_0.c)
 *     xxxBroadcastDisplaySettingsChange_0 @ 0x1C0002398 (xxxBroadcastDisplaySettingsChange_0.c)
 *     IsxxxDesktopsRecalcAndBroadcastDisplayChangeSupported_0 @ 0x1C00023A0 (IsxxxDesktopsRecalcAndBroadcastDisplayChangeSupported_0.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange_0 @ 0x1C00023A8 (xxxDesktopsRecalcAndBroadcastDisplayChange_0.c)
 *     IsHandleDisplayChangeForInactiveDesktopsSupported_0 @ 0x1C00023B0 (IsHandleDisplayChangeForInactiveDesktopsSupported_0.c)
 *     HandleDisplayChangeForInactiveDesktops_0 @ 0x1C00023B8 (HandleDisplayChangeForInactiveDesktops_0.c)
 *     IsQueueNotifyMessageSupported_0 @ 0x1C00023C0 (IsQueueNotifyMessageSupported_0.c)
 *     QueueNotifyMessage_0 @ 0x1C00023C8 (QueueNotifyMessage_0.c)
 *     CacheRotationInfo_0 @ 0x1C00023D0 (CacheRotationInfo_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     GreDeleteObject @ 0x1C00377D0 (GreDeleteObject.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0041FB4 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041FD0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ReferenceDwmApiPort @ 0x1C0069FA0 (ReferenceDwmApiPort.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C006A0AC (-ResetSystemColors@@YAXXZ.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C006AC44 (-UpdateUserScreen@@YAHH@Z.c)
 *     DestroyMonitorDCs @ 0x1C006BF80 (DestroyMonitorDCs.c)
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall xxxResetDisplayDevice(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  struct tagTHREADINFO *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rbp
  int v17; // ecx
  LARGE_INTEGER v18; // rsi
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rcx
  char v23; // [rsp+90h] [rbp+8h] BYREF
  int CurrentProcessSessionId; // [rsp+98h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( !a2 )
  {
    if ( a1 && (v8 = *(_QWORD *)(a1 + 256)) != 0 )
    {
      *(_QWORD *)(a1 + 256) = 0LL;
    }
    else
    {
      if ( (int)IsSnapshotMonitorRectsSupported_0() < 0 )
        goto LABEL_9;
      v8 = SnapshotMonitorRects_0();
    }
    v4 = v8;
    if ( v8 )
      PushW32ThreadLock_0();
  }
LABEL_9:
  DestroyMonitorDCs();
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v23);
  UpdateUserScreen(0);
  if ( (int)IsRecreateTouchInjectionDevicesSupported_0() >= 0 )
    RecreateTouchInjectionDevices_0();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v23);
  if ( (int)IszzzResetSharedDesktopsSupported_0() >= 0 )
    zzzResetSharedDesktops_0();
  ResetSystemColors();
  if ( ghbmCaption )
  {
    GreDeleteObject((__int64)ghbmCaption, v9);
    if ( (int)IsCreateCaptionStripSupported_0() < 0 )
      ghbmCaption = 0LL;
    else
      ghbmCaption = (HBRUSH)CreateCaptionStrip_0();
  }
  if ( a4 && (int)IsIsCurrentDesktopComposedSupported_0() >= 0 && (unsigned int)IsCurrentDesktopComposed_0() )
  {
    UserSessionSwitchLeaveCrit(v11, v10);
    ReferenceDwmApiPort();
    DwmSyncFlushForceRenderAndWaitForBatch_0();
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v14 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v16 = PsGetCurrentThreadWin32Thread(v15);
    if ( v16 )
    {
      v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v17) = byte_1C01020C8 - 1;
        Template_xqx(v17, (unsigned int)&AcquiredExclusiveUserCritEvent, v19, v18.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v18.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v19,
          0,
          1000 * v18.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v16 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v14;
    gbValidateHandleForIL = 1;
  }
  if ( (int)IsCreateBitmapStripSupported_0() >= 0 )
    CreateBitmapStrip_0();
  if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported_0() >= 0 )
  {
    ReferenceDwmApiPort();
    DwmAsyncNotifyDisplayModeChange_0();
  }
  if ( (int)IsCalcWindowsFullScreenSupported_0() >= 0 )
    CalcWindowsFullScreen_0();
  if ( a1 && *(_QWORD *)(a1 + 256) )
  {
    Win32FreePool();
    *(_QWORD *)(a1 + 256) = 0LL;
  }
  if ( a3 && (int)IsIAMKeyAcquiredSupported_0() >= 0 && (unsigned int)IAMKeyAcquired_0() )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      TemplateEventDescriptor(v20, &ChangeDisplayModeDeferral, 0LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 244LL) |= 2u;
    *(_QWORD *)(a1 + 256) = v4;
    if ( (int)IsPostIAMShellHookMessageExSupported_0() >= 0 )
      PostIAMShellHookMessageEx_0();
    if ( (int)IsxxxBroadcastDisplaySettingsChangeSupported_0() >= 0 )
      xxxBroadcastDisplaySettingsChange_0();
    if ( v4 )
      PopW32ThreadLock_0();
  }
  else
  {
    if ( (int)IsPostIAMShellHookMessageExSupported_0() >= 0 )
      PostIAMShellHookMessageEx_0();
    if ( (int)IsxxxDesktopsRecalcAndBroadcastDisplayChangeSupported_0() >= 0 )
      xxxDesktopsRecalcAndBroadcastDisplayChange_0();
    if ( v4 )
      PopAndFreeAlwaysW32ThreadLock_0();
  }
  if ( (int)IsHandleDisplayChangeForInactiveDesktopsSupported_0() >= 0 )
    HandleDisplayChangeForInactiveDesktops_0();
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 64) && (int)IsQueueNotifyMessageSupported_0() >= 0 )
    QueueNotifyMessage_0();
  if ( !a3 )
    CacheRotationInfo_0();
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v21);
  return ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
}
