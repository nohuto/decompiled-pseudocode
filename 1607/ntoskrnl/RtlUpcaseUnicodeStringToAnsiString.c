/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x1406857C4
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x140255B30 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1403F6F7C (ExpAllocateStringRoutine.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1404A5820 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406858F8 (RtlxUnicodeStringToOemSize.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeStringToAnsiString(
        PANSI_STRING AnsiDest,
        PCUNICODE_STRING UniSource,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int64 v6; // rax
  char *StringRoutine; // rax
  int v9; // edi
  ULONG BytesInMultiByteString; // [rsp+78h] [rbp+20h] BYREF

  if ( (_BYTE)NlsMbCodePageTag )
    LODWORD(v6) = RtlxUnicodeStringToOemSize(UniSource);
  else
    v6 = ((unsigned __int64)UniSource->Length + 2) >> 1;
  if ( (unsigned int)v6 > 0xFFFF )
    return -1073741584;
  AnsiDest->Length = v6 - 1;
  if ( AllocateDestinationString )
  {
    AnsiDest->MaximumLength = v6;
    StringRoutine = (char *)ExpAllocateStringRoutine((unsigned int)v6);
    AnsiDest->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)(v6 - 1) >= AnsiDest->MaximumLength )
  {
    return -2147483643;
  }
  v9 = RtlUpcaseUnicodeToMultiByteN(
         AnsiDest->Buffer,
         AnsiDest->Length,
         &BytesInMultiByteString,
         UniSource->Buffer,
         UniSource->Length);
  if ( v9 >= 0 )
  {
    AnsiDest->Buffer[BytesInMultiByteString] = 0;
    v9 = 0;
  }
  if ( v9 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePool(AnsiDest->Buffer);
      AnsiDest->Buffer = 0LL;
    }
  }
  return v9;
}
