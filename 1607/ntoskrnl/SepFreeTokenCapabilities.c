/*
 * XREFs of SepFreeTokenCapabilities @ 0x140088870
 * Callers:
 *     SepSetTokenCapabilities @ 0x140478A4C (SepSetTokenCapabilities.c)
 *     SepTokenDeleteMethod @ 0x1404A25E0 (SepTokenDeleteMethod.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x1406958F4 (SepDeReferenceSharedSidEntries.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*(PVOID *)(a1 + 792), 0);
}
