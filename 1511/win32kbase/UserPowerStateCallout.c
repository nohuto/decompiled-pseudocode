/*
 * XREFs of UserPowerStateCallout @ 0x1C000B158
 * Callers:
 *     W32CalloutDispatch @ 0x1C000C060 (W32CalloutDispatch.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C000BF30 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C007E0BC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C007E4F8 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 */

__int64 __fastcall UserPowerStateCallout(char *a1)
{
  int v1; // esi
  unsigned int v2; // ebx
  char v3; // bp
  int v5; // r15d
  int v6; // r12d
  unsigned int v7; // r14d
  __int64 v8; // rdx
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF

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
      v10[1] = gPendingMonitorOnReason;
      v10[0] = 4LL;
      gPendingMonitorOnReason = 0;
      QueuePowerRequest(v10, 0LL);
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
                dword_1C01047EC = *((_DWORD *)a1 + 5);
LABEL_12:
              dword_1C01047E8 = v1;
              ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
              LOBYTE(v8) = 1;
              return QueuePowerRequest(0LL, v8);
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
          dword_1C01047D8 = v5;
          dword_1C01047DC = v6;
          dword_1C01047E0 = v7;
          gPowerState = gPowerState & 0xFFFFFFEF | (16 * (((unsigned __int8)v7 >> 1) & 1));
          if ( (gPowerState & 4) != 0 )
            dword_1C01047B4 = 40;
          if ( (gPowerState & 2) != 0 )
            dword_1C01047B4 = 9;
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
