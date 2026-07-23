/*
 * XREFs of RtlCreateUserThread @ 0x180076510
 * Callers:
 *     EtwpCreateEtwThread @ 0x1800764A0 (EtwpCreateEtwThread.c)
 *     RtlpStartThread @ 0x1800F6180 (RtlpStartThread.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180076580 (RtlpCreateUserThreadEx.c)
 */

NTSTATUS __cdecl RtlCreateUserThread(
        HANDLE ProcessHandle,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        BOOLEAN CreateSuspended,
        ULONG ZeroBits,
        SIZE_T MaximumStackSize,
        SIZE_T CommittedStackSize,
        PUSER_THREAD_START_ROUTINE StartAddress,
        PVOID Parameter,
        PHANDLE ThreadHandle,
        PCLIENT_ID ClientId)
{
  int v11; // [rsp+30h] [rbp-38h]

  return RtlpCreateUserThreadEx(
           ProcessHandle,
           MaximumStackSize,
           CommittedStackSize,
           v11,
           StartAddress,
           Parameter,
           (__int64)ThreadHandle,
           (__int64)ClientId);
}
