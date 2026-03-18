/*
 * XREFs of PspIoRateEntryVolumeCompare @ 0x14020F844
 * Callers:
 *     PspJobIoRateVolumeEntryInsert @ 0x14020F970 (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryReference @ 0x14020FA1C (PspJobIoRateVolumeEntryReference.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x14020FAB4 (PspJobIoRateVolumeEntryRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspIoRateEntryVolumeCompare(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 >= v2 )
    return a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
