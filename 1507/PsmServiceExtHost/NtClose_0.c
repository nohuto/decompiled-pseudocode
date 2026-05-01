/*
 * XREFs of NtClose_0 @ 0x180024A0E
 * Callers:
 *     RtlpTestHookInitialize @ 0x180023AB0 (RtlpTestHookInitialize.c)
 *     RtlpDiskSpeedInitialize @ 0x18004EA50 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18004EBE0 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose_0(HANDLE Handle)
{
  return NtClose(Handle);
}
