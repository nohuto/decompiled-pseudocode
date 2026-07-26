/*
 * XREFs of RtlUnicodeStringValidateWorker @ 0x1C00111AC
 * Callers:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0011148 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringValidateSrcWorker @ 0x1C00648FC (RtlUnicodeStringValidateSrcWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateWorker(PCUNICODE_STRING SourceString, const size_t cchMax, ULONG dwFlags)
{
  unsigned __int16 Length; // r8
  NTSTATUS result; // eax
  unsigned __int16 MaximumLength; // dx

  Length = SourceString->Length;
  result = 0;
  if ( (SourceString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = SourceString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !SourceString->Buffer && (Length || MaximumLength) )
  {
    return -1073741811;
  }
  return result;
}
