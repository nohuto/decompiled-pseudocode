/*
 * XREFs of NtUserSetInternalWindowPos @ 0x1C021FEF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     xxxSetInternalWindowPos @ 0x1C02045CC (xxxSetInternalWindowPos.c)
 */

__int64 __fastcall NtUserSetInternalWindowPos(__int64 a1, int a2, __int128 *a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v17; // [rsp+48h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v11 = 0;
  if ( v8 )
  {
    v10 = (*(_WORD *)(v8 + 66) & 0x3FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v16;
      v16[1] = v8;
      ++*(_DWORD *)(v8 + 8);
      if ( (a2 & 0xFFFFFFF0) != 0 )
      {
        UserSetLastError(1004);
      }
      else
      {
        if ( (unsigned __int64)a3 >= W32UserProbeAddress )
          a3 = (__int128 *)W32UserProbeAddress;
        v17 = *a3;
        if ( (unsigned __int64)a4 >= W32UserProbeAddress )
          a4 = (__int64 *)W32UserProbeAddress;
        v15 = *a4;
        v11 = xxxSetInternalWindowPos((struct tagWND *)v8, a2, (int *)&v17, &v15);
      }
      ThreadUnlock1(v13, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v11;
}
