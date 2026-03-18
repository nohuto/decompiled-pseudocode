/*
 * XREFs of RtlStringExHandleOtherFlagsW @ 0x1C00501C4
 * Callers:
 *     RtlStringCchPrintfExW @ 0x1C0024BE0 (RtlStringCchPrintfExW.c)
 * Callees:
 *     memset @ 0x1C0029900 (memset.c)
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
  wchar_t *v9; // rax

  v7 = cbDest >> 1;
  if ( cbDest >> 1 && (dwFlags & 0x1000) != 0 )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = v7;
    *pszDest = 0;
  }
  if ( (dwFlags & 0x400) != 0 )
  {
    memset(pszDest, (unsigned __int8)dwFlags, cbDest);
    if ( (_BYTE)dwFlags )
    {
      if ( !v7 )
        return 0;
      *pcchRemaining = 1LL;
      v9 = &pszDest[v7 - 1];
      *ppszDestEnd = v9;
      *v9 = 0;
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
