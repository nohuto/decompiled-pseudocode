/*
 * XREFs of Win32AllocateFromPagedLookasideList @ 0x1C0034560
 * Callers:
 *     AllocQueue @ 0x1C00151C0 (AllocQueue.c)
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
