/*
 * XREFs of RaidUnitRestartQueue @ 0x1C0009DF0
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C004D4DC (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RaidUnitRestartQueue(__int64 a1)
{
  return RaidRestartIoQueue(a1);
}
