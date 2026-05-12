/*
 * XREFs of RaidLockUnitQueue @ 0x1C0015FBC
 * Callers:
 *     RaUnitStopDeviceIrp @ 0x1C0057E98 (RaUnitStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidLockUnitQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 437) = 1;
}
