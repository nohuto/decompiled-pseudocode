/*
 * XREFs of NtUserSetDisplayAutoRotationPreferences @ 0x1C000C850
 * Callers:
 *     <none>
 * Callees:
 *     ?GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ @ 0x1C000C8A8 (-GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxApplyOrientationPreference @ 0x1C0096AC8 (xxxApplyOrientationPreference.c)
 */

__int64 __fastcall NtUserSetDisplayAutoRotationPreferences(int a1)
{
  struct tagPROCESSINFO *ActivePpi; // rax
  struct tagPROCESSINFO *v3; // r8
  unsigned int v4; // ebx

  UserSessionSwitchEnterCrit();
  if ( (a1 & 0x3FFFFFF0) != 0 )
  {
    v4 = 0;
    UserSetLastError(87LL);
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 872LL) = a1;
    ActivePpi = GetActivePpi();
    if ( v3 == ActivePpi )
      xxxApplyOrientationPreference();
    v4 = 1;
  }
  LeaveCrit();
  return v4;
}
