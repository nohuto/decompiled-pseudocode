/*
 * XREFs of AslPathToSystemPath @ 0x1406C618C
 * Callers:
 *     SdbGetAppPatchDirEx @ 0x1406C440C (SdbGetAppPatchDirEx.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140084F38 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1400B03B8 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     AslStringDuplicate @ 0x1406C5378 (AslStringDuplicate.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathToSystemPath(wchar_t **a1, const wchar_t *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  int v7; // r8d
  NTSTATUS v8; // eax
  int v10; // [rsp+20h] [rbp-238h]
  NTSTATUS v11; // [rsp+20h] [rbp-238h]
  wchar_t pszDest[264]; // [rsp+30h] [rbp-228h] BYREF

  memset(pszDest, 0, 0x208uLL);
  *a1 = 0LL;
  v4 = RtlStringCchCopyW(pszDest, 0x104uLL, L"\\SystemRoot");
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = RtlStringCchCatW(pszDest, 0x104uLL, a2);
    if ( v8 < 0 )
    {
      v11 = v8;
      AslLogCallPrintf(1LL, (unsigned int)"AslPathToSystemPath", 945, (unsigned int)"Failed to cat string [%x]", v11);
      return (unsigned int)-1073741811;
    }
    v4 = AslStringDuplicate(a1, pszDest);
    v5 = v4;
    if ( v4 >= 0 )
      return 0;
    v6 = "Failed to allocate path string [%x]";
    v7 = 952;
  }
  else
  {
    v6 = "Failed to copy string [%x]";
    v7 = 928;
  }
  v10 = v4;
  AslLogCallPrintf(1LL, (unsigned int)"AslPathToSystemPath", v7, (_DWORD)v6, v10);
  return v5;
}
