/*
 * XREFs of VerifierExFreePool @ 0x1406B6570
 * Callers:
 *     VerifierExFreePoolEx @ 0x1406B6588 (VerifierExFreePoolEx.c)
 * Callees:
 *     <none>
 */

void __fastcall VerifierExFreePool(void *a1)
{
  if ( (MiFlags & 2) != 0 )
    ExFreePoolWithTag(a1, 0);
  else
    VerifierExFreePoolWithTag((int)a1, 0);
}
