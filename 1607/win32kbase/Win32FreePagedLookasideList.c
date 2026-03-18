/*
 * XREFs of Win32FreePagedLookasideList @ 0x1C006DB80
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C006D158 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     MultiUserNtGreCleanup @ 0x1C006D778 (MultiUserNtGreCleanup.c)
 * Callees:
 *     IsWin32FreePagedLookasideListImplSupported_0 @ 0x1C0002C58 (IsWin32FreePagedLookasideListImplSupported_0.c)
 *     Win32FreePagedLookasideListImpl_0 @ 0x1C0002C60 (Win32FreePagedLookasideListImpl_0.c)
 */

__int64 Win32FreePagedLookasideList()
{
  __int64 result; // rax

  result = IsWin32FreePagedLookasideListImplSupported_0();
  if ( (int)result >= 0 )
    return Win32FreePagedLookasideListImpl_0();
  return result;
}
