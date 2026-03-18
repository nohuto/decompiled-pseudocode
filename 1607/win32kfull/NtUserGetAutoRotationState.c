/*
 * XREFs of NtUserGetAutoRotationState @ 0x1C000E420
 * Callers:
 *     <none>
 * Callees:
 *     QueryAutoRotationState @ 0x1C0098B04 (QueryAutoRotationState.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetAutoRotationState(_DWORD *a1)
{
  int v2; // ebx
  int AutoRotationState; // r8d
  _DWORD *v4; // rcx

  UserSessionSwitchEnterCrit();
  v2 = 0;
  if ( a1 )
  {
    AutoRotationState = QueryAutoRotationState();
    v4 = a1;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      v4 = (_DWORD *)W32UserProbeAddress;
    *v4 = *v4;
    *a1 = AutoRotationState;
    v2 = 1;
  }
  else
  {
    UserSetLastError(87LL);
  }
  LeaveCrit();
  return v2;
}
