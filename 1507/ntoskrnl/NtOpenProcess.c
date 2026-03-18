/*
 * XREFs of NtOpenProcess @ 0x140434360
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x14055C83C (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     PsOpenProcess @ 0x140433500 (PsOpenProcess.c)
 */

NTSTATUS __stdcall NtOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  char PreviousMode; // [rsp+20h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  return PsOpenProcess(
           ProcessHandle,
           DesiredAccess,
           (__int64)ObjectAttributes,
           (__int64)ClientId,
           PreviousMode,
           PreviousMode);
}
