/*
 * XREFs of SepFreeTokenCapabilities @ 0x14000DA40
 * Callers:
 *     SepTokenDeleteMethod @ 0x1403C9070 (SepTokenDeleteMethod.c)
 *     SepSetTokenCapabilities @ 0x140478C80 (SepSetTokenCapabilities.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x140655F84 (SepDeReferenceSharedSidEntries.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*(PVOID *)(a1 + 792), 0);
}
