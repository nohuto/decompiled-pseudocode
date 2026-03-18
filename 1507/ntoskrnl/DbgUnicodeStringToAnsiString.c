/*
 * XREFs of DbgUnicodeStringToAnsiString @ 0x1400255E0
 * Callers:
 *     DbgUnLoadImageSymbolsUnicode @ 0x140025574 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadImageSymbolsUnicode @ 0x140153CBC (DbgLoadImageSymbolsUnicode.c)
 *     MiLoadUserSymbols @ 0x1405C1F68 (MiLoadUserSymbols.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404FF2E0 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406C7C6C (RtlxUnicodeStringToOemSize.c)
 */

__int64 __fastcall DbgUnicodeStringToAnsiString(PANSI_STRING DestinationString, PCUNICODE_STRING UnicodeString)
{
  unsigned __int64 v4; // r8
  char *PoolWithTag; // rax

  if ( (_BYTE)NlsMbCodePageTag )
    LODWORD(v4) = RtlxUnicodeStringToOemSize(UnicodeString);
  else
    v4 = ((unsigned __int64)UnicodeString->Length + 2) >> 1;
  if ( (unsigned int)v4 <= 0xFFFF )
  {
    DestinationString->MaximumLength = v4;
    DestinationString->Length = v4 - 1;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v4, 0x644C6D4Du);
    DestinationString->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( RtlUnicodeStringToAnsiString(DestinationString, UnicodeString, 0) >= 0 )
        return 1LL;
      ExFreePoolWithTag(DestinationString->Buffer, 0);
    }
  }
  return 0LL;
}
