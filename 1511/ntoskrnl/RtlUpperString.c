/*
 * XREFs of RtlUpperString @ 0x1403CC1F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x1403CC250 (RtlUpperChar.c)
 */

void __stdcall RtlUpperString(PSTRING DestinationString, const STRING *SourceString)
{
  int Length; // esi
  unsigned __int16 MaximumLength; // ax
  char *Buffer; // rdi
  char *v5; // rbx

  Length = SourceString->Length;
  MaximumLength = DestinationString->MaximumLength;
  Buffer = DestinationString->Buffer;
  v5 = SourceString->Buffer;
  if ( (unsigned __int16)Length > MaximumLength )
    Length = MaximumLength;
  for ( DestinationString->Length = Length; Length; --Length )
    *Buffer++ = RtlUpperChar(*v5++);
}
