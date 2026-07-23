/*
 * XREFs of ZwNotifyChangeKey @ 0x14015C330
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x14020E9FC (PspReadDfssConfigurationValues.c)
 *     IopRegistryInitializeCallbacks @ 0x140566A08 (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x140566B0C (IopRegistryCallback.c)
 *     PfpParametersWatcher @ 0x140669FB8 (PfpParametersWatcher.c)
 *     PfInitializeSuperfetch @ 0x1407B3B44 (PfInitializeSuperfetch.c)
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
