/*
 * XREFs of DbgUnicodeStringToAnsiString @ 0x1400027D4
 * Callers:
 *     DbgUnLoadImageSymbolsUnicode @ 0x140002318 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadImageSymbolsUnicode @ 0x140002740 (DbgLoadImageSymbolsUnicode.c)
 *     MiLoadUserSymbols @ 0x14054AA4C (MiLoadUserSymbols.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403B8140 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToOemSize @ 0x140644BE0 (RtlxUnicodeStringToOemSize.c)
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
