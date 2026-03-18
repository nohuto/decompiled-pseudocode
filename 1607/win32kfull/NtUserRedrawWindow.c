/*
 * XREFs of NtUserRedrawWindow @ 0x1C0059BF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRedrawWindow(__int64 a1, __int128 *a2, __int64 a3, int a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[3]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v15; // [rsp+58h] [rbp-40h]

  EnterCrit(0LL, 1LL);
  v7 = 0;
  if ( a1 )
  {
    v10 = ValidateHwnd(a1);
    if ( !v10 )
      goto LABEL_9;
  }
  else
  {
    v10 = 0LL;
  }
  v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v14;
  v14[1] = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (__int128 *)W32UserProbeAddress;
    v15 = *a2;
  }
  if ( (a4 & 0xFFFFF000) != 0 )
    UserSetLastError(1004LL);
  else
    v7 = xxxRedrawWindow((struct tagWND *)v10);
  ThreadUnlock1(v12, v11);
LABEL_9:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v7;
}
