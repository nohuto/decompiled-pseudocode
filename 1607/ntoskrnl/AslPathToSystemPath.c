/*
 * XREFs of AslPathToSystemPath @ 0x1406C62C4
 * Callers:
 *     SdbGetAppPatchDirEx @ 0x1406C4544 (SdbGetAppPatchDirEx.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14010B1EC (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x14010B540 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AslStringDuplicate @ 0x1406C54B0 (AslStringDuplicate.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
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
