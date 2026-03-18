/*
 * XREFs of xxxResetDisplayDevice @ 0x1C000A690
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C001AE98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C006DFB0 (xxxUserSetDisplayConfig.c)
 *     VideoPortCalloutThread @ 0x1C00A53F4 (VideoPortCalloutThread.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00BB640 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     PushW32ThreadLock_0 @ 0x1C0001C70 (PushW32ThreadLock_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D68 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch_0 @ 0x1C0002158 (DwmSyncFlushForceRenderAndWaitForBatch_0.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported_0 @ 0x1C0002180 (IsDwmAsyncNotifyDisplayModeChangeSupported_0.c)
 *     DwmAsyncNotifyDisplayModeChange_0 @ 0x1C0002188 (DwmAsyncNotifyDisplayModeChange_0.c)
 *     PopW32ThreadLock_0 @ 0x1C00021E0 (PopW32ThreadLock_0.c)
 *     IsSnapshotMonitorRectsSupported_0 @ 0x1C00022C0 (IsSnapshotMonitorRectsSupported_0.c)
 *     SnapshotMonitorRects_0 @ 0x1C00022C8 (SnapshotMonitorRects_0.c)
 *     IsRecreateTouchInjectionDevicesSupported_0 @ 0x1C00022D0 (IsRecreateTouchInjectionDevicesSupported_0.c)
 *     RecreateTouchInjectionDevices_0 @ 0x1C00022D8 (RecreateTouchInjectionDevices_0.c)
 *     IszzzResetSharedDesktopsSupported_0 @ 0x1C00022E0 (IszzzResetSharedDesktopsSupported_0.c)
 *     zzzResetSharedDesktops_0 @ 0x1C00022E8 (zzzResetSharedDesktops_0.c)
 *     IsCreateCaptionStripSupported_0 @ 0x1C00022F0 (IsCreateCaptionStripSupported_0.c)
 *     CreateCaptionStrip_0 @ 0x1C00022F8 (CreateCaptionStrip_0.c)
 *     IsxxxResizeImmersiveBackgroundSupported_0 @ 0x1C0002300 (IsxxxResizeImmersiveBackgroundSupported_0.c)
 *     xxxResizeImmersiveBackground_0 @ 0x1C0002308 (xxxResizeImmersiveBackground_0.c)
 *     IsIsCurrentDesktopComposedSupported_0 @ 0x1C0002310 (IsIsCurrentDesktopComposedSupported_0.c)
 *     IsCurrentDesktopComposed_0 @ 0x1C0002318 (IsCurrentDesktopComposed_0.c)
 *     IsCreateBitmapStripSupported_0 @ 0x1C0002320 (IsCreateBitmapStripSupported_0.c)
 *     CreateBitmapStrip_0 @ 0x1C0002328 (CreateBitmapStrip_0.c)
 *     IsCalcWindowsFullScreenSupported_0 @ 0x1C0002330 (IsCalcWindowsFullScreenSupported_0.c)
 *     CalcWindowsFullScreen_0 @ 0x1C0002338 (CalcWindowsFullScreen_0.c)
 *     IsIAMKeyAcquiredSupported_0 @ 0x1C0002340 (IsIAMKeyAcquiredSupported_0.c)
 *     IAMKeyAcquired_0 @ 0x1C0002348 (IAMKeyAcquired_0.c)
 *     IsPostIAMShellHookMessageExSupported_0 @ 0x1C0002350 (IsPostIAMShellHookMessageExSupported_0.c)
 *     PostIAMShellHookMessageEx_0 @ 0x1C0002358 (PostIAMShellHookMessageEx_0.c)
 *     IsxxxBroadcastDisplaySettingsChangeSupported_0 @ 0x1C0002360 (IsxxxBroadcastDisplaySettingsChangeSupported_0.c)
 *     xxxBroadcastDisplaySettingsChange_0 @ 0x1C0002368 (xxxBroadcastDisplaySettingsChange_0.c)
 *     IsxxxDesktopsRecalcAndBroadcastDisplayChangeSupported_0 @ 0x1C0002370 (IsxxxDesktopsRecalcAndBroadcastDisplayChangeSupported_0.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange_0 @ 0x1C0002378 (xxxDesktopsRecalcAndBroadcastDisplayChange_0.c)
 *     IsHandleDisplayChangeForInactiveDesktopsSupported_0 @ 0x1C0002380 (IsHandleDisplayChangeForInactiveDesktopsSupported_0.c)
 *     HandleDisplayChangeForInactiveDesktops_0 @ 0x1C0002388 (HandleDisplayChangeForInactiveDesktops_0.c)
 *     IsQueueNotifyMessageSupported_0 @ 0x1C0002390 (IsQueueNotifyMessageSupported_0.c)
 *     QueueNotifyMessage_0 @ 0x1C0002398 (QueueNotifyMessage_0.c)
 *     CacheRotationInfo_0 @ 0x1C00023A0 (CacheRotationInfo_0.c)
 *     ReferenceDwmApiPort @ 0x1C000ADB0 (ReferenceDwmApiPort.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C000AEBC (-ResetSystemColors@@YAXXZ.c)
 *     DestroyMonitorDCs @ 0x1C000AF60 (DestroyMonitorDCs.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     GreDeleteObject @ 0x1C00446F0 (GreDeleteObject.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004FFC4 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004FFE0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0058B10 (-UpdateUserScreen@@YAHH@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall xxxResetDisplayDevice(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  struct tagTHREADINFO *v11; // rsi
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rcx
  PVOID v14; // rcx
  __int64 v15; // r14
  int v16; // ecx
  LARGE_INTEGER v17; // rbp
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  char v23; // [rsp+90h] [rbp+8h] BYREF
  int CurrentProcessSessionId; // [rsp+98h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( !a2 )
  {
    if ( a1 && (v8 = *(_QWORD *)(a1 + 304)) != 0 )
    {
      *(_QWORD *)(a1 + 304) = 0LL;
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
    GreDeleteObject((struct HOBJ__ *)ghbmCaption);
    if ( (int)IsCreateCaptionStripSupported_0() < 0 )
      ghbmCaption = 0LL;
    else
      ghbmCaption = (HBITMAP)CreateCaptionStrip_0();
  }
  if ( a3 && (int)IsxxxResizeImmersiveBackgroundSupported_0() >= 0 )
    xxxResizeImmersiveBackground_0();
  if ( a4 && (int)IsIsCurrentDesktopComposedSupported_0() >= 0 && (unsigned int)IsCurrentDesktopComposed_0() )
  {
    UserSessionSwitchLeaveCrit();
    ReferenceDwmApiPort();
    DwmSyncFlushForceRenderAndWaitForBatch_0();
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v11 = 0LL;
    while ( 1 )
    {
      v12 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v12 )
        v11 = *v12;
      if ( (unsigned int)IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v11 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v14 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v11 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v14 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v14, UserRequest, 0, 0, 0LL);
    }
    v15 = PsGetCurrentThreadWin32Thread(v13);
    if ( v15 )
    {
      v17 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v15 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v16) = byte_1C00FEA58 - 1;
        Template_xqx(v16, (unsigned int)&AcquiredExclusiveUserCritEvent, v18, v17.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v17.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v18,
          0,
          1000 * v17.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v15 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v11;
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
  if ( a1 )
  {
    v19 = *(_QWORD *)(a1 + 304);
    if ( v19 )
    {
      Win32FreePool(v19);
      *(_QWORD *)(a1 + 304) = 0LL;
    }
  }
  if ( a3 && (int)IsIAMKeyAcquiredSupported_0() >= 0 && (unsigned int)IAMKeyAcquired_0() )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      TemplateEventDescriptor(v20, &ChangeDisplayModeDeferral, 0LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 260LL) |= 2u;
    *(_QWORD *)(a1 + 304) = v4;
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
