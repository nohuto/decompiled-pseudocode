/*
 * XREFs of RtlUpperString @ 0x1404BBDB8
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x1404BBE0C (RtlUpperChar.c)
 */

void __stdcall RtlUpperString(PSTRING DestinationString, const STRING *SourceString)
{
  int Length; // ebx
  unsigned __int16 MaximumLength; // ax
  char *Buffer; // rdi
  char *v5; // rsi

  Length = SourceString->Length;
  MaximumLength = DestinationString->MaximumLength;
  Buffer = DestinationString->Buffer;
  v5 = SourceString->Buffer;
  if ( (unsigned __int16)Length > MaximumLength )
    Length = MaximumLength;
  for ( DestinationString->Length = Length; Length; --Length )
    *Buffer++ = RtlUpperChar(*v5++);
}
