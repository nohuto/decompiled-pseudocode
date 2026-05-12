/*
 * XREFs of RaidUnitRestartQueue @ 0x1C000C028
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C00510B8 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RaidUnitRestartQueue(__int64 a1)
{
  return RaidRestartIoQueue(a1);
}
