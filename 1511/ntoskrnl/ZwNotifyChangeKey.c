/*
 * XREFs of ZwNotifyChangeKey @ 0x140152720
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x14012F840 (PspReadDfssConfigurationValues.c)
 *     IopRegistryInitializeCallbacks @ 0x140534808 (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x14053490C (IopRegistryCallback.c)
 *     PfpParametersWatcher @ 0x140631D64 (PfpParametersWatcher.c)
 *     VfZwNotifyChangeKey @ 0x1406D280C (VfZwNotifyChangeKey.c)
 *     PfInitializeSuperfetch @ 0x14076A3E8 (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwNotifyChangeKey(
        HANDLE KeyHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
