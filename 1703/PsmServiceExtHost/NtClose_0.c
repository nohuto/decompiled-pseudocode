/*
 * XREFs of NtClose_0 @ 0x180021376
 * Callers:
 *     RtlpTestHookInitialize @ 0x180020710 (RtlpTestHookInitialize.c)
 *     RtlpDiskSpeedInitialize @ 0x180039350 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x1800394DC (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18003974C (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose_0(HANDLE Handle)
{
  return NtClose(Handle);
}
