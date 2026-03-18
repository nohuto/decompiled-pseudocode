/*
 * XREFs of PfpLogScenarioEvent @ 0x1404F7B2C
 * Callers:
 *     PfPowerActionNotify @ 0x1403A46FC (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x14050B304 (PfpProcessScenarioPhase.c)
 * Callees:
 *     PfLogEvent @ 0x14001BBB0 (PfLogEvent.c)
 *     PfTSetTraceWorkerPriority @ 0x14011A384 (PfTSetTraceWorkerPriority.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MmPerformMemoryListCommand @ 0x1403A5F50 (MmPerformMemoryListCommand.c)
 *     PfGenerateTrace @ 0x1404F7C3C (PfGenerateTrace.c)
 */

__int64 __fastcall PfpLogScenarioEvent(int a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  unsigned __int16 v6; // di
  char v7; // bp
  char v8; // si
  signed int v9; // r14d
  __int64 result; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  MmPerformMemoryListCommand(1LL, a2, a3, a4);
  v9 = PfTSetTraceWorkerPriority(0x10u);
  PfGenerateTrace(&Thread, 1LL);
  v11[0] = v5;
  v11[1] = v8 & 3 | (4 * (v6 | ((unsigned __int8)(v7 & 3) << 16)));
  result = PfLogEvent(
             27,
             dword_14030575C
           + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                           + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
             v11,
             0x10u);
  if ( (a5 & 1) != 0 )
    result = PfGenerateTrace(&Thread, 0LL);
  if ( v9 <= 31 )
    return PfTSetTraceWorkerPriority(v9);
  return result;
}
