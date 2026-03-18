/*
 * XREFs of VerifierPortKeAcquireSpinLock @ 0x140749790
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1401011D0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x140749DC8 (ViKeRaiseIrqlSanityChecks.c)
 */

char __fastcall VerifierPortKeAcquireSpinLock(KSPIN_LOCK *a1, _BYTE *a2, __int64 a3)
{
  KSPIN_LOCK *v4; // rbx
  __int64 v5; // rdi
  __int16 CurrentProcessorNumber; // ax

  ++dword_140331D08;
  v4 = a1;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a3, 132LL);
  if ( v4 < MmHighestUserAddress || v4 + 1 < v4 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)v4, 8uLL, 0LL);
  LOBYTE(a1) = 2;
  v5 = ViKeRaiseIrqlSanityChecks(a1, 0LL);
  LOBYTE(CurrentProcessorNumber) = pXdvKeAcquireSpinLockRaiseToDpc(v4);
  *a2 = CurrentProcessorNumber;
  if ( v5 )
  {
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    *(_WORD *)(v5 + 10) = CurrentProcessorNumber;
  }
  return CurrentProcessorNumber;
}
