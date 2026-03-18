/*
 * XREFs of CcNotifyWriteBehind @ 0x1400AB9E0
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x14007091C (CcScheduleLazyWriteScan.c)
 *     CcScanDpc @ 0x1400AB9D4 (CcScanDpc.c)
 *     MiFlushAllPages @ 0x140113188 (MiFlushAllPages.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5DD4 (MmFlushAllFilesystemPages.c)
 *     MiObtainFreePages @ 0x1401E9B08 (MiObtainFreePages.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     MiShutdownSystem @ 0x1403DE8F8 (MiShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
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
