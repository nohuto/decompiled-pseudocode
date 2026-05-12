/*
 * XREFs of RaUnitStopDeviceIrp @ 0x1C0053F58
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0003418 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidLockUnitQueue @ 0x1C00133FC (RaidLockUnitQueue.c)
 */

__int64 __fastcall RaUnitStopDeviceIrp(__int64 a1)
{
  PIRP v1; // rax

  *(_DWORD *)(a1 + 40) = 2;
  RaidLockUnitQueue(a1);
  return RaidCompleteRequestEx(v1, 0, 0);
}
