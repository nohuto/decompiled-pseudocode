/*
 * XREFs of ZwOpenMutant @ 0x14015C490
 * Callers:
 *     BiAcquireBcdSyncMutant @ 0x14053E708 (BiAcquireBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenMutant(PHANDLE MutantHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}
