/*
 * XREFs of NtUserSetAutoRotation @ 0x1C021F660
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0007BB0 (UserSetLastStatus.c)
 *     xxxSetAutoRotationState @ 0x1C01D295C (xxxSetAutoRotationState.c)
 *     xxxSetSlateAutoRotationState @ 0x1C01D2AFC (xxxSetSlateAutoRotationState.c)
 */

__int64 __fastcall NtUserSetAutoRotation(int a1)
{
  NTSTATUS v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx

  EnterCrit(0LL, 1LL);
  v2 = xxxSetAutoRotationState(a1);
  v3 = 0;
  if ( v2 < 0 || (v2 = xxxSetSlateAutoRotationState(a1), v2 < 0) )
    UserSetLastStatus(v2, 1);
  else
    v3 = 1;
  UserSessionSwitchLeaveCrit(v5, v4);
  return v3;
}
