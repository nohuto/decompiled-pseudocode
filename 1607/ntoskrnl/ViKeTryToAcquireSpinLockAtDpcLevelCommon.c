/*
 * XREFs of ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1407131F4
 * Callers:
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140712860 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot @ 0x1407128B0 (VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C44 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C2E8 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x140710564 (ViTargetIncrementCounter.c)
 */

__int64 __fastcall ViKeTryToAcquireSpinLockAtDpcLevelCommon(unsigned __int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v5; // [rsp+30h] [rbp-8h]

  ++dword_140307208;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 132LL);
  VfUtilCheckKernelAddress(a1, 8LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u && (v5 & 0x200) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, CurrentIrql, a1, 0LL);
  return pXdvKeTryToAcquireSpinLockAtDpcLevel(a1);
}
