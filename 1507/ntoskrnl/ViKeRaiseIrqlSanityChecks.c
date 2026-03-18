/*
 * XREFs of ViKeRaiseIrqlSanityChecks @ 0x140749DC8
 * Callers:
 *     VerifierKeAcquireQueuedSpinLock @ 0x1407420E8 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x1407476F4 (VerifierKeAcquireInStackQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockNoReboot @ 0x140747B24 (VerifierKeAcquireInStackQueuedSpinLockNoReboot.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140747BFC (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot @ 0x140747CF4 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140747DC8 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140747FB0 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeAcquireSpinLockRaiseToDpcNoReboot @ 0x140748058 (VerifierKeAcquireSpinLockRaiseToDpcNoReboot.c)
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x1407484F8 (VerifierKeRaiseIrqlToDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140748DD4 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140748E38 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140748EAC (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKfRaiseIrql @ 0x14074971C (VerifierKfRaiseIrql.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140749790 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x14074982C (VerifierPortKeAcquireSpinLockNoXdv.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     MmVerifierTrimMemory @ 0x140735D84 (MmVerifierTrimMemory.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140749B94 (VfKeIrqlTransitionReserveLogEntry.c)
 */

char *__fastcall ViKeRaiseIrqlSanityChecks(unsigned __int8 a1, int a2)
{
  unsigned __int8 CurrentIrql; // si
  char *v4; // rax
  char *v5; // rbx
  USHORT v6; // ax

  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 )
  {
    if ( CurrentIrql > a1 && !a2 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x30uLL, CurrentIrql, a1, 0LL);
    if ( a1 > 0xFu )
      VerifierBugCheckIfAppropriate(0xC4u, 0x30uLL, CurrentIrql, a1, 0LL);
  }
  v4 = VfKeIrqlTransitionReserveLogEntry(CurrentIrql, a1);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = KeGetCurrentThread();
    *((_DWORD *)v4 + 3) = MEMORY[0xFFFFF78000000320];
    if ( (VfOptionFlags & 0x40) != 0 )
    {
      *((_QWORD *)v4 + 2) = 0LL;
    }
    else
    {
      v6 = RtlCaptureStackBackTrace(2u, 5u, (PVOID *)v4 + 2, 0LL);
      if ( v6 < 5u )
        *(_QWORD *)&v5[8 * v6 + 16] = 0LL;
    }
  }
  if ( (MmVerifierData & 2) != 0 && (unsigned __int8)KeAreInterruptsEnabled() && CurrentIrql < 2u && a1 >= 2u )
    MmVerifierTrimMemory();
  return v5;
}
