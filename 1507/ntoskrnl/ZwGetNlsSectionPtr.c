/*
 * XREFs of ZwGetNlsSectionPtr @ 0x140180D30
 * Callers:
 *     RtlpGetNormalization @ 0x1406D0328 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwGetNlsSectionPtr(
        ULONG SectionType,
        ULONG SectionData,
        PVOID ContextData,
        PVOID *SectionPointer,
        PULONG SectionSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SectionType);
}
