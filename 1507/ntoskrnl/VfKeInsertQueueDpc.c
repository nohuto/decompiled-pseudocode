/*
 * XREFs of VfKeInsertQueueDpc @ 0x140749B2C
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

BOOLEAN __fastcall VfKeInsertQueueDpc(struct _KDPC *a1, PVOID SystemArgument1, PVOID SystemArgument2)
{
  if ( a1 < MmHighestUserAddress || &a1[1] < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 0x40uLL, 0LL);
  return pXdvKeInsertQueueDpc(a1, SystemArgument1, SystemArgument2);
}
