/*
 * XREFs of PspIoRateEntryDeactivate @ 0x1404D3B2C
 * Callers:
 *     PspIoRateEntryActivate @ 0x1404D4244 (PspIoRateEntryActivate.c)
 *     PspSetJobIoRateControl @ 0x1404D4610 (PspSetJobIoRateControl.c)
 *     PspJobIoRateControlDisable @ 0x14051A458 (PspJobIoRateControlDisable.c)
 *     PspSetJobIoRateControlForVolume @ 0x1406809FC (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14001EF2C (IoDiskIoAttributionDereference.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     IoStopIoRateControl @ 0x1400B40B0 (IoStopIoRateControl.c)
 *     IoStopDiskIoAttributionForContext @ 0x1400B4FE0 (IoStopDiskIoAttributionForContext.c)
 */

void __fastcall PspIoRateEntryDeactivate(struct _EX_RUNDOWN_REF *a1)
{
  _RTL_BALANCED_NODE *Count; // rcx

  ExWaitForRundownProtectionRelease(a1 + 4);
  IoStopIoRateControl(a1[5].Count);
  Count = (_RTL_BALANCED_NODE *)a1[6].Count;
  a1[5].Count = 0LL;
  if ( Count )
  {
    IoStopDiskIoAttributionForContext(Count);
    IoDiskIoAttributionDereference(a1[6].Count);
    a1[6].Count = 0LL;
  }
}
