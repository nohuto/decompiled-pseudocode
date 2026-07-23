/*
 * XREFs of PiSwPdoAssociationFree @ 0x140483CEC
 * Callers:
 *     PiSwRemovePdoAssociation @ 0x140483CA0 (PiSwRemovePdoAssociation.c)
 *     PiSwDeviceFree @ 0x140483DD0 (PiSwDeviceFree.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *a1)
{
  ObfDereferenceObject(a1[2]);
  ObfDereferenceObject(a1[3]);
  ExFreePoolWithTag(a1, 0x57706E50u);
}
