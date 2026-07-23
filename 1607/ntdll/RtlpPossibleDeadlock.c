/*
 * XREFs of RtlpPossibleDeadlock @ 0x1800D3CC8
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18006673C (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x18006CEB0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006CFA0 (RtlAcquireResourceExclusive.c)
 * Callees:
 *     RtlRaiseException @ 0x180036760 (RtlRaiseException.c)
 *     RtlDecodePointer @ 0x180051BD0 (RtlDecodePointer.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RtlpPossibleDeadlock(unsigned __int64 a1)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF

  RtlDecodePointer(RtlpUnhandledExceptionFilter);
  ExceptionRecord.ExceptionCode = -1073741420;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = a1;
  RtlRaiseException(&ExceptionRecord);
}
