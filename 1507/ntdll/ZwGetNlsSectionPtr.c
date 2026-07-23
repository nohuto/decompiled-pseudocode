/*
 * XREFs of ZwGetNlsSectionPtr @ 0x1800947A0
 * Callers:
 *     RtlpGetNormalization @ 0x18005F18C (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetNlsSectionPtr(
        ULONG SectionType,
        ULONG SectionData,
        PVOID ContextData,
        PVOID *SectionPointer,
        PULONG SectionSize)
{
  NTSTATUS result; // eax

  result = 234;
  __asm { syscall; Low latency system call }
  return result;
}
