/*
 * XREFs of EtwQueryTraceHandleByLoggerName @ 0x1405522A8
 * Callers:
 *     WdipSemGetLoggerIds @ 0x140552228 (WdipSemGetLoggerIds.c)
 *     WmiQueryTraceInformation @ 0x1405526DC (WmiQueryTraceInformation.c)
 *     IopErrorLogThread @ 0x14057B2A4 (IopErrorLogThread.c)
 * Callees:
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404D41A4 (EtwpAcquireLoggerContextByLoggerName.c)
 */

__int64 __fastcall EtwQueryTraceHandleByLoggerName(const UNICODE_STRING *a1, _QWORD *a2)
{
  unsigned int *v3; // rax
  __int16 v4; // cx

  if ( !a1 || !a1->Buffer || !a1->Length || !a2 )
    return 3221225485LL;
  v3 = EtwpAcquireLoggerContextByLoggerName(a1, 0);
  if ( !v3 )
    return 3221226134LL;
  *a2 = 0LL;
  if ( *v3 )
    v4 = *(_WORD *)v3;
  else
    v4 = -1;
  *(_WORD *)a2 = v4;
  EtwpReleaseLoggerContext(v3, 0);
  return 0LL;
}
