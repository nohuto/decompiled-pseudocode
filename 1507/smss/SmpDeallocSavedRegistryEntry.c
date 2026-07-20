/*
 * XREFs of SmpDeallocSavedRegistryEntry @ 0x14000A874
 * Callers:
 *     SmpBuildSubSystemLists @ 0x140009D40 (SmpBuildSubSystemLists.c)
 *     SmpFreeSavedRegistryEntry @ 0x14000A848 (SmpFreeSavedRegistryEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SmpDeallocSavedRegistryEntry(struct _UNICODE_STRING *BaseAddress)
{
  void *v2; // r8
  BOOLEAN result; // al

  if ( BaseAddress )
  {
    RtlFreeUnicodeString(BaseAddress + 2);
    v2 = *(void **)&BaseAddress[3].Length;
    if ( v2 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v2);
    return RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
  }
  return result;
}
