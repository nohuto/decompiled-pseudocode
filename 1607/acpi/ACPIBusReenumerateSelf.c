/*
 * XREFs of ACPIBusReenumerateSelf @ 0x1C009A7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ACPIBusReenumerateSelf(__int64 a1)
{
  *(_QWORD *)(a1 + 912) |= 0x20000000uLL;
  IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 744) + 736LL), BusRelations);
}
