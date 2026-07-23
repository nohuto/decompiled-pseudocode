/*
 * XREFs of RtlUpcaseUnicodeStringToCountedOemString @ 0x1800D2330
 * Callers:
 *     RtlIsNameLegalDOS8Dot3 @ 0x1800E01F0 (RtlIsNameLegalDOS8Dot3.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180024358 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlpDidUnicodeToOemWork @ 0x18006D72C (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18006D7C0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800D24B0 (RtlxUnicodeStringToOemSize.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeStringToCountedOemString(
        POEM_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int64 v6; // rax
  NTSTATUS result; // eax
  char *StringRoutine; // rax
  int v9; // edi
  ULONG BytesInOemString; // [rsp+88h] [rbp+20h] BYREF

  if ( NlsMbOemCodePageTag )
    LODWORD(v6) = RtlxUnicodeStringToOemSize(SourceString);
  else
    v6 = ((unsigned __int64)SourceString->Length + 2) >> 1;
  result = v6 - 1;
  if ( !result )
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
    return result;
  }
  if ( (unsigned int)result > 0xFFFF )
    return -1073741584;
  DestinationString->Length = result;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = result;
    StringRoutine = (char *)NtdllpAllocateStringRoutine((unsigned int)result);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)result > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v9 = RtlUpcaseUnicodeToOemN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInOemString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v9 >= 0 && !RtlpDidUnicodeToOemWork(&DestinationString->Length, (__int64)SourceString) )
    v9 = -1073741470;
  if ( v9 >= 0 )
    v9 = 0;
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
