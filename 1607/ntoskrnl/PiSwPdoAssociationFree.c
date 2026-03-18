/*
 * XREFs of PiSwPdoAssociationFree @ 0x1404C39D0
 * Callers:
 *     PiSwRemovePdoAssociation @ 0x1404C3984 (PiSwRemovePdoAssociation.c)
 *     PiSwDeviceFree @ 0x1404C3B98 (PiSwDeviceFree.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *a1)
{
  ObfDereferenceObject(a1[2]);
  ObfDereferenceObject(a1[3]);
  ExFreePoolWithTag(a1, 0x57706E50u);
}
