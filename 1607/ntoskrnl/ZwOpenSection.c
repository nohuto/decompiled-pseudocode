/*
 * XREFs of ZwOpenSection @ 0x14015A360
 * Callers:
 *     NtGetNlsSectionPtr @ 0x14047557C (NtGetNlsSectionPtr.c)
 *     EmpMapPhysicalAddress @ 0x1407A7284 (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407AC8B4 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
