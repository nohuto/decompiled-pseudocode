/*
 * XREFs of SqmPowerState @ 0x1C0079410
 * Callers:
 *     UserPowerInfoCallout @ 0x1C000517C (UserPowerInfoCallout.c)
 *     PowerOnMonitor @ 0x1C000A210 (PowerOnMonitor.c)
 *     PowerUnDimMonitor @ 0x1C000A57C (PowerUnDimMonitor.c)
 *     PowerOffMonitor @ 0x1C006A170 (PowerOffMonitor.c)
 *     SetProtocolType @ 0x1C0079380 (SetProtocolType.c)
 *     PowerDimMonitor @ 0x1C00A5298 (PowerDimMonitor.c)
 * Callees:
 *     WinSqmIncrementDWORD @ 0x1C0066F00 (WinSqmIncrementDWORD.c)
 */

__int64 SqmPowerState()
{
  unsigned int v0; // ebx
  unsigned int v1; // r9d
  unsigned int v2; // edi
  unsigned int v3; // esi
  __int64 result; // rax

  v0 = 0;
  if ( dword_1C00FFFC0 )
  {
    v1 = 4014;
    if ( gPowerTransitionsState )
    {
      v2 = 4011;
      if ( dword_1C00FFF88 == 2 )
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
      if ( dword_1C00FFF88 == 2 )
        v0 = 4120;
    }
    else
    {
      v2 = 4010;
    }
  }
  v3 = ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
      - dword_1C00FFFD4)
     / 0x3E8;
  WinSqmIncrementDWORD(0LL, v1, v3);
  WinSqmIncrementDWORD(0LL, v2, v3);
  if ( v0 - 4119 <= 1 )
    WinSqmIncrementDWORD(0LL, v0, v3);
  result = MEMORY[0xFFFFF78000000320];
  dword_1C00FFFD4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  return result;
}
