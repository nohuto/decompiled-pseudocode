/*
 * XREFs of SqmPowerState @ 0x1C0070710
 * Callers:
 *     PowerOnMonitor @ 0x1C00700B0 (PowerOnMonitor.c)
 *     PowerUnDimMonitor @ 0x1C0070410 (PowerUnDimMonitor.c)
 *     SetProtocolType @ 0x1C00705B0 (SetProtocolType.c)
 *     UserPowerInfoCallout @ 0x1C0070B38 (UserPowerInfoCallout.c)
 *     PowerOffMonitor @ 0x1C0086340 (PowerOffMonitor.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B2178 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C00B2224 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     PowerDimMonitor @ 0x1C00B2EF0 (PowerDimMonitor.c)
 * Callees:
 *     WinSqmIncrementDWORD @ 0x1C00707F0 (WinSqmIncrementDWORD.c)
 */

__int64 SqmPowerState()
{
  unsigned int v0; // ebx
  unsigned int v1; // r9d
  unsigned int v2; // edi
  unsigned int v3; // esi
  __int64 result; // rax

  v0 = 0;
  if ( dword_1C011BB68 )
  {
    v1 = 4014;
    if ( gPowerTransitionsState )
    {
      v2 = 4011;
      if ( dword_1C011BB10 == 2 )
        v0 = 4119;
    }
    else
    {
      v2 = 4009;
    }
  }
  else
  {
    v1 = 4015;
    if ( gPowerTransitionsState )
    {
      v2 = 4012;
      if ( dword_1C011BB10 == 2 )
        v0 = 4120;
    }
    else
    {
      v2 = 4010;
    }
  }
  v3 = ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
      - dword_1C011BB7C)
     / 0x3E8;
  WinSqmIncrementDWORD(0LL, v1, v3);
  WinSqmIncrementDWORD(0LL, v2, v3);
  if ( v0 - 4119 <= 1 )
    WinSqmIncrementDWORD(0LL, v0, v3);
  result = MEMORY[0xFFFFF78000000320];
  dword_1C011BB7C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  return result;
}
