/*
 * XREFs of PsEnumProcesses @ 0x1404993EC
 * Callers:
 *     EtwpDisableTraceProviders @ 0x14040A3AC (EtwpDisableTraceProviders.c)
 *     EtwpProcessThreadImageRundown @ 0x140499274 (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x14056AAC4 (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x1405729E0 (PfTStart.c)
 *     PsShutdownSystem @ 0x14067F928 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x1406A7E54 (EtwpPsProvCaptureState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcess @ 0x1404EBF8C (PsGetNextProcess.c)
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
