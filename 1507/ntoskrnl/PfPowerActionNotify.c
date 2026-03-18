/*
 * XREFs of PfPowerActionNotify @ 0x1403EE01C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 *     PfIoPowerEventNotify @ 0x140566798 (PfIoPowerEventNotify.c)
 *     PfpProcessScenarioPhase @ 0x140582300 (PfpProcessScenarioPhase.c)
 * Callees:
 *     PfLogEvent @ 0x14001AB30 (PfLogEvent.c)
 *     PfTSetTraceWorkerPriority @ 0x1401489E0 (PfTSetTraceWorkerPriority.c)
 *     PfpServiceMainThreadUnboost @ 0x140148AD0 (PfpServiceMainThreadUnboost.c)
 *     PfpScenCtxPrefetchWait @ 0x1403EED74 (PfpScenCtxPrefetchWait.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1403EEE9C (PfpStartLoggingHardFaultEvents.c)
 *     PfpPowerActionStartScenarioTracing @ 0x1403EEF80 (PfpPowerActionStartScenarioTracing.c)
 *     PfpScenCtxScenarioSet @ 0x1403F69DC (PfpScenCtxScenarioSet.c)
 *     MmPerformMemoryListCommand @ 0x1403F6CF4 (MmPerformMemoryListCommand.c)
 *     PfSnBeginBootPhase @ 0x1403F6FE8 (PfSnBeginBootPhase.c)
 *     PfpLogScenarioEvent @ 0x1405667B8 (PfpLogScenarioEvent.c)
 *     PfGenerateTrace @ 0x1405668C4 (PfGenerateTrace.c)
 */

__int64 __fastcall PfPowerActionNotify(int a1, char a2, int a3)
{
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  signed int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+58h] [rbp+20h] BYREF
  int v14; // [rsp+5Ch] [rbp+24h]

  v14 = 0;
  v13 = 2 * a1;
  if ( (a2 & 1) != 0 )
    v13 = (2 * a1) | 1;
  if ( a1 )
  {
    v3 = a1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 5 && (unsigned int)(a3 - 2) <= 2 )
          PfpLogScenarioEvent(1, 2, 1, dword_140353504, 0);
LABEL_7:
        v14 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        return PfLogEvent(
                 28,
                 dword_1403534CC
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                               + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
                 &v13,
                 8u);
      }
      PfpPowerActionStartScenarioTracing(&qword_1403534D0);
      if ( dword_140353500 == 5 )
        PfSnBeginBootPhase(4LL);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_1403534D0);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_1403534D0);
      PfpScenCtxScenarioSet((ULONG_PTR)&qword_1403534D0);
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
        v9 = PfTSetTraceWorkerPriority(0x10u, v6, v7, v8);
        PfGenerateTrace(&Thread, 1LL);
        if ( v9 <= 31 )
          PfTSetTraceWorkerPriority(v9, v10, v11, v12);
        v14 = PfpScenCtxPrefetchWait((ULONG_PTR)&qword_1403534D0);
        PfpServiceMainThreadUnboost(0LL);
        return PfLogEvent(
                 28,
                 dword_1403534CC
               + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                               + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
                 &v13,
                 8u);
      }
    }
  }
  else
  {
    result = (unsigned int)(a3 - 2);
    if ( (unsigned int)result <= 2 || a3 == 5 )
      return PfpScenCtxScenarioSet((ULONG_PTR)&qword_1403534D0);
  }
  return result;
}
