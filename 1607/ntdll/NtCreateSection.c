/*
 * XREFs of NtCreateSection @ 0x1800A6D60
 * Callers:
 *     PsspCaptureHandleInformation @ 0x180004AC8 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x180005260 (PsspCaptureThreadInformation.c)
 *     PsspCaptureVaSpaceInformation @ 0x180005CA4 (PsspCaptureVaSpaceInformation.c)
 *     WerpCreateCrashDataSection @ 0x180006CF0 (WerpCreateCrashDataSection.c)
 *     LdrpMapResourceFile @ 0x18000E960 (LdrpMapResourceFile.c)
 *     LdrpMapDllNtFileName @ 0x18002D39C (LdrpMapDllNtFileName.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067334 (PsspCaptureAuxiliaryPages.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800685B0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A94C (RtlpFileIsWin32WithRCManifest.c)
 *     CsrpConnectToServer @ 0x180075354 (CsrpConnectToServer.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007832C (LdrpFindLoadedDllByMappingFile.c)
 *     PsspCaptureHandleTrace @ 0x180088D78 (PsspCaptureHandleTrace.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008BE50 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlCreateProcessReflection @ 0x1800D2FE0 (RtlCreateProcessReflection.c)
 *     AvrfMiniLoadDll @ 0x1800D76D4 (AvrfMiniLoadDll.c)
 *     RtlReportSqmEscalation @ 0x1800D8B20 (RtlReportSqmEscalation.c)
 *     RtlComputeImportTableHash @ 0x1800DB720 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800DD1EC (LdrpResMapFile.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800EA764 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800EF630 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800F7804 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1800F8900 (RtlpHpStackTraceSerializeRemote.c)
 *     _ResCreateFileMapping @ 0x180103CD0 (_ResCreateFileMapping.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  NTSTATUS result; // eax

  result = 74;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
