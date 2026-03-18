/*
 * XREFs of IsModelessMenuNotificationWindow @ 0x1C00CAF94
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C00CADC0 (xxxDWP_DoNCActivate.c)
 *     GetActiveTrackPwnd @ 0x1C01E23E0 (GetActiveTrackPwnd.c)
 * Callees:
 *     GetpwndNotifypMenuState @ 0x1C00CAFB0 (GetpwndNotifypMenuState.c)
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
