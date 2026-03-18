/*
 * XREFs of VerifierIoFreeMdl @ 0x1406B9598
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VerifierIoFreeMdl(struct _MDL *a1)
{
  VfUtilCheckKernelAddress((unsigned __int64)a1, (unsigned __int16)a1->Size);
  if ( (a1->MdlFlags & 0x11) == 1 )
    VerifierBugCheckIfAppropriate(196, 184, (int)a1, a1->MdlFlags, 0LL);
  pXdvIoFreeMdl(a1);
}
