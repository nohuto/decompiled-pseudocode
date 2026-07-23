/*
 * XREFs of ZwReleaseMutant @ 0x14015A5F0
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x14053E6E4 (BiReleaseBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReleaseMutant(HANDLE MutantHandle, PLONG ReleaseCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}
