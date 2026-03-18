/*
 * XREFs of ZwOpenKeyEx @ 0x140181170
 * Callers:
 *     VerifierZwOpenKeyEx @ 0x1407425B4 (VerifierZwOpenKeyEx.c)
 *     MfgInitSystem @ 0x1407E8BA0 (MfgInitSystem.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
