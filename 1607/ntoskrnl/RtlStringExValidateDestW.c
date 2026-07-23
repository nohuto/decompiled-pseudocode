/*
 * XREFs of RtlStringExValidateDestW @ 0x1400C14B0
 * Callers:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringExValidateDestW(
        STRSAFE_PCNZWCH pszDest,
        size_t cchDest,
        const size_t cchMax,
        ULONG dwFlags)
{
  NTSTATUS result; // eax

  result = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      return -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    return -1073741811;
  }
  return result;
}
