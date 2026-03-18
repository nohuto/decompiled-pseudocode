/*
 * XREFs of _RegisterPointerInputTarget @ 0x1402AA61C
 * Callers:
 *     NtUserRegisterPointerInputTarget @ 0x1402BA390 (NtUserRegisterPointerInputTarget.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     UpdatePointerRedirIsAlive @ 0x1401C0D6C (UpdatePointerRedirIsAlive.c)
 */

__int64 __fastcall RegisterPointerInputTarget(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rax
  __int64 v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 UserSessionState; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD v26[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( !v4 || (v8 = *(_QWORD *)(v4 + 8)) == 0 )
  {
    v11 = 87;
    goto LABEL_18;
  }
  UpdatePointerRedirIsAlive(v8);
  v9 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 208LL);
  if ( a3 != 2 )
    v9 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 216LL);
  v10 = *v9;
  if ( !a4 )
  {
    if ( v10 == a1 )
    {
      HMAssignmentUnlock(v9);
      UserSessionState = W32GetUserSessionState(v21, v20);
      if ( a3 == 2 )
      {
        *(_DWORD *)(UserSessionState + 336) = 0;
        *(_DWORD *)(W32GetUserSessionState(v24, v23) + 340) = 0;
      }
      else
      {
        *(_DWORD *)(UserSessionState + 344) = 0;
        *(_DWORD *)(W32GetUserSessionState(v24, v23) + 348) = 0;
      }
    }
    return 1LL;
  }
  if ( !v10 )
  {
    v26[0] = v9;
    v26[1] = a1;
    HMAssignmentLock(v26, 0LL);
    v14 = W32GetUserSessionState(v13, v12);
    if ( a3 == 2 )
    {
      *(_DWORD *)(v14 + 336) = 1;
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL);
      v17 = *(_DWORD *)(v16 + 56);
      *(_DWORD *)(W32GetUserSessionState(v16, v15) + 340) = v17;
    }
    else
    {
      *(_DWORD *)(v14 + 344) = 1;
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL);
      v19 = *(_DWORD *)(v18 + 56);
      *(_DWORD *)(W32GetUserSessionState(v18, v15) + 348) = v19;
    }
    return 1LL;
  }
  if ( v10 == a1 )
    return 1LL;
  v11 = 5;
LABEL_18:
  UserSetLastError(v11);
  return 0LL;
}
