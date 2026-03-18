/*
 * XREFs of SepFreeTokenCapabilities @ 0x1401238D4
 * Callers:
 *     SepSetTokenCapabilities @ 0x140436FA8 (SepSetTokenCapabilities.c)
 *     SepTokenDeleteMethod @ 0x1404883A0 (SepTokenDeleteMethod.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x1406D8068 (SepDeReferenceSharedSidEntries.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*(PVOID *)(a1 + 792), 0);
}
