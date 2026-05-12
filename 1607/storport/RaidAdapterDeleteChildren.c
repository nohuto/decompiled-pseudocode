/*
 * XREFs of RaidAdapterDeleteChildren @ 0x1C0026D4C
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C005E438 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaidAdapterRemoveNormalChildren @ 0x1C00278E4 (RaidAdapterRemoveNormalChildren.c)
 */

__int64 __fastcall RaidAdapterDeleteChildren(__int64 a1)
{
  RaidAdapterRemoveNormalChildren(a1, RaUnitAdapterRemove);
  return RaidAdapterRemoveZombieChildren(a1, RaUnitAdapterRemove);
}
