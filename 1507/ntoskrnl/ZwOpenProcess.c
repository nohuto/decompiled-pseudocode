/*
 * XREFs of ZwOpenProcess @ 0x14017F4B0
 * Callers:
 *     SepRmLsaConnectRequest @ 0x1405A79A8 (SepRmLsaConnectRequest.c)
 *     VfZwOpenProcess @ 0x14075673C (VfZwOpenProcess.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
