/*
 * XREFs of PfpPowerActionStartScenarioTracing @ 0x1403A56C8
 * Callers:
 *     PfPowerActionNotify @ 0x1403A46FC (PfPowerActionNotify.c)
 * Callees:
 *     PfLogEvent @ 0x14001BBB0 (PfLogEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PfTAccessTracingCleanup @ 0x1403A57AC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x1403A5E98 (PfTAccessTracingStart.c)
 *     MmPerformMemoryListCommand @ 0x1403A5F50 (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall PfpPowerActionStartScenarioTracing(__int64 a1)
{
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]

  PfTAccessTracingCleanup(&PfTGlobals, &PfKernelGlobals, 4LL);
  MmPerformMemoryListCommand(1LL);
  PfTAccessTracingStart(&PfTGlobals, &PfKernelGlobals, 4LL);
  v4 = 0LL;
  v3 = *(int *)(a1 + 48);
  LODWORD(v4) = 4 * (unsigned __int16)*(_DWORD *)(a1 + 52);
  return PfLogEvent(
           27,
           dword_14030575C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           &v3,
           0x10u);
}
