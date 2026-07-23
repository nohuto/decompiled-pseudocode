/*
 * XREFs of ZwOpenKeyEx @ 0x140152800
 * Callers:
 *     VerifierZwOpenKeyEx @ 0x1406C0D74 (VerifierZwOpenKeyEx.c)
 *     MfgInitSystem @ 0x1407720A4 (MfgInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
