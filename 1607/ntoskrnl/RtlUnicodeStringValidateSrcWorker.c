/*
 * XREFs of RtlUnicodeStringValidateSrcWorker @ 0x1402201FC
 * Callers:
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x140220158 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateSrcWorker(
        PCUNICODE_STRING SourceString,
        wchar_t **ppszSrc,
        size_t *pcchSrcLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  unsigned __int16 Length; // r10
  NTSTATUS v6; // r9d
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // rcx

  Length = SourceString->Length;
  v6 = 0;
  *ppszSrc = 0LL;
  *pcchSrcLength = 0LL;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = SourceString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( Length > MaximumLength )
    return -1073741811;
  if ( MaximumLength == 0xFFFF )
    return -1073741811;
  Buffer = SourceString->Buffer;
  if ( !Buffer && (Length || MaximumLength) )
    return -1073741811;
  *pcchSrcLength = (unsigned __int64)Length >> 1;
  *ppszSrc = Buffer;
  return v6;
}
