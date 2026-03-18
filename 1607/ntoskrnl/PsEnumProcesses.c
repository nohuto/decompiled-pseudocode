/*
 * XREFs of PsEnumProcesses @ 0x14049895C
 * Callers:
 *     EtwpDisableTraceProviders @ 0x14040B4EC (EtwpDisableTraceProviders.c)
 *     EtwpProcessThreadImageRundown @ 0x1404987E4 (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x14056A584 (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x1405724A0 (PfTStart.c)
 *     PsShutdownSystem @ 0x14067F844 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x1406A7D1C (EtwpPsProvCaptureState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcess @ 0x140508FFC (PsGetNextProcess.c)
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
