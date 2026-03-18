/*
 * XREFs of CcNotifyWriteBehind @ 0x1400EB5C0
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x1400AF9F0 (CcScheduleLazyWriteScan.c)
 *     CcScanDpc @ 0x1400EB5B4 (CcScanDpc.c)
 *     MiFlushAllPages @ 0x140118BC4 (MiFlushAllPages.c)
 *     MmFlushAllFilesystemPages @ 0x1401D5180 (MmFlushAllFilesystemPages.c)
 *     MiObtainFreePages @ 0x1401D7D4C (MiObtainFreePages.c)
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 *     MiShutdownSystem @ 0x1403B1B80 (MiShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

LONG __fastcall CcNotifyWriteBehind(char a1)
{
  LONG result; // eax

  if ( CcInitializationComplete )
  {
    if ( (a1 & 1) != 0 )
      result = KeSetEvent(&CcLowMemoryEvent, 0, 0);
    if ( (a1 & 2) != 0 )
      result = KeSetEvent(&CcPowerEvent, 0, 0);
    if ( (a1 & 4) != 0 )
      result = KeSetEvent(&CcPeriodicEvent, 0, 0);
    if ( (a1 & 8) != 0 )
      result = KeSetEvent(&CcWaitingForTeardownEvent, 0, 0);
    if ( (a1 & 0x10) != 0 )
      return KeSetEvent(&CcCoalescingFlushEvent, 0, 0);
  }
  return result;
}
