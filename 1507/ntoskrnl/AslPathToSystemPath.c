/*
 * XREFs of AslPathToSystemPath @ 0x140705B6C
 * Callers:
 *     SdbGetAppPatchDirEx @ 0x1407042C4 (SdbGetAppPatchDirEx.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14011BAF4 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x140166888 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x1407050E0 (AslStringDuplicate.c)
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
