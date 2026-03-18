/*
 * XREFs of NtUserSetScrollInfo @ 0x1C00D54C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxSetScrollBar @ 0x1C00D55C0 (xxxSetScrollBar.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetScrollInfo(__int64 a1, unsigned int a2, __int128 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v14; // [rsp+50h] [rbp-58h]
  __int64 v15; // [rsp+60h] [rbp-48h]
  int v16; // [rsp+68h] [rbp-40h]

  EnterCrit(1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0;
  if ( v6 )
  {
    v8 = (*(_WORD *)(v6 + 66) & 0x3FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      v13[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v13;
      v13[1] = v6;
      ++*(_DWORD *)(v6 + 8);
      if ( a2 > 3 )
      {
        UserSetLastError(87);
      }
      else
      {
        if ( (unsigned __int64)a3 >= W32UserProbeAddress )
          a3 = (__int128 *)W32UserProbeAddress;
        v14 = *a3;
        v15 = *((_QWORD *)a3 + 2);
        v16 = *((_DWORD *)a3 + 6);
        v9 = xxxSetScrollBar((struct tagWND *)v6);
      }
      ThreadUnlock1(v11, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
