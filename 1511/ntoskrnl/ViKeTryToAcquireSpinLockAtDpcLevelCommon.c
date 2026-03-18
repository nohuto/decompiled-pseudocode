/*
 * XREFs of ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1406C71AC
 * Callers:
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x1406C67C8 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot @ 0x1406C6818 (VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x1400EA5B4 (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 */

BOOLEAN __fastcall ViKeTryToAcquireSpinLockAtDpcLevelCommon(KSPIN_LOCK *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v5; // [rsp+30h] [rbp-8h]

  ++dword_1402E1888;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 132LL);
  VfUtilCheckKernelAddress((unsigned __int64)a1, 8LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u && (v5 & 0x200) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  return pXdvKeTryToAcquireSpinLockAtDpcLevel(a1);
}
