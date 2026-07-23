/*
 * XREFs of NtQuerySection @ 0x180093E10
 * Callers:
 *     PsspDumpObject_Section @ 0x180082D80 (PsspDumpObject_Section.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T SectionInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS result; // eax

  result = 81;
  __asm { syscall; Low latency system call }
  return result;
}
