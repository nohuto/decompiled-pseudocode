/*
 * XREFs of PerfDiagpRestartCKCL @ 0x1404C346C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1404C3114 (PerfDiagpProxyWorker.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     PerfDiagpIsTracingAllowed @ 0x1404C336C (PerfDiagpIsTracingAllowed.c)
 *     EtwStartAutoLogger @ 0x1404C3638 (EtwStartAutoLogger.c)
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
    wcscpy(&xmmword_1402FDB8C, L"Circular Kernel Context Logger");
    result = EtwStartAutoLogger(&xmmword_1402FDB8C, pszSrc);
    if ( (_DWORD)result != -1073741771 || v2 >= 0x14 )
      return result;
  }
  return 3221225473LL;
}
