/*
 * XREFs of Win32FreeToPagedLookasideList @ 0x1C0036730
 * Callers:
 *     zzzDestroyQueue @ 0x1C0014070 (zzzDestroyQueue.c)
 *     UserDeleteW32Thread @ 0x1C0015F20 (UserDeleteW32Thread.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C006D158 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     UnlockQueue @ 0x1C00B3EA0 (UnlockQueue.c)
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
