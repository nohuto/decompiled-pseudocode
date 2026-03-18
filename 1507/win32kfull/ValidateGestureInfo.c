/*
 * XREFs of ValidateGestureInfo @ 0x1C02040F8
 * Callers:
 *     SendGestureMessage @ 0x1C0203DD0 (SendGestureMessage.c)
 *     NtUserInjectGesture @ 0x1C021CDA0 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureInfo(__int64 a1, __int64 a2, _DWORD *a3)
{
  if ( *a3 == 56 && a3[7] && a3[12] <= 0x400u )
    return 1LL;
  UserSetLastError(87);
  return 0LL;
}
