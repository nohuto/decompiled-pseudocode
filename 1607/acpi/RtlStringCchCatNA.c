/*
 * XREFs of RtlStringCchCatNA @ 0x1C0055C4C
 * Callers:
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C009E498 (OSOpenAMLINamespaceOverrideHandle.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C0055CAC (RtlStringCopyWorkerA.c)
 *     RtlStringValidateDestAndLengthA @ 0x1C0055CF4 (RtlStringValidateDestAndLengthA.c)
 */

NTSTATUS __stdcall RtlStringCchCatNA(NTSTRSAFE_PSTR pszDest, size_t cchDest, STRSAFE_PCNZCH pszSrc, size_t cchToAppend)
{
  NTSTATUS result; // eax
  size_t *v9; // r8
  size_t v10[3]; // [rsp+30h] [rbp-18h] BYREF

  result = RtlStringValidateDestAndLengthA(pszDest, cchDest, v10, cchToAppend);
  if ( result >= 0 )
    return RtlStringCopyWorkerA(&pszDest[v10[0]], cchDest - v10[0], v9, pszSrc, cchToAppend);
  return result;
}
