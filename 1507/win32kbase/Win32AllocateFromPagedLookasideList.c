/*
 * XREFs of Win32AllocateFromPagedLookasideList @ 0x1C004C220
 * Callers:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003EE60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     AllocQueue @ 0x1C004CEE0 (AllocQueue.c)
 * Callees:
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C08 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 */

__int64 Win32AllocateFromPagedLookasideList()
{
  if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported_0() < 0 )
    return 0LL;
  else
    return Win32AllocateFromPagedLookasideListImpl_0();
}
