/*
 * XREFs of RaidUnitConvertToZombieUnit @ 0x1C0034200
 * Callers:
 *     RaUnitSurpriseRemovalIrp @ 0x1C0058460 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveUnit @ 0x1C000E64C (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertZombieUnit @ 0x1C0024020 (RaidAdapterInsertZombieUnit.c)
 */

void __fastcall RaidUnitConvertToZombieUnit(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 144) & 0x20) == 0 )
  {
    RaidAdapterRemoveUnit(*(_QWORD *)(a1 + 24), a1);
    RaidAdapterInsertZombieUnit(*(_QWORD *)(a1 + 24), a1);
  }
}
