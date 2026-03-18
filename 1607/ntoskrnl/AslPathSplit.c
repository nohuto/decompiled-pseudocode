/*
 * XREFs of AslPathSplit @ 0x140486A70
 * Callers:
 *     SdbpCreateSearchDBContext @ 0x1404853AC (SdbpCreateSearchDBContext.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140084F38 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyNW @ 0x140084FB0 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     wcsrchr @ 0x14014F0D4 (wcsrchr.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
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
  NTSTATUS v12; // eax
  unsigned int v13; // ebx
  wchar_t *v14; // rax
  const wchar_t *v15; // rbp
  size_t v16; // rdi
  int v18; // r8d
  const char *v19; // r9
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
    v13 = v12;
    if ( v12 < 0 )
    {
      v18 = 693;
LABEL_14:
      v19 = "RtlStringCchCopyNW failed [%x]";
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
  v13 = v12;
  if ( v12 < 0 )
  {
    v19 = "RtlStringCchCopyW failed [%x]";
    v18 = 713;
    goto LABEL_15;
  }
  v14 = wcsrchr(pszDesta, 0x2Eu);
  v15 = v14;
  if ( !v14 )
  {
    v12 = RtlStringCchCopyW(a4, 0x104uLL, pszDesta);
    v13 = v12;
    if ( v12 >= 0 )
      return 0;
    v19 = "RtlStringCchCopyW failed [%x]";
    v18 = 740;
LABEL_15:
    AslLogCallPrintf(1, (unsigned int)"AslPathSplit", v18, (_DWORD)v19, v12);
    return v13;
  }
  v16 = v14 - pszDesta;
  v12 = RtlStringCchCopyNW(a4, 0x104uLL, pszDesta, v16);
  v13 = v12;
  if ( v12 < 0 )
  {
    v18 = 726;
    goto LABEL_14;
  }
  a4[v16] = 0;
  v12 = RtlStringCchCopyW(a6, 0x104uLL, v15);
  v13 = v12;
  if ( v12 < 0 )
  {
    v19 = "RtlStringCchCopyW failed [%x]";
    v18 = 733;
    goto LABEL_15;
  }
  return 0;
}
