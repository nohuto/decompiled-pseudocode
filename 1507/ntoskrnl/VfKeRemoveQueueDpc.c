/*
 * XREFs of VfKeRemoveQueueDpc @ 0x140749BFC
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

BOOLEAN __fastcall VfKeRemoveQueueDpc(struct _KDPC *a1)
{
  if ( a1 < MmHighestUserAddress || &a1[1] < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 0x40uLL, 0LL);
  return pXdvKeRemoveQueueDpc(a1);
}
