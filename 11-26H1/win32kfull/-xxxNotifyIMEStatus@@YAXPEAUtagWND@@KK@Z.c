/*
 * XREFs of ?xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z @ 0x1401F28A0
 * Callers:
 *     NtUserNotifyIMEStatus @ 0x1401F27C0 (NtUserNotifyIMEStatus.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?SetConvMode@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1401F2A6C (-SetConvMode@@YAXPEAUtagTHREADINFO@@K@Z.c)
 */

void __fastcall xxxNotifyIMEStatus(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  int v6; // r15d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 UserSessionState; // rax

  v3 = *((_QWORD *)a1 + 2);
  v4 = 0LL;
  v6 = a2;
  if ( v3 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928) )
    {
      v11 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18928);
      if ( *(struct tagWND **)(v11 + 120) == a1 )
      {
        v13 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 14288);
        if ( v13 != *(_QWORD *)(*((_QWORD *)a1 + 5) + 208LL)
          || *(_DWORD *)(W32GetUserSessionState(v13, v12) + 14276) != v6
          || *(_DWORD *)(W32GetUserSessionState(v13, v12) + 14280) != a3 )
        {
          v14 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 208LL);
          *(_QWORD *)(W32GetUserSessionState(v13, v12) + 14288) = v14;
          if ( *(_QWORD *)(W32GetUserSessionState(v16, v15) + 14288) )
          {
            *(_DWORD *)(W32GetUserSessionState(v18, v17) + 14276) = v6 != 0;
            *(_DWORD *)(W32GetUserSessionState(v20, v19) + 14280) = a3;
            if ( *(_DWORD *)(W32GetUserSessionState(v22, v21) + 14276) )
              v25 = *(_DWORD *)(W32GetUserSessionState(v24, v23) + 14280);
            else
              v25 = 0;
            SetConvMode((struct tagTHREADINFO *)v3, v25);
          }
          v26 = *(_QWORD *)(v3 + 472);
          if ( v26 )
            v4 = *(_QWORD *)(v26 + 40);
          v27 = *(__int64 **)(v3 + 496);
          v28 = *v27;
          v29 = (unsigned int)(*(_DWORD *)(v3 + 712) | *(_DWORD *)(*v27 + 16));
          if ( ((*(_WORD *)(v3 + 712) | *(_WORD *)(*v27 + 16)) & 0x800) != 0 )
            xxxCallHook(8LL, *(_QWORD *)a1, v4, 10);
          v30 = *(_DWORD *)(W32GetUserSessionState(v28, v29) + 14280);
          UserSessionState = W32GetUserSessionState(v32, v31);
          NlsKbdSendIMENotification(*(unsigned int *)(UserSessionState + 14276), v30);
        }
      }
    }
  }
}
