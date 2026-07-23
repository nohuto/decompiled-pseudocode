/*
 * XREFs of DbgUnLoadImageSymbolsUnicode @ 0x140002318
 * Callers:
 *     MiSegmentDelete @ 0x1403C7FD8 (MiSegmentDelete.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 *     MiSwitchBaseAddress @ 0x1404B1F88 (MiSwitchBaseAddress.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     DbgUnicodeStringToAnsiString @ 0x1400027D4 (DbgUnicodeStringToAnsiString.c)
 *     DebugService2 @ 0x14015B930 (DebugService2.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgUnLoadImageSymbolsUnicode(PCUNICODE_STRING UnicodeString, __int64 a2, __int64 a3)
{
  _STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  if ( !(unsigned int)DbgUnicodeStringToAnsiString(&DestinationString, UnicodeString) )
    return 0LL;
  v8 = 0;
  v9 = 0;
  v7[0] = a2;
  v7[1] = a3;
  DebugService2(&DestinationString, v7, 4LL);
  ExFreePoolWithTag(DestinationString.Buffer, 0);
  return 1LL;
}
