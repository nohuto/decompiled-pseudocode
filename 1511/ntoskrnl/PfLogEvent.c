/*
 * XREFs of PfLogEvent @ 0x14001BBB0
 * Callers:
 *     PfpLogApplicationEvent @ 0x14001B76C (PfpLogApplicationEvent.c)
 *     PfLogForegroundProcess @ 0x14001B950 (PfLogForegroundProcess.c)
 *     PfpRpLogDeprioEvent @ 0x14001BA34 (PfpRpLogDeprioEvent.c)
 *     PfFileInfoNotify @ 0x14006E310 (PfFileInfoNotify.c)
 *     PfHardFaultLog @ 0x1400DF278 (PfHardFaultLog.c)
 *     PfLogFileDataAccess @ 0x140116508 (PfLogFileDataAccess.c)
 *     PfPowerActionNotify @ 0x1403A46FC (PfPowerActionNotify.c)
 *     PfpPowerActionStartScenarioTracing @ 0x1403A56C8 (PfpPowerActionStartScenarioTracing.c)
 *     PfpLogEventRequest @ 0x1404F7A38 (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x1404F7B2C (PfpLogScenarioEvent.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x14001BC98 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14001BD60 (PfFbLogEntryComplete.c)
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  __int16 v8; // bx
  int v9; // edi

  v8 = (a4 + 31) & 0xFFF0;
  v9 = PfFbLogEntryReserve(&stru_1403025E0);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140302790 + 1, 1u);
  }
  else
  {
    MEMORY[0] = MEMORY[0] & 0xFFFFFFFFFFFFF003uLL | (((v8 + 15) & 0x3FF0 | 0x8000CuLL) >> 2);
    MEMORY[8] = a2;
    MEMORY[0] ^= (MEMORY[0] ^ (a1 << 12)) & 0x1F000;
    memmove((void *)0x10, a3, a4);
    PfFbLogEntryComplete(0LL);
    return 0;
  }
  return (unsigned int)v9;
}
