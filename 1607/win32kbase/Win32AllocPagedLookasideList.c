/*
 * XREFs of Win32AllocPagedLookasideList @ 0x1C00537A0
 * Callers:
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C0053738 (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     InitQEntryLookaside @ 0x1C01553F0 (InitQEntryLookaside.c)
 * Callees:
 *     IsWin32AllocPagedLookasideListImplSupported_0 @ 0x1C0002C28 (IsWin32AllocPagedLookasideListImplSupported_0.c)
 *     Win32AllocPagedLookasideListImpl_0 @ 0x1C0002C30 (Win32AllocPagedLookasideListImpl_0.c)
 */

__int64 Win32AllocPagedLookasideList()
{
  if ( (int)IsWin32AllocPagedLookasideListImplSupported_0() < 0 )
    return 0LL;
  else
    return Win32AllocPagedLookasideListImpl_0();
}
