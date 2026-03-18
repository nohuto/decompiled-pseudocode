/*
 * XREFs of PspWow64SetupCpuArea @ 0x140530E54
 * Callers:
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x1400206FC (RtlpGetLegacyContextLength.c)
 *     RtlpArchContextFlagFromMachine @ 0x140531A14 (RtlpArchContextFlagFromMachine.c)
 *     PspWowGetProcessMachine @ 0x140531A30 (PspWowGetProcessMachine.c)
 */

__int64 __fastcall PspWow64SetupCpuArea(__int64 a1, __int64 a2)
{
  unsigned __int16 ProcessMachine; // ax
  int v3; // eax
  unsigned __int64 *v4; // r10
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF
  int v7; // [rsp+48h] [rbp+20h] BYREF

  ProcessMachine = PspWowGetProcessMachine(a2);
  v3 = RtlpArchContextFlagFromMachine(ProcessMachine);
  if ( !v3 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v3, (int *)&v6, &v7);
  *v4 = (((unsigned int)~(v7 - 1) & (((*v4 - 8) & 0xFFFFFFFFFFFFFFF8uLL) - v6)) - 4) & 0xFFFFFFFFFFFFFFF0uLL;
  return 0LL;
}
