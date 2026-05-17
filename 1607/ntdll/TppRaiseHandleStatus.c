/*
 * XREFs of TppRaiseHandleStatus @ 0x1800FE514
 * Callers:
 *     TppSetupNextWait @ 0x18003C714 (TppSetupNextWait.c)
 *     TppSingleTimerExpiration @ 0x18003CC28 (TppSingleTimerExpiration.c)
 *     TppJobpRundownJob @ 0x180084428 (TppJobpRundownJob.c)
 * Callees:
 *     RtlRaiseException @ 0x180036770 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 */

void __fastcall TppRaiseHandleStatus(int a1, unsigned __int64 a2, unsigned __int64 a3)
{
  void (__fastcall *v3)(__int64, __int64, __int64, unsigned int); // r9
  void (__fastcall *v4)(__int64, __int64, __int64, unsigned int); // r10
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( a3 )
  {
    v3 = *(void (__fastcall **)(__int64, __int64, __int64, unsigned int))(a3 + 80);
    ExceptionRecord.NumberParameters = 5;
    if ( v3 == RtlpTpWaitCallback )
      v4 = *(void (__fastcall **)(__int64, __int64, __int64, unsigned int))(*(_QWORD *)(a3 + 88) + 32LL);
    else
      v4 = 0LL;
    if ( v4 )
      v3 = v4;
    ExceptionRecord.ExceptionInformation[4] = (unsigned __int64)v3;
  }
  else
  {
    ExceptionRecord.NumberParameters = 4;
  }
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionInformation[3] = 0LL;
  ExceptionRecord.ExceptionInformation[0] = a1;
  ExceptionRecord.ExceptionCode = -1073740022;
  ExceptionRecord.ExceptionInformation[1] = a2;
  ExceptionRecord.ExceptionInformation[2] = a3;
  ExceptionRecord.ExceptionFlags = 1;
  RtlRaiseException(&ExceptionRecord);
}
