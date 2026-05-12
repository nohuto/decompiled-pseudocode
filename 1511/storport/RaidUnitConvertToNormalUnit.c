/*
 * XREFs of RaidUnitConvertToNormalUnit @ 0x1C000C0D8
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C00510B8 (RaUnitStartDeviceIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C0057CF0 (RaUnitCancelStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterInsertUnit @ 0x1C000F14C (RaidAdapterInsertUnit.c)
 *     RaidAdapterRemoveZombieUnit @ 0x1C00246A4 (RaidAdapterRemoveZombieUnit.c)
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
