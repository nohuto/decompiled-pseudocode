/*
 * XREFs of NtUserValidateTimerCallback @ 0x140156AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserValidateTimerCallback(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  _QWORD **v8; // r8
  _QWORD *i; // rdx
  HANDLE v11; // rbx

  v2 = 1LL;
  EnterSharedCrit(0LL, 1LL);
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v3);
  if ( CurrentThreadWin32Thread )
    v7 = *CurrentThreadWin32Thread;
  else
    v7 = 0LL;
  if ( *(_DWORD *)(v7 + 664) > 0x501u
    || (*(_DWORD *)(v7 + 680) & 0x1000000) == 0
    || (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 520), 0, 0) & 0xC) != 0
    || (v11 = *(HANDLE *)(W32GetUserSessionState(v6, v5) + 63536), PsGetProcessId(**(PEPROCESS **)(v7 + 456)) == v11) )
  {
    v8 = (_QWORD **)(W32GetUserSessionState(v6, v5) + 57536);
    for ( i = *v8; i != v8; i = (_QWORD *)*i )
    {
      v6 = *(i - 6);
      if ( *(_QWORD *)(v6 + 456) == *(_QWORD *)(v7 + 456) && (*(_DWORD *)(i - 3) & 6) == 0 && *(i - 5) == a1 )
        goto LABEL_13;
    }
    v2 = 0LL;
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v6);
  return v2;
}
