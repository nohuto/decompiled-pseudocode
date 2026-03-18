/*
 * XREFs of NtUserGetModernAppWindow @ 0x1400133A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetModernAppWindow(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 *v9; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwnd(a1);
  v5 = 0LL;
  v6 = v3;
  if ( v3 )
  {
    BugCheckParameter3[0] = *(_QWORD *)(v2 + 448);
    *(_QWORD *)(v2 + 448) = BugCheckParameter3;
    BugCheckParameter3[1] = v3;
    HMLockObject(v3);
    v7 = *(_QWORD *)(v6 + 16);
    if ( v7 && *(_QWORD *)(v7 + 1584) == v6 )
    {
      v9 = *(__int64 **)(v7 + 1592);
      if ( v9 )
        v5 = *v9;
    }
    else
    {
      UserSetLastError(87LL);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
