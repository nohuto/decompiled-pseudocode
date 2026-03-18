/*
 * XREFs of RtlCopyString @ 0x1402112F8
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 */

void __stdcall RtlCopyString(PSTRING DestinationString, const STRING *SourceString)
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
