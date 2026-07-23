/*
 * XREFs of ZwAlpcCreateSecurityContext @ 0x140151580
 * Callers:
 *     VfZwAlpcCreateSecurityContext @ 0x1406D1600 (VfZwAlpcCreateSecurityContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreateSecurityContext(HANDLE PortHandle, ULONG Flags, PALPC_SECURITY_ATTR SecurityAttribute)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
