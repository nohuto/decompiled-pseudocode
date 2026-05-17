/*
 * XREFs of __raise_securityfailure @ 0x180095864
 * Callers:
 *     __report_securityfailure @ 0x1800959F8 (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x1800E8AD0 (RtlUnhandledExceptionFilter.c)
 */

__int64 _raise_securityfailure()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
