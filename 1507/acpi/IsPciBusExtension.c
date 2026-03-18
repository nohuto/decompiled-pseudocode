/*
 * XREFs of IsPciBusExtension @ 0x1C007C050
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C003B740 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     <none>
 */

char __fastcall IsPciBusExtension(__int64 a1)
{
  return IsNsobjPciBus(*(_QWORD *)(a1 + 704));
}
