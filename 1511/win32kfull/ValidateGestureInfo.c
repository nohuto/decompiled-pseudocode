/*
 * XREFs of ValidateGestureInfo @ 0x1C0204468
 * Callers:
 *     SendGestureMessage @ 0x1C0204140 (SendGestureMessage.c)
 *     NtUserInjectGesture @ 0x1C021CBB0 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureInfo(__int64 a1, __int64 a2, _DWORD *a3)
{
  if ( *a3 == 56 && a3[7] && a3[12] <= 0x400u )
    return 1LL;
  UserSetLastError(87);
  return 0LL;
}
