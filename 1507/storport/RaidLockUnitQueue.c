/*
 * XREFs of RaidLockUnitQueue @ 0x1C00133FC
 * Callers:
 *     RaUnitStopDeviceIrp @ 0x1C0053F58 (RaUnitStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidLockUnitQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 437) = 1;
}
