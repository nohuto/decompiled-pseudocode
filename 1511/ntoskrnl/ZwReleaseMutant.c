/*
 * XREFs of ZwReleaseMutant @ 0x140150A20
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x1404FD760 (BiReleaseBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReleaseMutant(HANDLE MutantHandle, PLONG ReleaseCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}
