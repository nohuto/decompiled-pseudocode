/*
 * XREFs of VerifierPortKeAcquireSpinLockNoXdv @ 0x14074982C
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x140749DC8 (ViKeRaiseIrqlSanityChecks.c)
 */

void __fastcall VerifierPortKeAcquireSpinLockNoXdv(volatile signed __int32 *a1, unsigned __int8 *a2, __int64 a3)
{
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // bp

  ++dword_140331D08;
  v4 = a1;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a3, 132LL);
  if ( v4 < MmHighestUserAddress || v4 + 2 < v4 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)v4, 8uLL, 0LL);
  LOBYTE(a1) = 2;
  v5 = ViKeRaiseIrqlSanityChecks(a1, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v4);
  }
  else if ( _interlockedbittestandset64(v4, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v4);
  }
  *a2 = CurrentIrql;
  if ( v5 )
    *(_WORD *)(v5 + 10) = KeGetCurrentProcessorNumberEx(0LL);
}
