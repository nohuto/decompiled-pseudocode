/*
 * XREFs of NtUnmapViewOfSection @ 0x1800A6960
 * Callers:
 *     PsspCaptureHandleInformation @ 0x180004AAC (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18000526C (PsspCaptureThreadInformation.c)
 *     PsspCaptureVaSpaceInformation @ 0x180005CB4 (PsspCaptureVaSpaceInformation.c)
 *     WerpCreateCrashDataSection @ 0x180006D00 (WerpCreateCrashDataSection.c)
 *     RtlReportExceptionHelper @ 0x18000787C (RtlReportExceptionHelper.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18000C360 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpMapResourceFile @ 0x18000E970 (LdrpMapResourceFile.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180012AB0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     LdrpMapImage @ 0x18002F44C (LdrpMapImage.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067344 (PsspCaptureAuxiliaryPages.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800685C0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A95C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlDestroyQueryDebugBuffer @ 0x18006E330 (RtlDestroyQueryDebugBuffer.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18006E368 (RtlpChangeQueryDebugBufferTarget.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800726C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007833C (LdrpFindLoadedDllByMappingFile.c)
 *     RtlGetLocaleFileMappingAddress @ 0x180080780 (RtlGetLocaleFileMappingAddress.c)
 *     PsspCaptureHandleTrace @ 0x180088D88 (PsspCaptureHandleTrace.c)
 *     PssNtFreeWalkMarker @ 0x180089880 (PssNtFreeWalkMarker.c)
 *     LdrResRelease @ 0x180089970 (LdrResRelease.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008BE60 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrFlushAlternateResourceModules @ 0x18008D350 (LdrFlushAlternateResourceModules.c)
 *     RtlHeapTrkInitialize @ 0x18008F3E0 (RtlHeapTrkInitialize.c)
 *     RtlCreateProcessReflection @ 0x1800D2F20 (RtlCreateProcessReflection.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D5780 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800D5870 (RtlpSetProcessDebugInformationRemote.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
 *     RtlReportExceptionEx @ 0x1800D86C0 (RtlReportExceptionEx.c)
 *     RtlReportSqmEscalation @ 0x1800D8A60 (RtlReportSqmEscalation.c)
 *     RtlComputeImportTableHash @ 0x1800DB660 (RtlComputeImportTableHash.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800DC770 (LdrpSpecialCacheTypeHandle.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800E9F30 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800EA040 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800EA540 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800EA6A4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpGetCustomCultureData @ 0x1800EF054 (RtlpGetCustomCultureData.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800F7804 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1800F8900 (RtlpHpStackTraceSerializeRemote.c)
 *     _ResUnmapViewOfFile @ 0x180104DDC (_ResUnmapViewOfFile.c)
 * Callees:
 *     <none>
 */

__int64 NtUnmapViewOfSection()
{
  __int64 result; // rax

  result = 42LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
