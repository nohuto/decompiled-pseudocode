/*
 * XREFs of RtlCopyString @ 0x1800880A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800AC980 (memmove.c)
 */

void __cdecl RtlCopyString(PSTRING DestinationString, PSTRING SourceString)
{
  unsigned __int64 Length; // r8

  DestinationString->Length = 0;
  if ( SourceString )
  {
    Length = SourceString->Length;
    if ( Length > DestinationString->MaximumLength )
      Length = DestinationString->MaximumLength;
    DestinationString->Length = Length;
    memmove(DestinationString->Buffer, SourceString->Buffer, Length);
  }
}
