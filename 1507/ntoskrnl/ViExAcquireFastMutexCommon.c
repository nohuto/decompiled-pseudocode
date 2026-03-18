/*
 * XREFs of ViExAcquireFastMutexCommon @ 0x140751EEC
 * Callers:
 *     VerifierExAcquireFastMutex @ 0x140751A18 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexNoReboot @ 0x140751A5C (VerifierExAcquireFastMutexNoReboot.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     ExAcquireFastMutex @ 0x1400F10C0 (ExAcquireFastMutex.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140749B94 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViExCheckAPCLevelOrBelow @ 0x140751F8C (ViExCheckAPCLevelOrBelow.c)
 */

char *__fastcall ViExAcquireFastMutexCommon(PFAST_MUTEX FastMutex, unsigned int a2)
{
  char CurrentIrql; // bl
  char *result; // rax
  char *v5; // rbx

  if ( (MmVerifierData & 0x800) != 0 )
    CurrentIrql = ViExCheckAPCLevelOrBelow(FastMutex, FastMutex, a2);
  else
    CurrentIrql = KeGetCurrentIrql();
  pXdvExAcquireFastMutex(FastMutex);
  result = VfKeIrqlTransitionReserveLogEntry(CurrentIrql, 1);
  v5 = result;
  if ( result )
  {
    *(_QWORD *)result = KeGetCurrentThread();
    *((_DWORD *)result + 3) = MEMORY[0xFFFFF78000000320];
    if ( (VfOptionFlags & 0x40) != 0 )
    {
      *((_QWORD *)result + 2) = 0LL;
    }
    else
    {
      result = (char *)RtlCaptureStackBackTrace(2u, 5u, (PVOID *)result + 2, 0LL);
      if ( (unsigned __int16)result < 5u )
        *(_QWORD *)&v5[8 * (unsigned __int16)result + 16] = 0LL;
    }
  }
  return result;
}
