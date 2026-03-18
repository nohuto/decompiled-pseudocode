/*
 * XREFs of Win32AllocPagedLookasideList @ 0x1C007D260
 * Callers:
 *     ?HmgInitializeLookAsideList@@YAHKKKG@Z @ 0x1C007D1FC (-HmgInitializeLookAsideList@@YAHKKKG@Z.c)
 *     InitQEntryLookaside @ 0x1C01394E8 (InitQEntryLookaside.c)
 * Callees:
 *     IsWin32AllocPagedLookasideListImplSupported_0 @ 0x1C0002BF8 (IsWin32AllocPagedLookasideListImplSupported_0.c)
 *     Win32AllocPagedLookasideListImpl_0 @ 0x1C0002C00 (Win32AllocPagedLookasideListImpl_0.c)
 */

__int64 Win32AllocPagedLookasideList()
{
  if ( (int)IsWin32AllocPagedLookasideListImplSupported_0() < 0 )
    return 0LL;
  else
    return Win32AllocPagedLookasideListImpl_0();
}
