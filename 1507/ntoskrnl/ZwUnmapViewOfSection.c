/*
 * XREFs of ZwUnmapViewOfSection @ 0x14017F530
 * Callers:
 *     RtlFileMapFree @ 0x14016C7F8 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x140269450 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x1405AA490 (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x140671E78 (IopIsNotNativeDriverImage.c)
 *     ExpQueryElamCertInfo @ 0x1406EE818 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1406FB028 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1406FB330 (CMFSystemThreadRoutine.c)
 *     VerifierZwUnmapViewOfSection @ 0x14074264C (VerifierZwUnmapViewOfSection.c)
 *     EmpCacheBiosDate @ 0x1407CD748 (EmpCacheBiosDate.c)
 *     CmpSetSystemBiosInformation @ 0x1407D84CC (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407D87DC (CmpSetVideoBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
