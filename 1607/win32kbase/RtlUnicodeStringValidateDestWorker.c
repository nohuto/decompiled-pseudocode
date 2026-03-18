/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x1C00D42A0
 * Callers:
 *     RtlUnicodeStringCatString @ 0x1C00D41D4 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopyString @ 0x1C00D4240 (RtlUnicodeStringCopyString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateDestWorker(
        PCUNICODE_STRING DestinationString,
        wchar_t **ppszDest,
        size_t *pcchDest,
        size_t *pcchDestLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  NTSTATUS v6; // r10d
  USHORT Length; // ax
  USHORT MaximumLength; // cx
  wchar_t *Buffer; // r8

  v6 = 0;
  *ppszDest = 0LL;
  *pcchDest = 0LL;
  if ( pcchDestLength )
    *pcchDestLength = 0LL;
  Length = DestinationString->Length;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( Length > MaximumLength )
    return -1073741811;
  if ( MaximumLength == 0xFFFFLL )
    return -1073741811;
  Buffer = DestinationString->Buffer;
  if ( !Buffer && (Length || MaximumLength) )
    return -1073741811;
  *ppszDest = Buffer;
  *pcchDest = (unsigned __int64)MaximumLength >> 1;
  if ( pcchDestLength )
    *pcchDestLength = (unsigned __int64)Length >> 1;
  return v6;
}
