/*
 * XREFs of ZwOpenThread @ 0x1401529A0
 * Callers:
 *     VfZwOpenThread @ 0x1406D2D68 (VfZwOpenThread.c)
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
