/*
 * XREFs of ZwReleaseMutant @ 0x140150A20
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x1404FD760 (BiReleaseBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReleaseMutant(HANDLE MutantHandle, PLONG ReleaseCount)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle, ReleaseCount, v2);
}
