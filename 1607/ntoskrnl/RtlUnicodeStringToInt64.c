/*
 * XREFs of RtlUnicodeStringToInt64 @ 0x140688560
 * Callers:
 *     GetFlags @ 0x1406CCF5C (GetFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcstoxq @ 0x14014FE94 (wcstoxq.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToInt64(PCUNICODE_STRING String, ULONG Base, PLONG64 Number, PWSTR *EndPointer)
{
  __int64 Length; // r9
  wchar_t *Buffer; // rdx
  unsigned __int64 MaximumLength; // rcx
  wint_t *v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  int v15; // [rsp+30h] [rbp-E8h] BYREF
  wint_t *v16; // [rsp+38h] [rbp-E0h] BYREF
  _WORD v17[72]; // [rsp+40h] [rbp-D8h] BYREF

  Length = String->Length;
  Buffer = String->Buffer;
  MaximumLength = String->MaximumLength;
  v11 = Buffer;
  if ( MaximumLength < Length + 2 || Buffer[((unsigned int)MaximumLength >> 1) - 1] )
  {
    v11 = v17;
    v12 = (unsigned int)Length >> 1;
    if ( (unsigned int)v12 >= 0x40 )
      v12 = 64LL;
    v13 = v12;
    memmove(v17, Buffer, 2 * v12);
    if ( v13 >= 65 )
      _report_rangecheckfailure();
    v17[v13] = 0;
  }
  v15 = 0;
  *Number = wcstoxq(0LL, v11, &v16, Base, 0, &v15);
  if ( EndPointer )
    *EndPointer = &String->Buffer[v16 - v11];
  return v15 != 0 ? 0xC0000095 : 0;
}
