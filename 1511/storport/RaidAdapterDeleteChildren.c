/*
 * XREFs of RaidAdapterDeleteChildren @ 0x1C0023984
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00570E0 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaidAdapterRemoveNormalChildren @ 0x1C00244F8 (RaidAdapterRemoveNormalChildren.c)
 */

__int64 __fastcall RaidAdapterDeleteChildren(__int64 a1)
{
  RaidAdapterRemoveNormalChildren(a1, RaUnitAdapterRemove);
  return RaidAdapterRemoveZombieChildren(a1, RaUnitAdapterRemove);
}
