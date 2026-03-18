/*
 * XREFs of NtUserGetCaretPos @ 0x1C0110490
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetCaretPos(_DWORD *a1)
{
  _QWORD *v2; // rdx
  __int64 v3; // rdx
  __int64 v5; // [rsp+68h] [rbp+20h]

  EnterSharedCrit(0LL, 1LL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v2 = (_QWORD *)W32UserProbeAddress;
  *v2 = *v2;
  v5 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 384);
  *a1 = *(_DWORD *)(v5 + 264);
  a1[1] = *(_DWORD *)(v5 + 268);
  UserSessionSwitchLeaveCrit(v5, v3);
  return 1LL;
}
