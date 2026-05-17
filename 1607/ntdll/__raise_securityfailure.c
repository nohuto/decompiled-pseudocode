/*
 * XREFs of __raise_securityfailure @ 0x180096C64
 * Callers:
 *     __report_securityfailure @ 0x180096DFC (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x1800F1DD0 (RtlUnhandledExceptionFilter.c)
 */

__int64 _raise_securityfailure()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
