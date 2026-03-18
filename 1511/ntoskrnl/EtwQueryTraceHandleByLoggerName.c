/*
 * XREFs of EtwQueryTraceHandleByLoggerName @ 0x140505BCC
 * Callers:
 *     IopErrorLogThread @ 0x140503EFC (IopErrorLogThread.c)
 *     WmiQueryTraceInformation @ 0x140504D90 (WmiQueryTraceInformation.c)
 *     WdipSemGetLoggerIds @ 0x140505B4C (WdipSemGetLoggerIds.c)
 * Callees:
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404CC19C (EtwpAcquireLoggerContextByLoggerName.c)
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
  EtwpReleaseLoggerContext(0LL, v3, 0);
  return 0LL;
}
