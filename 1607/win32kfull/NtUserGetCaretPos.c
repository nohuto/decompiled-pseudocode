/*
 * XREFs of NtUserGetCaretPos @ 0x1C01313F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetCaretPos(_DWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rdx
  __int64 v5; // rdx
  __int64 v7; // [rsp+68h] [rbp+20h]

  EnterSharedCrit(0LL, 1LL);
  v4 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v4 = (_QWORD *)W32UserProbeAddress;
  *v4 = *v4;
  v7 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v4, v2, v3) + 384);
  *a1 = *(_DWORD *)(v7 + 272);
  a1[1] = *(_DWORD *)(v7 + 276);
  UserSessionSwitchLeaveCrit(v7, v5);
  return 1LL;
}
