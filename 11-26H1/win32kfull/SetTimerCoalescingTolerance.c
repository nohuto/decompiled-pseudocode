/*
 * XREFs of SetTimerCoalescingTolerance @ 0x14019B750
 * Callers:
 *     ?KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x14019B600 (-KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     InitTimerCoalescing @ 0x1402A7FA0 (InitTimerCoalescing.c)
 * Callees:
 *     IsCurrentSessionServiceSession @ 0x1400FC60C (IsCurrentSessionServiceSession.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x14019B840 (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 */

__int64 __fastcall SetTimerCoalescingTolerance(int a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx

  v1 = a1;
  v2 = IsCurrentSessionServiceSession();
  result = W32GetUserSessionState(v4, v3);
  v6 = (unsigned int)-v2;
  *(_DWORD *)(result + 62772) = v1;
  v7 = *(unsigned int *)(result + 4 * (v1 + (-(__int64)(v2 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 1305) + 57536);
  *(_DWORD *)(result + 62732) = v7;
  if ( !v2 )
  {
    if ( !(_DWORD)v1 )
    {
      *(_DWORD *)(result + 62696) = 0;
      v8 = 1LL;
      return ConfigureRITDelayableTimers(v8);
    }
    v9 = 2;
    v10 = v1 - 2;
    if ( !v10 )
    {
      *(_DWORD *)(result + 62696) |= 1u;
      if ( (*(_DWORD *)(result + 62696) & 2) == 0
        && *(int *)(W32GetUserSessionState(v7, v6) + 62808) > 0
        && (*(_DWORD *)(W32GetUserSessionState(v12, v11) + 66092)
         || (**(_DWORD **)(W32GetUserSessionState(v14, v13) + 19904) & 0x200) != 0) )
      {
        v9 = 1;
      }
      goto LABEL_9;
    }
    if ( v10 == 1 )
    {
      *(_DWORD *)(result + 62696) |= 2u;
      result = *(unsigned int *)(result + 62696);
      if ( (result & 1) != 0 )
      {
LABEL_9:
        v8 = v9;
        return ConfigureRITDelayableTimers(v8);
      }
    }
  }
  return result;
}
