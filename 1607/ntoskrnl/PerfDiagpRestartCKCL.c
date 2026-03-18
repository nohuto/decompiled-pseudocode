/*
 * XREFs of PerfDiagpRestartCKCL @ 0x1404DFE68
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1404DFB10 (PerfDiagpProxyWorker.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     PerfDiagpIsTracingAllowed @ 0x1404DFD68 (PerfDiagpIsTracingAllowed.c)
 *     EtwStartAutoLogger @ 0x1404E0034 (EtwStartAutoLogger.c)
 */

__int64 __fastcall PerfDiagpRestartCKCL(NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  while ( 1 )
  {
    Interval.QuadPart = -500000LL * ++v2;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( !PerfDiagpIsTracingAllowed() )
      break;
    wcscpy(&xmmword_1402FDBAC, L"Circular Kernel Context Logger");
    result = EtwStartAutoLogger(&xmmword_1402FDBAC, pszSrc);
    if ( (_DWORD)result != -1073741771 || v2 >= 0x14 )
      return result;
  }
  return 3221225473LL;
}
