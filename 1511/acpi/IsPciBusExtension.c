/*
 * XREFs of IsPciBusExtension @ 0x1C007C230
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C003BAD0 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     <none>
 */

char __fastcall IsPciBusExtension(__int64 a1)
{
  return IsNsobjPciBus(*(_QWORD *)(a1 + 704));
}
