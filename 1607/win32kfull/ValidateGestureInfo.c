/*
 * XREFs of ValidateGestureInfo @ 0x1C01FB7B4
 * Callers:
 *     SendGestureMessage @ 0x1C01FB48C (SendGestureMessage.c)
 *     NtUserInjectGesture @ 0x1C0216690 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureInfo(__int64 a1, __int64 a2, _DWORD *a3)
{
  if ( *a3 == 56 && a3[7] && a3[12] <= 0x400u )
    return 1LL;
  UserSetLastError(87LL);
  return 0LL;
}
