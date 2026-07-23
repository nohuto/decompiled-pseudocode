/*
 * XREFs of ZwCreateSection @ 0x14017F930
 * Callers:
 *     LdrpMapResourceFile @ 0x14016E980 (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x140269450 (RtlFileMapMapView.c)
 *     NtGetNlsSectionPtr @ 0x14040FF20 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x140464DB4 (ExpGetGlobalLocaleSection.c)
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
 *     KsepShimDbMapToMemory @ 0x140572334 (KsepShimDbMapToMemory.c)
 *     SepRmLsaConnectRequest @ 0x1405A79A8 (SepRmLsaConnectRequest.c)
 *     sub_1405A99E4 @ 0x1405A99E4 (sub_1405A99E4.c)
 *     PiLookupInDDB @ 0x1405AA490 (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x140671E78 (IopIsNotNativeDriverImage.c)
 *     ExpQueryElamCertInfo @ 0x1406EE818 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1406FB028 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1406FB330 (CMFSystemThreadRoutine.c)
 *     VfZwCreateSection @ 0x140755918 (VfZwCreateSection.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
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
