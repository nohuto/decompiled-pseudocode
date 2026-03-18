/*
 * XREFs of VerifierKeSetEvent @ 0x140748D20
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

LONG __fastcall VerifierKeSetEvent(struct _KEVENT *a1, KPRIORITY Increment, BOOLEAN Wait)
{
  unsigned __int8 CurrentIrql; // al

  if ( a1 < MmHighestUserAddress || &a1[1] < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 0x18uLL, 0LL);
  if ( (MmVerifierData & 0x20000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
      VerifierBugCheckIfAppropriate(0xC4u, 0x80uLL, CurrentIrql, (ULONG_PTR)a1, 0LL);
  }
  return pXdvKeSetEvent(a1, Increment, Wait);
}
