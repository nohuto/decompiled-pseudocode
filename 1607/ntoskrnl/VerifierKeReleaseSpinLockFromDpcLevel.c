/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevel @ 0x14071255C
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     VfDeadlockReleaseResource @ 0x14071425C (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLockFromDpcLevel(unsigned __int64 a1)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v4; // [rsp+30h] [rbp-8h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  VfUtilCheckKernelAddress(a1, 8LL);
  if ( (MmVerifierData & 0x20000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u && (v4 & 0x200) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x41uLL, CurrentIrql, a1, 0LL);
  }
  VfDeadlockReleaseResource(a1, 5LL, KeGetCurrentThread(), retaddr);
  return pXdvKeReleaseSpinLockFromDpcLevel(a1);
}
