/*
 * XREFs of AslPathSplit @ 0x140513880
 * Callers:
 *     SdbpCreateSearchDBContext @ 0x140514734 (SdbpCreateSearchDBContext.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14010B1EC (RtlStringCchCopyW.c)
 *     RtlStringCchCopyNW @ 0x14010B264 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcsrchr @ 0x14014F694 (wcsrchr.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathSplit(
        STRSAFE_PCNZWCH pszSrc,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR a4,
        int a5,
        NTSTRSAFE_PWSTR a6)
{
  unsigned int v8; // ebp
  wchar_t *v10; // rax
  STRSAFE_PCNZWCH v11; // rdi
  NTSTATUS v12; // ebx
  wchar_t *v13; // rax
  const wchar_t *v14; // rbp
  size_t v15; // rdi
  int v17; // r8d
  const char *v18; // r9
  wchar_t pszDesta[264]; // [rsp+30h] [rbp-258h] BYREF

  *pszDest = 0;
  v8 = cchDest;
  pszDesta[0] = 0;
  *a6 = 0;
  *a4 = 0;
  v10 = wcsrchr(pszSrc, 0x5Cu);
  v11 = v10;
  if ( v10 )
  {
    v12 = RtlStringCchCopyNW(pszDest, v8, pszSrc, v10 - pszSrc + 1);
    if ( v12 < 0 )
    {
      v17 = 693;
LABEL_14:
      v18 = "RtlStringCchCopyNW failed [%x]";
      goto LABEL_15;
    }
  }
  else
  {
    v11 = pszSrc;
  }
  if ( *v11 == 92 )
    ++v11;
  v12 = RtlStringCchCopyW(pszDesta, 0x105uLL, v11);
  if ( v12 < 0 )
  {
    v18 = "RtlStringCchCopyW failed [%x]";
    v17 = 713;
    goto LABEL_15;
  }
  v13 = wcsrchr(pszDesta, 0x2Eu);
  v14 = v13;
  if ( !v13 )
  {
    v12 = RtlStringCchCopyW(a4, 0x104uLL, pszDesta);
    if ( v12 >= 0 )
      return 0;
    v18 = "RtlStringCchCopyW failed [%x]";
    v17 = 740;
LABEL_15:
    AslLogCallPrintf(1, (unsigned int)"AslPathSplit", v17, (_DWORD)v18);
    return (unsigned int)v12;
  }
  v15 = v13 - pszDesta;
  v12 = RtlStringCchCopyNW(a4, 0x104uLL, pszDesta, v15);
  if ( v12 < 0 )
  {
    v17 = 726;
    goto LABEL_14;
  }
  a4[v15] = 0;
  v12 = RtlStringCchCopyW(a6, 0x104uLL, v14);
  if ( v12 < 0 )
  {
    v18 = "RtlStringCchCopyW failed [%x]";
    v17 = 733;
    goto LABEL_15;
  }
  return 0;
}
