/*
 * XREFs of ValidateGestureInfo @ 0x14025C55C
 * Callers:
 *     NtUserInjectGesture @ 0x1402B6830 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureInfo(_DWORD *a1)
{
  if ( *a1 == 56 && a1[7] && a1[12] <= 0x400u )
    return 1LL;
  UserSetLastError(87);
  return 0LL;
}
