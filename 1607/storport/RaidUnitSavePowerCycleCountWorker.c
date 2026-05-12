/*
 * XREFs of RaidUnitSavePowerCycleCountWorker @ 0x1C0031310
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0002064 (RaUnitReleaseRemoveLock.c)
 *     RaidUnitSavePowerCycleCount @ 0x1C001502C (RaidUnitSavePowerCycleCount.c)
 */

void __fastcall RaidUnitSavePowerCycleCountWorker(PVOID IoObject, struct _KEVENT *Context, PIO_WORKITEM IoWorkItem)
{
  RaidUnitSavePowerCycleCount((__int64)Context);
  LODWORD(Context[6].Header.WaitListHead.Blink) &= ~2u;
  RaUnitReleaseRemoveLock(Context);
  IoFreeWorkItem(IoWorkItem);
}
