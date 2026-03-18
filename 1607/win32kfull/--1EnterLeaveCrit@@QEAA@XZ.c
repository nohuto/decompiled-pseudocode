/*
 * XREFs of ??1EnterLeaveCrit@@QEAA@XZ @ 0x1C01BF2EC
 * Callers:
 *     NtUserFindWindowEx @ 0x1C008D7F0 (NtUserFindWindowEx.c)
 *     NtUserSetCursorIconData @ 0x1C009FC70 (NtUserSetCursorIconData.c)
 *     NtUserGetRawInputBuffer @ 0x1C0214720 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall EnterLeaveCrit::~EnterLeaveCrit(EnterLeaveCrit *this, __int64 a2)
{
  UserSessionSwitchLeaveCrit(this, a2);
}
