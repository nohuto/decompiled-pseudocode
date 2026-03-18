/*
 * XREFs of ViExAcquireFastMutexCommon @ 0x1406CE514
 * Callers:
 *     VerifierExAcquireFastMutex @ 0x1406CE088 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexNoReboot @ 0x1406CE0CC (VerifierExAcquireFastMutexNoReboot.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1406CE55C (ViExCheckAPCLevelOrBelow.c)
 */

__int64 __fastcall ViExAcquireFastMutexCommon(PFAST_MUTEX FastMutex, unsigned int a2)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCLevelOrBelow(FastMutex, FastMutex, a2);
  else
    KeGetCurrentIrql();
  pXdvExAcquireFastMutex(FastMutex);
  return VfKeIrqlLogRaise();
}
