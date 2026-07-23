/*
 * XREFs of RtlStringExValidateDestA @ 0x14014BD7C
 * Callers:
 *     RtlStringCbCopyExA @ 0x14014BD0C (RtlStringCbCopyExA.c)
 *     RtlStringCbPrintfExA @ 0x1401B0E60 (RtlStringCbPrintfExA.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringExValidateDestA(STRSAFE_PCNZCH pszDest, size_t cchDest, const size_t cchMax, ULONG dwFlags)
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
