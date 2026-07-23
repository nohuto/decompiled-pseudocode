/*
 * XREFs of ZwMapViewOfSection @ 0x14017F4F0
 * Callers:
 *     RtlFileMapMapView @ 0x140269450 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x1405AA490 (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x140671E78 (IopIsNotNativeDriverImage.c)
 *     ExpQueryElamCertInfo @ 0x1406EE818 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1406FB028 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1406FB330 (CMFSystemThreadRoutine.c)
 *     VfZwMapViewOfSection @ 0x1407562B0 (VfZwMapViewOfSection.c)
 *     EmpMapPhysicalAddress @ 0x1407CD874 (EmpMapPhysicalAddress.c)
 *     CmpSetSystemBiosInformation @ 0x1407D84CC (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407D87DC (CmpSetVideoBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMapViewOfSection(
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
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
