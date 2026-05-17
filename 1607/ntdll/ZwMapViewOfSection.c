/*
 * XREFs of ZwMapViewOfSection @ 0x1800A6920
 * Callers:
 *     PsspCaptureHandleInformation @ 0x180004AAC (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18000526C (PsspCaptureThreadInformation.c)
 *     PsspCaptureVaSpaceInformation @ 0x180005CB4 (PsspCaptureVaSpaceInformation.c)
 *     WerpCreateCrashDataSection @ 0x180006D00 (WerpCreateCrashDataSection.c)
 *     PssNtWalkSnapshot @ 0x180007FF0 (PssNtWalkSnapshot.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x18000831C (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x180008440 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x1800085B4 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     LdrpMapResourceFile @ 0x18000E970 (LdrpMapResourceFile.c)
 *     LdrpMapViewOfSection @ 0x18002F354 (LdrpMapViewOfSection.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067344 (PsspCaptureAuxiliaryPages.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800685C0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A95C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18006E368 (RtlpChangeQueryDebugBufferTarget.c)
 *     CsrpConnectToServer @ 0x180075364 (CsrpConnectToServer.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007833C (LdrpFindLoadedDllByMappingFile.c)
 *     PsspCaptureHandleTrace @ 0x180088D88 (PsspCaptureHandleTrace.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008BE60 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlHeapTrkInitialize @ 0x18008F3E0 (RtlHeapTrkInitialize.c)
 *     RtlCreateProcessReflection @ 0x1800D2F20 (RtlCreateProcessReflection.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
 *     RtlReportSqmEscalation @ 0x1800D8A60 (RtlReportSqmEscalation.c)
 *     RtlComputeImportTableHash @ 0x1800DB660 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800DD12C (LdrpResMapFile.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800E9F30 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800EA040 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800EA540 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800EA6A4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800EF630 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpHeapTrkLeakCallback @ 0x1800F0000 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800F7804 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1800F8900 (RtlpHpStackTraceSerializeRemote.c)
 *     _ResMapViewOfFile @ 0x180104BB4 (_ResMapViewOfFile.c)
 * Callees:
 *     <none>
 */

__int64 ZwMapViewOfSection()
{
  __int64 result; // rax

  result = 40LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
