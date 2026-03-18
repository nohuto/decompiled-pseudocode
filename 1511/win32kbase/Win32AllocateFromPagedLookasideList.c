/*
 * XREFs of Win32AllocateFromPagedLookasideList @ 0x1C002A260
 * Callers:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0028E90 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     AllocQueue @ 0x1C0041270 (AllocQueue.c)
 * Callees:
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C38 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 */

__int64 Win32AllocateFromPagedLookasideList()
{
  if ( (int)IsWin32AllocateFromPagedLookasideListImplSupported_0() < 0 )
    return 0LL;
  else
    return Win32AllocateFromPagedLookasideListImpl_0();
}
