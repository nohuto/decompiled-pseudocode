/*
 * XREFs of DbgUnicodeStringToAnsiString @ 0x140084708
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x140084674 (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1401306FC (DbgUnLoadImageSymbolsUnicode.c)
 *     MiLoadUserSymbols @ 0x14058059C (MiLoadUserSymbols.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403F6230 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406858F8 (RtlxUnicodeStringToOemSize.c)
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
