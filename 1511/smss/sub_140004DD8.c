/*
 * XREFs of sub_140004DD8 @ 0x140004DD8
 * Callers:
 *     sub_140001E9C @ 0x140001E9C (sub_140001E9C.c)
 * Callees:
 *     sub_140002540 @ 0x140002540 (sub_140002540.c)
 *     sub_140004C0C @ 0x140004C0C (sub_140004C0C.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140004DD8(PUNICODE_STRING ImageFileName, __int64 a2, const UNICODE_STRING *a3, int a4)
{
  int v8; // r9d
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR SourceString[512]; // [rsp+40h] [rbp-C0h] BYREF

  if ( (a4 & 0x10) != 0 )
  {
    if ( (int)sub_140004C0C(SourceString, 0x400uLL, L"%wZ program not found - skipping AUTOCHECK\n", ImageFileName) >= 0 )
    {
      RtlInitUnicodeStringEx(&Destination, SourceString);
      NtDisplayString(&Destination);
    }
  }
  else
  {
    *(_DWORD *)&Destination.Length = 0x4000000;
    Destination.Buffer = SourceString;
    if ( RtlAppendUnicodeStringToString(&Destination, ImageFileName) >= 0
      && RtlAppendUnicodeToString(&Destination, L" ") >= 0
      && RtlAppendUnicodeStringToString(&Destination, a3) >= 0 )
    {
      sub_140002540(ImageFileName, a2, (__int64)&Destination, v8, a4 & 0xFFFFFFFB, 0LL);
    }
  }
  return 0LL;
}
