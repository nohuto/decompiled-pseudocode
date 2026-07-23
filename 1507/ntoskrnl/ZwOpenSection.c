/*
 * XREFs of ZwOpenSection @ 0x14017F6D0
 * Callers:
 *     NtGetNlsSectionPtr @ 0x14040FF20 (NtGetNlsSectionPtr.c)
 *     VfZwOpenSection @ 0x140756868 (VfZwOpenSection.c)
 *     EmpMapPhysicalAddress @ 0x1407CD874 (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407D7FF8 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
