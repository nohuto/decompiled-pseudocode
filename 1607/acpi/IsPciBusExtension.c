/*
 * XREFs of IsPciBusExtension @ 0x1C009D3D8
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C0029820 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     <none>
 */

char __fastcall IsPciBusExtension(__int64 a1)
{
  return IsNsobjPciBus(*(_QWORD *)(a1 + 712));
}
