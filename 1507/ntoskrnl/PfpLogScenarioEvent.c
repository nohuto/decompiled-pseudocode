/*
 * XREFs of PfpLogScenarioEvent @ 0x1405667B8
 * Callers:
 *     PfPowerActionNotify @ 0x1403EE01C (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x140582300 (PfpProcessScenarioPhase.c)
 * Callees:
 *     PfLogEvent @ 0x14001AB30 (PfLogEvent.c)
 *     PfTSetTraceWorkerPriority @ 0x1401489E0 (PfTSetTraceWorkerPriority.c)
 *     MmPerformMemoryListCommand @ 0x1403F6CF4 (MmPerformMemoryListCommand.c)
 *     PfGenerateTrace @ 0x1405668C4 (PfGenerateTrace.c)
 */

__int64 __fastcall PfpLogScenarioEvent(int a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  unsigned __int16 v6; // di
  char v7; // bp
  char v8; // si
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  signed int v12; // r14d
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  MmPerformMemoryListCommand(1LL, a2, a3, a4);
  v12 = PfTSetTraceWorkerPriority(0x10u, v9, v10, v11);
  PfGenerateTrace(&Thread, 1LL);
  v17[0] = v5;
  v17[1] = v8 & 3 | (4 * (v6 | ((unsigned __int8)(v7 & 3) << 16)));
  result = PfLogEvent(
             27,
             dword_1403534CC
           + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                           + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
             v17,
             0x10u);
  if ( (a5 & 1) != 0 )
    result = PfGenerateTrace(&Thread, 0LL);
  if ( v12 <= 31 )
    return PfTSetTraceWorkerPriority(v12, v14, v15, v16);
  return result;
}
