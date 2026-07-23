/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x1800E3400
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094D0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180018BD8 (NtdllpAllocateStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x18007E890 (RtlxUnicodeStringToOemSize.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x180080060 (RtlUpcaseUnicodeToMultiByteN.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int64 v6; // rax
  char *StringRoutine; // rax
  int v9; // edi
  ULONG BytesInMultiByteString; // [rsp+78h] [rbp+20h] BYREF

  if ( NlsMbCodePageTag )
    LODWORD(v6) = RtlxUnicodeStringToOemSize((PWCH *)SourceString);
  else
    v6 = ((unsigned __int64)SourceString->Length + 2) >> 1;
  if ( (unsigned int)v6 > 0xFFFF )
    return -1073741584;
  DestinationString->Length = v6 - 1;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    StringRoutine = (char *)NtdllpAllocateStringRoutine((unsigned int)v6);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)(v6 - 1) >= DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v9 = RtlUpcaseUnicodeToMultiByteN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInMultiByteString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v9 >= 0 )
  {
    DestinationString->Buffer[BytesInMultiByteString] = 0;
    v9 = 0;
  }
  if ( v9 < 0 )
  {
    if ( AllocateDestinationString )
    {
      NtdllpFreeStringRoutine(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v9;
}
