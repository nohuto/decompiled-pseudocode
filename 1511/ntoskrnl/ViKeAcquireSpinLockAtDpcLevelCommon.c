/*
 * XREFs of ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1406C6D74
 * Callers:
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x1406C5E0C (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireSpinLockAtDpcLevelNoReboot @ 0x1406C5E48 (VerifierKeAcquireSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 */

void __fastcall ViKeAcquireSpinLockAtDpcLevelCommon(KSPIN_LOCK *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v4; // [rsp+30h] [rbp-8h]

  ++dword_1402E1888;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 132LL);
  VfUtilCheckKernelAddress((unsigned __int64)a1, 8LL);
  if ( (MmVerifierData & 0x20000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u && (v4 & 0x200) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  }
  pXdvKeAcquireSpinLockAtDpcLevel(a1);
}
