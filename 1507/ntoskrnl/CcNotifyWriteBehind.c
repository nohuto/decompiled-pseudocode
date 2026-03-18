/*
 * XREFs of CcNotifyWriteBehind @ 0x1401284AC
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     CcScanDpc @ 0x1401284A0 (CcScanDpc.c)
 *     MiFlushAllPages @ 0x14014D6A0 (MiFlushAllPages.c)
 *     MmFlushAllFilesystemPages @ 0x140217008 (MmFlushAllFilesystemPages.c)
 *     MiObtainFreePages @ 0x14021AB2C (MiObtainFreePages.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     MiShutdownSystem @ 0x140402C68 (MiShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
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
