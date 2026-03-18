/*
 * XREFs of VerifierExFreePool @ 0x140736860
 * Callers:
 *     VerifierExFreePoolEx @ 0x140736878 (VerifierExFreePoolEx.c)
 * Callees:
 *     <none>
 */

void __fastcall VerifierExFreePool(void *a1)
{
  if ( (MiFlags & 2) != 0 )
    ExFreePoolWithTag(a1, 0);
  else
    VerifierExFreePoolWithTag(a1, 0);
}
