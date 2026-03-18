/*
 * XREFs of PspIoRateEntryDeactivate @ 0x1404F1A38
 * Callers:
 *     PspJobIoRateControlDisable @ 0x1404A204C (PspJobIoRateControlDisable.c)
 *     PspIoRateEntryActivate @ 0x1404F1AB0 (PspIoRateEntryActivate.c)
 *     PspSetJobIoRateControl @ 0x1404F1E7C (PspSetJobIoRateControl.c)
 *     PspSetJobIoRateControlForVolume @ 0x140680918 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14001F3AC (IoDiskIoAttributionDereference.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074D34 (ExWaitForRundownProtectionRelease.c)
 *     IoStopIoRateControl @ 0x1400B6288 (IoStopIoRateControl.c)
 *     IoStopDiskIoAttributionForContext @ 0x1400B71B8 (IoStopDiskIoAttributionForContext.c)
 */

void __fastcall PspIoRateEntryDeactivate(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *Count; // rcx

  ExWaitForRundownProtectionRelease(a1 + 4);
  IoStopIoRateControl(a1[5].Count);
  Count = (struct _EX_RUNDOWN_REF *)a1[6].Count;
  a1[5].Count = 0LL;
  if ( Count )
  {
    IoStopDiskIoAttributionForContext(Count);
    IoDiskIoAttributionDereference(a1[6].Count);
    a1[6].Count = 0LL;
  }
}
