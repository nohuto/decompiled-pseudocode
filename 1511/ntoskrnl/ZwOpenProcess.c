/*
 * XREFs of ZwOpenProcess @ 0x140150AE0
 * Callers:
 *     SepRmLsaConnectRequest @ 0x14053C6C0 (SepRmLsaConnectRequest.c)
 *     VfZwOpenProcess @ 0x1406D2B74 (VfZwOpenProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
