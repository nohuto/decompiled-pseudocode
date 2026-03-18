/*
 * XREFs of RtlStringCchCatA @ 0x1C0055BF4
 * Callers:
 *     CatError @ 0x1C005A994 (CatError.c)
 *     Debugger @ 0x1C005C9EC (Debugger.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C009E498 (OSOpenAMLINamespaceOverrideHandle.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C0055CAC (RtlStringCopyWorkerA.c)
 *     RtlStringValidateDestAndLengthA @ 0x1C0055CF4 (RtlStringValidateDestAndLengthA.c)
 */

NTSTATUS __stdcall RtlStringCchCatA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  size_t v3; // r9
  NTSTATUS result; // eax
  size_t *v8; // r8
  size_t pcchDestLength; // [rsp+58h] [rbp+20h] BYREF

  result = RtlStringValidateDestAndLengthA(pszDest, cchDest, &pcchDestLength, v3);
  if ( result >= 0 )
    return RtlStringCopyWorkerA(&pszDest[pcchDestLength], cchDest - pcchDestLength, v8, pszSrc, 0x7FFFFFFEuLL);
  return result;
}
