/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140747BFC
 * Callers:
 *     <none>
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140101D50 (KeGetCurrentProcessorNumberEx.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1402009B4 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x140749DC8 (ViKeRaiseIrqlSanityChecks.c)
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch(volatile __int64 *a1, unsigned __int64 a2)
{
  PVOID v4; // rcx
  __int64 v5; // rsi
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ++dword_140331D08;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 132LL);
  v4 = MmHighestUserAddress;
  if ( a1 < MmHighestUserAddress || a1 + 1 < a1 )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 8uLL, 0LL);
    v4 = MmHighestUserAddress;
  }
  if ( a2 < (unsigned __int64)v4 || a2 + 24 < a2 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, a2, 0x18uLL, 0LL);
  LOBYTE(v4) = 12;
  v5 = ViKeRaiseIrqlSanityChecks(v4, 0LL);
  KeAcquireInStackQueuedSpinLockRaiseToSynch(a1, a2);
  if ( v5 )
    *(_WORD *)(v5 + 10) = KeGetCurrentProcessorNumberEx(0LL);
  return VfDeadlockAcquireResource((_DWORD)a1, 6, (unsigned int)KeGetCurrentThread(), 0, retaddr);
}
