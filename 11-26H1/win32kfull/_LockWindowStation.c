/*
 * XREFs of _LockWindowStation @ 0x140232030
 * Callers:
 *     NtUserLockWindowStation @ 0x140231FB0 (NtUserLockWindowStation.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall LockWindowStation(__int64 a1, __int64 a2)
{
  int v3; // edi
  HANDLE v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 i; // rbx
  int v8; // eax

  v3 = 0;
  v4 = *(HANDLE *)(W32GetUserSessionState(a1, a2) + 63536);
  if ( PsGetCurrentProcessId() == v4 )
  {
    *(_DWORD *)(a1 + 32) |= 1u;
    for ( i = *(_QWORD *)(a1 + 16); i; i = *(_QWORD *)(i + 32) )
    {
      if ( i != *(_QWORD *)(W32GetUserSessionState(v6, v5) + 62968) && *(_QWORD *)(i - 40) )
      {
        v3 = 1;
        break;
      }
    }
    v8 = *(_DWORD *)(a1 + 32);
    if ( (v8 & 8) != 0 )
      *(_DWORD *)(a1 + 32) = v8 | 2;
    return 2 - (unsigned int)(v3 != 0);
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
