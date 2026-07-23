/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x1800240C0
 * Callers:
 *     LdrpGetModuleName @ 0x180068D70 (LdrpGetModuleName.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x1800241A0 (RtlUnicodeToMultiByteN.c)
 *     NtdllpAllocateStringRoutine @ 0x180024358 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800D24B0 (RtlxUnicodeStringToOemSize.c)
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
  __int64 v10; // rdx
  int v11; // edi
  __int64 v12; // r8
  bool v13; // sf
  unsigned __int16 MaximumLength; // ax
  ULONG BytesInMultiByteString; // [rsp+88h] [rbp+20h] BYREF

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
    StringRoutine = (char *)NtdllpAllocateStringRoutine((unsigned int)v7, SourceString);
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
  v11 = RtlUnicodeToMultiByteN(
          DestinationString->Buffer,
          DestinationString->Length,
          &BytesInMultiByteString,
          SourceString->Buffer,
          SourceString->Length);
  if ( v11 >= 0 )
    DestinationString->Buffer[BytesInMultiByteString] = 0;
  v13 = v11 < 0;
  if ( v11 < 0 )
  {
    if ( AllocateDestinationString )
    {
      NtdllpFreeStringRoutine(DestinationString->Buffer, v10, v12);
      DestinationString->Buffer = 0LL;
    }
    v13 = v11 < 0;
  }
  if ( !v13 )
    return v6;
  return v11;
}
