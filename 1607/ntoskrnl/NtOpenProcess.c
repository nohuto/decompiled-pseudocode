/*
 * XREFs of NtOpenProcess @ 0x14041F590
 * Callers:
 *     PfpSourceGetPrefetchSupport @ 0x140533B78 (PfpSourceGetPrefetchSupport.c)
 * Callees:
 *     PsOpenProcess @ 0x14041E2D0 (PsOpenProcess.c)
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
           (unsigned __int64)ProcessHandle,
           DesiredAccess,
           (__int64)ObjectAttributes,
           ClientId,
           PreviousMode,
           PreviousMode);
}
