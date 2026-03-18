/*
 * XREFs of ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00BF048
 * Callers:
 *     GreCreateRectRgn @ 0x1C0057900 (GreCreateRectRgn.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 */

__int64 GrepIsPreviousModeKernel(void)
{
  __int64 ThreadWin32Thread; // rcx
  __int64 result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = 0LL;
  if ( !ThreadWin32Thread || *(_BYTE *)(ThreadWin32Thread + 331) )
    return 1LL;
  return result;
}
