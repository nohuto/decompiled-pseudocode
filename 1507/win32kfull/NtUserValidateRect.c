/*
 * XREFs of NtUserValidateRect @ 0x1C00FAC40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxValidateRect @ 0x1C00FAD30 (xxxValidateRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserValidateRect(__int64 a1, __int128 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v12; // [rsp+58h] [rbp-20h] BYREF

  EnterCrit(1LL);
  v4 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (__int128 *)W32UserProbeAddress;
    v12 = *a2;
    a2 = &v12;
  }
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
      goto LABEL_7;
  }
  else
  {
    v7 = 0LL;
  }
  v11[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v11;
  v11[1] = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v4 = xxxValidateRect(v7, a2);
  ThreadUnlock1(v9, v8);
LABEL_7:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
