/*
 * XREFs of ZwOpenSection @ 0x140150D00
 * Callers:
 *     NtGetNlsSectionPtr @ 0x140461AE0 (NtGetNlsSectionPtr.c)
 *     VfZwOpenSection @ 0x1406D2CA0 (VfZwOpenSection.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140743C5C (CmpInitializeMachineDependentConfiguration.c)
 *     EmpMapPhysicalAddress @ 0x14075EFF8 (EmpMapPhysicalAddress.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
