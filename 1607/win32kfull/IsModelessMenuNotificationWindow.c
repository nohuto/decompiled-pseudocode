/*
 * XREFs of IsModelessMenuNotificationWindow @ 0x1C00AD4C4
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C00AD2F8 (xxxDWP_DoNCActivate.c)
 *     GetActiveTrackPwnd @ 0x1C01D8540 (GetActiveTrackPwnd.c)
 * Callees:
 *     GetpwndNotifypMenuState @ 0x1C00AD4E0 (GetpwndNotifypMenuState.c)
 */

__int64 IsModelessMenuNotificationWindow()
{
  __int64 v0; // rax
  unsigned int v1; // ecx

  v0 = GetpwndNotifypMenuState();
  v1 = 0;
  if ( v0 )
    return (*(_DWORD *)(v0 + 8) & 0x100) != 0;
  return v1;
}
