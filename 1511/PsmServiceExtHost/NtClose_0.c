/*
 * XREFs of NtClose_0 @ 0x18002B7AE
 * Callers:
 *     RtlpTestHookInitialize @ 0x18002A6B0 (RtlpTestHookInitialize.c)
 *     RtlpDiskSpeedInitialize @ 0x1800555C0 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180055750 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose_0(HANDLE Handle)
{
  return NtClose(Handle);
}
