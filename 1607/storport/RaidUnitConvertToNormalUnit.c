/*
 * XREFs of RaidUnitConvertToNormalUnit @ 0x1C0010418
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C0058E58 (RaUnitStartDeviceIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C005F050 (RaUnitCancelStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterInsertUnit @ 0x1C00132B4 (RaidAdapterInsertUnit.c)
 *     RaidAdapterRemoveZombieUnit @ 0x1C0027A90 (RaidAdapterRemoveZombieUnit.c)
 */

__int64 __fastcall RaidUnitConvertToNormalUnit(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 152) & 0x20) != 0 )
  {
    RaidAdapterRemoveZombieUnit(*(_QWORD *)(a1 + 24), a1);
    return RaidAdapterInsertUnit(*(_QWORD *)(a1 + 24), a1);
  }
  return result;
}
