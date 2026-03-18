/*
 * XREFs of _UnlockWindowStation @ 0x1402304F4
 * Callers:
 *     NtUserUnlockWindowStation @ 0x140230470 (NtUserUnlockWindowStation.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall UnlockWindowStation(__int64 a1, __int64 a2)
{
  HANDLE v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  int v7; // edx

  v3 = *(HANDLE *)(W32GetUserSessionState(a1, a2) + 63536);
  if ( PsGetCurrentProcessId() == v3 )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    v7 = *(_DWORD *)(UserSessionState + 63488);
    if ( (*(_DWORD *)(a1 + 32) & 8) != 0 )
    {
      *(_DWORD *)(UserSessionState + 63488) = v7 & 0xFFFFFFFE;
      *(_DWORD *)(a1 + 32) &= ~1u;
    }
    else
    {
      *(_DWORD *)(UserSessionState + 63488) = v7 & 0xFFFFFFFC;
      *(_DWORD *)(a1 + 32) &= 0xFFFFFFFC;
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
