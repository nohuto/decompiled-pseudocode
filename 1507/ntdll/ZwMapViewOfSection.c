/*
 * XREFs of ZwMapViewOfSection @ 0x180093B80
 * Callers:
 *     CsrpConnectToServer @ 0x1800044D4 (CsrpConnectToServer.c)
 *     LdrpMapViewOfSection @ 0x180040BD0 (LdrpMapViewOfSection.c)
 *     PsspCaptureVaSpaceInformation @ 0x18004EB0C (PsspCaptureVaSpaceInformation.c)
 *     RtlCreateQueryDebugBuffer @ 0x180052F10 (RtlCreateQueryDebugBuffer.c)
 *     LdrpMapResourceFile @ 0x180054440 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180056AF0 (RtlpFileIsWin32WithRCManifest.c)
 *     PsspCaptureAuxiliaryPages @ 0x180058D10 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureHandleTrace @ 0x180059734 (PsspCaptureHandleTrace.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x180069678 (RtlpChangeQueryDebugBufferTarget.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18006BFC4 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18007F190 (LdrVerifyImageMatchesChecksumEx.c)
 *     PssNtWalkSnapshot @ 0x180081C10 (PssNtWalkSnapshot.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x180081EAC (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x180081FD0 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x180082140 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspCaptureHandleInformation @ 0x180082508 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x180082EEC (PsspCaptureThreadInformation.c)
 *     RtlCreateProcessReflection @ 0x1800C1540 (RtlCreateProcessReflection.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 *     RtlReportExceptionEx @ 0x1800C7660 (RtlReportExceptionEx.c)
 *     RtlReportSqmEscalation @ 0x1800C7C60 (RtlReportSqmEscalation.c)
 *     RtlComputeImportTableHash @ 0x1800CA930 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800CC53C (LdrpResMapFile.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800D8DE0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800D8EF0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800D9644 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800E0C1C (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlHeapTrkInitialize @ 0x1800E0E00 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkLeakCallback @ 0x1800E19E0 (RtlpHeapTrkLeakCallback.c)
 *     RtlpHpVirtQueryHeapsRemote @ 0x1800EB900 (RtlpHpVirtQueryHeapsRemote.c)
 *     _ResMapViewOfFile @ 0x1800FA8F0 (_ResMapViewOfFile.c)
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
  __asm { syscall; Low latency system call }
  return result;
}
