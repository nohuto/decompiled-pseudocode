/*
 * XREFs of xxxResetDisplayDevice @ 0x1C005C4B0
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0061D38 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     VideoPortCalloutThread @ 0x1C00B30B4 (VideoPortCalloutThread.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00C8B60 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     IsDwmAsyncNotifyDisplayModeChangeSupported_0 @ 0x1C0001D18 (IsDwmAsyncNotifyDisplayModeChangeSupported_0.c)
 *     DwmAsyncNotifyDisplayModeChange_0 @ 0x1C0001D20 (DwmAsyncNotifyDisplayModeChange_0.c)
 *     PushW32ThreadLock_0 @ 0x1C0001D98 (PushW32ThreadLock_0.c)
 *     PopW32ThreadLock_0 @ 0x1C0001DA0 (PopW32ThreadLock_0.c)
 *     IsSnapshotMonitorRectsSupported_0 @ 0x1C0001E60 (IsSnapshotMonitorRectsSupported_0.c)
 *     SnapshotMonitorRects_0 @ 0x1C0001E68 (SnapshotMonitorRects_0.c)
 *     IsRecreateTouchInjectionDevicesSupported_0 @ 0x1C0001E70 (IsRecreateTouchInjectionDevicesSupported_0.c)
 *     RecreateTouchInjectionDevices_0 @ 0x1C0001E78 (RecreateTouchInjectionDevices_0.c)
 *     IszzzResetSharedDesktopsSupported_0 @ 0x1C0001E80 (IszzzResetSharedDesktopsSupported_0.c)
 *     zzzResetSharedDesktops_0 @ 0x1C0001E88 (zzzResetSharedDesktops_0.c)
 *     IsCreateCaptionStripSupported_0 @ 0x1C0001E90 (IsCreateCaptionStripSupported_0.c)
 *     CreateCaptionStrip_0 @ 0x1C0001E98 (CreateCaptionStrip_0.c)
 *     IsCreateBitmapStripSupported_0 @ 0x1C0001EA0 (IsCreateBitmapStripSupported_0.c)
 *     CreateBitmapStrip_0 @ 0x1C0001EA8 (CreateBitmapStrip_0.c)
 *     IsCalcWindowsFullScreenSupported_0 @ 0x1C0001EB0 (IsCalcWindowsFullScreenSupported_0.c)
 *     CalcWindowsFullScreen_0 @ 0x1C0001EB8 (CalcWindowsFullScreen_0.c)
 *     IsIAMKeyAcquiredSupported_0 @ 0x1C0001EC0 (IsIAMKeyAcquiredSupported_0.c)
 *     IAMKeyAcquired_0 @ 0x1C0001EC8 (IAMKeyAcquired_0.c)
 *     IsPostIAMShellHookMessageExSupported_0 @ 0x1C0001ED0 (IsPostIAMShellHookMessageExSupported_0.c)
 *     PostIAMShellHookMessageEx_0 @ 0x1C0001ED8 (PostIAMShellHookMessageEx_0.c)
 *     IsxxxBroadcastDisplaySettingsChangeSupported_0 @ 0x1C0001EE0 (IsxxxBroadcastDisplaySettingsChangeSupported_0.c)
 *     xxxBroadcastDisplaySettingsChange_0 @ 0x1C0001EE8 (xxxBroadcastDisplaySettingsChange_0.c)
 *     IsxxxDesktopsRecalcAndBroadcastDisplayChangeSupported_0 @ 0x1C0001EF0 (IsxxxDesktopsRecalcAndBroadcastDisplayChangeSupported_0.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange_0 @ 0x1C0001EF8 (xxxDesktopsRecalcAndBroadcastDisplayChange_0.c)
 *     PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001F00 (PopAndFreeAlwaysW32ThreadLock_0.c)
 *     IsHandleDisplayChangeForInactiveDesktopsSupported_0 @ 0x1C0001F08 (IsHandleDisplayChangeForInactiveDesktopsSupported_0.c)
 *     HandleDisplayChangeForInactiveDesktops_0 @ 0x1C0001F10 (HandleDisplayChangeForInactiveDesktops_0.c)
 *     IsQueueNotifyMessageSupported_0 @ 0x1C0001F18 (IsQueueNotifyMessageSupported_0.c)
 *     QueueNotifyMessage_0 @ 0x1C0001F20 (QueueNotifyMessage_0.c)
 *     CacheRotationInfo_0 @ 0x1C0001F28 (CacheRotationInfo_0.c)
 *     ReferenceDwmApiPort @ 0x1C001D7D0 (ReferenceDwmApiPort.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     GreDeleteObject @ 0x1C003A290 (GreDeleteObject.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003A784 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003A7A0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     DestroyMonitorDCs @ 0x1C0054CC0 (DestroyMonitorDCs.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0056368 (-UpdateUserScreen@@YAHH@Z.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C005C414 (-ResetSystemColors@@YAXXZ.c)
 *     TemplateEventDescriptor @ 0x1C00B64B8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall xxxResetDisplayDevice(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // rcx
  char v10; // [rsp+80h] [rbp+8h] BYREF
  int CurrentProcessSessionId; // [rsp+88h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( !a2 )
  {
    if ( a1 && (v6 = *(_QWORD *)(a1 + 256)) != 0 )
    {
      *(_QWORD *)(a1 + 256) = 0LL;
    }
    else
    {
      if ( (int)IsSnapshotMonitorRectsSupported_0() < 0 )
        goto LABEL_8;
      v6 = SnapshotMonitorRects_0();
    }
    v3 = v6;
    if ( v6 )
      PushW32ThreadLock_0();
  }
LABEL_8:
  DestroyMonitorDCs(a1, a2, a3);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  UpdateUserScreen(0LL);
  if ( (int)IsRecreateTouchInjectionDevicesSupported_0() >= 0 )
    RecreateTouchInjectionDevices_0();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
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
      TemplateEventDescriptor(v9, &ChangeDisplayModeDeferral, 0LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 244LL) |= 2u;
    *(_QWORD *)(a1 + 256) = v3;
    if ( (int)IsPostIAMShellHookMessageExSupported_0() >= 0 )
      PostIAMShellHookMessageEx_0();
    if ( (int)IsxxxBroadcastDisplaySettingsChangeSupported_0() >= 0 )
      xxxBroadcastDisplaySettingsChange_0();
    if ( v3 )
      PopW32ThreadLock_0();
  }
  else
  {
    if ( (int)IsPostIAMShellHookMessageExSupported_0() >= 0 )
      PostIAMShellHookMessageEx_0();
    if ( (int)IsxxxDesktopsRecalcAndBroadcastDisplayChangeSupported_0() >= 0 )
      xxxDesktopsRecalcAndBroadcastDisplayChange_0();
    if ( v3 )
      PopAndFreeAlwaysW32ThreadLock_0();
  }
  if ( (int)IsHandleDisplayChangeForInactiveDesktopsSupported_0() >= 0 )
    HandleDisplayChangeForInactiveDesktops_0();
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 72) && (int)IsQueueNotifyMessageSupported_0() >= 0 )
    QueueNotifyMessage_0();
  if ( !a3 )
    CacheRotationInfo_0();
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
  return ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
}
