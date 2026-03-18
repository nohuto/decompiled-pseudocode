/*
 * XREFs of ViExReleaseFastMutexCommon @ 0x14071A6B0
 * Callers:
 *     VerifierExReleaseFastMutex @ 0x14071A228 (VerifierExReleaseFastMutex.c)
 *     VerifierExReleaseFastMutexNoReboot @ 0x14071A278 (VerifierExReleaseFastMutexNoReboot.c)
 * Callees:
 *     ViExCheckAPCsDisabled @ 0x14071A64C (ViExCheckAPCsDisabled.c)
 */

char *__fastcall ViExReleaseFastMutexCommon(__int64 a1)
{
  char CurrentIrql; // al

  if ( (MmVerifierData & 0x800) != 0 )
    CurrentIrql = ViExCheckAPCsDisabled(0x34u, a1);
  else
    CurrentIrql = KeGetCurrentIrql();
  return VfKeIrqlTransitionReserveLogEntry(CurrentIrql, *(_BYTE *)(a1 + 48));
}
