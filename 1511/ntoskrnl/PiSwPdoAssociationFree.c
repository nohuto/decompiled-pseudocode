/*
 * XREFs of PiSwPdoAssociationFree @ 0x140494EE8
 * Callers:
 *     PiSwDeviceFree @ 0x140494D34 (PiSwDeviceFree.c)
 *     PiSwRemovePdoAssociation @ 0x140494E9C (PiSwRemovePdoAssociation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *a1)
{
  ObfDereferenceObject(a1[2]);
  ObfDereferenceObject(a1[3]);
  ExFreePoolWithTag(a1, 0x57706E50u);
}
