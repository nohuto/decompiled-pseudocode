/*
 * XREFs of sub_140009540 @ 0x140009540
 * Callers:
 *     sub_1400092A8 @ 0x1400092A8 (sub_1400092A8.c)
 * Callees:
 *     sub_140004C0C @ 0x140004C0C (sub_140004C0C.c)
 *     sub_140008D78 @ 0x140008D78 (sub_140008D78.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     sub_14000FAC4 @ 0x14000FAC4 (sub_14000FAC4.c)
 */

__int64 sub_140009540()
{
  __int64 *v0; // rdi
  __int64 *v1; // rbx
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-238h] BYREF
  WCHAR SourceString[264]; // [rsp+40h] [rbp-228h] BYREF

  v0 = (__int64 *)qword_1400201D0;
  while ( v0 != &qword_1400201D0 )
  {
    v1 = v0;
    sub_14000FAC4(v0 + 2);
    v0 = (__int64 *)*v0;
    result = sub_140008D78(v1);
  }
  if ( !byte_14002046C )
  {
    sub_140004C0C(SourceString, 0x208uLL, L"\\??\\%c:\\%s", (unsigned __int16)word_140020448, L"swapfile.sys");
    RtlInitUnicodeString(&DestinationString, SourceString);
    return sub_14000FAC4(&DestinationString);
  }
  return result;
}
