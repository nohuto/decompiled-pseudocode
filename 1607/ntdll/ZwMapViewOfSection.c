/*
 * XREFs of ZwMapViewOfSection @ 0x1800A6920
 * Callers:
 *     PsspCaptureHandleInformation @ 0x180004AC8 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x180005260 (PsspCaptureThreadInformation.c)
 *     PsspCaptureVaSpaceInformation @ 0x180005CA4 (PsspCaptureVaSpaceInformation.c)
 *     WerpCreateCrashDataSection @ 0x180006CF0 (WerpCreateCrashDataSection.c)
 *     PssNtWalkSnapshot @ 0x180007FE0 (PssNtWalkSnapshot.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x18000830C (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x180008430 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x1800085A4 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     LdrpMapResourceFile @ 0x18000E960 (LdrpMapResourceFile.c)
 *     LdrpMapViewOfSection @ 0x18002F344 (LdrpMapViewOfSection.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067334 (PsspCaptureAuxiliaryPages.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800685B0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A94C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18006E358 (RtlpChangeQueryDebugBufferTarget.c)
 *     CsrpConnectToServer @ 0x180075354 (CsrpConnectToServer.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007832C (LdrpFindLoadedDllByMappingFile.c)
 *     PsspCaptureHandleTrace @ 0x180088D78 (PsspCaptureHandleTrace.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008BE50 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlHeapTrkInitialize @ 0x18008F3D0 (RtlHeapTrkInitialize.c)
 *     RtlCreateProcessReflection @ 0x1800D2FE0 (RtlCreateProcessReflection.c)
 *     AvrfMiniLoadDll @ 0x1800D76D4 (AvrfMiniLoadDll.c)
 *     RtlReportSqmEscalation @ 0x1800D8B20 (RtlReportSqmEscalation.c)
 *     RtlComputeImportTableHash @ 0x1800DB720 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800DD1EC (LdrpResMapFile.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800E9FF0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800EA100 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800EA600 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800EA764 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800EF630 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpHeapTrkLeakCallback @ 0x1800F0000 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800F7804 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1800F8900 (RtlpHpStackTraceSerializeRemote.c)
 *     _ResMapViewOfFile @ 0x180104AF4 (_ResMapViewOfFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMapViewOfSection(
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
  NTSTATUS result; // eax

  result = 40;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
