/*
 * XREFs of ZwMapViewOfSection @ 0x14015A180
 * Callers:
 *     RtlFileMapMapView @ 0x140233920 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x14049CFB8 (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x140621D68 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1406AB86C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1406ABA40 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1406B9298 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1406B95A0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1406BC008 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x1406C9970 (AslpFileLargeMapCreate.c)
 *     EmpMapPhysicalAddress @ 0x1407A7284 (EmpMapPhysicalAddress.c)
 *     CmpSetSystemBiosInformation @ 0x1407ACD84 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407AD088 (CmpSetVideoBiosInformation.c)
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
  return KiServiceInternal(SectionHandle, ProcessHandle, BaseAddress);
}
