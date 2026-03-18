/*
 * XREFs of ZwMapViewOfSection_0 @ 0x1C000FE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwMapViewOfSection_0(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  return ZwMapViewOfSection(
           SectionHandle,
           ProcessHandle,
           BaseAddress,
           ZeroBits,
           CommitSize,
           SectionOffset,
           ViewSize,
           InheritDisposition,
           AllocationType,
           Win32Protect);
}
