/*
 * XREFs of DbgLoadImageSymbolsUnicode @ 0x140153CBC
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140574F44 (MiDriverLoadSucceeded.c)
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     DbgUnicodeStringToAnsiString @ 0x1400255E0 (DbgUnicodeStringToAnsiString.c)
 *     DbgLoadImageSymbols @ 0x140153D04 (DbgLoadImageSymbols.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
