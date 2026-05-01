/*
 * XREFs of NtClose_0 @ 0x18002058C
 * Callers:
 *     RtlpTestHookInitialize @ 0x18001F840 (RtlpTestHookInitialize.c)
 *     RtlpDiskSpeedInitialize @ 0x180039420 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x1800395B0 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose_0(HANDLE Handle)
{
  return NtClose(Handle);
}
