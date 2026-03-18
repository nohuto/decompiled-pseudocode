/*
 * XREFs of NtUserTrackPopupMenuEx @ 0x1C013B4F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserTrackPopupMenuEx(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int128 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v21[3]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v22[3]; // [rsp+68h] [rbp-70h] BYREF
  __int128 v23; // [rsp+80h] [rbp-58h] BYREF
  int v24; // [rsp+90h] [rbp-48h]

  v10 = (__int128 *)a6;
  EnterCrit(0LL, 1LL);
  if ( (a2 & 0xFFFE0200) != 0 )
  {
    UserSetLastError(1004LL);
    v14 = 0;
  }
  else
  {
    v13 = ValidateHmenu(a1);
    v14 = 0;
    if ( v13 )
    {
      v15 = ValidateHwnd(a5);
      v11 = v15;
      if ( v15 )
      {
        v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v21;
        v21[1] = v15;
        ++*(_DWORD *)(v15 + 8);
        v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v22;
        v22[1] = v13;
        ++*(_DWORD *)(v13 + 8);
        if ( a6 )
        {
          if ( a6 >= W32UserProbeAddress )
            v10 = (__int128 *)W32UserProbeAddress;
          v23 = *v10;
          v24 = *((_DWORD *)v10 + 4);
          v10 = &v23;
        }
        v14 = xxxTrackPopupMenuEx(v13, a2, a3, a4, v15, v10);
        ThreadUnlock1(v17, v16);
        ThreadUnlock1(v19, v18);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return v14;
}
