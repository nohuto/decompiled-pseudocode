/*
 * XREFs of NtCreateSection @ 0x1800A5A00
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180007960 (LdrpMapDllNtFileName.c)
 *     LdrpMapResourceFile @ 0x18003CD20 (LdrpMapResourceFile.c)
 *     RtlCreateQueryDebugBuffer @ 0x180042E90 (RtlCreateQueryDebugBuffer.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800430D0 (RtlpFileIsWin32WithRCManifest.c)
 *     PsspCaptureAuxiliaryPages @ 0x180044644 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureHandleTrace @ 0x18004B39C (PsspCaptureHandleTrace.c)
 *     CsrpConnectToServer @ 0x1800520A4 (CsrpConnectToServer.c)
 *     PsspCaptureVaSpaceInformation @ 0x18006233C (PsspCaptureVaSpaceInformation.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x180076AA0 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180087A00 (LdrVerifyImageMatchesChecksumEx.c)
 *     PsspCaptureHandleInformation @ 0x18008A588 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18008B488 (PsspCaptureThreadInformation.c)
 *     RtlCreateProcessReflection @ 0x18008C990 (RtlCreateProcessReflection.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 *     RtlReportExceptionEx @ 0x1800D0990 (RtlReportExceptionEx.c)
 *     RtlReportSqmEscalation @ 0x1800D0F90 (RtlReportSqmEscalation.c)
 *     RtlComputeImportTableHash @ 0x1800D3400 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800D4D7C (LdrpResMapFile.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800E13A4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800E6370 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800EEAB0 (RtlpHpTagQueryHeapsRemote.c)
 *     _ResCreateFileMapping @ 0x1800F93F8 (_ResCreateFileMapping.c)
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
