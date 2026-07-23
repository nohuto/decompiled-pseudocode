/*
 * XREFs of ZwUnmapViewOfSection @ 0x140150B60
 * Callers:
 *     RtlFileMapFree @ 0x140002870 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x140219770 (RtlFileMapMapView.c)
 *     PiLookupInDDB @ 0x1403B68CC (PiLookupInDDB.c)
 *     IopIsNotNativeDriverImage @ 0x1405F7FA8 (IopIsNotNativeDriverImage.c)
 *     ExpQueryElamCertInfo @ 0x14066B1D0 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x140676858 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140676B60 (CMFSystemThreadRoutine.c)
 *     VerifierZwUnmapViewOfSection @ 0x1406C0E0C (VerifierZwUnmapViewOfSection.c)
 *     CmpSetSystemBiosInformation @ 0x140744130 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140744438 (CmpSetVideoBiosInformation.c)
 *     EmpCacheBiosDate @ 0x14075EECC (EmpCacheBiosDate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
