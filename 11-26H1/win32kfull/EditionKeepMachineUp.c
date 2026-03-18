/*
 * XREFs of EditionKeepMachineUp @ 0x14019B480
 * Callers:
 *     <none>
 * Callees:
 *     ?KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x14019B600 (-KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 */

__int64 __fastcall EditionKeepMachineUp(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  enum POWER_MONITOR_REQUEST_REASON v8; // ecx
  int v9; // ebx
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rbx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  __int128 v20; // [rsp+20h] [rbp-28h] BYREF
  __int128 v21; // [rsp+30h] [rbp-18h]

  v5 = a2;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 19112) || (a4 & 8) == 0 )
  {
    v7 = *(_DWORD **)(W32GetUserSessionState(v7, v6) + 19904);
    if ( (*v7 & 0x4000) == 0 || (a4 & 2) != 0 )
    {
      v8 = MonitorRequestReasonUserInput;
      if ( v5 > 11 )
      {
        v15 = v5 - 13;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 2;
            if ( v17 )
            {
              if ( v17 == 1 )
                v8 = MonitorRequestReasonUserInputTouch;
            }
            else
            {
              v8 = MonitorRequestReasonUserInputAccelerometer;
            }
          }
          else
          {
            v8 = MonitorRequestReasonUserInputInitialization;
          }
        }
        else
        {
          v8 = MonitorRequestReasonUserInputPen;
        }
      }
      else if ( v5 == 11 )
      {
        v8 = MonitorRequestReasonUserInputSessionSwitch|MonitorRequestReasonBatteryCountChange;
      }
      else
      {
        v9 = v5 - 1;
        if ( v9 )
        {
          v10 = v9 - 2;
          if ( v10 )
          {
            v18 = v10 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                if ( v19 == 4 )
                  v8 = MonitorRequestReasonUserInputSessionSwitch;
              }
              else
              {
                v8 = MonitorRequestReasonUserInputPoUserPresent;
              }
            }
            else
            {
              v8 = MonitorRequestReasonUserInputHid;
            }
          }
          else
          {
            v8 = MonitorRequestReasonUserInputMouse;
          }
        }
        else
        {
          v8 = MonitorRequestReasonUserInputKeyboard;
        }
      }
      KeepMachineUp(v8);
    }
  }
  UserSessionState = W32GetUserSessionState(v7, v6);
  if ( *(_DWORD *)(UserSessionState + 2736)
    && ((**(_DWORD **)(W32GetUserSessionState(v12, v11) + 19904) & 0x4000) == 0 || (a4 & 2) != 0) )
  {
    *(_DWORD *)(UserSessionState + 2736) = 0;
    v21 = 0LL;
    LODWORD(v21) = 8;
    v20 = 0LL;
    QueuePowerRequest(&v20, 0LL);
  }
  return 1LL;
}
