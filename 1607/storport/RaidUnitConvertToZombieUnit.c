/*
 * XREFs of RaidUnitConvertToZombieUnit @ 0x1C00373E0
 * Callers:
 *     RaUnitSurpriseRemovalIrp @ 0x1C005F7C0 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveUnit @ 0x1C0012600 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertZombieUnit @ 0x1C002740C (RaidAdapterInsertZombieUnit.c)
 */

void __fastcall RaidUnitConvertToZombieUnit(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 152) & 0x20) == 0 )
  {
    RaidAdapterRemoveUnit(*(_QWORD *)(a1 + 24), a1);
    RaidAdapterInsertZombieUnit(*(_QWORD *)(a1 + 24), a1);
  }
}
