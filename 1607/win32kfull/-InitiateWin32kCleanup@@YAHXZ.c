/*
 * XREFs of ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EC928
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 * Callees:
 *     FreeAllSpbs @ 0x1C0094950 (FreeAllSpbs.c)
 *     InitializePointerDevicesPresenceState @ 0x1C00E8EF0 (InitializePointerDevicesPresenceState.c)
 *     FreeTimer @ 0x1C00ECEE0 (FreeTimer.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00ECFE0 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00ED000 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00ED0C4 (-TerminateDesktopThreads@@YAXXZ.c)
 *     CleanupIAMAccess @ 0x1C00ED600 (CleanupIAMAccess.c)
 *     ?SetWaitForWinstaRundown@@YAXXZ @ 0x1C00EDB34 (-SetWaitForWinstaRundown@@YAXXZ.c)
 *     GreDrvDisconnect @ 0x1C0154900 (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C01C1E24 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     UnregisterDeviceClassNotifications @ 0x1C01D6EEC (UnregisterDeviceClassNotifications.c)
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F35E0 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C023BA48 (-RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 *     bDrvDisconnect @ 0x1C02BA7F8 (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitiateWin32kCleanup(void)
{
  __int64 RemoteContext; // rbp
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rax
  _QWORD *i; // rbx
  __int64 *v6; // rbx
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  struct tagMOUSE_PROMOTION_QUEUE *v11; // rbx
  HANDLE v12; // rcx
  InteractiveControlManager *v13; // rbx
  struct InteractiveControlDevice **v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  struct tagSCANCODEFLEXIBLEMAP *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 result; // rax
  struct tagINPUTPOINTERNODE *v25; // rcx
  unsigned int v26; // eax
  signed __int32 v27[8]; // [rsp+0h] [rbp-98h] BYREF
  HANDLE EventHandle; // [rsp+30h] [rbp-68h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-60h] BYREF
  _BYTE ObjectInformation[8]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-50h]

  RemoteContext = GreGetRemoteContext();
  SetWaitForWinstaRundown();
  CleanupIAMAccess(0LL);
  DrvNotifySessionStateChange(2LL);
  gbPowerCalloutsReady = 0;
  _InterlockedOr(v27, 0);
  EnterCrit(0LL, 1LL);
  CleanupPowerRequestList();
  if ( gdwInAtomicOperation )
  {
    v1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v1, gdwInAtomicOperation);
  if ( !gProtocolType )
    UnregisterDeviceClassNotifications();
  EnterCrit(0LL, 1LL);
  InitializePointerDevicesPresenceState(0);
  gbCleanupInitiated = 1;
  gdwHydraHint |= 0x400u;
  v4 = (_QWORD *)gsmsList;
  gbInSMSCleanup = 1;
  for ( i = (_QWORD *)gsmsList; i != v4; i = (_QWORD *)*i )
  {
    if ( i[14] )
    {
      HMAssignmentUnlock(i + 14);
      v4 = (_QWORD *)gsmsList;
    }
  }
  gbInSMSCleanup = 0;
  while ( qword_1C032DAA0 != (struct tagPOINTERHOLDINGFRAME *)&qword_1C032DAA0 )
    UnlinkAndFreeHoldingFrame(qword_1C032DAA0);
  if ( qword_1C032DD18 )
  {
    Win32FreePool(qword_1C032DD18, v2, v3);
    qword_1C032DD18 = 0LL;
    gPointerCoalesceInfo = 0;
  }
  v6 = (__int64 *)qword_1C032DB00;
  while ( v6 != &qword_1C032DB00 )
  {
    v25 = (struct tagINPUTPOINTERNODE *)(v6 - 2);
    v6 = (__int64 *)*v6;
    CancelActivePointer(v25);
  }
  v7 = &unk_1C032DD68;
  v8 = 1000LL;
  do
  {
    if ( *v7 )
      Win32FreePool(*v7, v2, v3);
    v7 += 2;
    --v8;
  }
  while ( v8 );
  EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0328C30);
  v9 = 5LL;
  v10 = 5LL;
  v11 = (struct tagMOUSE_PROMOTION_QUEUE *)&unk_1C0328BC0;
  do
  {
    EmptyMousePromotionQueue(v11);
    v11 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v11 + 24);
    --v10;
  }
  while ( v10 );
  v13 = InteractiveControlManager::s_pInstance;
  if ( InteractiveControlManager::s_pInstance )
  {
    v14 = (struct InteractiveControlDevice **)((char *)InteractiveControlManager::s_pInstance + 40);
    do
    {
      if ( *v14 )
        InteractiveControlManager::RemoveDevice(v13, *v14);
      ++v14;
      --v9;
    }
    while ( v9 );
    HMAssignmentLock((char *)v13 + 16, 0LL);
    HMAssignmentLock(v13, 0LL);
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    hProvider = 0;
    Win32FreePool(InteractiveControlManager::s_pInstance, v15, v16);
    InteractiveControlManager::s_pInstance = 0LL;
  }
  v17 = *(_QWORD *)(gptiCurrent + 536LL);
  Timeout.QuadPart = -6000000000LL;
  while ( v17 )
  {
    v18 = *(_QWORD **)(v17 + 16);
    if ( !v18 )
      break;
    if ( v18 == gspdeskDisconnect && !v18[2] && !*(_QWORD *)(*(_QWORD *)(v17 + 24) + 48LL) )
    {
      v12 = ghDisconnectDesk;
      if ( !ghDisconnectDesk || ZwQueryObject(ghDisconnectDesk, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL) )
      {
        v26 = 0;
      }
      else
      {
        if ( v31 <= 1 )
          break;
        gdwHydraHint |= 0x400000u;
        v26 = v31;
      }
      if ( v26 <= 1 )
        break;
    }
    if ( gdwInAtomicOperation )
    {
      v12 = (HANDLE)gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v12, gdwInAtomicOperation);
    KeWaitForSingleObject(gpevtDesktopDestroyed, WrUserRequest, 0, 0, &Timeout);
    EnterCrit(0LL, 1LL);
  }
  gbExitInProgress = 1;
  gpqCursor = 0LL;
  HMAssignmentUnlock(&gspwndMouseOwner);
  if ( gpScancodeMap )
  {
    Win32FreePool(gpScancodeMap, v19, v20);
    gpScancodeMap = 0LL;
  }
  v21 = gpFlexMap;
  if ( gpFlexMap )
  {
    Win32FreePool(gpFlexMap, v19, v20);
    gpFlexMap = 0LL;
    gdwFlexMapSize = 0;
  }
  if ( gpDispInfo )
    FreeAllSpbs((__int64)v21, v19, v20);
  if ( ghDisconnectWinSta )
  {
    ZwClose(ghDisconnectWinSta);
    ghDisconnectWinSta = 0LL;
  }
  if ( ghDisconnectDesk )
  {
    ObCloseHandle(ghDisconnectDesk, 0);
    ghDisconnectDesk = 0LL;
  }
  UnlockObjectAssignment(&grpdeskLogon);
  UnlockObjectAssignment(&gspdeskDisconnect);
  if ( gspwndAltTab )
    HMAssignmentUnlock(&gspwndAltTab);
  TerminateDesktopThreads();
  if ( gbConnected )
  {
    if ( gfRemotingConsole )
      bDrvDisconnect();
    else
      GreDrvDisconnect(RemoteContext);
  }
  UnlockObjectAssignment(grpdeskRitInput);
  UnlockObjectAssignment(grpdeskIODefault);
  UnlockObjectAssignment(&gspdeskShouldBeForeground);
  if ( CsrApiPort )
  {
    ObfDereferenceObject(CsrApiPort);
    CsrApiPort = 0LL;
  }
  HMAssignmentUnlock(&gspwndCursor);
  HMAssignmentUnlock(&gspwndCursorNC);
  gptiRit = 0LL;
  UserSessionSwitchLeaveCrit(v23, v22);
  if ( gSessionId && CreateShutdownEvent(L"EventRitExited", 0x80u, &EventHandle) >= 0 )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
  }
  result = 1LL;
  *(_DWORD *)(gptiCurrent + 440LL) &= ~0x800u;
  gdwHydraHint |= 0x1000u;
  return result;
}
