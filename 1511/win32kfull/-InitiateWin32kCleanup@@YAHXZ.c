/*
 * XREFs of ?InitiateWin32kCleanup@@YAHXZ @ 0x1C009EDC8
 * Callers:
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 * Callees:
 *     FreeTimer @ 0x1C004AC90 (FreeTimer.c)
 *     FreeAllSpbs @ 0x1C0097200 (FreeAllSpbs.c)
 *     InitializePointerDevicesPresenceState @ 0x1C0099CD0 (InitializePointerDevicesPresenceState.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C009E674 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C009F228 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C009F248 (-TerminateDesktopThreads@@YAXXZ.c)
 *     ?SetWaitForWinstaRundown@@YAXXZ @ 0x1C009F40C (-SetWaitForWinstaRundown@@YAXXZ.c)
 *     xxxUnregisterDeviceClassNotifications @ 0x1C009F580 (xxxUnregisterDeviceClassNotifications.c)
 *     CleanupIAMAccess @ 0x1C00D4B40 (CleanupIAMAccess.c)
 *     GreDrvDisconnect @ 0x1C014ED9C (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01FC340 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C0230CD4 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     bDrvDisconnect @ 0x1C02B75C4 (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitiateWin32kCleanup(void)
{
  __int64 RemoteContext; // rsi
  __int64 v1; // rdx
  __int64 v2; // rcx
  _QWORD *v3; // rax
  _QWORD *i; // rbx
  __int64 *v5; // rbx
  struct tagINPUTPOINTERNODE *v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  struct tagMOUSE_PROMOTION_QUEUE *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  HANDLE v12; // rcx
  __int64 v13; // rbx
  _QWORD *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  signed __int32 v19[8]; // [rsp+0h] [rbp-88h] BYREF
  HANDLE EventHandle; // [rsp+30h] [rbp-58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-50h] BYREF
  _BYTE ObjectInformation[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-40h]

  RemoteContext = GreGetRemoteContext();
  SetWaitForWinstaRundown();
  CleanupIAMAccess(0LL);
  DrvNotifySessionStateChange(2LL);
  gbPowerCalloutsReady = 0;
  _InterlockedOr(v19, 0);
  EnterCrit(0LL, 1LL);
  CleanupPowerRequestList();
  UserSessionSwitchLeaveCrit(v2, v1);
  if ( !gProtocolType )
    xxxUnregisterDeviceClassNotifications();
  EnterCrit(0LL, 1LL);
  InitializePointerDevicesPresenceState(0);
  gbCleanupInitiated = 1;
  gdwHydraHint |= 0x400u;
  v3 = (_QWORD *)gsmsList;
  gbInSMSCleanup = 1;
  for ( i = (_QWORD *)gsmsList; i != v3; i = (_QWORD *)*i )
  {
    if ( i[14] )
    {
      HMAssignmentUnlock(i + 14);
      v3 = (_QWORD *)gsmsList;
    }
  }
  gbInSMSCleanup = 0;
  while ( qword_1C0327800 != (struct tagPOINTERHOLDINGFRAME *)&qword_1C0327800 )
    UnlinkAndFreeHoldingFrame(qword_1C0327800);
  if ( qword_1C032B900 )
  {
    Win32FreePool(qword_1C032B900);
    qword_1C032B900 = 0LL;
    gPointerCoalesceInfo = 0;
  }
  v5 = (__int64 *)qword_1C03277F0;
  while ( v5 != &qword_1C03277F0 )
  {
    v6 = (struct tagINPUTPOINTERNODE *)(v5 - 2);
    v5 = (__int64 *)*v5;
    CancelActivePointer(v6);
  }
  v7 = &unk_1C03279F8;
  v8 = 1000LL;
  do
  {
    if ( *v7 )
      Win32FreePool(*v7);
    v7 += 2;
    --v8;
  }
  while ( v8 );
  EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0323590);
  v9 = (struct tagMOUSE_PROMOTION_QUEUE *)&unk_1C0323520;
  v10 = 5LL;
  do
  {
    EmptyMousePromotionQueue(v9);
    v9 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v9 + 24);
    --v10;
  }
  while ( v10 );
  v13 = *(_QWORD *)(gptiCurrent + 536LL);
  Timeout.QuadPart = -6000000000LL;
  while ( v13 )
  {
    v14 = *(_QWORD **)(v13 + 16);
    if ( !v14 )
      break;
    if ( v14 == gspdeskDisconnect && !v14[2] && !*(_QWORD *)(*(_QWORD *)(v13 + 24) + 48LL) )
    {
      v12 = ghDisconnectDesk;
      if ( !ghDisconnectDesk || ZwQueryObject(ghDisconnectDesk, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL) )
      {
        v15 = 0;
      }
      else
      {
        if ( v23 <= 1 )
          break;
        gdwHydraHint |= 0x400000u;
        v15 = v23;
      }
      if ( v15 <= 1 )
        break;
    }
    UserSessionSwitchLeaveCrit(v12, v11);
    KeWaitForSingleObject(gpevtDesktopDestroyed, WrUserRequest, 0, 0, &Timeout);
    EnterCrit(0LL, 1LL);
  }
  gbExitInProgress = 1;
  gpqCursor = 0LL;
  HMAssignmentUnlock(&gspwndMouseOwner);
  if ( gpScancodeMap )
  {
    Win32FreePool(gpScancodeMap);
    gpScancodeMap = 0LL;
  }
  if ( gpFlexMap )
  {
    Win32FreePool(gpFlexMap);
    gpFlexMap = 0LL;
    gdwFlexMapSize = 0;
  }
  if ( gpDispInfo )
    FreeAllSpbs();
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
  UserSessionSwitchLeaveCrit(v17, v16);
  if ( gSessionId && CreateShutdownEvent(L"EventRitExited", 128, &EventHandle) >= 0 )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
  }
  result = 1LL;
  *(_DWORD *)(gptiCurrent + 440LL) &= ~0x800u;
  gdwHydraHint |= 0x1000u;
  return result;
}
