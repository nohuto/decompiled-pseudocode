/*
 * XREFs of RaidUnitConvertToNormalUnit @ 0x1C0009EA0
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C004D4DC (RaUnitStartDeviceIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C0053DB0 (RaUnitCancelStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterInsertUnit @ 0x1C000CEDC (RaidAdapterInsertUnit.c)
 *     RaidAdapterRemoveZombieUnit @ 0x1C0022100 (RaidAdapterRemoveZombieUnit.c)
 */

__int64 __fastcall RaidUnitConvertToNormalUnit(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 144) & 0x20) != 0 )
  {
    RaidAdapterRemoveZombieUnit(*(_QWORD *)(a1 + 24), a1);
    return RaidAdapterInsertUnit(*(_QWORD *)(a1 + 24), a1);
  }
  return result;
}
