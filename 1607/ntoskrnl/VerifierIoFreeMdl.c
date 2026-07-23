/*
 * XREFs of VerifierIoFreeMdl @ 0x140705654
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierIoFreeMdl(unsigned __int64 a1)
{
  VfUtilCheckKernelAddress(a1, *(unsigned __int16 *)(a1 + 8));
  if ( (*(_WORD *)(a1 + 10) & 0x11) == 1 )
    VerifierBugCheckIfAppropriate(196, 184, a1, *(__int16 *)(a1 + 10), 0LL);
  return pXdvIoFreeMdl(a1);
}
