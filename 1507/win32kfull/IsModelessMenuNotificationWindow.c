/*
 * XREFs of IsModelessMenuNotificationWindow @ 0x1C004ED60
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C004EB68 (xxxDWP_DoNCActivate.c)
 *     GetActiveTrackPwnd @ 0x1C01E1EC4 (GetActiveTrackPwnd.c)
 * Callees:
 *     GetpwndNotifypMenuState @ 0x1C004ED7C (GetpwndNotifypMenuState.c)
 */

__int64 __fastcall IsModelessMenuNotificationWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // ecx

  v3 = GetpwndNotifypMenuState(a1, a2, a3);
  v4 = 0;
  if ( v3 )
    return (*(_DWORD *)(v3 + 8) & 0x100) != 0;
  return v4;
}
