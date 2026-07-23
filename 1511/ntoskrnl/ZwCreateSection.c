/*
 * XREFs of ZwCreateSection @ 0x140150F60
 * Callers:
 *     LdrpMapResourceFile @ 0x140140BCC (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x140219770 (RtlFileMapMapView.c)
 *     KsepShimDbMapToMemory @ 0x1403B5C58 (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x1403B68CC (PiLookupInDDB.c)
 *     NtGetNlsSectionPtr @ 0x140461AE0 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x140464988 (ExpGetGlobalLocaleSection.c)
 *     ExUpdateLicenseData_0 @ 0x140488840 (ExUpdateLicenseData_0.c)
 *     SepRmLsaConnectRequest @ 0x14053C6C0 (SepRmLsaConnectRequest.c)
 *     IopIsNotNativeDriverImage @ 0x1405F7FA8 (IopIsNotNativeDriverImage.c)
 *     sub_1406695B8 @ 0x1406695B8 (sub_1406695B8.c)
 *     ExpQueryElamCertInfo @ 0x14066B1D0 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140676858 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140676B60 (CMFSystemThreadRoutine.c)
 *     VfZwCreateSection @ 0x1406D1D50 (VfZwCreateSection.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
