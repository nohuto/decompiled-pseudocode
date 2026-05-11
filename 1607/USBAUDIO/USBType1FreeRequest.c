/*
 * XREFs of USBType1FreeRequest @ 0x1C00035B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall USBType1FreeRequest(PIRP *Buffer)
{
  IoFreeIrp(Buffer[2]);
  ExFreePool(Buffer);
}
