/*
 * XREFs of __raise_securityfailure @ 0x1800840B4
 * Callers:
 *     __report_securityfailure @ 0x180084248 (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x1800E3F70 (RtlUnhandledExceptionFilter.c)
 */

__int64 _raise_securityfailure()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
