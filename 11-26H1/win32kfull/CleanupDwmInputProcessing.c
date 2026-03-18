/*
 * XREFs of CleanupDwmInputProcessing @ 0x140257800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void CleanupDwmInputProcessing()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx

  CInputManager::DestroySessionGlobal();
  if ( *(_QWORD *)(W32GetUserSessionState(v1, v0) + 18784) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    ZwClose(*(HANDLE *)(UserSessionState + 18784));
    *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18784) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18744) )
  {
    v9 = W32GetUserSessionState(v8, v7);
    ZwClose(*(HANDLE *)(v9 + 18744));
    *(_QWORD *)(W32GetUserSessionState(v11, v10) + 18744) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19288) )
  {
    v14 = W32GetUserSessionState(v13, v12);
    Win32FreePool(*(void **)(v14 + 19288));
    *(_QWORD *)(v14 + 19288) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v13, v12) + 18848) )
  {
    v17 = W32GetUserSessionState(v16, v15);
    Win32FreePool(*(void **)(v17 + 18848));
    *(_QWORD *)(v17 + 18848) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v16, v15) + 18808) )
  {
    v20 = W32GetUserSessionState(v19, v18);
    Win32FreePool(*(void **)(v20 + 18808));
    *(_QWORD *)(v20 + 18808) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19272) )
  {
    v23 = W32GetUserSessionState(v22, v21);
    Win32FreePool(*(void **)(v23 + 19272));
    *(_QWORD *)(v23 + 19272) = 0LL;
  }
}
