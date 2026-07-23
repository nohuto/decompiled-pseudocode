/*
 * XREFs of RtlStringExHandleOtherFlagsW @ 0x1401CCABC
 * Callers:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x1400C1890 (RtlStringCchPrintfExW.c)
 *     RtlStringCchCatExW @ 0x14013C270 (RtlStringCchCatExW.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleOtherFlagsW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        size_t cchOriginalDestLength,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  size_t v7; // rdi
  wchar_t *v10; // rdx
  wchar_t *v11; // rax

  v7 = cbDest >> 1;
  if ( cbDest >> 1 && (dwFlags & 0x1000) != 0 )
  {
    v10 = &pszDest[cchOriginalDestLength];
    *ppszDestEnd = v10;
    *pcchRemaining = v7 - cchOriginalDestLength;
    *v10 = 0;
  }
  if ( (dwFlags & 0x400) != 0 )
  {
    memset(pszDest, (unsigned __int8)dwFlags, cbDest);
    if ( (_BYTE)dwFlags )
    {
      if ( !v7 )
        return 0;
      *pcchRemaining = 1LL;
      v11 = &pszDest[v7 - 1];
      *ppszDestEnd = v11;
      *v11 = 0;
    }
    else
    {
      *ppszDestEnd = pszDest;
      *pcchRemaining = v7;
    }
  }
  if ( v7 && (dwFlags & 0x800) != 0 )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = v7;
    *pszDest = 0;
  }
  return 0;
}
