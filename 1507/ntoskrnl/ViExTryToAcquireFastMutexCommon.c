/*
 * XREFs of ViExTryToAcquireFastMutexCommon @ 0x140752060
 * Callers:
 *     VerifierExTryToAcquireFastMutex @ 0x140751C38 (VerifierExTryToAcquireFastMutex.c)
 *     VerifierExTryToAcquireFastMutexNoReboot @ 0x140751C90 (VerifierExTryToAcquireFastMutexNoReboot.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     ExTryToAcquireFastMutex @ 0x140263A28 (ExTryToAcquireFastMutex.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140749B94 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViExCheckAPCLevelOrBelow @ 0x140751F8C (ViExCheckAPCLevelOrBelow.c)
 */

BOOLEAN __fastcall ViExTryToAcquireFastMutexCommon(PFAST_MUTEX FastMutex, int a2)
{
  char CurrentIrql; // bl
  BOOLEAN v4; // di
  char *v5; // rax
  char *v6; // rbx
  USHORT v7; // ax

  if ( (MmVerifierData & 0x800) != 0 )
    CurrentIrql = ViExCheckAPCLevelOrBelow((__int64)FastMutex, (ULONG_PTR)FastMutex, a2);
  else
    CurrentIrql = KeGetCurrentIrql();
  v4 = pXdvExTryToAcquireFastMutex(FastMutex);
  if ( v4 )
  {
    v5 = VfKeIrqlTransitionReserveLogEntry(CurrentIrql, 1);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = KeGetCurrentThread();
      *((_DWORD *)v5 + 3) = MEMORY[0xFFFFF78000000320];
      if ( (VfOptionFlags & 0x40) != 0 )
      {
        *((_QWORD *)v5 + 2) = 0LL;
      }
      else
      {
        v7 = RtlCaptureStackBackTrace(2u, 5u, (PVOID *)v5 + 2, 0LL);
        if ( v7 < 5u )
          *(_QWORD *)&v6[8 * v7 + 16] = 0LL;
      }
    }
  }
  return v4;
}
