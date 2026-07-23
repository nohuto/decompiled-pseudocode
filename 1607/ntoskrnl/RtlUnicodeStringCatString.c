/*
 * XREFs of RtlUnicodeStringCatString @ 0x1401B5738
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x1400B2988 (CmpLogTransactionAbortedWithChildName.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x1401B57E4 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCatString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned __int16 Length; // r8
  wchar_t *Buffer; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rbx
  NTSTATUS result; // eax
  unsigned __int16 MaximumLength; // dx
  size_t v9; // [rsp+20h] [rbp-18h]
  size_t pcchNewDestLength; // [rsp+48h] [rbp+10h] BYREF

  pcchNewDestLength = (size_t)pszSrc;
  Length = DestinationString->Length;
  Buffer = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  result = 0;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > MaximumLength || MaximumLength == 0xFFFF )
    return -1073741811;
  if ( !DestinationString->Buffer && (Length || MaximumLength) )
  {
    result = -1073741811;
  }
  else
  {
    Buffer = DestinationString->Buffer;
    v5 = (unsigned __int64)MaximumLength >> 1;
    v6 = (unsigned __int64)Length >> 1;
  }
  if ( result >= 0 )
  {
    pcchNewDestLength = 0LL;
    result = RtlWideCharArrayCopyStringWorker(&Buffer[v6], v5 - v6, &pcchNewDestLength, (NTSTRSAFE_PCWSTR)(v5 - v6), v9);
    DestinationString->Length = 2 * (pcchNewDestLength + v6);
  }
  return result;
}
