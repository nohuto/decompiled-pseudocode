/*
 * XREFs of NtUserBeginPaint @ 0x1C0067B20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxBeginPaint @ 0x1C0067C4C (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C00C81F8 (xxxEndPaint.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall NtUserBeginPaint(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdx
  _OWORD v10[7]; // [rsp+40h] [rbp-88h] BYREF

  memset(&v10[2], 0, 0x48uLL);
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v7 = 0LL;
  if ( v6 )
  {
    *(_QWORD *)&v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v10;
    *((_QWORD *)&v10[0] + 1) = v6;
    ++*(_DWORD *)(v6 + 8);
    v7 = xxxBeginPaint((struct tagWND *)v6);
    DWORD1(v10[6]) = 0;
    if ( a2 >= W32UserProbeAddress )
      a2 = W32UserProbeAddress;
    *(_OWORD *)a2 = v10[2];
    *(_OWORD *)(a2 + 16) = v10[3];
    *(_OWORD *)(a2 + 32) = v10[4];
    *(_OWORD *)(a2 + 48) = v10[5];
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v10[6];
    ThreadUnlock1(W32UserProbeAddress, v8);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v7;
}
