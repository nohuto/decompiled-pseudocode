/*
 * XREFs of MiReleaseWsSwapReservationPfn @ 0x1400DEB64
 * Callers:
 *     MiProcessWsInSwapFault @ 0x140001300 (MiProcessWsInSwapFault.c)
 *     MiInPageSingleKernelStack @ 0x1400DE754 (MiInPageSingleKernelStack.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiReleaseWsSwapReservationPfn(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 && (*(_DWORD *)(a1 + 16) & 0x3000LL) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 8) == 0 )
    {
      result = MiCapturePageFileInfoInline(a1 + 16, 1LL, 1LL);
      *(_QWORD *)(a1 + 16) &= ~0x1000uLL;
    }
    *(_BYTE *)(a1 + 34) |= 0x10u;
  }
  return result;
}
