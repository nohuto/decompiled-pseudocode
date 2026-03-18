/*
 * XREFs of xxxChangeMonitorFlags @ 0x14008574C
 * Callers:
 *     xxxCsDdeInitialize @ 0x140083F78 (xxxCsDdeInitialize.c)
 *     xxxEventWndProc @ 0x140216850 (xxxEventWndProc.c)
 *     NtUserUpdateInstance @ 0x1402C0A20 (NtUserUpdateInstance.c)
 * Callees:
 *     xxxCsEvent @ 0x1402EF878 (xxxCsEvent.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxChangeMonitorFlags(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD v18[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 40) ^ a2;
  *(_DWORD *)(a1 + 40) = a2;
  v4 = W32GetUserSessionState(a1, a2) + 66684;
  v7 = *(_DWORD *)(W32GetUserSessionState(v6, v5) + 66680);
  v10 = 0LL;
  *(_DWORD *)(W32GetUserSessionState(v9, v8) + 66680) = 0;
  do
  {
    v13 = *(_DWORD *)(v4 + 8 * v10 + 4);
    if ( (v13 & v3) != 0 )
    {
      if ( (v13 & v2) != 0 )
        ++*(_DWORD *)(v4 + 8 * v10);
      else
        --*(_DWORD *)(v4 + 8 * v10);
    }
    if ( *(_DWORD *)(v4 + 8 * v10) )
    {
      UserSessionState = W32GetUserSessionState(v12, v11);
      v12 = *(unsigned int *)(v4 + 8 * v10 + 4);
      *(_DWORD *)(UserSessionState + 66680) |= v12;
    }
    ++v10;
  }
  while ( v10 < 10 );
  result = W32GetUserSessionState(v12, v11);
  if ( v7 != *(_DWORD *)(result + 66680) )
  {
    v18[0] = 0;
    v18[1] = 0x40000;
    v18[2] = *(_DWORD *)(W32GetUserSessionState(v17, v16) + 66680);
    return xxxCsEvent(v18, 4LL);
  }
  return result;
}
