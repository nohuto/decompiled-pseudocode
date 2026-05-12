/*
 * XREFs of RaidUnitRestartQueue @ 0x1C0010410
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C0058E58 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RaidUnitRestartQueue(__int64 a1)
{
  RaidRestartIoQueue(a1);
}
