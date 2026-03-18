/*
 * XREFs of PiSwPdoAssociationFree @ 0x140539F9C
 * Callers:
 *     PiSwDeviceFree @ 0x140539E04 (PiSwDeviceFree.c)
 *     PiSwRemovePdoAssociation @ 0x140539F50 (PiSwRemovePdoAssociation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *a1)
{
  ObfDereferenceObject(a1[2]);
  ObfDereferenceObject(a1[3]);
  ExFreePoolWithTag(a1, 0x57706E50u);
}
