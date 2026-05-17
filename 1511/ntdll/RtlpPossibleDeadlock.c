/*
 * XREFs of RtlpPossibleDeadlock @ 0x1800CBF58
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18002FD78 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x18006F2D0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006F420 (RtlAcquireResourceExclusive.c)
 * Callees:
 *     RtlRaiseException @ 0x180036970 (RtlRaiseException.c)
 *     RtlDecodePointer @ 0x18005C980 (RtlDecodePointer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
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
