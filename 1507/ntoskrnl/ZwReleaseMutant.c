/*
 * XREFs of ZwReleaseMutant @ 0x14017F3F0
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x140570200 (BiReleaseBcdSyncMutant.c)
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
