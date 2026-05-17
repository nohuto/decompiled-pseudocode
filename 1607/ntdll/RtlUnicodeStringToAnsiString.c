/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x180018950
 * Callers:
 *     LdrpGetModuleName @ 0x18006D714 (LdrpGetModuleName.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094E0 (NtdllpFreeStringRoutine.c)
 *     RtlUnicodeToMultiByteN @ 0x180018A30 (RtlUnicodeToMultiByteN.c)
 *     NtdllpAllocateStringRoutine @ 0x180018BE8 (NtdllpAllocateStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x18007E8A0 (RtlxUnicodeStringToOemSize.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // esi
  unsigned __int64 v7; // rax
  unsigned __int16 v8; // cx
  char *StringRoutine; // rax
  NTSTATUS v10; // edi
  bool v11; // sf
  unsigned __int16 MaximumLength; // ax
  int v14; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  if ( NlsMbCodePageTag )
    LODWORD(v7) = RtlxUnicodeStringToOemSize(SourceString);
  else
    v7 = ((unsigned __int64)SourceString->Length + 2) >> 1;
  if ( (unsigned int)v7 > 0xFFFF )
    return -1073741584;
  v8 = v7 - 1;
  DestinationString->Length = v7 - 1;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v7;
    StringRoutine = (char *)NtdllpAllocateStringRoutine((unsigned int)v7);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v8 >= MaximumLength )
    {
      if ( !MaximumLength )
        return -2147483643;
      v6 = -2147483643;
      DestinationString->Length = MaximumLength - 1;
    }
  }
  v10 = RtlUnicodeToMultiByteN(
          DestinationString->Buffer,
          DestinationString->Length,
          (unsigned int)&v14,
          SourceString->Buffer,
          SourceString->Length);
  if ( v10 >= 0 )
    DestinationString->Buffer[v14] = 0;
  v11 = v10 < 0;
  if ( v10 < 0 )
  {
    if ( AllocateDestinationString )
    {
      NtdllpFreeStringRoutine((__int64)DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
    v11 = v10 < 0;
  }
  if ( !v11 )
    return v6;
  return v10;
}
