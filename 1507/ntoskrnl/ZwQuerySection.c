/*
 * XREFs of ZwQuerySection @ 0x14017FA10
 * Callers:
 *     VfZwQuerySection @ 0x1407577C4 (VfZwQuerySection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T Length,
        PSIZE_T ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
