/*
 * XREFs of ZwQueryVirtualMemory @ 0x14015A650
 * Callers:
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14021D0BC (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     LdrpResGetMappingSize @ 0x1404FEBB4 (LdrpResGetMappingSize.c)
 *     RtlCreateHeap @ 0x140540768 (RtlCreateHeap.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406A089C (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwpTiQueryVad @ 0x1406A6514 (EtwpTiQueryVad.c)
 * Callees:
 *     <none>
 */

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
  return KiServiceInternal(ProcessHandle);
}
