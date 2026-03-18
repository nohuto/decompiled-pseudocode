/*
 * XREFs of MiLockPage @ 0x140226160
 * Callers:
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     MiFillPagedPoolLockedDown @ 0x1406A4AAC (MiFillPagedPoolLockedDown.c)
 *     MiScanPagefileSpace @ 0x1406A5284 (MiScanPagefileSpace.c)
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 *     MmAreMdlPagesLocked @ 0x140735E3C (MmAreMdlPagesLocked.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

unsigned __int8 __fastcall MiLockPage(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // ebx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
    while ( *(__int64 *)(a1 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  return CurrentIrql;
}
