/*
 * XREFs of RtlpTpImpersonate @ 0x180003D0C
 * Callers:
 *     RtlpTpWaitCallback @ 0x180005F50 (RtlpTpWaitCallback.c)
 *     RtlpTpTimerCallback @ 0x180006FD0 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x180008E40 (RtlpTpWorkCallback.c)
 * Callees:
 *     RtlRaiseException @ 0x180036970 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A5260 (NtSetInformationThread.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

void __fastcall RtlpTpImpersonate(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  __int64 v3; // [rsp+20h] [rbp-C8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF

  v3 = a1;
  v1 = 0;
  while ( 1 )
  {
    ++v1;
    v2 = NtSetInformationThread(-2LL, 5LL, &v3);
    if ( v2 >= 0 )
      break;
    if ( v1 >= 2 )
    {
      memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
      ExceptionRecord.ExceptionCode = v2;
      RtlRaiseException(&ExceptionRecord);
      return;
    }
  }
}
