/*
 * XREFs of VerifierKeSetEvent @ 0x140712644
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierKeSetEvent(unsigned __int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // r8
  unsigned __int8 CurrentIrql; // al

  VfUtilCheckKernelAddress(a1, 24LL);
  if ( (MmVerifierData & 0x20000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
      VerifierBugCheckIfAppropriate(0xC4u, 0x80uLL, CurrentIrql, a1, 0LL);
  }
  LOBYTE(v6) = a3;
  return pXdvKeSetEvent(a1, a2, v6);
}
