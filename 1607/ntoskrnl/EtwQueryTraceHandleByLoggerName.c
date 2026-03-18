/*
 * XREFs of EtwQueryTraceHandleByLoggerName @ 0x1404E4110
 * Callers:
 *     WdipSemGetLoggerIds @ 0x1404E4090 (WdipSemGetLoggerIds.c)
 *     WmiQueryTraceInformation @ 0x1404E4534 (WmiQueryTraceInformation.c)
 *     IopErrorLogThread @ 0x1405426F4 (IopErrorLogThread.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14008C610 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14048FAF0 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpReleaseLoggerContext @ 0x140490180 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwQueryTraceHandleByLoggerName(__int64 a1, _QWORD *a2)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  const UNICODE_STRING *v4; // rdx
  unsigned int *v5; // rax
  __int16 v6; // cx

  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 || !a2 )
    return 3221225485LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v5 = (unsigned int *)EtwpAcquireLoggerContextByLoggerName(CurrentServerSiloGlobals[106], v4, 0);
  if ( !v5 )
    return 3221226134LL;
  *a2 = 0LL;
  if ( *v5 )
    v6 = *(_WORD *)v5;
  else
    v6 = -1;
  *(_WORD *)a2 = v6;
  EtwpReleaseLoggerContext(v5, 0);
  return 0LL;
}
