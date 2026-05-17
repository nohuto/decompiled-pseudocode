/*
 * XREFs of RtlpPossibleDeadlock @ 0x1800D3C08
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18006674C (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x18006CEC0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006CFB0 (RtlAcquireResourceExclusive.c)
 * Callees:
 *     RtlRaiseException @ 0x180036770 (RtlRaiseException.c)
 *     RtlDecodePointer @ 0x180051BE0 (RtlDecodePointer.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
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
