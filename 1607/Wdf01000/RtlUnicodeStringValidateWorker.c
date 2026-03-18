/*
 * XREFs of RtlUnicodeStringValidateWorker @ 0x1C00179C8
 * Callers:
 *     RtlUnicodeStringCopy @ 0x1C0017900 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0036998 (RtlUnicodeStringValidateDestWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringValidateWorker(
        const _UNICODE_STRING *SourceString,
        const unsigned __int64 a2,
        unsigned int cchMax)
{
  unsigned __int16 Length; // r8
  __int64 result; // rax
  unsigned __int16 MaximumLength; // dx

  Length = SourceString->Length;
  result = 0LL;
  if ( (SourceString->Length & 1) != 0 )
    return 3221225485LL;
  MaximumLength = SourceString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !SourceString->Buffer && (Length || MaximumLength) )
  {
    return 3221225485LL;
  }
  return result;
}
