/*
 * XREFs of IdleTimerProc @ 0x1C008C4C8
 * Callers:
 *     xxxHungAppDemon @ 0x1C008C230 (xxxHungAppDemon.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C0091938 (_PostTransformableMessage.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
char IdleTimerProc()
{
  int Input; // eax
  int v1; // ebx
  char v2; // bl
  __int64 v3; // rcx
  int *v4; // rcx
  int v5; // ebx
  int v7; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v8[4]; // [rsp+38h] [rbp-48h] BYREF
  int v9; // [rsp+48h] [rbp-38h] BYREF
  __int64 v10; // [rsp+50h] [rbp-30h]
  int v11; // [rsp+58h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp-20h]
  int v13[4]; // [rsp+68h] [rbp-18h] BYREF

  RIMWatchDog();
  LOBYTE(Input) = gPowerState;
  if ( (gPowerState & 1) != 0 )
    return Input;
  LOBYTE(Input) = gafAsyncKeyState[0];
  if ( (gafAsyncKeyState[0] & 4) != 0 )
    return Input;
  if ( (gafAsyncKeyState[0] & 0x10) != 0 )
    return Input;
  LOBYTE(Input) = gafAsyncKeyState[1];
  if ( (Input & 1) != 0 || (Input & 4) != 0 || (Input & 0x10) != 0 )
    return Input;
  EtwTraceIdleStatus();
  if ( gbLockScreenAutoLockActive )
    v1 = giPowerOffTimeOutMs - 5000;
  else
    v1 = 0;
  if ( v1 > 0
    && (unsigned int)IsTimeFromLastInput((unsigned int)v1)
    && HIDWORD(glinp[0]) != LODWORD(glinp[0])
    && (!(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets)
    && (int)PostWinlogonMessage(1024LL, 3LL) >= 0 )
  {
    EtwTraceIdleActionExpiration(6LL, (unsigned int)v1);
    dword_1C03238E0 = v1;
    HIDWORD(glinp[0]) = glinp[0];
  }
  if ( dword_1C03238E0 <= 0
    || !(unsigned int)IsTimeFromLastInput((unsigned int)dword_1C03238E0)
    || (unsigned int)IsTimeFromLastInput((unsigned int)(dword_1C03238E0 + 10000)) )
  {
    v2 = 0;
    dword_1C03238E0 = 0;
  }
  else
  {
    v2 = 1;
  }
  if ( giPowerOffTimeOutMs > 0
    && (unsigned int)IsTimeFromLastInput(giPowerOffTimeOutMs)
    && HIDWORD(glinp[1]) != LODWORD(glinp[0])
    && !v2 )
  {
    EtwTraceIdleActionExpiration(2LL, giPowerOffTimeOutMs);
    HIDWORD(glinp[1]) = glinp[0];
  }
  if ( (gPowerTransitionsState[0] || gPowerTransitionsState[5] || gPowerTransitionsState[6]) && !v2 )
  {
    if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v7) )
    {
      if ( gpqForeground )
      {
        v3 = *(_QWORD *)(gpqForeground + 80LL);
        if ( v3 )
        {
LABEL_51:
          PostTransformableMessage(v3, 274, 61808, 2, 0);
          goto LABEL_18;
        }
      }
      v4 = &v9;
      v10 = v7;
      v9 = 5;
    }
    else
    {
      if ( gPowerTransitionsState[5] || !(unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) )
        goto LABEL_18;
      if ( gpqForeground )
      {
        v3 = *(_QWORD *)(gpqForeground + 80LL);
        if ( v3 )
          goto LABEL_51;
      }
      v11 = 5;
      v4 = &v11;
      v12 = 17LL;
    }
    QueuePowerRequest(v4, 0LL);
  }
LABEL_18:
  if ( giPowerSessionActivityTimeOutMs > 0
    && (unsigned int)IsTimeFromLastInput(giPowerSessionActivityTimeOutMs)
    && !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    if ( LODWORD(glinp[2]) != LODWORD(glinp[0]) )
    {
      EtwTraceIdleActionExpiration(5LL, giPowerSessionActivityTimeOutMs);
      LODWORD(glinp[2]) = glinp[0];
    }
    v8[0] = 9;
    QueuePowerRequest(v8, 0LL);
  }
  if ( giScreenSaveTimeOutMs > 0 && (unsigned int)IsTimeFromLastInput(giScreenSaveTimeOutMs) )
  {
    if ( gbLockConsoleActive )
    {
      if ( HIDWORD(glinp[0]) != LODWORD(glinp[0]) )
      {
        EtwTraceIdleActionExpiration(3LL, giScreenSaveTimeOutMs);
        if ( !(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets )
          PostWinlogonMessage(1027LL, 0LL);
      }
    }
    else
    {
      v8[0] = 6;
      QueuePowerRequest(v8, 0LL);
    }
  }
  LOBYTE(Input) = giDimTimeOutMs;
  if ( giDimTimeOutMs > 0 )
  {
    LOBYTE(Input) = giPowerOffTimeOutMs;
    v5 = giPowerOffTimeOutMs - 15000;
    if ( giPowerOffTimeOutMs - 15000 < 45000 )
      v5 = 0;
    if ( v5 > 0 && (giPowerOffTimeOutMs <= 0 || v5 < giPowerOffTimeOutMs) )
    {
      Input = IsTimeFromLastInput((unsigned int)v5);
      if ( Input )
      {
        if ( HIDWORD(glinp[2]) != LODWORD(glinp[0]) )
        {
          EtwTraceIdleActionExpiration(4LL, (unsigned int)v5);
          HIDWORD(glinp[2]) = glinp[0];
        }
        Input = PowerIsDisplayRequired();
        if ( !Input )
        {
          LOBYTE(Input) = gPowerDisplayState;
          if ( *((_DWORD *)&gPowerDisplayState + 9) == 1 )
          {
            Input = PowerIsDisplayBurstActive(0LL);
            if ( !Input )
            {
              v13[0] = 7;
              LOBYTE(Input) = QueuePowerRequest(v13, 0LL);
            }
          }
        }
      }
    }
  }
  return Input;
}
