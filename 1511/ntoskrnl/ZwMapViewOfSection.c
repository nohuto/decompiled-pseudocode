/*
 * XREFs of ZwMapViewOfSection @ 0x140150B20
 * Callers:
 *     RtlFileMapMapView @ 0x140219770 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x1403B68CC (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x1405F7FA8 (IopIsNotNativeDriverImage.c)
 *     ExpQueryElamCertInfo @ 0x14066B1D0 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140676858 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140676B60 (CMFSystemThreadRoutine.c)
 *     VfZwMapViewOfSection @ 0x1406D26E8 (VfZwMapViewOfSection.c)
 *     CmpSetSystemBiosInformation @ 0x140744130 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140744438 (CmpSetVideoBiosInformation.c)
 *     EmpMapPhysicalAddress @ 0x14075EFF8 (EmpMapPhysicalAddress.c)
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
