/*
 * XREFs of UserPowerStateCallout @ 0x1C0007814
 * Callers:
 *     W32CalloutDispatch @ 0x1C00045B0 (W32CalloutDispatch.c)
 * Callees:
 *     QueuePowerRequest @ 0x1C0007A70 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0007B9C (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0007DB4 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
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
  __int64 v9; // r8
  __int64 v11; // r8
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

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
      v12[1] = gPendingMonitorOnReason;
      v12[0] = 4LL;
      gPendingMonitorOnReason = 0;
      QueuePowerRequest(v12, 0LL, v11);
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
                dword_1C00FFE7C = *((_DWORD *)a1 + 5);
LABEL_12:
              dword_1C00FFE78 = v1;
              ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
              LOBYTE(v8) = 1;
              return QueuePowerRequest(0LL, v8, v9);
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
          dword_1C00FFE68 = v5;
          dword_1C00FFE6C = v6;
          dword_1C00FFE70 = v7;
          gPowerState = gPowerState & 0xFFFFFFEF | (16 * (((unsigned __int8)v7 >> 1) & 1));
          if ( (gPowerState & 4) != 0 )
            dword_1C00FFE44 = 40;
          if ( (gPowerState & 2) != 0 )
            dword_1C00FFE44 = 9;
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
