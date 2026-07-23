/*
 * XREFs of PfPowerActionNotify @ 0x1403CFF90
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopDispatchSuperfetchNotification @ 0x1405303B4 (PopDispatchSuperfetchNotification.c)
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 *     PfIoPowerEventNotify @ 0x140530C88 (PfIoPowerEventNotify.c)
 *     PfpProcessScenarioPhase @ 0x140545928 (PfpProcessScenarioPhase.c)
 * Callees:
 *     PfLogEvent @ 0x1400EE5B8 (PfLogEvent.c)
 *     PfTSetTraceWorkerPriority @ 0x140114A84 (PfTSetTraceWorkerPriority.c)
 *     PfpServiceMainThreadUnboost @ 0x140114B20 (PfpServiceMainThreadUnboost.c)
 *     PfpScenCtxPrefetchWait @ 0x1403D02EC (PfpScenCtxPrefetchWait.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1403D03E4 (PfpStartLoggingHardFaultEvents.c)
 *     PfpPowerActionStartScenarioTracing @ 0x1403D049C (PfpPowerActionStartScenarioTracing.c)
 *     PfpScenCtxScenarioSet @ 0x1403D2AF4 (PfpScenCtxScenarioSet.c)
 *     MmPerformMemoryListCommand @ 0x1403D2CFC (MmPerformMemoryListCommand.c)
 *     PfSnBeginBootPhase @ 0x1403D3020 (PfSnBeginBootPhase.c)
 *     PfpLogScenarioEvent @ 0x140530158 (PfpLogScenarioEvent.c)
 *     PfGenerateTrace @ 0x140530264 (PfGenerateTrace.c)
 */

__int64 __fastcall PfPowerActionNotify(int a1, char a2, int a3)
{
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  signed int v6; // esi
  int v7; // [rsp+58h] [rbp+20h] BYREF
  int v8; // [rsp+5Ch] [rbp+24h]

  v8 = 0;
  v7 = 2 * a1;
  if ( (a2 & 1) != 0 )
    v7 = (2 * a1) | 1;
  if ( a1 )
  {
    v3 = a1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 5 && (unsigned int)(a3 - 2) <= 2 )
          PfpLogScenarioEvent(1, 2, 1, dword_1403285D4, 0);
LABEL_7:
        v8 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
           + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        return PfLogEvent(
                 28,
                 dword_14032859C
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                               + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
                 &v7,
                 8u);
      }
      PfpPowerActionStartScenarioTracing(&qword_1403285A0);
      if ( dword_1403285D0 == 5 )
        PfSnBeginBootPhase(4LL);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_1403285A0);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_1403285A0);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_1403285A0);
      result = PfpStartLoggingHardFaultEvents();
      if ( (int)result >= 0 )
        goto LABEL_7;
    }
    else
    {
      result = (unsigned int)(a3 - 2);
      if ( (unsigned int)result <= 3 )
      {
        MmPerformMemoryListCommand(1LL);
        v6 = PfTSetTraceWorkerPriority(0x10u);
        PfGenerateTrace(&Thread, 1LL);
        if ( v6 <= 31 )
          PfTSetTraceWorkerPriority(v6);
        v8 = PfpScenCtxPrefetchWait((ULONG_PTR)&qword_1403285A0);
        PfpServiceMainThreadUnboost(0LL);
        return PfLogEvent(
                 28,
                 dword_14032859C
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                               + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
                 &v7,
                 8u);
      }
    }
  }
  else
  {
    result = (unsigned int)(a3 - 2);
    if ( (unsigned int)result <= 2 || a3 == 5 )
      return PfpScenCtxScenarioSet((ULONG_PTR)&qword_1403285A0);
  }
  return result;
}
