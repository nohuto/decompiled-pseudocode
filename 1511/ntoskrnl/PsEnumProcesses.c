/*
 * XREFs of PsEnumProcesses @ 0x14050085C
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1404CCDA8 (EtwpDisableTraceProviders.c)
 *     EtwpProcessThreadImageRundown @ 0x14050074C (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x140537684 (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x14054CD4C (PfTStart.c)
 *     PsShutdownSystem @ 0x140641460 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x1406662B0 (EtwpPsProvCaptureState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcess @ 0x14044B810 (PsGetNextProcess.c)
 */

__int64 __fastcall PsEnumProcesses(__int64 (__fastcall *a1)(unsigned __int64, __int64), __int64 a2)
{
  _QWORD *v4; // rcx
  unsigned __int64 NextProcess; // rax
  _QWORD *v6; // rbx
  int v7; // edi

  v4 = 0LL;
  while ( 1 )
  {
    NextProcess = PsGetNextProcess(v4);
    v6 = (_QWORD *)NextProcess;
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
