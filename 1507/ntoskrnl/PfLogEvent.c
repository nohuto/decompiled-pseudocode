/*
 * XREFs of PfLogEvent @ 0x14001AB30
 * Callers:
 *     PfpLogApplicationEvent @ 0x14001A7CC (PfpLogApplicationEvent.c)
 *     PfLogForegroundProcess @ 0x14001A9B8 (PfLogForegroundProcess.c)
 *     PfHardFaultLog @ 0x140083758 (PfHardFaultLog.c)
 *     PfFileInfoNotify @ 0x1400B82A0 (PfFileInfoNotify.c)
 *     PfLogFileDataAccess @ 0x140233574 (PfLogFileDataAccess.c)
 *     PfPowerActionNotify @ 0x1403EE01C (PfPowerActionNotify.c)
 *     PfpPowerActionStartScenarioTracing @ 0x1403EEF80 (PfpPowerActionStartScenarioTracing.c)
 *     PfCheckDeprioritizeFile @ 0x140443ABC (PfCheckDeprioritizeFile.c)
 *     PfpLogEventRequest @ 0x1405666C4 (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x1405667B8 (PfpLogScenarioEvent.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x14001AC18 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14001ACF0 (PfFbLogEntryComplete.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  __int16 v8; // bx
  int v9; // edi

  v8 = (a4 + 31) & 0xFFF0;
  v9 = PfFbLogEntryReserve(&RunRef);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140350510 + 1, 1u);
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
