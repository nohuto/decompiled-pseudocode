/*
 * XREFs of NtUserSetAutoRotation @ 0x1C02192B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000C524 (UserSetLastStatus.c)
 *     xxxSetAutoRotationState @ 0x1C01CA438 (xxxSetAutoRotationState.c)
 *     xxxSetSlateAutoRotationState @ 0x1C01CA5F0 (xxxSetSlateAutoRotationState.c)
 */

__int64 __fastcall NtUserSetAutoRotation(int a1)
{
  NTSTATUS v2; // eax
  int v3; // ebx
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
