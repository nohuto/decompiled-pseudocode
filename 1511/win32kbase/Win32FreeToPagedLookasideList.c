/*
 * XREFs of Win32FreeToPagedLookasideList @ 0x1C0022AB0
 * Callers:
 *     zzzDestroyQueue @ 0x1C0040F60 (zzzDestroyQueue.c)
 *     UserDeleteW32Thread @ 0x1C0044720 (UserDeleteW32Thread.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00634A8 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C48 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C50 (Win32FreeToPagedLookasideListImpl_0.c)
 */

__int64 Win32FreeToPagedLookasideList()
{
  __int64 result; // rax

  result = IsWin32FreeToPagedLookasideListImplSupported_0();
  if ( (int)result >= 0 )
    return Win32FreeToPagedLookasideListImpl_0();
  return result;
}
