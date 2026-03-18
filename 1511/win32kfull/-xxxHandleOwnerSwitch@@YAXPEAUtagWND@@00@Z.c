/*
 * XREFs of ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0103828
 * Callers:
 *     xxxSetWindowData @ 0x1C0057B34 (xxxSetWindowData.c)
 * Callees:
 *     IsTrayWindow @ 0x1C0058750 (IsTrayWindow.c)
 *     DwmAsyncOwnerChange @ 0x1C0068E08 (DwmAsyncOwnerChange.c)
 *     PostIAMShellHookMessageEx @ 0x1C00783D0 (PostIAMShellHookMessageEx.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     zzzAttachThreadInput @ 0x1C008AE54 (zzzAttachThreadInput.c)
 */

void __fastcall xxxHandleOwnerSwitch(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // eax
  int v14; // r12d
  int v15; // r15d
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rax
  unsigned int v24; // edx

  v3 = 0LL;
  if ( a3 )
  {
    v7 = *((_QWORD *)a3 + 2);
    v8 = *((_QWORD *)a1 + 2);
    if ( v7 != v8 )
    {
      if ( !a2 || (v9 = *((_QWORD *)a2 + 2), v9 == v8) || v9 != v7 )
        zzzAttachThreadInput(v8, v7, 0);
    }
  }
  if ( a2 )
  {
    v10 = *((_QWORD *)a2 + 2);
    v11 = *((_QWORD *)a1 + 2);
    if ( v10 != v11 && (!a3 || v10 != *((_QWORD *)a3 + 2)) )
      zzzAttachThreadInput(v11, v10, 1);
  }
  v12 = 0LL;
  if ( a1 )
    v12 = *(_QWORD *)a1;
  v13 = IsTrayWindow((__int64)a1);
  v14 = v13;
  if ( !gpqForeground || (v15 = 1, *(struct tagWND **)(gpqForeground + 80LL) != a1) )
    v15 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      if ( a3 == a2 )
        goto LABEL_19;
      v16 = v12;
      v17 = *(_QWORD *)(gptiCurrent + 408LL);
      if ( v15 )
        v18 = 27;
      else
        v18 = 30;
      goto LABEL_18;
    }
    v24 = 26;
    if ( !v15 )
      v24 = 29;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), v24, v12);
    if ( v14 )
    {
      xxxCallHook(1u, v12, 0LL, 0xAu);
      PostShellHookMessagesEx(1u, v12, 0LL);
    }
  }
  else if ( a2 )
  {
    if ( v13 )
    {
      xxxCallHook(2u, v12, 0LL, 0xAu);
      PostShellHookMessagesEx(2u, v12, 0LL);
    }
    v16 = v12;
    v18 = 25;
    v17 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( !v15 )
      v18 = 28;
LABEL_18:
    PostIAMShellHookMessageEx(v17, v18, v16);
  }
LABEL_19:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( a2 )
      v3 = *(_QWORD *)a2;
    v23 = (void *)ReferenceDwmApiPort(v20, v19, v21, v22);
    DwmAsyncOwnerChange(v23, *(_QWORD *)a1, v3);
  }
}
