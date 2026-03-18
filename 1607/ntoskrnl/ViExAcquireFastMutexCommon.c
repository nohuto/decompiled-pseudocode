/*
 * XREFs of ViExAcquireFastMutexCommon @ 0x14071A5CC
 * Callers:
 *     VerifierExAcquireFastMutex @ 0x14071A140 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexNoReboot @ 0x14071A184 (VerifierExAcquireFastMutexNoReboot.c)
 * Callees:
 *     ViExCheckAPCLevelOrBelow @ 0x14071A614 (ViExCheckAPCLevelOrBelow.c)
 */

__int64 __fastcall ViExAcquireFastMutexCommon(__int64 a1, unsigned int a2)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCLevelOrBelow(a1, a1, a2);
  else
    KeGetCurrentIrql();
  pXdvExAcquireFastMutex(a1);
  return VfKeIrqlLogRaise();
}
