/*
 * XREFs of VerifierIoFreeMdl @ 0x140705624
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C44 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C2E8 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierIoFreeMdl(unsigned __int64 a1)
{
  VfUtilCheckKernelAddress(a1, *(unsigned __int16 *)(a1 + 8));
  if ( (*(_WORD *)(a1 + 10) & 0x11) == 1 )
    VerifierBugCheckIfAppropriate(196, 184, a1, *(__int16 *)(a1 + 10), 0LL);
  return pXdvIoFreeMdl(a1);
}
