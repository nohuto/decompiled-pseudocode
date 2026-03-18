/*
 * XREFs of PerfDiagpRestartCKCL @ 0x1405086B0
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140508358 (PerfDiagpProxyWorker.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     PerfDiagpIsTracingAllowed @ 0x1405085B0 (PerfDiagpIsTracingAllowed.c)
 *     EtwpStartAutoLogger @ 0x14050889C (EtwpStartAutoLogger.c)
 */

__int64 __fastcall PerfDiagpRestartCKCL(NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned int v2; // edi
  __int64 SiloDriverState; // rbx
  unsigned int started; // esi
  LARGE_INTEGER Interval; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  while ( 1 )
  {
    Interval.QuadPart = -500000LL * ++v2;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( !PerfDiagpIsTracingAllowed() )
      break;
    wcscpy(&xmmword_1402DAE6C, L"Circular Kernel Context Logger");
    SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
    started = EtwpStartAutoLogger(&xmmword_1402DAE6C, pszSrc);
    PsDereferenceMonitorContextServerSilo(SiloDriverState);
    if ( started != -1073741771 || v2 >= 0x14 )
      return started;
  }
  return (unsigned int)-1073741823;
}
