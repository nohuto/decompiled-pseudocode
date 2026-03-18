/*
 * XREFs of PsEnumProcesses @ 0x14041C0E4
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1404D18CC (EtwpDisableTraceProviders.c)
 *     EtwpProcessThreadImageRundown @ 0x14054B004 (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x1405B0EA0 (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x1405B6200 (PfTStart.c)
 *     PsShutdownSystem @ 0x1406C39F0 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x1406E9468 (EtwpPsProvCaptureState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 */

__int64 __fastcall PsEnumProcesses(__int64 (__fastcall *a1)(__int64, __int64), __int64 a2)
{
  void *v4; // rcx
  __int64 NextProcess; // rax
  void *v6; // rbx
  int v7; // edi

  v4 = 0LL;
  while ( 1 )
  {
    NextProcess = PsGetNextProcess(v4);
    v6 = (void *)NextProcess;
    if ( !NextProcess )
      break;
    v7 = a1(NextProcess, a2);
    v4 = v6;
    if ( v7 < 0 )
    {
      ObfDereferenceObjectWithTag(v6, 0x6E457350u);
      return (unsigned int)v7;
    }
  }
  return 0LL;
}
