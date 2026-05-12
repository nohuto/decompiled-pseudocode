/*
 * XREFs of RaidUnlockUnitQueue @ 0x1C0005C54
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C004D4DC (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnlockUnitQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 437) = 0;
}
