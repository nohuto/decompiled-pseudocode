/*
 * XREFs of AslPathToSystemPath @ 0x140680DB0
 * Callers:
 *     SdbGetAppPatchDirEx @ 0x14067F470 (SdbGetAppPatchDirEx.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140002AB0 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x140002BC8 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x1406802AC (AslStringDuplicate.c)
 */

__int64 __fastcall AslPathToSystemPath(wchar_t **a1, const wchar_t *a2)
{
  int v4; // ebx
  wchar_t pszDest[264]; // [rsp+30h] [rbp-228h] BYREF

  memset(pszDest, 0, 0x208uLL);
  *a1 = 0LL;
  v4 = RtlStringCchCopyW(pszDest, 0x104uLL, L"\\SystemRoot");
  if ( v4 >= 0 )
  {
    if ( RtlStringCchCatW(pszDest, 0x104uLL, a2) < 0 )
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)-1073741811;
    }
    v4 = AslStringDuplicate(a1, pszDest);
    if ( v4 >= 0 )
      return 0;
  }
  AslLogCallPrintf(1LL);
  return (unsigned int)v4;
}
