/*
 * XREFs of UserPowerStateCallout @ 0x1C0071E30
 * Callers:
 *     W32CalloutDispatch @ 0x1C001CE70 (W32CalloutDispatch.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C000A740 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0072080 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0072174 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 */

__int64 __fastcall UserPowerStateCallout(char *a1)
{
  int v1; // esi
  unsigned int v2; // ebx
  char v3; // bp
  int v5; // r15d
  int v6; // r12d
  unsigned int v7; // r14d
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_DWORD *)a1 + 4);
  v2 = 0;
  v3 = *a1;
  v5 = *((_DWORD *)a1 + 1);
  v6 = *((_DWORD *)a1 + 2);
  v7 = *((_DWORD *)a1 + 3);
  if ( !v1 )
    return UserSessionSwitchBlock_Start();
  if ( v1 == 7 )
  {
    UserSessionSwitchBlock_End();
    if ( gbPendingMonitorOn )
    {
      gbPendingMonitorOn = 0;
      *((_QWORD *)&v9 + 1) = gPendingMonitorOnReason;
      *(_QWORD *)&v9 = 4LL;
      gPendingMonitorOnReason = 0;
      QueuePowerRequest(&v9, 0);
    }
    return 0LL;
  }
  else
  {
    if ( gbVideoInitialized && gbPowerCalloutsReady && gWinLogonRpcHandle )
    {
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
      if ( v1 != 1 )
      {
        if ( (gPowerState & 1) != 0 )
        {
          if ( !v3 )
          {
            if ( v1 != 8 )
            {
              if ( v1 == 2 )
                dword_1C011BBEC = *((_DWORD *)a1 + 5);
LABEL_12:
              dword_1C011BBE8 = v1;
              ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
              return QueuePowerRequest(0LL, 1);
            }
            gPowerState &= ~1u;
            Event = 0LL;
          }
        }
        else
        {
          v2 = -1073741823;
        }
        goto LABEL_24;
      }
      if ( v3 )
      {
        if ( (gPowerState & 1) != 0 )
        {
LABEL_15:
          gPowerState |= 1u;
          gPowerState = gPowerState & 0xFFFFFFFB | (4 * (((unsigned __int8)v7 >> 2) & 1));
          gPowerState = gPowerState & 0xFFFFFFFD | (2 * (v7 >> 31));
          gPowerState = gPowerState & 0xFFFFFFF7 | (8 * (v7 & 1));
          dword_1C011BBD8 = v5;
          dword_1C011BBDC = v6;
          dword_1C011BBE0 = v7;
          gPowerState = gPowerState & 0xFFFFFFEF | (16 * (((unsigned __int8)v7 >> 1) & 1));
          if ( (gPowerState & 4) != 0 )
            dword_1C011BBB4 = 40;
          if ( (gPowerState & 2) != 0 )
            dword_1C011BBB4 = 9;
          if ( Event )
            KeSetEvent(Event, 1, 0);
          if ( !v3 )
            goto LABEL_12;
          goto LABEL_24;
        }
      }
      else if ( (gPowerState & 1) == 0 )
      {
        goto LABEL_15;
      }
      v2 = -1073741811;
LABEL_24:
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
      return v2;
    }
    return 3221225473LL;
  }
}
