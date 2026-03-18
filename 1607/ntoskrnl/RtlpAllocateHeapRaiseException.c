/*
 * XREFs of RtlpAllocateHeapRaiseException @ 0x140213778
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x140093FB8 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlRaiseException @ 0x140211E04 (RtlRaiseException.c)
 */

void __fastcall RtlpAllocateHeapRaiseException(unsigned __int64 a1)
{
  struct _EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionInformation[0] = a1;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  ExceptionRecord.ExceptionCode = -1073741801;
  ExceptionRecord.NumberParameters = 1;
  RtlRaiseException(&ExceptionRecord);
}
