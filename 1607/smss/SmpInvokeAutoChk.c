/*
 * XREFs of SmpInvokeAutoChk @ 0x140004ED8
 * Callers:
 *     SmpExecuteCommand @ 0x140001FB4 (SmpExecuteCommand.c)
 * Callees:
 *     SmpExecuteImage @ 0x140002660 (SmpExecuteImage.c)
 *     RtlStringCbPrintfW @ 0x140004D08 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 */

__int64 __fastcall SmpInvokeAutoChk(PUNICODE_STRING ImageFileName, __int64 a2, const UNICODE_STRING *a3, __int16 a4)
{
  int v8; // r9d
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t pszDest[512]; // [rsp+40h] [rbp-C0h] BYREF

  if ( (a4 & 0x10) != 0 )
  {
    if ( RtlStringCbPrintfW(pszDest, 0x400uLL, L"%wZ program not found - skipping AUTOCHECK\n", ImageFileName) >= 0 )
    {
      RtlInitUnicodeStringEx(&Destination, pszDest);
      NtDisplayString(&Destination);
    }
  }
  else
  {
    *(_DWORD *)&Destination.Length = 0x4000000;
    Destination.Buffer = pszDest;
    if ( RtlAppendUnicodeStringToString(&Destination, ImageFileName) >= 0
      && RtlAppendUnicodeToString(&Destination, L" ") >= 0
      && RtlAppendUnicodeStringToString(&Destination, a3) >= 0 )
    {
      SmpExecuteImage(ImageFileName, a2, (__int64)&Destination, v8, a4 & 0xFFFB, 0LL);
    }
  }
  return 0LL;
}
