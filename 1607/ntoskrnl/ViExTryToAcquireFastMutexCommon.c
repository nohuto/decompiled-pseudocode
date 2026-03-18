/*
 * XREFs of ViExTryToAcquireFastMutexCommon @ 0x14071A6E8
 * Callers:
 *     VerifierExTryToAcquireFastMutex @ 0x14071A318 (VerifierExTryToAcquireFastMutex.c)
 *     VerifierExTryToAcquireFastMutexNoReboot @ 0x14071A370 (VerifierExTryToAcquireFastMutexNoReboot.c)
 * Callees:
 *     VfKeIrqlLogRaise @ 0x140712D1C (VfKeIrqlLogRaise.c)
 *     ViExCheckAPCLevelOrBelow @ 0x14071A614 (ViExCheckAPCLevelOrBelow.c)
 */

char __fastcall ViExTryToAcquireFastMutexCommon(ULONG_PTR a1, int a2)
{
  char v3; // bl

  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCLevelOrBelow(a1, a1, a2);
  else
    KeGetCurrentIrql();
  v3 = pXdvExTryToAcquireFastMutex(a1);
  if ( v3 )
    VfKeIrqlLogRaise();
  return v3;
}
