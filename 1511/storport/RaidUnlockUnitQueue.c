/*
 * XREFs of RaidUnlockUnitQueue @ 0x1C0007904
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C00510B8 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnlockUnitQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 437) = 0;
}
