/*
 * XREFs of ViExTryToAcquireFastMutexCommon @ 0x1406CE630
 * Callers:
 *     VerifierExTryToAcquireFastMutex @ 0x1406CE260 (VerifierExTryToAcquireFastMutex.c)
 *     VerifierExTryToAcquireFastMutexNoReboot @ 0x1406CE2B8 (VerifierExTryToAcquireFastMutexNoReboot.c)
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x1400DFFC4 (ExTryToAcquireFastMutex.c)
 *     VfKeIrqlLogRaise @ 0x1406C6CCC (VfKeIrqlLogRaise.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1406CE55C (ViExCheckAPCLevelOrBelow.c)
 */

BOOLEAN __fastcall ViExTryToAcquireFastMutexCommon(PFAST_MUTEX FastMutex, int a2)
{
  BOOLEAN v3; // bl

  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCLevelOrBelow((__int64)FastMutex, (ULONG_PTR)FastMutex, a2);
  else
    KeGetCurrentIrql();
  v3 = pXdvExTryToAcquireFastMutex(FastMutex);
  if ( v3 )
    VfKeIrqlLogRaise();
  return v3;
}
