/*
 * XREFs of NtCreateSection @ 0x1800A6D60
 * Callers:
 *     PsspCaptureHandleInformation @ 0x180004AAC (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18000526C (PsspCaptureThreadInformation.c)
 *     PsspCaptureVaSpaceInformation @ 0x180005CB4 (PsspCaptureVaSpaceInformation.c)
 *     WerpCreateCrashDataSection @ 0x180006D00 (WerpCreateCrashDataSection.c)
 *     LdrpMapResourceFile @ 0x18000E970 (LdrpMapResourceFile.c)
 *     LdrpMapDllNtFileName @ 0x18002D3AC (LdrpMapDllNtFileName.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067344 (PsspCaptureAuxiliaryPages.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800685C0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A95C (RtlpFileIsWin32WithRCManifest.c)
 *     CsrpConnectToServer @ 0x180075364 (CsrpConnectToServer.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007833C (LdrpFindLoadedDllByMappingFile.c)
 *     PsspCaptureHandleTrace @ 0x180088D88 (PsspCaptureHandleTrace.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008BE60 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlCreateProcessReflection @ 0x1800D2F20 (RtlCreateProcessReflection.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
 *     RtlReportSqmEscalation @ 0x1800D8A60 (RtlReportSqmEscalation.c)
 *     RtlComputeImportTableHash @ 0x1800DB660 (RtlComputeImportTableHash.c)
 *     LdrpResMapFile @ 0x1800DD12C (LdrpResMapFile.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800EA6A4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800EF630 (RtlpOpenAndMapCustomCultureFile.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800F7804 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1800F8900 (RtlpHpStackTraceSerializeRemote.c)
 *     _ResCreateFileMapping @ 0x180103D90 (_ResCreateFileMapping.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateSection()
{
  __int64 result; // rax

  result = 74LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
