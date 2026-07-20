/*
 * XREFs of SmpInvokeAutoChk @ 0x140002888
 * Callers:
 *     SmpExecuteCommand @ 0x14000350C (SmpExecuteCommand.c)
 * Callees:
 *     SmpExecuteImage @ 0x140003C84 (SmpExecuteImage.c)
 *     RtlStringCbPrintfW @ 0x1400084FC (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpInvokeAutoChk(PUNICODE_STRING ImageFileName, __int64 a2, const UNICODE_STRING *a3, int a4)
{
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
      SmpExecuteImage(ImageFileName, a4 & 0xFFFFFFFB, 0LL);
    }
  }
  return 0LL;
}
