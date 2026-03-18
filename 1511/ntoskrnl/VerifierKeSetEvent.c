/*
 * XREFs of VerifierKeSetEvent @ 0x1406C65F4
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

LONG __fastcall VerifierKeSetEvent(struct _KEVENT *a1, KPRIORITY Increment, BOOLEAN Wait)
{
  unsigned __int8 CurrentIrql; // al

  VfUtilCheckKernelAddress((unsigned __int64)a1, 24LL);
  if ( (MmVerifierData & 0x20000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
      VerifierBugCheckIfAppropriate(0xC4u, 0x80uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  }
  return pXdvKeSetEvent(a1, Increment, Wait);
}
