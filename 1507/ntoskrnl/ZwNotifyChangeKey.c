/*
 * XREFs of ZwNotifyChangeKey @ 0x140181090
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x14015D3D4 (PspReadDfssConfigurationValues.c)
 *     IopRegistryInitializeCallbacks @ 0x1405B1584 (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x1405B1688 (IopRegistryCallback.c)
 *     PfpParametersWatcher @ 0x1406B0294 (PfpParametersWatcher.c)
 *     VfZwNotifyChangeKey @ 0x1407563D4 (VfZwNotifyChangeKey.c)
 *     PfInitializeSuperfetch @ 0x1407DEE3C (PfInitializeSuperfetch.c)
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
