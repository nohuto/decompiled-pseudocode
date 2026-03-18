/*
 * XREFs of RtlUnicodeStringCopy @ 0x1401AA738
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x1400F3720 (CmpLogTransactionAbortedWithChildName.c)
 * Callees:
 *     sub_1401AA7C0 @ 0x1401AA7C0 (sub_1401AA7C0.c)
 *     sub_1401AA828 @ 0x1401AA828 (sub_1401AA828.c)
 *     RtlWideCharArrayCopyWorker @ 0x1401AA904 (RtlWideCharArrayCopyWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  NTSTATUS result; // eax
  __int16 v5; // bx
  wchar_t *pszSrc; // [rsp+30h] [rbp-28h] BYREF
  size_t cchDest; // [rsp+38h] [rbp-20h] BYREF
  wchar_t *pszDest; // [rsp+40h] [rbp-18h] BYREF
  size_t pcchNewDestLength; // [rsp+70h] [rbp+18h] BYREF
  size_t cchSrcLength; // [rsp+78h] [rbp+20h] BYREF

  result = sub_1401AA7C0(DestinationString, &pszDest, &cchDest, 0LL);
  v5 = 0;
  if ( result >= 0 )
  {
    pcchNewDestLength = 0LL;
    result = sub_1401AA828(SourceString, &pszSrc, &cchSrcLength);
    if ( result >= 0 )
    {
      result = RtlWideCharArrayCopyWorker(pszDest, cchDest, &pcchNewDestLength, pszSrc, cchSrcLength);
      v5 = pcchNewDestLength;
    }
    DestinationString->Length = 2 * v5;
  }
  return result;
}
