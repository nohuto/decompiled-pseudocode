/*
 * XREFs of RtlpPossibleDeadlock @ 0x1800C2238
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x180035D54 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x180061BC0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x180061D10 (RtlAcquireResourceExclusive.c)
 * Callees:
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     RtlDecodePointer @ 0x180066340 (RtlDecodePointer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
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
