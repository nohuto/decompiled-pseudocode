/*
 * XREFs of ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C006D158
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C006CFF4 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     IsCleanupPointerInputSupported_0 @ 0x1C00024D8 (IsCleanupPointerInputSupported_0.c)
 *     CleanupPointerInput_0 @ 0x1C00024E0 (CleanupPointerInput_0.c)
 *     IsFreeImeHotKeysSupported_0 @ 0x1C00024E8 (IsFreeImeHotKeysSupported_0.c)
 *     FreeImeHotKeys_0 @ 0x1C00024F0 (FreeImeHotKeys_0.c)
 *     IsGetgpastrSetupExeSupported_0 @ 0x1C00024F8 (IsGetgpastrSetupExeSupported_0.c)
 *     GetgpastrSetupExe_0 @ 0x1C0002500 (GetgpastrSetupExe_0.c)
 *     IsGetglpSetupProgramsSupported_0 @ 0x1C0002508 (IsGetglpSetupProgramsSupported_0.c)
 *     GetglpSetupPrograms_0 @ 0x1C0002510 (GetglpSetupPrograms_0.c)
 *     IsGetpbwlCacheSupported_0 @ 0x1C0002518 (IsGetpbwlCacheSupported_0.c)
 *     GetpbwlCache_0 @ 0x1C0002520 (GetpbwlCache_0.c)
 *     IsFreeTimerSupported_0 @ 0x1C0002528 (IsFreeTimerSupported_0.c)
 *     FreeTimer_0 @ 0x1C0002530 (FreeTimer_0.c)
 *     IsCleanupDesktopsMonitorsAndWindowsSnapShotSupported_0 @ 0x1C0002538 (IsCleanupDesktopsMonitorsAndWindowsSnapShotSupported_0.c)
 *     CleanupDesktopsMonitorsAndWindowsSnapShot_0 @ 0x1C0002540 (CleanupDesktopsMonitorsAndWindowsSnapShot_0.c)
 *     IsCleanupModuleAllocationsSupported_0 @ 0x1C0002548 (IsCleanupModuleAllocationsSupported_0.c)
 *     CleanupModuleAllocations_0 @ 0x1C0002550 (CleanupModuleAllocations_0.c)
 *     IsCleanupHidRequestListSupported_0 @ 0x1C0002558 (IsCleanupHidRequestListSupported_0.c)
 *     CleanupHidRequestList_0 @ 0x1C0002560 (CleanupHidRequestList_0.c)
 *     IsFreeDeviceInfoSupported_0 @ 0x1C0002568 (IsFreeDeviceInfoSupported_0.c)
 *     FreeDeviceInfo_0 @ 0x1C0002570 (FreeDeviceInfo_0.c)
 *     IsCleanupFeedbackDataSupported_0 @ 0x1C0002578 (IsCleanupFeedbackDataSupported_0.c)
 *     CleanupFeedbackData_0 @ 0x1C0002580 (CleanupFeedbackData_0.c)
 *     IsFreeSMSSupported_0 @ 0x1C0002588 (IsFreeSMSSupported_0.c)
 *     FreeSMS_0 @ 0x1C0002590 (FreeSMS_0.c)
 *     IsGetSMSLookasideSupported_0 @ 0x1C0002598 (IsGetSMSLookasideSupported_0.c)
 *     GetSMSLookaside_0 @ 0x1C00025A0 (GetSMSLookaside_0.c)
 *     IsCleanupKeyboardLayoutsSupported_0 @ 0x1C00025A8 (IsCleanupKeyboardLayoutsSupported_0.c)
 *     CleanupKeyboardLayouts_0 @ 0x1C00025B0 (CleanupKeyboardLayouts_0.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0036730 (Win32FreeToPagedLookasideList.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32FreePagedLookasideList @ 0x1C006DB80 (Win32FreePagedLookasideList.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C006DCE0 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 */

