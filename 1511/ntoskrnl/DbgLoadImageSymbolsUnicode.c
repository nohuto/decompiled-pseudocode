/*
 * XREFs of DbgLoadImageSymbolsUnicode @ 0x140002740
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1403CD204 (MiDriverLoadSucceeded.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     DbgLoadImageSymbols @ 0x140002788 (DbgLoadImageSymbols.c)
 *     DbgUnicodeStringToAnsiString @ 0x1400027D4 (DbgUnicodeStringToAnsiString.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgLoadImageSymbolsUnicode(PCUNICODE_STRING UnicodeString, PVOID Base)
{
  STRING Name; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)DbgUnicodeStringToAnsiString(&Name, UnicodeString) )
    return 0LL;
  DbgLoadImageSymbols(&Name, Base, 0xFFFFFFFFFFFFFFFFuLL);
  ExFreePoolWithTag(Name.Buffer, 0);
  return 1LL;
}
