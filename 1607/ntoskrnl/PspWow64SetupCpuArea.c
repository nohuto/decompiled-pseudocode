/*
 * XREFs of PspWow64SetupCpuArea @ 0x1404FD98C
 * Callers:
 *     PspSetupUserStack @ 0x1404EE8C4 (PspSetupUserStack.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x1400F271C (RtlpGetLegacyContextLength.c)
 *     RtlpArchContextFlagFromMachine @ 0x1404FBC80 (RtlpArchContextFlagFromMachine.c)
 *     PsWow64GetProcessMachine @ 0x1404FDDF0 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall PspWow64SetupCpuArea(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int16 ProcessMachine; // ax
  int v4; // eax
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF
  int v7; // [rsp+48h] [rbp+20h] BYREF

  ProcessMachine = PsWow64GetProcessMachine(a2);
  v4 = RtlpArchContextFlagFromMachine(ProcessMachine);
  if ( !v4 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v4, (int *)&v6, &v7);
  *a1 = (((unsigned int)~(v7 - 1) & (((*a1 - 8) & 0xFFFFFFFFFFFFFFF8uLL) - v6)) - 4) & 0xFFFFFFFFFFFFFFF0uLL;
  return 0LL;
}
