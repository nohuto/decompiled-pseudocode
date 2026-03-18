/*
 * XREFs of PfPowerActionNotify @ 0x1403A46FC
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 *     PfIoPowerEventNotify @ 0x1404F7B0C (PfIoPowerEventNotify.c)
 *     PfpProcessScenarioPhase @ 0x14050B304 (PfpProcessScenarioPhase.c)
 * Callees:
 *     PfLogEvent @ 0x14001BBB0 (PfLogEvent.c)
 *     PfTSetTraceWorkerPriority @ 0x14011A384 (PfTSetTraceWorkerPriority.c)
 *     PfpServiceMainThreadUnboost @ 0x14011A3FC (PfpServiceMainThreadUnboost.c)
 *     PfpScenCtxPrefetchWait @ 0x1403A5454 (PfpScenCtxPrefetchWait.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1403A5618 (PfpStartLoggingHardFaultEvents.c)
 *     PfpPowerActionStartScenarioTracing @ 0x1403A56C8 (PfpPowerActionStartScenarioTracing.c)
 *     MmPerformMemoryListCommand @ 0x1403A5F50 (MmPerformMemoryListCommand.c)
 *     PfpScenCtxScenarioSet @ 0x1403A6580 (PfpScenCtxScenarioSet.c)
 *     PfSnBeginBootPhase @ 0x1403A6AC8 (PfSnBeginBootPhase.c)
 *     PfpLogScenarioEvent @ 0x1404F7B2C (PfpLogScenarioEvent.c)
 *     PfGenerateTrace @ 0x1404F7C3C (PfGenerateTrace.c)
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
          PfpLogScenarioEvent(1, 2, 1, dword_140305794, 0);
LABEL_7:
        v8 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
           + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        return PfLogEvent(
                 28,
                 dword_14030575C
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                               + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
                 &v7,
                 8u);
      }
      PfpPowerActionStartScenarioTracing(&qword_140305760);
      if ( dword_140305790 == 5 )
        PfSnBeginBootPhase(4LL);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140305760);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140305760);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_140305760);
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
        v8 = PfpScenCtxPrefetchWait((ULONG_PTR)&qword_140305760);
        PfpServiceMainThreadUnboost(0LL);
        return PfLogEvent(
                 28,
                 dword_14030575C
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
      return PfpScenCtxScenarioSet((ULONG_PTR)&qword_140305760);
  }
  return result;
}
