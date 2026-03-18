/*
 * XREFs of NtUserScrollWindowEx @ 0x1C00AD8C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserScrollWindowEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        int a8)
{
  __int128 *v10; // rsi
  _OWORD *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  _QWORD v19[3]; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v20[2]; // [rsp+90h] [rbp-78h] BYREF
  __int128 v21; // [rsp+B0h] [rbp-58h] BYREF

  v10 = (__int128 *)a5;
  v11 = (_OWORD *)a7;
  v20[0] = 0uLL;
  EnterCrit(0LL, 1LL);
  v12 = ValidateHwnd(a1);
  if ( v12 )
  {
    v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v19;
    v19[1] = v12;
    ++*(_DWORD *)(v12 + 8);
    if ( a4 )
    {
      if ( (unsigned __int64)a4 >= W32UserProbeAddress )
        a4 = (_OWORD *)W32UserProbeAddress;
      v20[1] = *a4;
    }
    if ( a5 )
    {
      if ( a5 >= W32UserProbeAddress )
        v10 = (__int128 *)W32UserProbeAddress;
      v21 = *v10;
      v10 = &v21;
    }
    v17 = xxxScrollWindowEx((struct tagWND *)v12, (__int64)v10, a6, (unsigned __int64)v20 & -(__int64)(a7 != 0), a8);
    if ( a7 )
    {
      v16 = W32UserProbeAddress;
      if ( a7 >= W32UserProbeAddress )
        v11 = (_OWORD *)W32UserProbeAddress;
      *v11 = v20[0];
    }
    ThreadUnlock1(v16, v15);
  }
  else
  {
    v17 = 0;
  }
  UserSessionSwitchLeaveCrit(v14, v13);
  return v17;
}
