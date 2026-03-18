/*
 * XREFs of PfpPowerActionStartScenarioTracing @ 0x1403EEF80
 * Callers:
 *     PfPowerActionNotify @ 0x1403EE01C (PfPowerActionNotify.c)
 * Callees:
 *     PfLogEvent @ 0x14001AB30 (PfLogEvent.c)
 *     PfTAccessTracingStart @ 0x1403EBE7C (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x1403EBF78 (PfTAccessTracingCleanup.c)
 *     MmPerformMemoryListCommand @ 0x1403F6CF4 (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall PfpPowerActionStartScenarioTracing(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r9
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  PfTAccessTracingCleanup((__int64)&PfTGlobals, a2, 4, a4);
  MmPerformMemoryListCommand(1LL);
  PfTAccessTracingStart((__int64)&PfTGlobals, (__int64)&PfKernelGlobals, 4, v5);
  v8 = 0LL;
  v7 = *(int *)(a1 + 48);
  LODWORD(v8) = 4 * (unsigned __int16)*(_DWORD *)(a1 + 52);
  return PfLogEvent(
           27,
           dword_1403534CC
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           &v7,
           0x10u);
}
