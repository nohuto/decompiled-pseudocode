/*
 * XREFs of NtUserSetAutoRotation @ 0x1C021F840
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0005C30 (UserSetLastStatus.c)
 *     xxxSetAutoRotationState @ 0x1C01D0D30 (xxxSetAutoRotationState.c)
 */

__int64 __fastcall NtUserSetAutoRotation(int a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx

  EnterCrit(1LL);
  v2 = xxxSetAutoRotationState(a1);
  v5 = 0;
  if ( v2 < 0 )
    UserSetLastStatus(v2, 1);
  else
    v5 = 1;
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
