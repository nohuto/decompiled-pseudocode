/*
 * XREFs of ndisInitializeStackTraces @ 0x1C009F110
 * Callers:
 *     DriverEntry @ 0x1C01023B0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN ndisInitializeStackTraces()
{
  BOOLEAN result; // al
  PRTL_DYNAMIC_HASH_TABLE HashTable; // [rsp+30h] [rbp+8h] BYREF

  HashTable = (PRTL_DYNAMIC_HASH_TABLE)&WPP_MAIN_CB.Dpc.SystemArgument1;
  KeInitializeSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Dpc.DeferredRoutine);
  BYTE3(WPP_MAIN_CB.Dpc.DeferredContext) = 4;
  WPP_MAIN_CB.DeviceLock.Header.LockNV = 0;
  *(_WORD *)((char *)&WPP_MAIN_CB.Dpc.DeferredContext + 1) = 0;
  result = RtlCreateHashTable(&HashTable, 0, 0);
  LOBYTE(WPP_MAIN_CB.Dpc.DeferredContext) = result;
  return result;
}
