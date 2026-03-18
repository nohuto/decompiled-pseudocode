/*
 * XREFs of RtlUnicodeStringCat @ 0x1401AA648
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x1400F3720 (CmpLogTransactionAbortedWithChildName.c)
 * Callees:
 *     sub_1401AA7C0 @ 0x1401AA7C0 (sub_1401AA7C0.c)
 *     sub_1401AA828 @ 0x1401AA828 (sub_1401AA828.c)
 *     RtlWideCharArrayCopyWorker @ 0x1401AA904 (RtlWideCharArrayCopyWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCat(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  NTSTATUS result; // eax
  __int16 v5; // bx
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+38h] [rbp-18h] BYREF
  size_t cchSrcLength; // [rsp+40h] [rbp-10h] BYREF
  wchar_t *pszSrc; // [rsp+48h] [rbp-8h] BYREF
  size_t pcchNewDestLength; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF

  result = sub_1401AA7C0(DestinationString, &v7, &v11, &v6);
  if ( result >= 0 )
  {
    result = sub_1401AA828(SourceString, &pszSrc, &cchSrcLength);
    if ( result >= 0 )
    {
      v5 = v6;
      pcchNewDestLength = 0LL;
      result = RtlWideCharArrayCopyWorker((wchar_t *)(v7 + 2 * v6), v11 - v6, &pcchNewDestLength, pszSrc, cchSrcLength);
      DestinationString->Length = 2 * (pcchNewDestLength + v5);
    }
  }
  return result;
}
