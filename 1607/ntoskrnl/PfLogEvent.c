/*
 * XREFs of PfLogEvent @ 0x1400EE5B8
 * Callers:
 *     PfpRpLogDeprioEvent @ 0x140006594 (PfpRpLogDeprioEvent.c)
 *     PfpLogApplicationEvent @ 0x140006674 (PfpLogApplicationEvent.c)
 *     PfHardFaultLog @ 0x14009DDA0 (PfHardFaultLog.c)
 *     PfLogForegroundProcess @ 0x1400A6C5C (PfLogForegroundProcess.c)
 *     PfFileInfoNotify @ 0x1400EC950 (PfFileInfoNotify.c)
 *     PfLogFileDataAccess @ 0x1401FECFC (PfLogFileDataAccess.c)
 *     PfPowerActionNotify @ 0x1403CFF90 (PfPowerActionNotify.c)
 *     PfpPowerActionStartScenarioTracing @ 0x1403D049C (PfpPowerActionStartScenarioTracing.c)
 *     PfpLogEventRequest @ 0x140530084 (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x140530158 (PfpLogScenarioEvent.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x1400D1CA4 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x1400EDE54 (PfFbLogEntryComplete.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // edi
  unsigned __int64 *v11; // rdx
  __int64 v12; // rdx
  PSLIST_ENTRY ListEntry; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 *v15; // [rsp+28h] [rbp-20h] BYREF

  ListEntry = 0LL;
  v15 = 0LL;
  v8 = (a4 + 31) & 0xFFFFFFF0;
  v10 = PfFbLogEntryReserve(&stru_1403281A0, &ListEntry, &v15, v8);
  if ( v10 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140328350 + 1, 1u);
    if ( ListEntry )
      PfFbLogEntryComplete(ListEntry, v9, 0LL);
  }
  else
  {
    v11 = v15;
    *v15 = *v15 & 0xFFFFFFFFFFFFF003uLL | ((((_WORD)v8 + 15) & 0x3FF0 | 0x8000CuLL) >> 2);
    *((_DWORD *)v11 + 2) = a2;
    *v11 ^= (*(_DWORD *)v11 ^ (a1 << 12)) & 0x1F000;
    memmove(v11 + 2, a3, a4);
    PfFbLogEntryComplete(ListEntry, v12, v8);
    return 0;
  }
  return (unsigned int)v10;
}
