/*
 * XREFs of ZwUnmapViewOfSection @ 0x14015A730
 * Callers:
 *     RtlFileMapFree @ 0x14010B304 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x14023374C (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x1405158D4 (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x140621E1C (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1406AB9A4 (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1406ABB78 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1406B93D0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1406B96D8 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x1406BC000 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x1406C9D60 (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x1407A7158 (EmpCacheBiosDate.c)
 *     CmpSetSystemBiosInformation @ 0x1407ACD84 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407AD088 (CmpSetVideoBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
