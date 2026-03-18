/*
 * XREFs of NtUserSetDisplayAutoRotationPreferences @ 0x1C000E490
 * Callers:
 *     <none>
 * Callees:
 *     ?GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ @ 0x1C000E4E8 (-GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ.c)
 *     xxxApplyOrientationPreference @ 0x1C0098AE8 (xxxApplyOrientationPreference.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetDisplayAutoRotationPreferences(int a1)
{
  struct tagPROCESSINFO *ActivePpi; // rax
  struct tagPROCESSINFO *v3; // r8
  int v4; // ebx

  UserSessionSwitchEnterCrit();
  if ( (a1 & 0x3FFFFFF0) != 0 )
  {
    v4 = 0;
    UserSetLastError(87LL);
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 864LL) = a1;
    ActivePpi = GetActivePpi();
    if ( v3 == ActivePpi )
      xxxApplyOrientationPreference();
    v4 = 1;
  }
  LeaveCrit();
  return v4;
}
