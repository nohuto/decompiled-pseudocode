/*
 * XREFs of IdleTimerProc @ 0x1C00597E4
 * Callers:
 *     xxxHungAppDemon @ 0x1C0059550 (xxxHungAppDemon.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C009CF34 (_PostTransformableMessage.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
char IdleTimerProc()
{
  int Input; // eax
  int v1; // ebx
  char v2; // bl
  int v3; // ebx
  __int64 v4; // rcx
  int *v5; // rcx
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
    && glinp[1] != glinp[0]
    && (!(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets)
    && (int)PostWinlogonMessage(1024LL, 3LL) >= 0 )
  {
    EtwTraceIdleActionExpiration(6LL, (unsigned int)v1);
    dword_1C0328F78 = v1;
    glinp[1] = glinp[0];
  }
  if ( dword_1C0328F78 <= 0
    || !(unsigned int)IsTimeFromLastInput((unsigned int)dword_1C0328F78)
    || (unsigned int)IsTimeFromLastInput((unsigned int)(dword_1C0328F78 + 10000)) )
  {
    v2 = 0;
    dword_1C0328F78 = 0;
  }
  else
  {
    v2 = 1;
  }
  if ( giPowerOffTimeOutMs > 0 && (unsigned int)IsTimeFromLastInput(giPowerOffTimeOutMs) && glinp[3] != glinp[0] && !v2 )
  {
    EtwTraceIdleActionExpiration(2LL, giPowerOffTimeOutMs);
    glinp[3] = glinp[0];
  }
  if ( (gPowerTransitionsState[0] || gPowerTransitionsState[5] || gPowerTransitionsState[6]) && !v2 )
  {
    if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v7) )
    {
      if ( gpqForeground )
      {
        v4 = *(_QWORD *)(gpqForeground + 88LL);
        if ( v4 )
        {
LABEL_51:
          PostTransformableMessage(v4, 274, 61808, 2, 0);
          goto LABEL_18;
        }
      }
      v5 = &v9;
      v10 = v7;
      v9 = 5;
    }
    else
    {
      if ( gPowerTransitionsState[5] || !(unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) )
        goto LABEL_18;
      if ( gpqForeground )
      {
        v4 = *(_QWORD *)(gpqForeground + 88LL);
        if ( v4 )
          goto LABEL_51;
      }
      v11 = 5;
      v5 = &v11;
      v12 = 17LL;
    }
    QueuePowerRequest(v5, 0LL);
  }
LABEL_18:
  if ( giPowerSessionActivityTimeOutMs > 0
    && (unsigned int)IsTimeFromLastInput(giPowerSessionActivityTimeOutMs)
    && !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    if ( glinp[4] != glinp[0] )
    {
      EtwTraceIdleActionExpiration(5LL, giPowerSessionActivityTimeOutMs);
      glinp[4] = glinp[0];
    }
    v8[0] = 9;
    QueuePowerRequest(v8, 0LL);
  }
  if ( giScreenSaveTimeOutMs > 0 && (unsigned int)IsTimeFromLastInput(giScreenSaveTimeOutMs) )
  {
    if ( gbLockConsoleActive )
    {
      if ( glinp[1] != glinp[0] )
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
  v3 = giDimTimeOutMs;
  if ( giDimTimeOutMs > 0 )
  {
    LOBYTE(Input) = gbManualDimTimeOut;
    if ( !gbManualDimTimeOut )
    {
      LOBYTE(Input) = giPowerOffTimeOutMs;
      v3 = giPowerOffTimeOutMs - 15000;
      if ( giPowerOffTimeOutMs - 15000 < 45000 )
        v3 = 0;
    }
    if ( v3 > 0 )
    {
      LOBYTE(Input) = giPowerOffTimeOutMs;
      if ( giPowerOffTimeOutMs <= 0 || v3 < giPowerOffTimeOutMs )
      {
        Input = IsTimeFromLastInput((unsigned int)v3);
        if ( Input )
        {
          if ( glinp[5] != glinp[0] )
          {
            EtwTraceIdleActionExpiration(4LL, (unsigned int)v3);
            glinp[5] = glinp[0];
          }
          Input = PowerIsDisplayRequired();
          if ( !Input )
          {
            LOBYTE(Input) = gPowerDisplayState;
            if ( *((_DWORD *)&gPowerDisplayState + 16) == 1 )
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
  }
  return Input;
}
