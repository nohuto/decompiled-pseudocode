/*
 * XREFs of sub_14001059C @ 0x14001059C
 * Callers:
 *     sub_1400107DC @ 0x1400107DC (sub_1400107DC.c)
 *     sub_1400127F8 @ 0x1400127F8 (sub_1400127F8.c)
 * Callees:
 *     sub_140004C0C @ 0x140004C0C (sub_140004C0C.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     sub_140010A04 @ 0x140010A04 (sub_140010A04.c)
 */

__int64 __fastcall sub_14001059C(__int64 a1, __int64 a2, struct _UNICODE_STRING *a3)
{
  unsigned __int64 v6; // rdi
  int v7; // ebx
  __int64 result; // rax
  __int64 v9; // [rsp+28h] [rbp-260h]
  struct _UNICODE_STRING NtPathName; // [rsp+30h] [rbp-258h] BYREF
  WCHAR DosPathName[264]; // [rsp+40h] [rbp-248h] BYREF

  v6 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  v7 = 0;
  while ( 1 )
  {
    LODWORD(v9) = (unsigned __int16)(v7 + v6);
    result = sub_140004C0C(DosPathName, 0x208uLL, L"%s\\%s%4.4x.tmp", *(_QWORD *)(a1 + 8), a2, v9);
    if ( (int)result < 0 )
      break;
    if ( !RtlDosPathNameToNtPathName_U(DosPathName, &NtPathName, 0LL, 0LL) )
      return 3221225473LL;
    if ( !(unsigned __int8)sub_140010A04(&NtPathName) )
    {
      result = 0LL;
      *a3 = NtPathName;
      return result;
    }
    RtlFreeUnicodeString(&NtPathName);
    if ( (unsigned int)++v7 >= 0x64 )
      return 3221225473LL;
  }
  return result;
}
