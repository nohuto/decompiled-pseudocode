/*
 * XREFs of PerfDiagpRestartCKCL @ 0x140558A0C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140558690 (PerfDiagpProxyWorker.c)
 * Callees:
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpStartAutoLogger @ 0x1404A887C (EtwpStartAutoLogger.c)
 *     PerfDiagpIsTracingAllowed @ 0x14055890C (PerfDiagpIsTracingAllowed.c)
 */

__int64 __fastcall PerfDiagpRestartCKCL(NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned int v2; // ebx
  __int64 v3; // r9
  unsigned int started; // edi
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  LARGE_INTEGER Interval; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  while ( 1 )
  {
    Interval.QuadPart = -500000LL * ++v2;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( !PerfDiagpIsTracingAllowed() )
      break;
    wcscpy(&xmmword_14032B1EC, L"Circular Kernel Context Logger");
    PsGetMonitorContextServerSilo(EtwSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v7, v3);
    started = EtwpStartAutoLogger(&xmmword_14032B1EC, pszSrc, &v6, v7);
    PsDereferenceMonitorContextServerSilo(v7);
    if ( started != -1073741771 || v2 >= 0x14 )
      return started;
  }
  return (unsigned int)-1073741823;
}
