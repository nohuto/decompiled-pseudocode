/*
 * XREFs of ndisInitializeStackTraces @ 0x1C009A340
 * Callers:
 *     DriverEntry @ 0x1C00FC3C0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN ndisInitializeStackTraces()
{
  BOOLEAN result; // al
  PRTL_DYNAMIC_HASH_TABLE HashTable; // [rsp+30h] [rbp+8h] BYREF

  HashTable = &::HashTable;
  KeInitializeSpinLock(&ndisStackTraces);
  byte_1C0082ECB = 4;
  dword_1C0082EF8 = 0;
  unk_1C0082EC9 = 0;
  result = RtlCreateHashTable(&HashTable, 0, 0);
  byte_1C0082EC8 = result;
  return result;
}
