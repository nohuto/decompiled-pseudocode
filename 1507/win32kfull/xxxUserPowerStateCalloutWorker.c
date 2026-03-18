/*
 * XREFs of xxxUserPowerStateCalloutWorker @ 0x1C012FB50
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendMessageBSM @ 0x1C004E260 (xxxSendMessageBSM.c)
 *     WakeRIT @ 0x1C00F42E4 (WakeRIT.c)
 *     SendPTPLatencyMgtRequest @ 0x1C01301A0 (SendPTPLatencyMgtRequest.c)
 *     PowerOnGdi @ 0x1C01301F0 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C0130390 (PowerOffGdi.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxUserPowerStateCalloutWorker()
{
  unsigned int v0; // r13d
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  signed __int32 v14[8]; // [rsp+8h] [rbp-C9h] BYREF
  __int64 OutputBufferLength; // [rsp+28h] [rbp-A9h]
  int v16; // [rsp+30h] [rbp-A1h]
  __int64 v17; // [rsp+48h] [rbp-89h]
  _QWORD SystemInformation[4]; // [rsp+58h] [rbp-79h] BYREF
  int InputBuffer; // [rsp+78h] [rbp-59h] BYREF
  __int64 v20; // [rsp+7Ch] [rbp-55h]
  char v21; // [rsp+84h] [rbp-4Dh]
  struct _KEVENT *p_Event; // [rsp+88h] [rbp-49h]
  struct _KEVENT Event; // [rsp+90h] [rbp-41h] BYREF
  _DWORD v24[10]; // [rsp+A8h] [rbp-29h] BYREF
  _DWORD v25[8]; // [rsp+D0h] [rbp-1h] BYREF
  _QWORD v26[2]; // [rsp+F0h] [rbp+1Fh] BYREF

  v0 = 0;
  if ( !gbPowerCalloutsReady )
    return 3221225473LL;
  if ( *((_DWORD *)&gPowerState + 18) == 1 )
  {
    EnterPowerCrit();
    *((_QWORD *)&gPowerState + 1) = *(_QWORD *)(gptiCurrent + 656LL);
    goto LABEL_51;
  }
  if ( *((_DWORD *)&gPowerState + 18) == 2 )
  {
    gPowerTransitionsState[2] = 1;
    _InterlockedOr(v14, 0);
    SendPTPLatencyMgtRequest(1LL);
    PowerOffMonitor(*((unsigned int *)&gPowerState + 19));
    gPowerTransitionsState[10] = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v11 = gServiceSessionId;
    if ( gSessionId != gServiceSessionId )
    {
      EtwTraceWinlogonSleepStartEvent(1LL);
      LOBYTE(v12) = 1;
      xxxSendWinlogonPowerMessage(v12, 262LL, (char *)&gPowerState + 56);
      EtwTraceWinlogonSleepStartEvent(0LL);
    }
    LOBYTE(v10) = 1;
    LOBYTE(v11) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v11, v10, 0LL) )
    {
      v16 = 1;
      *((_DWORD *)&gPowerState + 4) = 16;
      *((_DWORD *)&gPowerState + 5) = 40;
      xxxSendMessageBSM(0LL, 0x218u, 4uLL, 0LL, (struct tagBROADCASTSYSTEMMSGPARAMS *)((char *)&gPowerState + 16), v16);
    }
    if ( *((_DWORD *)&gPowerState + 15) == 5 )
    {
      if ( gProtocolType )
      {
LABEL_49:
        EnterPowerCrit();
        *((_QWORD *)&gPowerState + 1) = 0LL;
LABEL_51:
        LeavePowerCrit();
        return v0;
      }
      if ( (*((_DWORD *)&gPowerState + 16) & 8) != 0 )
      {
        if ( (unsigned __int8)DrvStopPresenterView() && grpdeskRitInput )
        {
          LOBYTE(v17) = 0;
          LODWORD(OutputBufferLength) = 2191;
          xxxUserSetDisplayConfig(0LL, 0LL, 0LL, 0LL, OutputBufferLength, 0, 0, grpdeskRitInput, v17, 0LL);
        }
      }
      else
      {
        LOBYTE(v13) = 1;
        xxxSendWinlogonPowerMessage(v13, 259LL, (char *)&gPowerState + 56);
      }
    }
    if ( !gProtocolType )
      PowerOffGdi();
    goto LABEL_49;
  }
  v2 = (unsigned int)(*((_DWORD *)&gPowerState + 18) - 3);
  if ( *((_DWORD *)&gPowerState + 18) == 3 )
  {
    if ( *((_DWORD *)&gPowerState + 15) == 5 )
      InputBuffer = 3;
    else
      InputBuffer = *((_DWORD *)&gPowerState + 14);
    LOBYTE(v2) = 1;
    if ( (unsigned int)PowerResumeSuspendEvent(v2, 0LL, 0LL) )
      return v0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v20 = 4LL;
    p_Event = &Event;
    v21 = 0;
    goto LABEL_35;
  }
  if ( *((_DWORD *)&gPowerState + 18) == 5 )
  {
    UpdateLastInput(
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      4LL);
    WakeRIT(0x80u);
    v5 = *((_DWORD *)&gPowerState + 15) == 5;
    if ( gSessionId )
    {
      if ( *((_DWORD *)&gPowerState + 15) == 5 )
      {
        memset(SystemInformation, 0, sizeof(SystemInformation));
        memset(v25, 0, sizeof(v25));
        v25[4] &= ~1u;
        SystemInformation[2] = v25;
        SystemInformation[0] = 0x6B7568430000002DLL;
        LODWORD(SystemInformation[1]) = 10;
        LODWORD(SystemInformation[3]) = 32;
        v25[0] = 4;
        v25[1] = 1;
        v25[2] = 4;
        ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
      }
      EtwTraceWinlogonSleepEndEvent(1LL);
      LOBYTE(v6) = 1;
      v26[0] = 0x100000000LL;
      v26[1] = 0LL;
      v0 = xxxSendWinlogonPowerMessage(v6, 262LL, v26);
      EtwTraceWinlogonSleepEndEvent(0LL);
      if ( v5 )
      {
        v7 = SystemInformation[2];
        *(_DWORD *)(SystemInformation[2] + 16LL) |= 1u;
        *(_DWORD *)(v7 + 8) = 4;
        ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
      }
    }
    PowerOnGdi();
    gPowerTransitionsState[2] = 0;
    _InterlockedOr(v14, 0);
    if ( gbPendingSleepInput )
    {
      gbPendingMonitorOn = 1;
      gPendingMonitorOnReason = gPendingSleepInputReason;
      EnterPowerCrit();
      gbPendingSleepInput = 0;
      gPendingSleepInputReason = 0;
      LeavePowerCrit();
    }
    else
    {
      gPowerTransitionsState[3] = 1;
    }
    if ( gSqmIsOptedIn )
      WinSqmIncrementDWORD(
        0LL,
        4013LL,
        ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - gPowerTransitionsState[10])
      / 0x3E8);
    memset(SystemInformation, 0, sizeof(SystemInformation));
    memset(v25, 0, sizeof(v25));
    v25[4] &= ~1u;
    SystemInformation[0] = 0x6B7568430000002DLL;
    LODWORD(SystemInformation[1]) = 10;
    SystemInformation[2] = v25;
    LODWORD(SystemInformation[3]) = 32;
    v25[0] = 4;
    v25[1] = 1;
    v25[2] = 6;
    ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
    LOBYTE(v8) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v8, 0LL) )
    {
      v24[0] = 16;
      v24[1] = 0x20000000;
      xxxSendMessageBSM(0LL, 0x218u, 0x12uLL, 0LL, (struct tagBROADCASTSYSTEMMSGPARAMS *)v24, 1);
    }
    gdwUpdateKeyboard |= 2u;
    v9 = SystemInformation[2];
    *(_DWORD *)(SystemInformation[2] + 16LL) |= 1u;
    *(_DWORD *)(v9 + 8) = 6;
    ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
    return v0;
  }
  if ( *((_DWORD *)&gPowerState + 18) != 6 )
  {
    switch ( *((_DWORD *)&gPowerState + 18) )
    {
      case 0xA:
        gPowerState = gPowerState & 0xFFFFFFDF | (32 * (gPowerTransitionsState[0] != 0));
        PowerOffMonitor(19LL);
        PowerOffGdi();
        break;
      case 0xB:
        PowerOnGdi();
        if ( (gPowerState & 0x20) != 0 )
          PowerOnMonitor(19LL);
        break;
      case 0xC:
        PowerOffMonitor(20LL);
        break;
    }
    return v0;
  }
  gfsModifiers = 0;
  gfsModOnlyCandidate = 0;
  gfsSASModifiersDown = 0;
  WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, 0LL) )
  {
    InputBuffer = 0;
    v21 = 1;
    v20 = 18LL;
    p_Event = 0LL;
LABEL_35:
    UserSessionSwitchLeaveCrit(v4, v3);
    ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x18u, 0LL, 0);
    EnterCrit(1LL);
  }
  return v0;
}
