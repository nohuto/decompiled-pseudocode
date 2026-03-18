/*
 * XREFs of ??1EnterLeaveCrit@@QEAA@XZ @ 0x1C01C2D74
 * Callers:
 *     NtUserSetTimer @ 0x1C004A550 (NtUserSetTimer.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00755B0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetCursorIconData @ 0x1C011B8C0 (NtUserSetCursorIconData.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall EnterLeaveCrit::~EnterLeaveCrit(EnterLeaveCrit *this, __int64 a2)
{
  UserSessionSwitchLeaveCrit(this, a2);
}
