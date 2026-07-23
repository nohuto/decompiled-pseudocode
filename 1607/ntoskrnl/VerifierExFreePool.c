/*
 * XREFs of VerifierExFreePool @ 0x140702400
 * Callers:
 *     VerifierExFreePoolEx @ 0x140702418 (VerifierExFreePoolEx.c)
 * Callees:
 *     <none>
 */

void __fastcall VerifierExFreePool(void *a1)
{
  if ( (MiFlags & 2) != 0 )
    ExFreePoolWithTag(a1, 0);
  else
    VerifierExFreePoolWithTag((ULONG_PTR)a1, 0);
}
