/*
 * XREFs of ZwUnlockVirtualMemory @ 0x140153C40
 * Callers:
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140203568 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnlockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToUnlock,
        ULONG MapType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
