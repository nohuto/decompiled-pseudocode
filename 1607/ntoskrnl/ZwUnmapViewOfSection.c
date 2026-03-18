/*
 * XREFs of ZwUnmapViewOfSection @ 0x14015A1C0
 * Callers:
 *     RtlFileMapFree @ 0x140084CFC (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x140233920 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x14049CFB8 (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x140621D68 (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1406AB86C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1406ABA40 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1406B9298 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1406B95A0 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x1406BBEC8 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x1406C9C28 (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x1407A7158 (EmpCacheBiosDate.c)
 *     CmpSetSystemBiosInformation @ 0x1407ACD84 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407AD088 (CmpSetVideoBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress, v2);
}
