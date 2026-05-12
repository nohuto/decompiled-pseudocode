/*
 * XREFs of RaidUnitConvertToZombieUnit @ 0x1C00329A0
 * Callers:
 *     RaUnitSurpriseRemovalIrp @ 0x1C0054520 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveUnit @ 0x1C000C3DC (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertZombieUnit @ 0x1C00219E0 (RaidAdapterInsertZombieUnit.c)
 */

void __fastcall RaidUnitConvertToZombieUnit(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 144) & 0x20) == 0 )
  {
    RaidAdapterRemoveUnit(*(_QWORD *)(a1 + 24), a1);
    RaidAdapterInsertZombieUnit(*(_QWORD *)(a1 + 24), a1);
  }
}
