/*
 * XREFs of ZwNotifyChangeKey @ 0x14015BDC0
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x14020EBD0 (PspReadDfssConfigurationValues.c)
 *     IopRegistryInitializeCallbacks @ 0x1405664C8 (IopRegistryInitializeCallbacks.c)
 *     IopRegistryCallback @ 0x1405665CC (IopRegistryCallback.c)
 *     PfpParametersWatcher @ 0x140669ED4 (PfpParametersWatcher.c)
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
  return KiServiceInternal(KeyHandle, Event, ApcRoutine);
}
