/*
 * XREFs of NtUserGetAutoRotationState @ 0x1C000CD90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     QueryAutoRotationState @ 0x1C0096AE4 (QueryAutoRotationState.c)
 */

__int64 __fastcall NtUserGetAutoRotationState(_DWORD *a1)
{
  unsigned int v2; // ebx
  int AutoRotationState; // r8d
  _DWORD *v4; // rdx

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
