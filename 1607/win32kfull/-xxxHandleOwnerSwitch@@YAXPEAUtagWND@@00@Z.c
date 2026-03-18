/*
 * XREFs of ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00DAF30
 * Callers:
 *     xxxSetWindowData @ 0x1C00A11FC (xxxSetWindowData.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C00541C4 (DwmAsyncOwnerChange.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A4BF0 (PostIAMShellHookMessageEx.c)
 *     zzzAttachThreadInput @ 0x1C00DC6D4 (zzzAttachThreadInput.c)
 */

void __fastcall xxxHandleOwnerSwitch(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  int v13; // r12d
  int v14; // r15d
  unsigned __int16 v15; // r8
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void *v22; // rax
  unsigned int v23; // edx
  __int64 v24; // rax

  v3 = 0LL;
  if ( a3 )
  {
    v7 = *((_QWORD *)a3 + 2);
    v8 = *((_QWORD *)a1 + 2);
    if ( v7 != v8 )
    {
      if ( !a2 || (v24 = *((_QWORD *)a2 + 2), v24 == v8) || v24 != v7 )
        zzzAttachThreadInput(v8, v7, 0LL);
    }
  }
  if ( a2 )
  {
    v9 = *((_QWORD *)a2 + 2);
    v10 = *((_QWORD *)a1 + 2);
    if ( v9 != v10 && (!a3 || v9 != *((_QWORD *)a3 + 2)) )
      zzzAttachThreadInput(v10, v9, 1LL);
  }
  v11 = 0LL;
  if ( a1 )
    v11 = *(_QWORD *)a1;
  v12 = IsTrayWindow((__int64)a1);
  v13 = v12;
  if ( !gpqForeground || (v14 = 1, *(struct tagWND **)(gpqForeground + 88LL) != a1) )
    v14 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      if ( a3 == a2 )
        goto LABEL_16;
      v15 = v11;
      v16 = *(_QWORD *)(gptiCurrent + 408LL);
      if ( v14 )
        v17 = 27;
      else
        v17 = 30;
      goto LABEL_15;
    }
    v23 = 26;
    if ( !v14 )
      v23 = 29;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), v23, v11);
    if ( v13 )
    {
      xxxCallHook(1u, v11, 0LL, 0xAu);
      PostShellHookMessagesEx(1u, v11, 0LL);
    }
  }
  else if ( a2 )
  {
    if ( v12 )
    {
      xxxCallHook(2u, v11, 0LL, 0xAu);
      PostShellHookMessagesEx(2u, v11, 0LL);
    }
    v15 = v11;
    v17 = 25;
    v16 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( !v14 )
      v17 = 28;
LABEL_15:
    PostIAMShellHookMessageEx(v16, v17, v15);
  }
LABEL_16:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( a2 )
      v3 = *(_QWORD *)a2;
    v22 = (void *)ReferenceDwmApiPort(v19, v18, v20, v21);
    DwmAsyncOwnerChange(v22, *(_QWORD *)a1, v3);
  }
}
