/*
 * XREFs of ACPIBusReenumerateSelf @ 0x1C00798C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ACPIBusReenumerateSelf(__int64 a1)
{
  *(_QWORD *)(a1 + 904) |= 0x20000000uLL;
  IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 736) + 728LL), BusRelations);
}
