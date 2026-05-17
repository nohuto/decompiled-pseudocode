/*
 * XREFs of PssNtValidateDescriptor @ 0x180059950
 * Callers:
 *     PssNtFreeSnapshot @ 0x1800597E0 (PssNtFreeSnapshot.c)
 *     PssNtWalkSnapshot @ 0x180081C10 (PssNtWalkSnapshot.c)
 *     PssNtQuerySnapshot @ 0x1800822C0 (PssNtQuerySnapshot.c)
 *     PssNtDuplicateSnapshot @ 0x180083960 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall PssNtValidateDescriptor(unsigned int *a1, void *a2)
{
  unsigned int v4; // edi
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
