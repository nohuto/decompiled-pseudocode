/*
 * XREFs of ZwOpenThread @ 0x140181310
 * Callers:
 *     VfZwOpenThread @ 0x140756930 (VfZwOpenThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
