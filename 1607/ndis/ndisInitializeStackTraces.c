/*
 * XREFs of ndisInitializeStackTraces @ 0x1C00ADCF8
 * Callers:
 *     DriverEntry @ 0x1C01027E0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN ndisInitializeStackTraces()
{
  BOOLEAN result; // al
  PRTL_DYNAMIC_HASH_TABLE HashTable; // [rsp+30h] [rbp+8h] BYREF

  HashTable = &::HashTable;
  KeInitializeSpinLock(&ndisStackTraces);
  byte_1C008903B = 4;
  dword_1C0089068 = 0;
  unk_1C0089039 = 0;
  result = RtlCreateHashTable(&HashTable, 0, 0);
  byte_1C0089038 = result;
  return result;
}
