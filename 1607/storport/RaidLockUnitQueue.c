/*
 * XREFs of RaidLockUnitQueue @ 0x1C001AE7C
 * Callers:
 *     RaUnitStopDeviceIrp @ 0x1C005F1F8 (RaUnitStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidLockUnitQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 437) = 1;
}
