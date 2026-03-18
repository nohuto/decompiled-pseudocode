/*
 * XREFs of ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x14021CBCC
 * Callers:
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140010D00 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     DwmAsyncOwnerChange @ 0x14017A4CC (DwmAsyncOwnerChange.c)
 *     zzzAttachThreadInput @ 0x1401CA1C8 (zzzAttachThreadInput.c)
 */

void __fastcall xxxHandleOwnerSwitch(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v3; // rdi
  __int64 v7; // rsi
  char v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebp
  __int64 v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  void *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx

  v3 = 0LL;
  if ( !a3 || (v16 = *((_QWORD *)a1 + 2), v17 = *((_QWORD *)a3 + 2), v17 == v16) )
  {
LABEL_2:
    if ( !a2 )
      goto LABEL_3;
    goto LABEL_28;
  }
  if ( !a2 || (v18 = *((_QWORD *)a2 + 2), v18 == v16) || v18 != v17 )
  {
    zzzAttachThreadInput(v16, v17, 0);
    goto LABEL_2;
  }
LABEL_28:
  v23 = *((_QWORD *)a1 + 2);
  v24 = *((_QWORD *)a2 + 2);
  if ( v24 != v23 && (!a3 || v24 != *((_QWORD *)a3 + 2)) )
    zzzAttachThreadInput(v23, v24, 1);
LABEL_3:
  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)a1;
  v8 = IsTrayWindow(a1, 1LL);
  if ( !*(_QWORD *)(W32GetUserSessionState(v10, v9) + 18928)
    || (v13 = 1, *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 18928) + 128LL) != a1) )
  {
    v13 = 0;
  }
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_21;
    if ( v8 )
    {
      xxxCallHook(2LL, v7, 0LL, 10);
      PostShellHookMessagesEx((LastWokenThread *)2, v7);
    }
    v14 = v7;
    v15 = v13 != 0 ? 25 : 28;
    goto LABEL_12;
  }
  if ( a2 )
  {
    if ( a3 != a2 )
    {
      v14 = v7;
      if ( v13 )
        v15 = 27;
      else
        v15 = 30;
LABEL_12:
      PostIAMShellHookMessage(v15, v14);
    }
  }
  else
  {
    PostIAMShellHookMessage(v13 != 0 ? 26 : 29, v7);
    if ( v8 )
    {
      xxxCallHook(1LL, v7, 0LL, 10);
      PostShellHookMessagesEx((LastWokenThread *)1, v7);
    }
  }
LABEL_21:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( a2 )
      v3 = *(_QWORD *)a2;
    v21 = *(_QWORD *)a1;
    v22 = (void *)ReferenceDwmApiPort(v20, v19);
    DwmAsyncOwnerChange(v22, v21, v3);
  }
}
