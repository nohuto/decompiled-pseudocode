/*
 * XREFs of NtUserGetAutoRotationState @ 0x1402B23D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     QueryAutoRotationState @ 0x1400F9850 (QueryAutoRotationState.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserGetAutoRotationState(_DWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rcx
  int AutoRotationState; // ebx
  unsigned int ULongFromUser; // eax

  UserSessionSwitchEnterCrit();
  v3 = 0;
  if ( a1 )
  {
    AutoRotationState = QueryAutoRotationState(v2, v1);
    ULongFromUser = RtlReadULongFromUser(a1);
    RtlWriteULongToUser(a1, ULongFromUser);
    *a1 = AutoRotationState;
    v3 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  LeaveCrit(v4);
  return v3;
}
