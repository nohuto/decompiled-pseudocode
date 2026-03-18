/*
 * XREFs of WdipSemGetLoggerIds @ 0x140505B4C
 * Callers:
 *     WdipSemDisableScenario @ 0x140505648 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140505934 (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x140532858 (WdipSemCleanStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140505BCC (EtwQueryTraceHandleByLoggerName.c)
 */

__int64 WdipSemGetLoggerIds()
{
  int v0; // ebx
  int v1; // edx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int16 v4; // [rsp+40h] [rbp+8h] BYREF

  RtlInitUnicodeString(&DestinationString, L"DiagLog");
  v0 = EtwQueryTraceHandleByLoggerName(&DestinationString, &v4);
  if ( v0 < 0 )
    _InterlockedExchange(&WdipDiagLoggerId, 0);
  else
    _InterlockedExchange(&WdipDiagLoggerId, v4);
  RtlInitUnicodeString(&DestinationString, L"WdiContextLog");
  v1 = EtwQueryTraceHandleByLoggerName(&DestinationString, &v4);
  if ( v1 < 0 )
    _InterlockedExchange(&WdipContextLoggerId, 0);
  else
    _InterlockedExchange(&WdipContextLoggerId, v4);
  if ( v0 < 0 )
    return (unsigned int)v0;
  return (unsigned int)v1;
}
