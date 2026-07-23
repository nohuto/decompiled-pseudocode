/*
 * XREFs of ZwCreateNamedPipeFile @ 0x14015B730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateNamedPipeFile(
        PHANDLE NamedPipeFileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        ULONG WriteModeMessage,
        ULONG ReadModeMessage,
        ULONG NonBlocking,
        ULONG MaxInstances,
        ULONG InBufferSize,
        ULONG OutBufferSize,
        PLARGE_INTEGER DefaultTimeOut)
{
  _disable();
  __readeflags();
  return KiServiceInternal(NamedPipeFileHandle);
}
