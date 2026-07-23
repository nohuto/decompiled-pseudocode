/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x14013C6BC
 * Callers:
 *     RtlUnicodeStringPrintf @ 0x14013C4F0 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringCopyStringEx @ 0x14013C564 (RtlUnicodeStringCopyStringEx.c)
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
  NTSTATUS result; // eax
  unsigned __int16 Length; // r8
  unsigned __int16 MaximumLength; // dx
  wchar_t *Buffer; // r10

  result = 0;
  *ppszDest = 0LL;
  *pcchDest = 0LL;
  if ( DestinationString || (dwFlags & 0x100) == 0 )
  {
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
    {
      return -1073741811;
    }
    else
    {
      *pcchDest = (unsigned __int64)MaximumLength >> 1;
      *ppszDest = Buffer;
    }
  }
  return result;
}
