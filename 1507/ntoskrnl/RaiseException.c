/*
 * XREFs of RaiseException @ 0x1401761C8
 * Callers:
 *     _raise_exc_ex @ 0x14017627C (_raise_exc_ex.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     RtlRaiseException @ 0x140246A34 (RtlRaiseException.c)
 */

void __fastcall RaiseException(int a1, char a2, __int64 a3, const void *a4)
{
  struct _EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  HIDWORD(ExceptionRecord.ExceptionRecord) = 0;
  ExceptionRecord.ExceptionCode = a1;
  *(_QWORD *)&ExceptionRecord.ExceptionFlags = a2 & 1;
  ExceptionRecord.ExceptionAddress = &RaiseException;
  if ( a4 )
  {
    if ( (unsigned int)a3 > 0xF )
      a3 = 15LL;
    ExceptionRecord.NumberParameters = a3;
    if ( (_DWORD)a3 )
      memmove(ExceptionRecord.ExceptionInformation, a4, 8 * a3);
  }
  else
  {
    ExceptionRecord.NumberParameters = 0;
  }
  RtlRaiseException(&ExceptionRecord);
}
