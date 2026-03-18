/*
 * XREFs of ZwCreateSection @ 0x14015A5C0
 * Callers:
 *     LdrpMapResourceFile @ 0x140149CC4 (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x140233920 (RtlFileMapMapView.c)
 *     NtGetNlsSectionPtr @ 0x14047557C (NtGetNlsSectionPtr.c)
 *     KsepShimDbMapToMemory @ 0x140495074 (KsepShimDbMapToMemory.c)
 *     ExUpdateLicenseDataInternal @ 0x140496474 (ExUpdateLicenseDataInternal.c)
 *     PiLookupInDDB @ 0x14049CFB8 (PiLookupInDDB.c)
 *     ExpGetGlobalLocaleSection @ 0x1404D2D90 (ExpGetGlobalLocaleSection.c)
 *     SepRmLsaConnectRequest @ 0x14056B9C0 (SepRmLsaConnectRequest.c)
 *     IopIsNotNativeDriverImage @ 0x140621D68 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1406AB86C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1406ABA40 (ExpQueryElamCertInfo.c)
 *     sub_1406AEC3C @ 0x1406AEC3C (sub_1406AEC3C.c)
 *     CMFReadCompressedSegment @ 0x1406B9298 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1406B95A0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1406BC008 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x1406C9970 (AslpFileLargeMapCreate.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(SectionHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
