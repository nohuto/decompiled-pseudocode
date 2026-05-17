/*
 * XREFs of PssNtValidateDescriptor @ 0x1800842D0
 * Callers:
 *     PssNtFreeSnapshot @ 0x180084150 (PssNtFreeSnapshot.c)
 *     PssNtDuplicateSnapshot @ 0x18008BD70 (PssNtDuplicateSnapshot.c)
 *     PssNtQuerySnapshot @ 0x18008CEC0 (PssNtQuerySnapshot.c)
 *     PssNtWalkSnapshot @ 0x1800F60C0 (PssNtWalkSnapshot.c)
 * Callees:
 *     RtlRaiseException @ 0x180036970 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall PssNtValidateDescriptor(unsigned int *a1, void *a2)
{
  unsigned int v4; // ebx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+70h] [rbp-C8h] BYREF

  if ( a1 )
  {
    v4 = *a1;
    if ( v4 == 1146311504 )
      return 0LL;
    memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
    ExceptionRecord.ExceptionCode = -1073741816;
    ExceptionRecord.ExceptionFlags = 0;
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionAddress = a2;
    ExceptionRecord.NumberParameters = 4;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)a1;
    ExceptionRecord.ExceptionInformation[1] = 0LL;
    ExceptionRecord.ExceptionInformation[2] = v4;
    ExceptionRecord.ExceptionInformation[3] = 1146311504LL;
    RtlRaiseException(&ExceptionRecord);
  }
  return 3221225480LL;
}
