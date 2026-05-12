/*
 * XREFs of RaidUnitSavePowerCycleCountWorker @ 0x1C002DB30
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00047F4 (RaUnitReleaseRemoveLock.c)
 *     RaidUnitSavePowerCycleCount @ 0x1C0011EC8 (RaidUnitSavePowerCycleCount.c)
 */

void __fastcall RaidUnitSavePowerCycleCountWorker(PVOID IoObject, _DWORD *Context, PIO_WORKITEM IoWorkItem)
{
  RaidUnitSavePowerCycleCount((__int64)Context);
  Context[38] &= ~2u;
  RaUnitReleaseRemoveLock((__int64)Context);
  IoFreeWorkItem(IoWorkItem);
}
