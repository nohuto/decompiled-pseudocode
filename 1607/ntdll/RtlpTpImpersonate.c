/*
 * XREFs of RtlpTpImpersonate @ 0x18007E68C
 * Callers:
 *     RtlpTpWorkCallback @ 0x18003A1C0 (RtlpTpWorkCallback.c)
 *     RtlpTpTimerCallback @ 0x18007E570 (RtlpTpTimerCallback.c)
 *     RtlpTpWaitCallback @ 0x18007FD40 (RtlpTpWaitCallback.c)
 * Callees:
 *     RtlRaiseException @ 0x180036770 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     memset @ 0x1800ACCC0 (memset.c)
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
