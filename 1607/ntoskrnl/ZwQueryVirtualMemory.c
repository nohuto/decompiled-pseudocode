/*
 * XREFs of ZwQueryVirtualMemory @ 0x14015A0E0
 * Callers:
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14021D290 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     LdrpResGetMappingSize @ 0x14051B7C4 (LdrpResGetMappingSize.c)
 *     RtlCreateHeap @ 0x140540228 (RtlCreateHeap.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406A0764 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwpTiQueryVad @ 0x1406A63DC (EtwpTiQueryVad.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress, *(_QWORD *)&MemoryInformationClass);
}