void Win32kNtUserCleanupInternal(void)
{
  _DWORD *v0; // rbx
  _QWORD *v1; // rbx
  void ***v2; // rcx
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  void **v5; // rax
  _QWORD *v6; // [rsp+50h] [rbp+20h] BYREF
  void *v7; // [rsp+58h] [rbp+28h] BYREF

  ZwPowerInformation(PowerInformationLevelMaximum|ProcessorInformation, 0LL, 0, 0LL, 0);
  if ( (int)IsCleanupPointerInputSupported_0() >= 0 )
    CleanupPointerInput_0();
  if ( (int)IsFreeImeHotKeysSupported_0() >= 0 )
    FreeImeHotKeys_0();
  if ( gpvwplHungRedraw )
  {
    Win32FreePool();
    gpvwplHungRedraw = 0LL;
  }
  if ( (int)IsGetgpastrSetupExeSupported_0() >= 0 )
  {
    GetgpastrSetupExe_0();
    if ( *v6 )
    {
      Win32FreePool();
      *v6 = 0LL;
    }
  }
  if ( (int)IsGetglpSetupProgramsSupported_0() >= 0 )
  {
    GetglpSetupPrograms_0();
    if ( *v6 )
    {
      Win32FreePool();
      *v6 = 0LL;
    }
  }
  if ( (int)IsGetpbwlCacheSupported_0() >= 0 )
  {
    GetpbwlCache_0();
    if ( *v6 )
    {
      Win32FreePool();
      *v6 = 0LL;
    }
  }
  while ( (__int64 *)gtmrListHead != &gtmrListHead )
  {
    if ( (int)IsFreeTimerSupported_0() >= 0 )
      FreeTimer_0();
  }
  if ( gptmrWD )
  {
    KeCancelTimer(gptmrWD);
    Win32FreePool();
    gptmrWD = 0LL;
  }
  if ( gptmrMaster )
  {
    KeCancelTimer(gptmrMaster);
    Win32FreePool();
    gptmrMaster = 0LL;
  }
  if ( gpClipFormatExceptionList )
    Win32FreePool();
  if ( (int)IsCleanupDesktopsMonitorsAndWindowsSnapShotSupported_0() >= 0 )
    CleanupDesktopsMonitorsAndWindowsSnapShot_0();
  if ( (int)IsCleanupModuleAllocationsSupported_0() >= 0 )
    CleanupModuleAllocations_0();
  if ( gpEventPnPWainting )
  {
    Win32FreePool();
    gpEventPnPWainting = 0LL;
  }
  v0 = &unk_1C01180D0;
  do
  {
    if ( v0[3] == -1 && *(_QWORD *)v0 )
    {
      Win32FreePool();
      *(_QWORD *)v0 = 0LL;
    }
    v0 += 140;
  }
  while ( (__int64)v0 <= (__int64)dword_1C0118530 );
  if ( gpresUser )
  {
    while ( (unsigned int)CSTPop((unsigned int *)&v6, &v7) )
    {
      if ( (_DWORD)v6 == 2 || (_DWORD)v6 == 4 )
      {
        v3 = v7;
        if ( *((_QWORD *)v7 + 1) )
        {
          Win32FreePool();
          v3[1] = 0LL;
        }
      }
    }
  }
  if ( gpresDeviceInfoList )
  {
    ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
    if ( (int)IsCleanupHidRequestListSupported_0() >= 0 )
      CleanupHidRequestList_0();
    while ( gpDeviceInfoList )
    {
      *((_WORD *)gpDeviceInfoList + 32) &= ~2u;
      *((_WORD *)gpDeviceInfoList + 33) &= ~0x100u;
      if ( (int)IsFreeDeviceInfoSupported_0() >= 0 )
        FreeDeviceInfo_0();
    }
    gfRecordPnpNotification = 0;
    if ( gpPnpNotificationRecord )
    {
      Win32FreePool();
      gpPnpNotificationRecord = 0LL;
    }
    ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
    ExDeleteResourceLite(gpresDeviceInfoList);
    ExFreePoolWithTag(gpresDeviceInfoList, 0);
    gpresDeviceInfoList = 0LL;
  }
  if ( gpresDitDeviceInfoList )
  {
    ExDeleteResourceLite(gpresDitDeviceInfoList);
    ExFreePoolWithTag(gpresDitDeviceInfoList, 0);
  }
  if ( gpresDitTouchInjection )
  {
    ExDeleteResourceLite(gpresDitTouchInjection);
    ExFreePoolWithTag(gpresDitTouchInjection, 0);
  }
  if ( gpresDitMouseInjectionFlush )
  {
    ExDeleteResourceLite(gpresDitMouseInjectionFlush);
    ExFreePoolWithTag(gpresDitMouseInjectionFlush, 0);
  }
  if ( gpresDitCompositionInputSinkQuery )
  {
    ExDeleteResourceLite(gpresDitCompositionInputSinkQuery);
    ExFreePoolWithTag(gpresDitCompositionInputSinkQuery, 0);
  }
  if ( gpHidInterfaceGuid )
  {
    Win32FreePool();
    gpHidInterfaceGuid = 0LL;
  }
  if ( gThinwireFileObject )
    ObfDereferenceObject(gThinwireFileObject);
  if ( gVideoFileObject )
    ObfDereferenceObject(gVideoFileObject);
  if ( gpRemoteBeepDevice )
    ObfDereferenceObject(gpRemoteBeepDevice);
  if ( gpresMouseEventQueue )
  {
    ExDeleteResourceLite(gpresMouseEventQueue);
    ExFreePoolWithTag(gpresMouseEventQueue, 0);
    gpresMouseEventQueue = 0LL;
  }
  if ( gpresPTPEventQueue )
  {
    ExDeleteResourceLite(gpresPTPEventQueue);
    ExFreePoolWithTag(gpresPTPEventQueue, 0);
    gpresPTPEventQueue = 0LL;
  }
  if ( apObjects )
  {
    Win32FreePool();
    apObjects = 0LL;
  }
  if ( gWaitBlockArray )
  {
    Win32FreePool();
    gWaitBlockArray = 0LL;
  }
  if ( gpEventDiconnectDesktop )
  {
    Win32FreePool();
    gpEventDiconnectDesktop = 0LL;
  }
  if ( gpevtDesktopDestroyed )
  {
    Win32FreePool();
    gpevtDesktopDestroyed = 0LL;
  }
  if ( gpevtVideoportCallout )
  {
    Win32FreePool();
    gpevtVideoportCallout = 0LL;
  }
  if ( gpevtRitReadyForCallOut )
  {
    Win32FreePool();
    gpevtRitReadyForCallOut = 0LL;
  }
  if ( gpevtMonitorPowerWaiter )
  {
    Win32FreePool();
    gpevtMonitorPowerWaiter = 0LL;
  }
  if ( gpsemSwitchInProgressWaiters )
  {
    Win32FreePool();
    gpsemSwitchInProgressWaiters = 0LL;
  }
  if ( gpsemDITHitTestWaiters )
  {
    Win32FreePool();
    gpsemDITHitTestWaiters = 0LL;
  }
  if ( gpsemDITLuidHitTestWaiters )
  {
    Win32FreePool();
    gpsemDITLuidHitTestWaiters = 0LL;
  }
  if ( gpsemRITBlockedOnDITWaiters )
  {
    Win32FreePool();
    gpsemRITBlockedOnDITWaiters = 0LL;
  }
  if ( (int)IsCleanupFeedbackDataSupported_0() >= 0 )
    CleanupFeedbackData_0();
  if ( gpevtPTPOperation )
  {
    Win32FreePool();
    gpevtPTPOperation = 0LL;
  }
  if ( UserAtomTableHandle )
  {
    RtlDestroyAtomTable(UserAtomTableHandle);
    UserAtomTableHandle = 0LL;
  }
  if ( UserLibmgmtAtomTableHandle )
  {
    RtlDestroyAtomTable(UserLibmgmtAtomTableHandle);
    UserLibmgmtAtomTableHandle = 0LL;
  }
  v1 = (_QWORD *)gpJobsList;
  if ( gpJobsList )
  {
    do
    {
      v4 = v1;
      v1 = (_QWORD *)*v1;
      if ( v4[7] )
      {
        Win32FreePool();
        v4[7] = 0LL;
      }
      if ( v4[5] )
      {
        Win32FreePool();
        v4[5] = 0LL;
      }
      RtlDestroyAtomTable((PRTL_ATOM_TABLE)v4[2]);
      Win32FreePool();
    }
    while ( v1 );
    gpJobsList = 0LL;
  }
  if ( (int)IsFreeSMSSupported_0() >= 0 )
  {
    v2 = (void ***)gsmsList;
    if ( gsmsList )
    {
      while ( v2 != (void ***)&gsmsList )
      {
        v5 = *v2;
        if ( v2[1] != &gsmsList || v5[1] != v2 )
          __fastfail(3u);
        gsmsList = *v2;
        v5[1] = &gsmsList;
        FreeSMS_0();
        v2 = (void ***)gsmsList;
      }
    }
    qword_1C011DB38 = (__int64)&gsmsList;
    gsmsList = &gsmsList;
  }
  if ( (int)IsGetSMSLookasideSupported_0() >= 0 )
  {
    GetSMSLookaside_0();
    if ( *v6 )
    {
      Win32FreePagedLookasideList();
      *v6 = 0LL;
    }
  }
  if ( qword_1C011A758 )
  {
    Win32FreeToPagedLookasideList();
    qword_1C011A758 = 0LL;
  }
  if ( QLookaside )
  {
    Win32FreePagedLookasideList();
    QLookaside = 0LL;
  }
  if ( QEntryLookaside )
  {
    Win32FreePagedLookasideList();
    QEntryLookaside = 0LL;
  }
  if ( (int)IsCleanupKeyboardLayoutsSupported_0() >= 0 )
    CleanupKeyboardLayouts_0();
  while ( gpwtiFirst )
  {
    gpwtiFirst = *(_QWORD *)gpwtiFirst;
    Win32FreePool();
  }
  if ( qword_1C011DB68 )
    Win32FreePool();
  if ( gpsdInitWinSta )
  {
    Win32FreePool();
    gpsdInitWinSta = 0LL;
  }
  if ( gpHandleFlagsMutex )
  {
    ExFreePoolWithTag(gpHandleFlagsMutex, 0);
    gpHandleFlagsMutex = 0LL;
  }
  if ( gpPowerRequestMutex )
  {
    Win32FreePool();
    gpPowerRequestMutex = 0LL;
  }
  if ( gpresRender )
  {
    ExDeleteResourceLite(gpresRender);
    ExFreePoolWithTag(gpresRender, 0);
    gpresRender = 0LL;
  }
  if ( gpRemoteSessionOcclusionEvent )
  {
    ObfDereferenceObject(gpRemoteSessionOcclusionEvent);
    gpRemoteSessionOcclusionEvent = 0LL;
  }
}
